
undefined8 test_http_cb(void)

{
  return 0;
}



undefined8 test_transfer_cb(void)

{
  return 0;
}



undefined8 test_certConf_cb(void)

{
  return 0;
}



undefined8 * set_up(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x10,"test/cmp_ctx_test.c",0x20);
  iVar1 = test_ptr("test/cmp_ctx_test.c",0x20,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  if (iVar1 != 0) {
    uVar2 = OSSL_CMP_CTX_new(0,0);
    ptr[1] = uVar2;
    iVar1 = test_ptr("test/cmp_ctx_test.c",0x22,"fixture->ctx = OSSL_CMP_CTX_new(NULL, NULL)",uVar2)
    ;
    if (iVar1 != 0) {
      *ptr = param_1;
      return ptr;
    }
    OSSL_CMP_CTX_free(ptr[1]);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



undefined8 OSSL_CMP_CTX_get1_secretValue_str(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x310,"OSSL_CMP_CTX_get1_secretValue_str");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    uVar2 = CRYPTO_strndup(*(undefined8 *)(piVar1 + 2),(long)*piVar1,"test/cmp_ctx_test.c",0x310);
    return uVar2;
  }
  return 0;
}



undefined8 OSSL_CMP_CTX_get1_referenceValue_str(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x30d,"OSSL_CMP_CTX_get1_referenceValue_str");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    uVar2 = CRYPTO_strndup(*(undefined8 *)(piVar1 + 2),(long)*piVar1,"test/cmp_ctx_test.c",0x30d);
    return uVar2;
  }
  return 0;
}



undefined8 msg_total_size_log_cb(void)

{
  size_t sVar1;
  char *in_R8;
  
  sVar1 = strlen(in_R8);
  msg_total_size = msg_total_size + (int)sVar1;
  test_note("total=%d len=%zu msg=\'%s\'\n",msg_total_size,sVar1,in_R8);
  return 1;
}



undefined8
test_log_cb(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
           undefined8 param_5)

{
  int iVar1;
  
  iVar1 = test_str_eq("test/cmp_ctx_test.c",0x108,&_LC6,"\"execute_cmp_ctx_log_cb_test\"",param_1,
                      "execute_cmp_ctx_log_cb_test");
  if (((((iVar1 == 0) &&
        (iVar1 = test_str_eq("test/cmp_ctx_test.c",0x109,&_LC6,"\"(unknown function)\"",param_1,
                             "(unknown function)"), iVar1 == 0)) ||
       ((iVar1 = test_str_eq("test/cmp_ctx_test.c",0x10b,&_LC8,"OPENSSL_FILE",param_2,
                             "test/cmp_ctx_test.c"), iVar1 == 0 &&
        (iVar1 = test_str_eq("test/cmp_ctx_test.c",0x10c,&_LC8,"\"(no file)\"",param_2,"(no file)"),
        iVar1 == 0)))) ||
      ((iVar1 = test_int_eq("test/cmp_ctx_test.c",0x10d,&_LC12,"test_log_line",param_3,test_log_line
                           ), iVar1 == 0 &&
       (iVar1 = test_int_eq("test/cmp_ctx_test.c",0x10d,&_LC12,&_LC17,param_3,0), iVar1 == 0)))) ||
     ((iVar1 = test_int_eq("test/cmp_ctx_test.c",0x10e,"level","OSSL_CMP_LOG_INFO",param_4,6),
      iVar1 == 0 &&
      (iVar1 = test_int_eq("test/cmp_ctx_test.c",0x10e,"level",&_LC21,param_4,0xffffffff),
      iVar1 == 0)))) {
    test_log_cb_res = 0;
  }
  else {
    iVar1 = test_str_eq("test/cmp_ctx_test.c",0x10f,&_LC20,&_LC19,param_5,&_LC18);
    test_log_cb_res = (uint)(iVar1 != 0);
  }
  return 1;
}



bool test_CTX_libctx_propq(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar2 = OSSL_LIB_CTX_new();
  uVar3 = OSSL_CMP_CTX_new(uVar2,"?provider=legacy");
  iVar1 = test_ptr("test/cmp_ctx_test.c",0x74,"libctx",uVar2);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/cmp_ctx_test.c",0x75,"cmpctx",uVar3);
    if (iVar1 != 0) {
      uVar4 = OSSL_CMP_CTX_get0_libctx(uVar3);
      iVar1 = test_ptr_eq("test/cmp_ctx_test.c",0x76,"libctx","OSSL_CMP_CTX_get0_libctx(cmpctx)",
                          uVar2,uVar4);
      if (iVar1 != 0) {
        uVar4 = OSSL_CMP_CTX_get0_propq(uVar3);
        iVar1 = test_str_eq("test/cmp_ctx_test.c",0x77,"propq","OSSL_CMP_CTX_get0_propq(cmpctx)",
                            "?provider=legacy",uVar4);
        bVar5 = iVar1 != 0;
        goto LAB_00100451;
      }
    }
  }
  bVar5 = false;
LAB_00100451:
  OSSL_CMP_CTX_free(uVar3);
  OSSL_LIB_CTX_free(uVar2);
  return bVar5;
}



undefined4 test_CTX_set1_get0_transactionID(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  ASN1_OCTET_STRING *a;
  ASN1_OCTET_STRING *a_00;
  ulong uVar6;
  ASN1_OCTET_STRING *pAVar7;
  ASN1_OCTET_STRING *pAVar8;
  uint uVar9;
  
  ptr = (void *)set_up("test_CTX_set1_get0_transactionID");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  a = ASN1_OCTET_STRING_new();
  a_00 = ASN1_OCTET_STRING_new();
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x329,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_transactionID(0,a);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar9 = (uint)(iVar2 != 0);
  }
  else {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x329,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x329,"OSSL_CMP_CTX_get0_transactionID");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x329,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x329,"OSSL_CMP_CTX_get0_transactionID");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_transactionID(0,a);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x329,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x329,"OSSL_CMP_CTX_get0_transactionID");
    ERR_set_error(0x3a,0x67,0);
    if (a == (ASN1_OCTET_STRING *)0x0) goto LAB_00100787;
LAB_0010079d:
    test_error("test/cmp_ctx_test.c",0x329,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_transactionID(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x329,"setting second value failed");
    }
    if (lVar1 != 0) {
LAB_001007c7:
      uVar9 = 0;
      goto LAB_0010063a;
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x329,"OSSL_CMP_CTX_get0_transactionID");
    ERR_set_error(0x3a,0x67,0);
LAB_0010083c:
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x329,"second set reset the value");
    pAVar8 = (ASN1_OCTET_STRING *)0x0;
    if (a_00 == (ASN1_OCTET_STRING *)0x0) {
LAB_00100860:
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x329,"second set did not dup the value");
      pAVar8 = (ASN1_OCTET_STRING *)0x0;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x118) != 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x329,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_transactionID(lVar1,a);
    if (iVar2 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x329,"setting first value failed");
      pAVar8 = *(ASN1_OCTET_STRING **)(lVar1 + 0x118);
    }
    else {
      pAVar8 = *(ASN1_OCTET_STRING **)(lVar1 + 0x118);
    }
    if (a == pAVar8) {
LAB_00100787:
      test_error("test/cmp_ctx_test.c",0x329,"first set did not dup the value");
      goto LAB_0010079d;
    }
    if (pAVar8 == (ASN1_OCTET_STRING *)0x0) goto LAB_0010079d;
    iVar2 = OSSL_CMP_CTX_set1_transactionID(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x329,"setting second value failed");
      goto LAB_001007c7;
    }
LAB_0010063a:
    pAVar8 = *(ASN1_OCTET_STRING **)(lVar1 + 0x118);
    if (pAVar8 == (ASN1_OCTET_STRING *)0x0) goto LAB_0010083c;
    if (a_00 == pAVar8) goto LAB_00100860;
  }
  if (a == a_00) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x329,"second value is same as first value");
  }
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x329,"OSSL_CMP_CTX_get0_transactionID");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    pAVar7 = *(ASN1_OCTET_STRING **)(lVar1 + 0x118);
    if (pAVar7 != (ASN1_OCTET_STRING *)0x0) goto LAB_00100675;
  }
  uVar9 = 0;
  test_error("test/cmp_ctx_test.c",0x329,"third set reset the value");
  pAVar7 = (ASN1_OCTET_STRING *)0x0;
LAB_00100675:
  if (pAVar8 != pAVar7) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x329,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x329,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar9;
  }
  ASN1_OCTET_STRING_free(a);
  ASN1_OCTET_STRING_free(a_00);
  uVar5 = test_true("test/cmp_ctx_test.c",0x329,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set1_get0_senderNonce(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  ASN1_OCTET_STRING *a;
  ASN1_OCTET_STRING *a_00;
  ulong uVar6;
  ASN1_OCTET_STRING *pAVar7;
  ASN1_OCTET_STRING *pAVar8;
  uint uVar9;
  
  ptr = (void *)set_up("test_CTX_set1_get0_senderNonce");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  a = ASN1_OCTET_STRING_new();
  a_00 = ASN1_OCTET_STRING_new();
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x32b,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_senderNonce(0,a);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar9 = (uint)(iVar2 != 0);
  }
  else {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x32b,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x32b,"OSSL_CMP_CTX_get0_senderNonce");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x32b,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x32b,"OSSL_CMP_CTX_get0_senderNonce");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_senderNonce(0,a);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x32b,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x32b,"OSSL_CMP_CTX_get0_senderNonce");
    ERR_set_error(0x3a,0x67,0);
    if (a == (ASN1_OCTET_STRING *)0x0) goto LAB_00100c37;
LAB_00100c4d:
    test_error("test/cmp_ctx_test.c",0x32b,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_senderNonce(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x32b,"setting second value failed");
    }
    if (lVar1 != 0) {
LAB_00100c77:
      uVar9 = 0;
      goto LAB_00100aea;
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x32b,"OSSL_CMP_CTX_get0_senderNonce");
    ERR_set_error(0x3a,0x67,0);
LAB_00100cec:
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x32b,"second set reset the value");
    pAVar8 = (ASN1_OCTET_STRING *)0x0;
    if (a_00 == (ASN1_OCTET_STRING *)0x0) {
LAB_00100d10:
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x32b,"second set did not dup the value");
      pAVar8 = (ASN1_OCTET_STRING *)0x0;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x120) != 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x32b,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_senderNonce(lVar1,a);
    if (iVar2 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x32b,"setting first value failed");
      pAVar8 = *(ASN1_OCTET_STRING **)(lVar1 + 0x120);
    }
    else {
      pAVar8 = *(ASN1_OCTET_STRING **)(lVar1 + 0x120);
    }
    if (a == pAVar8) {
LAB_00100c37:
      test_error("test/cmp_ctx_test.c",0x32b,"first set did not dup the value");
      goto LAB_00100c4d;
    }
    if (pAVar8 == (ASN1_OCTET_STRING *)0x0) goto LAB_00100c4d;
    iVar2 = OSSL_CMP_CTX_set1_senderNonce(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x32b,"setting second value failed");
      goto LAB_00100c77;
    }
LAB_00100aea:
    pAVar8 = *(ASN1_OCTET_STRING **)(lVar1 + 0x120);
    if (pAVar8 == (ASN1_OCTET_STRING *)0x0) goto LAB_00100cec;
    if (a_00 == pAVar8) goto LAB_00100d10;
  }
  if (a == a_00) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x32b,"second value is same as first value");
  }
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x32b,"OSSL_CMP_CTX_get0_senderNonce");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    pAVar7 = *(ASN1_OCTET_STRING **)(lVar1 + 0x120);
    if (pAVar7 != (ASN1_OCTET_STRING *)0x0) goto LAB_00100b25;
  }
  uVar9 = 0;
  test_error("test/cmp_ctx_test.c",0x32b,"third set reset the value");
  pAVar7 = (ASN1_OCTET_STRING *)0x0;
LAB_00100b25:
  if (pAVar8 != pAVar7) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x32b,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x32b,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar9;
  }
  ASN1_OCTET_STRING_free(a);
  ASN1_OCTET_STRING_free(a_00);
  uVar5 = test_true("test/cmp_ctx_test.c",0x32b,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set_get_transfer_cb(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  ulong uVar6;
  code *pcVar7;
  uint uVar8;
  
  ptr = (void *)set_up("test_CTX_set_get_transfer_cb");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2f8,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set_transfer_cb(0,test_transfer_cb);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar8 = (uint)(iVar2 != 0);
  }
  else {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x2f8,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x2f8,"OSSL_CMP_CTX_get_transfer_cb");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x2f8,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f8,"OSSL_CMP_CTX_get_transfer_cb");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set_transfer_cb(0,test_transfer_cb);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f8,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f8,"OSSL_CMP_CTX_get_transfer_cb");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x2f8,"set/get first value did not match");
    iVar2 = OSSL_CMP_CTX_set_transfer_cb(0,test_transfer_cb);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f8,"setting second value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f8,"OSSL_CMP_CTX_get_transfer_cb");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x2f8,"second set reset the value");
    test_error("test/cmp_ctx_test.c",0x2f8,"set/get second value did not match");
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f8,"OSSL_CMP_CTX_get_transfer_cb");
    ERR_set_error(0x3a,0x67,0);
LAB_00100fe8:
    test_error("test/cmp_ctx_test.c",0x2f8,"third set reset the value");
  }
  else {
    if (*(long *)(lVar1 + 0x20) != 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2f8,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set_transfer_cb(lVar1,test_transfer_cb);
    if (iVar2 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2f8,"setting first value failed");
      if (*(code **)(lVar1 + 0x20) == test_transfer_cb) goto LAB_00101028;
LAB_00100f72:
      test_error("test/cmp_ctx_test.c",0x2f8,"set/get first value did not match");
      iVar2 = OSSL_CMP_CTX_set_transfer_cb(lVar1,test_transfer_cb);
      if (iVar2 == 0) goto LAB_00101160;
LAB_00100f9b:
      pcVar7 = *(code **)(lVar1 + 0x20);
      uVar8 = 0;
      if (pcVar7 != (code *)0x0) goto LAB_00101049;
LAB_00100fb0:
      test_error("test/cmp_ctx_test.c",0x2f8,"second set reset the value");
      test_error("test/cmp_ctx_test.c",0x2f8,"set/get second value did not match");
      if (*(long *)(lVar1 + 0x20) == 0) goto LAB_00100fe8;
    }
    else {
      if (*(code **)(lVar1 + 0x20) != test_transfer_cb) goto LAB_00100f72;
LAB_00101028:
      iVar2 = OSSL_CMP_CTX_set_transfer_cb(lVar1,test_transfer_cb);
      if (iVar2 == 0) {
LAB_00101160:
        test_error("test/cmp_ctx_test.c",0x2f8,"setting second value failed");
        goto LAB_00100f9b;
      }
      pcVar7 = *(code **)(lVar1 + 0x20);
      if (pcVar7 == (code *)0x0) goto LAB_00100fb0;
LAB_00101049:
      if (pcVar7 == test_transfer_cb) goto LAB_001010a0;
      test_error("test/cmp_ctx_test.c",0x2f8,"set/get second value did not match");
      if (*(code **)(lVar1 + 0x20) == (code *)0x0) {
        test_error("test/cmp_ctx_test.c",0x2f8,"third set reset the value");
      }
      else if (pcVar7 == *(code **)(lVar1 + 0x20)) goto LAB_00101097;
    }
    test_error("test/cmp_ctx_test.c",0x2f8,"third get gave different value");
  }
LAB_00101097:
  uVar8 = 0;
LAB_001010a0:
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2f8,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar8;
  }
  uVar5 = test_true("test/cmp_ctx_test.c",0x2f8,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set1_get0_no_proxy(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  char *ptr_00;
  char *ptr_01;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  
  ptr = (void *)set_up("test_CTX_set1_get0_no_proxy");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  ptr_00 = CRYPTO_strdup("test","test/cmp_ctx_test.c",0x1ef);
  ptr_01 = CRYPTO_strdup("test","test/cmp_ctx_test.c",0x1ef);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2f3,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_no_proxy(0,ptr_00);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar9 = (uint)(iVar2 != 0);
  }
  else {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f3,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x2f3,"OSSL_CMP_CTX_get0_no_proxy");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f3,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f3,"OSSL_CMP_CTX_get0_no_proxy");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_no_proxy(0,ptr_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f3,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f3,"OSSL_CMP_CTX_get0_no_proxy");
    ERR_set_error(0x3a,0x67,0);
    if (ptr_00 == (char *)0x0) goto LAB_001015d4;
LAB_001015ea:
    test_error("test/cmp_ctx_test.c",0x2f3,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_no_proxy(lVar1,ptr_01);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f3,"setting second value failed");
    }
    if (lVar1 != 0) {
LAB_00101614:
      uVar9 = 0;
      goto LAB_00101461;
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f3,"OSSL_CMP_CTX_get0_no_proxy");
    ERR_set_error(0x3a,0x67,0);
LAB_0010168c:
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f3,"second set reset the value");
    pcVar8 = (char *)0x0;
    if (ptr_01 == (char *)0x0) {
LAB_001016b0:
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2f3,"second set did not dup the value");
      pcVar8 = (char *)0x0;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x58) != 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2f3,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_no_proxy(lVar1,ptr_00);
    if (iVar2 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2f3,"setting first value failed");
      pcVar8 = *(char **)(lVar1 + 0x58);
    }
    else {
      pcVar8 = *(char **)(lVar1 + 0x58);
    }
    if (ptr_00 == pcVar8) {
LAB_001015d4:
      test_error("test/cmp_ctx_test.c",0x2f3,"first set did not dup the value");
      goto LAB_001015ea;
    }
    if (pcVar8 == (char *)0x0) goto LAB_001015ea;
    iVar2 = OSSL_CMP_CTX_set1_no_proxy(lVar1,ptr_01);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f3,"setting second value failed");
      goto LAB_00101614;
    }
LAB_00101461:
    pcVar8 = *(char **)(lVar1 + 0x58);
    if (pcVar8 == (char *)0x0) goto LAB_0010168c;
    if (ptr_01 == pcVar8) goto LAB_001016b0;
  }
  if (ptr_00 == ptr_01) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f3,"second value is same as first value");
  }
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f3,"OSSL_CMP_CTX_get0_no_proxy");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    pcVar7 = *(char **)(lVar1 + 0x58);
    if (pcVar7 != (char *)0x0) goto LAB_001014b5;
  }
  uVar9 = 0;
  test_error("test/cmp_ctx_test.c",0x2f3,"third set reset the value");
  pcVar7 = (char *)0x0;
LAB_001014b5:
  if (pcVar8 != pcVar7) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f3,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2f3,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar9;
  }
  CRYPTO_free(ptr_00);
  CRYPTO_free(ptr_01);
  uVar5 = test_true("test/cmp_ctx_test.c",0x2f3,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set_get_failInfoCode(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  ulong uVar6;
  uint uVar7;
  
  ptr = (void *)set_up("test_CTX_set_get_failInfoCode");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x323,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  ERR_clear_error();
  iVar3 = OSSL_CMP_CTX_get_failInfoCode(0);
  if ((iVar3 == -1) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar7 = (uint)(iVar2 != 0);
  }
  else {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x323,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  iVar2 = OSSL_CMP_CTX_get_failInfoCode(uVar1);
  if (-1 < iVar2) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x323,"did not get default value");
  }
  iVar2 = ossl_cmp_ctx_set_failInfoCode(uVar1,1);
  if (iVar2 == 0) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x323,"setting first value failed");
    iVar2 = OSSL_CMP_CTX_get_failInfoCode(uVar1);
  }
  else {
    iVar2 = OSSL_CMP_CTX_get_failInfoCode(uVar1);
  }
  if (iVar2 != 1) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x323,"set/get first value did not match");
  }
  iVar2 = ossl_cmp_ctx_set_failInfoCode(uVar1,1);
  if (iVar2 == 0) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x323,"setting second value failed");
    iVar2 = OSSL_CMP_CTX_get_failInfoCode(uVar1);
    if (iVar2 < 0) goto LAB_00101a2a;
LAB_001018b5:
    if (iVar2 == 1) {
      iVar3 = OSSL_CMP_CTX_get_failInfoCode(uVar1);
      goto joined_r0x00101a66;
    }
  }
  else {
    iVar2 = OSSL_CMP_CTX_get_failInfoCode(uVar1);
    if (-1 < iVar2) goto LAB_001018b5;
LAB_00101a2a:
    test_error("test/cmp_ctx_test.c",0x323,"second set reset the value");
  }
  uVar7 = 0;
  test_error("test/cmp_ctx_test.c",0x323,"set/get second value did not match");
  iVar3 = OSSL_CMP_CTX_get_failInfoCode(uVar1);
joined_r0x00101a66:
  if (iVar3 < 0) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x323,"third set reset the value");
  }
  if (iVar2 != iVar3) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x323,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x323,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar7;
  }
  uVar5 = test_true("test/cmp_ctx_test.c",0x323,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set0_get0_newCert(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *ptr;
  X509 *pXVar5;
  X509 *pXVar6;
  ulong uVar7;
  long lVar8;
  X509 *pXVar9;
  uint uVar10;
  
  uVar4 = 0;
  ptr = (void *)set_up("test_CTX_set0_get0_newCert");
  if (ptr != (void *)0x0) {
    uVar1 = *(undefined8 *)((long)ptr + 8);
    pXVar5 = X509_new();
    pXVar6 = X509_new();
    uVar7 = ERR_peek_error();
    iVar2 = test_int_eq("test/cmp_ctx_test.c",0x324,"ERR_peek_error()",&_LC17,uVar7 & 0xffffffff,0);
    ERR_clear_error();
    lVar8 = OSSL_CMP_CTX_get0_newCert(0);
    if ((lVar8 == 0) && (uVar7 = ERR_peek_error(), uVar7 != 0)) {
      uVar10 = (uint)(iVar2 != 0);
    }
    else {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x324,"getter did not return error on ctx == NULL");
    }
    ERR_clear_error();
    lVar8 = OSSL_CMP_CTX_get0_newCert(uVar1);
    if (lVar8 != 0) {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x324,"did not get default value");
    }
    iVar2 = ossl_cmp_ctx_set0_newCert(uVar1,pXVar5);
    if (iVar2 == 0) {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x324,"setting first value failed");
      pXVar9 = (X509 *)OSSL_CMP_CTX_get0_newCert(uVar1);
    }
    else {
      pXVar9 = (X509 *)OSSL_CMP_CTX_get0_newCert(uVar1);
    }
    if (pXVar5 != pXVar9) {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x324,"set/get first value did not match");
    }
    iVar2 = ossl_cmp_ctx_set0_newCert(uVar1,pXVar6);
    if (iVar2 == 0) {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x324,"setting second value failed");
      pXVar5 = (X509 *)OSSL_CMP_CTX_get0_newCert(uVar1);
    }
    else {
      pXVar5 = (X509 *)OSSL_CMP_CTX_get0_newCert(uVar1);
    }
    if (pXVar5 == (X509 *)0x0) {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x324,"second set reset the value");
    }
    if (pXVar6 != pXVar5) {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x324,"set/get second value did not match");
    }
    pXVar6 = (X509 *)OSSL_CMP_CTX_get0_newCert(uVar1);
    if (pXVar6 == (X509 *)0x0) {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x324,"third set reset the value");
    }
    if (pXVar5 != pXVar6) {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x324,"third get gave different value");
    }
    uVar7 = ERR_peek_error();
    uVar3 = test_int_eq("test/cmp_ctx_test.c",0x324,"ERR_peek_error()",&_LC17,uVar7 & 0xffffffff,0);
    if (uVar3 != 0) {
      uVar3 = uVar10;
    }
    X509_free((X509 *)0x0);
    X509_free((X509 *)0x0);
    uVar4 = test_true("test/cmp_ctx_test.c",0x324,&_LC40,uVar3);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    CRYPTO_free(ptr);
  }
  return uVar4;
}



undefined4 test_CTX_set1_get1_secretValue_str(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  char *__s;
  char *__s_00;
  ulong uVar6;
  size_t sVar7;
  void *ptr_00;
  char *ptr_01;
  uint uVar8;
  char *local_50;
  char *local_48;
  
  ptr = (void *)set_up("test_CTX_set1_get1_secretValue_str");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  __s = CRYPTO_strdup("test","test/cmp_ctx_test.c",0x1ef);
  __s_00 = CRYPTO_strdup("test","test/cmp_ctx_test.c",0x1ef);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x311,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  sVar7 = strlen(__s);
  iVar3 = OSSL_CMP_CTX_set1_secretValue(0,__s,sVar7 & 0xffffffff);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar8 = (uint)(iVar2 != 0);
  }
  else {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x311,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x310,"OSSL_CMP_CTX_get1_secretValue_str");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x311,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ptr_00 = (void *)OSSL_CMP_CTX_get1_secretValue_str(uVar1);
  if (ptr_00 != (void *)0x0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x311,"did not get default value");
  }
  sVar7 = strlen(__s);
  iVar2 = OSSL_CMP_CTX_set1_secretValue(uVar1,__s,sVar7 & 0xffffffff);
  if (iVar2 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x311,"setting first value failed");
  }
  CRYPTO_free(ptr_00);
  local_48 = (char *)OSSL_CMP_CTX_get1_secretValue_str(uVar1);
  if (__s == local_48) {
    test_error("test/cmp_ctx_test.c",0x311,"first set did not dup the value");
LAB_00101edc:
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x311,"first set had no effect");
    local_48 = (char *)0x0;
  }
  else if (local_48 == (char *)0x0) goto LAB_00101edc;
  sVar7 = strlen(__s_00);
  iVar2 = OSSL_CMP_CTX_set1_secretValue(uVar1,__s_00,sVar7 & 0xffffffff);
  if (iVar2 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x311,"setting second value failed");
  }
  local_50 = (char *)OSSL_CMP_CTX_get1_secretValue_str(uVar1);
  if (local_50 == (char *)0x0) {
    test_error("test/cmp_ctx_test.c",0x311,"second set reset the value");
  }
  else {
    if (__s_00 != local_50) goto LAB_00101f58;
    test_error("test/cmp_ctx_test.c",0x311,"second set did not dup the value");
  }
  local_50 = (char *)0x0;
  uVar8 = 0;
LAB_00101f58:
  if (__s == __s_00) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x311,"second value is same as first value");
  }
  if (local_50 == local_48) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x311,"second get returned same as first get");
  }
  ptr_01 = (char *)OSSL_CMP_CTX_get1_secretValue_str(uVar1);
  if (ptr_01 == (char *)0x0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x311,"third set reset the value");
  }
  if (local_50 == ptr_01) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x311,"third get did not create a new dup");
    ptr_01 = (char *)0x0;
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x311,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar8;
  }
  CRYPTO_free(__s);
  CRYPTO_free(__s_00);
  CRYPTO_free(local_48);
  CRYPTO_free(local_50);
  CRYPTO_free(ptr_01);
  uVar5 = test_true("test/cmp_ctx_test.c",0x311,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set_get_option_35(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  ulong uVar6;
  uint uVar7;
  
  ptr = (void *)set_up("test_CTX_set_get_option_35");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2ea,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set_option(0,0x23,1);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar7 = (uint)(iVar2 != 0);
  }
  else {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x2ea,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  iVar2 = OSSL_CMP_CTX_get_option(0,0x23);
  if ((iVar2 != -1) || (uVar6 = ERR_peek_error(), uVar6 == 0)) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x2ea,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  iVar2 = OSSL_CMP_CTX_get_option(uVar1,0x23);
  if (iVar2 != 0) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x2ea,"did not get default value");
  }
  iVar2 = OSSL_CMP_CTX_set_option(uVar1,0x23,1);
  if (iVar2 == 0) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x2ea,"setting first value failed");
  }
  iVar2 = OSSL_CMP_CTX_get_option(uVar1,0x23);
  if (iVar2 != 1) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x2ea,"set/get first value did not match");
  }
  iVar2 = OSSL_CMP_CTX_set_option(uVar1,0x23,1);
  if (iVar2 == 0) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x2ea,"setting second value failed");
  }
  iVar2 = OSSL_CMP_CTX_get_option(uVar1,0x23);
  if (iVar2 == 0) {
    test_error("test/cmp_ctx_test.c",0x2ea,"second set reset the value");
  }
  else if (iVar2 == 1) goto LAB_001022ee;
  uVar7 = 0;
  test_error("test/cmp_ctx_test.c",0x2ea,"set/get second value did not match");
LAB_001022ee:
  iVar3 = OSSL_CMP_CTX_get_option(uVar1,0x23);
  if (iVar3 == 0) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x2ea,"third set reset the value");
  }
  if (iVar2 != iVar3) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x2ea,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2ea,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar7;
  }
  uVar5 = test_true("test/cmp_ctx_test.c",0x2ea,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set1_get0_pkey(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  EVP_PKEY *pkey;
  EVP_PKEY *pkey_00;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  ptr = (void *)set_up("test_CTX_set1_get0_pkey");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  pkey = EVP_PKEY_new();
  pkey_00 = EVP_PKEY_new();
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x304,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_pkey(0,pkey);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar8 = (uint)(iVar2 != 0);
  }
  else {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x304,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x304,"OSSL_CMP_CTX_get0_pkey");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x304,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x304,"OSSL_CMP_CTX_get0_pkey");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_pkey(0,pkey);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x304,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x304,"OSSL_CMP_CTX_get0_pkey");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x304,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_pkey(0,pkey_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x304,"setting second value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x304,"OSSL_CMP_CTX_get0_pkey");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x304,"second set reset the value");
    if (pkey == pkey_00) {
      test_error("test/cmp_ctx_test.c",0x304,"second value is same as first value");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x304,"OSSL_CMP_CTX_get0_pkey");
    ERR_set_error(0x3a,0x67,0);
LAB_0010275c:
    test_error("test/cmp_ctx_test.c",0x304,"third set reset the value");
  }
  else {
    if (*(long *)(lVar1 + 0xd8) != 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x304,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_pkey(lVar1,pkey);
    if (iVar2 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x304,"setting first value failed");
    }
    if (*(long *)(lVar1 + 0xd8) == 0) {
      test_error("test/cmp_ctx_test.c",0x304,"first set had no effect");
      iVar2 = OSSL_CMP_CTX_set1_pkey(lVar1,pkey_00);
      if (iVar2 == 0) goto LAB_00102708;
LAB_0010271e:
      lVar7 = *(long *)(lVar1 + 0xd8);
      uVar8 = 0;
      if (lVar7 != 0) goto LAB_001025f3;
LAB_00102732:
      test_error("test/cmp_ctx_test.c",0x304,"second set reset the value");
      if (pkey == pkey_00) {
        test_error("test/cmp_ctx_test.c",0x304,"second value is same as first value");
      }
      if (*(long *)(lVar1 + 0xd8) == 0) goto LAB_0010275c;
    }
    else {
      iVar2 = OSSL_CMP_CTX_set1_pkey(lVar1,pkey_00);
      if (iVar2 == 0) {
LAB_00102708:
        test_error("test/cmp_ctx_test.c",0x304,"setting second value failed");
        goto LAB_0010271e;
      }
      lVar7 = *(long *)(lVar1 + 0xd8);
      if (lVar7 == 0) goto LAB_00102732;
LAB_001025f3:
      if (pkey != pkey_00) goto LAB_001025fc;
      test_error("test/cmp_ctx_test.c",0x304,"second value is same as first value");
      if (*(long *)(lVar1 + 0xd8) == 0) {
        test_error("test/cmp_ctx_test.c",0x304,"third set reset the value");
      }
      else if (lVar7 == *(long *)(lVar1 + 0xd8)) goto LAB_001027c0;
    }
    test_error("test/cmp_ctx_test.c",0x304,"third get gave different value");
  }
LAB_001027c0:
  uVar8 = 0;
LAB_001025fc:
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x304,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar8;
  }
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(pkey_00);
  uVar5 = test_true("test/cmp_ctx_test.c",0x304,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set_get_serverPort(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  ulong uVar6;
  uint uVar7;
  
  ptr = (void *)set_up("test_CTX_set_get_serverPort");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2f1,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set_serverPort(0,1);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar7 = (uint)(iVar2 != 0);
  }
  else {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x2f1,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x2f1,"OSSL_CMP_CTX_get_serverPort");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x2f1,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f1,"OSSL_CMP_CTX_get_serverPort");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x2f1,"did not get default value");
    iVar2 = OSSL_CMP_CTX_set_serverPort(0,1);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f1,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f1,"OSSL_CMP_CTX_get_serverPort");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x2f1,"set/get first value did not match");
    iVar2 = OSSL_CMP_CTX_set_serverPort(0,1);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f1,"setting second value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f1,"OSSL_CMP_CTX_get_serverPort");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x2f1,"set/get second value did not match");
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f1,"OSSL_CMP_CTX_get_serverPort");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    if (*(int *)(lVar1 + 0x48) == 0) {
      iVar2 = OSSL_CMP_CTX_set_serverPort(lVar1,1);
      if (iVar2 == 0) {
LAB_00102be7:
        test_error("test/cmp_ctx_test.c",0x2f1,"setting first value failed");
        goto LAB_00102bfd;
      }
      if (*(int *)(lVar1 + 0x48) == 1) goto LAB_00102c0c;
LAB_00102a7f:
      test_error("test/cmp_ctx_test.c",0x2f1,"set/get first value did not match");
      iVar2 = OSSL_CMP_CTX_set_serverPort(lVar1,1);
      if (iVar2 == 0) {
LAB_00102c21:
        test_error("test/cmp_ctx_test.c",0x2f1,"setting second value failed");
      }
      uVar7 = 0;
    }
    else {
      test_error("test/cmp_ctx_test.c",0x2f1,"did not get default value");
      iVar2 = OSSL_CMP_CTX_set_serverPort(lVar1,1);
      if (iVar2 == 0) goto LAB_00102be7;
LAB_00102bfd:
      uVar7 = 0;
      if (*(int *)(lVar1 + 0x48) != 1) goto LAB_00102a7f;
LAB_00102c0c:
      iVar2 = OSSL_CMP_CTX_set_serverPort(lVar1,1);
      if (iVar2 == 0) goto LAB_00102c21;
    }
    iVar2 = *(int *)(lVar1 + 0x48);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f1,"second set reset the value");
      test_error("test/cmp_ctx_test.c",0x2f1,"set/get second value did not match");
      if (*(int *)(lVar1 + 0x48) == 0) {
        test_error("test/cmp_ctx_test.c",0x2f1,"third set reset the value");
        goto LAB_00102b12;
      }
    }
    else {
      if (iVar2 == 1) goto LAB_00102b18;
      test_error("test/cmp_ctx_test.c",0x2f1,"set/get second value did not match");
      if (*(int *)(lVar1 + 0x48) == 0) {
        test_error("test/cmp_ctx_test.c",0x2f1,"third set reset the value");
      }
      else if (iVar2 == *(int *)(lVar1 + 0x48)) goto LAB_00102b12;
    }
    test_error("test/cmp_ctx_test.c",0x2f1,"third get gave different value");
  }
LAB_00102b12:
  uVar7 = 0;
LAB_00102b18:
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2f1,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar7;
  }
  uVar5 = test_true("test/cmp_ctx_test.c",0x2f1,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set_get_transfer_cb_arg(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  ptr = (void *)set_up("test_CTX_set_get_transfer_cb_arg");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2f9,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set_transfer_cb_arg(0,1);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar9 = (uint)(iVar2 != 0);
  }
  else {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f9,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  lVar7 = OSSL_CMP_CTX_get_transfer_cb_arg(0);
  if ((lVar7 != 0) || (uVar6 = ERR_peek_error(), uVar6 == 0)) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f9,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  lVar7 = OSSL_CMP_CTX_get_transfer_cb_arg(uVar1);
  if (lVar7 != 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f9,"did not get default value");
  }
  iVar2 = OSSL_CMP_CTX_set_transfer_cb_arg(uVar1,1);
  if (iVar2 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f9,"setting first value failed");
    lVar7 = OSSL_CMP_CTX_get_transfer_cb_arg(uVar1);
  }
  else {
    lVar7 = OSSL_CMP_CTX_get_transfer_cb_arg(uVar1);
  }
  if (lVar7 != 1) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f9,"set/get first value did not match");
  }
  iVar2 = OSSL_CMP_CTX_set_transfer_cb_arg(uVar1,1);
  if (iVar2 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f9,"setting second value failed");
  }
  lVar7 = OSSL_CMP_CTX_get_transfer_cb_arg(uVar1);
  if (lVar7 == 0) {
    test_error("test/cmp_ctx_test.c",0x2f9,"second set reset the value");
  }
  else if (lVar7 == 1) {
    lVar8 = OSSL_CMP_CTX_get_transfer_cb_arg(uVar1);
    goto joined_r0x0010305d;
  }
  uVar9 = 0;
  test_error("test/cmp_ctx_test.c",0x2f9,"set/get second value did not match");
  lVar8 = OSSL_CMP_CTX_get_transfer_cb_arg(uVar1);
joined_r0x0010305d:
  if (lVar8 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f9,"third set reset the value");
  }
  if (lVar7 != lVar8) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f9,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2f9,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar9;
  }
  uVar5 = test_true("test/cmp_ctx_test.c",0x2f9,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_push0_geninfo_ITAV(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  ptr = (void *)set_up("test_CTX_push0_geninfo_ITAV");
  if (ptr != (void *)0x0) {
    lVar10 = *(long *)((long)ptr + 8);
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar10 + 0x140));
    lVar6 = OSSL_CMP_ITAV_new();
    lVar7 = OSSL_CMP_ITAV_new();
    uVar8 = ERR_peek_error();
    iVar2 = test_int_eq("test/cmp_ctx_test.c",0x307,"ERR_peek_error()",&_LC17,uVar8 & 0xffffffff,0);
    iVar3 = OSSL_CMP_CTX_push0_geninfo_ITAV(0,lVar6);
    if ((iVar3 == 0) && (uVar8 = ERR_peek_error(), uVar8 != 0)) {
      uVar11 = (uint)(iVar2 != 0);
    }
    else {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x307,"pusher did not return error on ctx == NULL");
    }
    ERR_clear_error();
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    if (*(long *)(lVar10 + 0x140) != 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x307,"did not get default value for stack field");
    }
    iVar2 = OSSL_CMP_CTX_push0_geninfo_ITAV(lVar10,lVar6);
    if (iVar2 == 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x307,"pushing first value failed");
    }
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar10 + 0x140));
    if (iVar2 != iVar1 + 1) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x307,"pushing first value did not increment number");
    }
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar10 + 0x140));
    lVar9 = OPENSSL_sk_value(*(undefined8 *)(lVar10 + 0x140),iVar2 + -1);
    if (lVar6 != lVar9) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x307,"push/sk_top first value did not match");
    }
    iVar2 = OSSL_CMP_CTX_push0_geninfo_ITAV(lVar10,lVar7);
    if (iVar2 == 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x307,"pushing second value failed");
    }
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar10 + 0x140));
    if (iVar2 != iVar1 + 2) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x307,"pushing second value did not increment number");
    }
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar10 + 0x140));
    lVar10 = OPENSSL_sk_value(*(undefined8 *)(lVar10 + 0x140),iVar1 + -1);
    if (lVar7 != lVar10) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x307,"push/sk_top second value did not match");
    }
    uVar8 = ERR_peek_error();
    uVar4 = test_int_eq("test/cmp_ctx_test.c",0x307,"ERR_peek_error()",&_LC17,uVar8 & 0xffffffff,0);
    if (uVar4 != 0) {
      uVar4 = uVar11;
    }
    OSSL_CMP_ITAV_free(0);
    OSSL_CMP_ITAV_free(0);
    uVar5 = test_true("test/cmp_ctx_test.c",0x307,&_LC40,uVar4);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    CRYPTO_free(ptr);
    return uVar5;
  }
  return 0;
}



undefined4 test_CTX_set1_get0_proxy(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  char *ptr_00;
  char *ptr_01;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  
  ptr = (void *)set_up("test_CTX_set1_get0_proxy");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  ptr_00 = CRYPTO_strdup("test","test/cmp_ctx_test.c",0x1ef);
  ptr_01 = CRYPTO_strdup("test","test/cmp_ctx_test.c",0x1ef);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2f2,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_proxy(0,ptr_00);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar9 = (uint)(iVar2 != 0);
  }
  else {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f2,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x2f2,"OSSL_CMP_CTX_get0_proxy");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f2,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f2,"OSSL_CMP_CTX_get0_proxy");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_proxy(0,ptr_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f2,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f2,"OSSL_CMP_CTX_get0_proxy");
    ERR_set_error(0x3a,0x67,0);
    if (ptr_00 == (char *)0x0) goto LAB_001036a4;
LAB_001036ba:
    test_error("test/cmp_ctx_test.c",0x2f2,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_proxy(lVar1,ptr_01);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f2,"setting second value failed");
    }
    if (lVar1 != 0) {
LAB_001036e4:
      uVar9 = 0;
      goto LAB_00103531;
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f2,"OSSL_CMP_CTX_get0_proxy");
    ERR_set_error(0x3a,0x67,0);
LAB_0010375c:
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f2,"second set reset the value");
    pcVar8 = (char *)0x0;
    if (ptr_01 == (char *)0x0) {
LAB_00103780:
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2f2,"second set did not dup the value");
      pcVar8 = (char *)0x0;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x50) != 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2f2,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_proxy(lVar1,ptr_00);
    if (iVar2 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2f2,"setting first value failed");
      pcVar8 = *(char **)(lVar1 + 0x50);
    }
    else {
      pcVar8 = *(char **)(lVar1 + 0x50);
    }
    if (ptr_00 == pcVar8) {
LAB_001036a4:
      test_error("test/cmp_ctx_test.c",0x2f2,"first set did not dup the value");
      goto LAB_001036ba;
    }
    if (pcVar8 == (char *)0x0) goto LAB_001036ba;
    iVar2 = OSSL_CMP_CTX_set1_proxy(lVar1,ptr_01);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f2,"setting second value failed");
      goto LAB_001036e4;
    }
LAB_00103531:
    pcVar8 = *(char **)(lVar1 + 0x50);
    if (pcVar8 == (char *)0x0) goto LAB_0010375c;
    if (ptr_01 == pcVar8) goto LAB_00103780;
  }
  if (ptr_00 == ptr_01) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f2,"second value is same as first value");
  }
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f2,"OSSL_CMP_CTX_get0_proxy");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    pcVar7 = *(char **)(lVar1 + 0x50);
    if (pcVar7 != (char *)0x0) goto LAB_00103585;
  }
  uVar9 = 0;
  test_error("test/cmp_ctx_test.c",0x2f2,"third set reset the value");
  pcVar7 = (char *)0x0;
LAB_00103585:
  if (pcVar8 != pcVar7) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f2,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2f2,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar9;
  }
  CRYPTO_free(ptr_00);
  CRYPTO_free(ptr_01);
  uVar5 = test_true("test/cmp_ctx_test.c",0x2f2,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set_get_log_cb(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  ulong uVar6;
  code *pcVar7;
  uint uVar8;
  
  ptr = (void *)set_up("test_CTX_set_get_log_cb");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2ed,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set_log_cb(0,test_log_cb);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar8 = (uint)(iVar2 != 0);
  }
  else {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x2ed,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x2ed,"OSSL_CMP_CTX_get_log_cb");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x2ed,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2ed,"OSSL_CMP_CTX_get_log_cb");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set_log_cb(0,test_log_cb);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2ed,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2ed,"OSSL_CMP_CTX_get_log_cb");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x2ed,"set/get first value did not match");
    iVar2 = OSSL_CMP_CTX_set_log_cb(0,test_log_cb);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2ed,"setting second value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2ed,"OSSL_CMP_CTX_get_log_cb");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x2ed,"second set reset the value");
    test_error("test/cmp_ctx_test.c",0x2ed,"set/get second value did not match");
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2ed,"OSSL_CMP_CTX_get_log_cb");
    ERR_set_error(0x3a,0x67,0);
LAB_00103a28:
    test_error("test/cmp_ctx_test.c",0x2ed,"third set reset the value");
  }
  else {
    if (*(long *)(lVar1 + 0x10) != 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2ed,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set_log_cb(lVar1,test_log_cb);
    if (iVar2 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2ed,"setting first value failed");
      if (*(code **)(lVar1 + 0x10) == test_log_cb) goto LAB_00103a68;
LAB_001039b2:
      test_error("test/cmp_ctx_test.c",0x2ed,"set/get first value did not match");
      iVar2 = OSSL_CMP_CTX_set_log_cb(lVar1,test_log_cb);
      if (iVar2 == 0) goto LAB_00103ba0;
LAB_001039db:
      pcVar7 = *(code **)(lVar1 + 0x10);
      uVar8 = 0;
      if (pcVar7 != (code *)0x0) goto LAB_00103a89;
LAB_001039f0:
      test_error("test/cmp_ctx_test.c",0x2ed,"second set reset the value");
      test_error("test/cmp_ctx_test.c",0x2ed,"set/get second value did not match");
      if (*(long *)(lVar1 + 0x10) == 0) goto LAB_00103a28;
    }
    else {
      if (*(code **)(lVar1 + 0x10) != test_log_cb) goto LAB_001039b2;
LAB_00103a68:
      iVar2 = OSSL_CMP_CTX_set_log_cb(lVar1,test_log_cb);
      if (iVar2 == 0) {
LAB_00103ba0:
        test_error("test/cmp_ctx_test.c",0x2ed,"setting second value failed");
        goto LAB_001039db;
      }
      pcVar7 = *(code **)(lVar1 + 0x10);
      if (pcVar7 == (code *)0x0) goto LAB_001039f0;
LAB_00103a89:
      if (pcVar7 == test_log_cb) goto LAB_00103ae0;
      test_error("test/cmp_ctx_test.c",0x2ed,"set/get second value did not match");
      if (*(code **)(lVar1 + 0x10) == (code *)0x0) {
        test_error("test/cmp_ctx_test.c",0x2ed,"third set reset the value");
      }
      else if (pcVar7 == *(code **)(lVar1 + 0x10)) goto LAB_00103ad7;
    }
    test_error("test/cmp_ctx_test.c",0x2ed,"third get gave different value");
  }
LAB_00103ad7:
  uVar8 = 0;
LAB_00103ae0:
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2ed,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar8;
  }
  uVar5 = test_true("test/cmp_ctx_test.c",0x2ed,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set1_get0_server(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  char *ptr_00;
  char *ptr_01;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  
  ptr = (void *)set_up("test_CTX_set1_get0_server");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  ptr_00 = CRYPTO_strdup("test","test/cmp_ctx_test.c",0x1ef);
  ptr_01 = CRYPTO_strdup("test","test/cmp_ctx_test.c",0x1ef);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2f0,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_server(0,ptr_00);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar9 = (uint)(iVar2 != 0);
  }
  else {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f0,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x2f0,"OSSL_CMP_CTX_get0_server");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f0,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f0,"OSSL_CMP_CTX_get0_server");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_server(0,ptr_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f0,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f0,"OSSL_CMP_CTX_get0_server");
    ERR_set_error(0x3a,0x67,0);
    if (ptr_00 == (char *)0x0) goto LAB_00104014;
LAB_0010402a:
    test_error("test/cmp_ctx_test.c",0x2f0,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_server(lVar1,ptr_01);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f0,"setting second value failed");
    }
    if (lVar1 != 0) {
LAB_00104054:
      uVar9 = 0;
      goto LAB_00103ea1;
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f0,"OSSL_CMP_CTX_get0_server");
    ERR_set_error(0x3a,0x67,0);
LAB_001040cc:
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f0,"second set reset the value");
    pcVar8 = (char *)0x0;
    if (ptr_01 == (char *)0x0) {
LAB_001040f0:
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2f0,"second set did not dup the value");
      pcVar8 = (char *)0x0;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x40) != 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2f0,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_server(lVar1,ptr_00);
    if (iVar2 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2f0,"setting first value failed");
      pcVar8 = *(char **)(lVar1 + 0x40);
    }
    else {
      pcVar8 = *(char **)(lVar1 + 0x40);
    }
    if (ptr_00 == pcVar8) {
LAB_00104014:
      test_error("test/cmp_ctx_test.c",0x2f0,"first set did not dup the value");
      goto LAB_0010402a;
    }
    if (pcVar8 == (char *)0x0) goto LAB_0010402a;
    iVar2 = OSSL_CMP_CTX_set1_server(lVar1,ptr_01);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f0,"setting second value failed");
      goto LAB_00104054;
    }
LAB_00103ea1:
    pcVar8 = *(char **)(lVar1 + 0x40);
    if (pcVar8 == (char *)0x0) goto LAB_001040cc;
    if (ptr_01 == pcVar8) goto LAB_001040f0;
  }
  if (ptr_00 == ptr_01) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f0,"second value is same as first value");
  }
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f0,"OSSL_CMP_CTX_get0_server");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    pcVar7 = *(char **)(lVar1 + 0x40);
    if (pcVar7 != (char *)0x0) goto LAB_00103ef5;
  }
  uVar9 = 0;
  test_error("test/cmp_ctx_test.c",0x2f0,"third set reset the value");
  pcVar7 = (char *)0x0;
LAB_00103ef5:
  if (pcVar8 != pcVar7) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f0,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2f0,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar9;
  }
  CRYPTO_free(ptr_00);
  CRYPTO_free(ptr_01);
  uVar5 = test_true("test/cmp_ctx_test.c",0x2f0,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set_get_certConf_cb(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  ulong uVar6;
  code *pcVar7;
  uint uVar8;
  
  ptr = (void *)set_up("test_CTX_set_get_certConf_cb");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x31e,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set_certConf_cb(0,test_certConf_cb);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar8 = (uint)(iVar2 != 0);
  }
  else {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x31e,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x31e,"OSSL_CMP_CTX_get_certConf_cb");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x31e,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x31e,"OSSL_CMP_CTX_get_certConf_cb");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set_certConf_cb(0,test_certConf_cb);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x31e,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x31e,"OSSL_CMP_CTX_get_certConf_cb");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x31e,"set/get first value did not match");
    iVar2 = OSSL_CMP_CTX_set_certConf_cb(0,test_certConf_cb);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x31e,"setting second value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x31e,"OSSL_CMP_CTX_get_certConf_cb");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x31e,"second set reset the value");
    test_error("test/cmp_ctx_test.c",0x31e,"set/get second value did not match");
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x31e,"OSSL_CMP_CTX_get_certConf_cb");
    ERR_set_error(0x3a,0x67,0);
LAB_001043a3:
    test_error("test/cmp_ctx_test.c",0x31e,"third set reset the value");
  }
  else {
    if (*(long *)(lVar1 + 0x208) != 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x31e,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set_certConf_cb(lVar1,test_certConf_cb);
    if (iVar2 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x31e,"setting first value failed");
      if (*(code **)(lVar1 + 0x208) == test_certConf_cb) goto LAB_001043e0;
LAB_00104328:
      test_error("test/cmp_ctx_test.c",0x31e,"set/get first value did not match");
      iVar2 = OSSL_CMP_CTX_set_certConf_cb(lVar1,test_certConf_cb);
      if (iVar2 == 0) goto LAB_00104520;
LAB_00104351:
      pcVar7 = *(code **)(lVar1 + 0x208);
      uVar8 = 0;
      if (pcVar7 != (code *)0x0) goto LAB_00104404;
LAB_00104368:
      test_error("test/cmp_ctx_test.c",0x31e,"second set reset the value");
      test_error("test/cmp_ctx_test.c",0x31e,"set/get second value did not match");
      if (*(long *)(lVar1 + 0x208) == 0) goto LAB_001043a3;
    }
    else {
      if (*(code **)(lVar1 + 0x208) != test_certConf_cb) goto LAB_00104328;
LAB_001043e0:
      iVar2 = OSSL_CMP_CTX_set_certConf_cb(lVar1,test_certConf_cb);
      if (iVar2 == 0) {
LAB_00104520:
        test_error("test/cmp_ctx_test.c",0x31e,"setting second value failed");
        goto LAB_00104351;
      }
      pcVar7 = *(code **)(lVar1 + 0x208);
      if (pcVar7 == (code *)0x0) goto LAB_00104368;
LAB_00104404:
      if (pcVar7 == test_certConf_cb) goto LAB_00104460;
      test_error("test/cmp_ctx_test.c",0x31e,"set/get second value did not match");
      if (*(code **)(lVar1 + 0x208) == (code *)0x0) {
        test_error("test/cmp_ctx_test.c",0x31e,"third set reset the value");
      }
      else if (pcVar7 == *(code **)(lVar1 + 0x208)) goto LAB_00104455;
    }
    test_error("test/cmp_ctx_test.c",0x31e,"third get gave different value");
  }
LAB_00104455:
  uVar8 = 0;
LAB_00104460:
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x31e,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar8;
  }
  uVar5 = test_true("test/cmp_ctx_test.c",0x31e,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set_get_certConf_cb_arg(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  ptr = (void *)set_up("test_CTX_set_get_certConf_cb_arg");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",799,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set_certConf_cb_arg(0,1);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar9 = (uint)(iVar2 != 0);
  }
  else {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",799,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  lVar7 = OSSL_CMP_CTX_get_certConf_cb_arg(0);
  if ((lVar7 != 0) || (uVar6 = ERR_peek_error(), uVar6 == 0)) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",799,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  lVar7 = OSSL_CMP_CTX_get_certConf_cb_arg(uVar1);
  if (lVar7 != 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",799,"did not get default value");
  }
  iVar2 = OSSL_CMP_CTX_set_certConf_cb_arg(uVar1,1);
  if (iVar2 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",799,"setting first value failed");
    lVar7 = OSSL_CMP_CTX_get_certConf_cb_arg(uVar1);
  }
  else {
    lVar7 = OSSL_CMP_CTX_get_certConf_cb_arg(uVar1);
  }
  if (lVar7 != 1) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",799,"set/get first value did not match");
  }
  iVar2 = OSSL_CMP_CTX_set_certConf_cb_arg(uVar1,1);
  if (iVar2 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",799,"setting second value failed");
  }
  lVar7 = OSSL_CMP_CTX_get_certConf_cb_arg(uVar1);
  if (lVar7 == 0) {
    test_error("test/cmp_ctx_test.c",799,"second set reset the value");
  }
  else if (lVar7 == 1) {
    lVar8 = OSSL_CMP_CTX_get_certConf_cb_arg(uVar1);
    goto joined_r0x0010491d;
  }
  uVar9 = 0;
  test_error("test/cmp_ctx_test.c",799,"set/get second value did not match");
  lVar8 = OSSL_CMP_CTX_get_certConf_cb_arg(uVar1);
joined_r0x0010491d:
  if (lVar8 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",799,"third set reset the value");
  }
  if (lVar7 != lVar8) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",799,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",799,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar9;
  }
  uVar5 = test_true("test/cmp_ctx_test.c",799,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set_get_status(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  ulong uVar6;
  uint uVar7;
  
  ptr = (void *)set_up("test_CTX_set_get_status");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x321,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  ERR_clear_error();
  iVar3 = OSSL_CMP_CTX_get_status(0);
  if ((iVar3 == -1) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar7 = (uint)(iVar2 != 0);
  }
  else {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x321,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  iVar2 = OSSL_CMP_CTX_get_status(uVar1);
  if (-1 < iVar2) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x321,"did not get default value");
  }
  iVar2 = ossl_cmp_ctx_set_status(uVar1,1);
  if (iVar2 == 0) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x321,"setting first value failed");
    iVar2 = OSSL_CMP_CTX_get_status(uVar1);
  }
  else {
    iVar2 = OSSL_CMP_CTX_get_status(uVar1);
  }
  if (iVar2 != 1) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x321,"set/get first value did not match");
  }
  iVar2 = ossl_cmp_ctx_set_status(uVar1,1);
  if (iVar2 == 0) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x321,"setting second value failed");
    iVar2 = OSSL_CMP_CTX_get_status(uVar1);
    if (iVar2 < 0) goto LAB_00104c2a;
LAB_00104ab5:
    if (iVar2 == 1) {
      iVar3 = OSSL_CMP_CTX_get_status(uVar1);
      goto joined_r0x00104c66;
    }
  }
  else {
    iVar2 = OSSL_CMP_CTX_get_status(uVar1);
    if (-1 < iVar2) goto LAB_00104ab5;
LAB_00104c2a:
    test_error("test/cmp_ctx_test.c",0x321,"second set reset the value");
  }
  uVar7 = 0;
  test_error("test/cmp_ctx_test.c",0x321,"set/get second value did not match");
  iVar3 = OSSL_CMP_CTX_get_status(uVar1);
joined_r0x00104c66:
  if (iVar3 < 0) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x321,"third set reset the value");
  }
  if (iVar2 != iVar3) {
    uVar7 = 0;
    test_error("test/cmp_ctx_test.c",0x321,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x321,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar7;
  }
  uVar5 = test_true("test/cmp_ctx_test.c",0x321,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set0_get0_statusString(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *ptr;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  uVar4 = 0;
  ptr = (void *)set_up("test_CTX_set0_get0_statusString");
  if (ptr != (void *)0x0) {
    uVar1 = *(undefined8 *)((long)ptr + 8);
    lVar5 = OPENSSL_sk_new_null();
    lVar6 = OPENSSL_sk_new_null();
    uVar7 = ERR_peek_error();
    iVar2 = test_int_eq("test/cmp_ctx_test.c",0x322,"ERR_peek_error()",&_LC17,uVar7 & 0xffffffff,0);
    ERR_clear_error();
    lVar8 = OSSL_CMP_CTX_get0_statusString(0);
    if ((lVar8 == 0) && (uVar7 = ERR_peek_error(), uVar7 != 0)) {
      uVar9 = (uint)(iVar2 != 0);
    }
    else {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x322,"getter did not return error on ctx == NULL");
    }
    ERR_clear_error();
    lVar8 = OSSL_CMP_CTX_get0_statusString(uVar1);
    if (lVar8 != 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x322,"did not get default value");
    }
    iVar2 = ossl_cmp_ctx_set0_statusString(uVar1,lVar5);
    if (iVar2 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x322,"setting first value failed");
      lVar8 = OSSL_CMP_CTX_get0_statusString(uVar1);
    }
    else {
      lVar8 = OSSL_CMP_CTX_get0_statusString(uVar1);
    }
    if (lVar5 != lVar8) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x322,"set/get first value did not match");
    }
    iVar2 = ossl_cmp_ctx_set0_statusString(uVar1,lVar6);
    if (iVar2 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x322,"setting second value failed");
      lVar5 = OSSL_CMP_CTX_get0_statusString(uVar1);
    }
    else {
      lVar5 = OSSL_CMP_CTX_get0_statusString(uVar1);
    }
    if (lVar5 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x322,"second set reset the value");
    }
    if (lVar6 != lVar5) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x322,"set/get second value did not match");
    }
    lVar6 = OSSL_CMP_CTX_get0_statusString(uVar1);
    if (lVar6 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x322,"third set reset the value");
    }
    if (lVar5 != lVar6) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x322,"third get gave different value");
    }
    uVar7 = ERR_peek_error();
    uVar3 = test_int_eq("test/cmp_ctx_test.c",0x322,"ERR_peek_error()",&_LC17,uVar7 & 0xffffffff,0);
    if (uVar3 != 0) {
      uVar3 = uVar9;
    }
    OPENSSL_sk_free(0);
    OPENSSL_sk_free(0);
    uVar4 = test_true("test/cmp_ctx_test.c",0x322,&_LC40,uVar3);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    CRYPTO_free(ptr);
  }
  return uVar4;
}



undefined4 test_CTX_set1_get0_issuer(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  X509_NAME *a;
  X509_NAME *a_00;
  ulong uVar6;
  X509_NAME *pXVar7;
  X509_NAME *pXVar8;
  uint uVar9;
  
  ptr = (void *)set_up("test_CTX_set1_get0_issuer");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  a = X509_NAME_new();
  a_00 = X509_NAME_new();
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x312,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_issuer(0,a);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar9 = (uint)(iVar2 != 0);
  }
  else {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x312,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x312,"OSSL_CMP_CTX_get0_issuer");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x312,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x312,"OSSL_CMP_CTX_get0_issuer");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_issuer(0,a);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x312,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x312,"OSSL_CMP_CTX_get0_issuer");
    ERR_set_error(0x3a,0x67,0);
    if (a == (X509_NAME *)0x0) goto LAB_001051e7;
LAB_001051fd:
    test_error("test/cmp_ctx_test.c",0x312,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_issuer(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x312,"setting second value failed");
    }
    if (lVar1 != 0) {
LAB_00105227:
      uVar9 = 0;
      goto LAB_0010509a;
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x312,"OSSL_CMP_CTX_get0_issuer");
    ERR_set_error(0x3a,0x67,0);
LAB_0010529c:
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x312,"second set reset the value");
    pXVar8 = (X509_NAME *)0x0;
    if (a_00 == (X509_NAME *)0x0) {
LAB_001052c0:
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x312,"second set did not dup the value");
      pXVar8 = (X509_NAME *)0x0;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x168) != 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x312,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_issuer(lVar1,a);
    if (iVar2 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x312,"setting first value failed");
      pXVar8 = *(X509_NAME **)(lVar1 + 0x168);
    }
    else {
      pXVar8 = *(X509_NAME **)(lVar1 + 0x168);
    }
    if (a == pXVar8) {
LAB_001051e7:
      test_error("test/cmp_ctx_test.c",0x312,"first set did not dup the value");
      goto LAB_001051fd;
    }
    if (pXVar8 == (X509_NAME *)0x0) goto LAB_001051fd;
    iVar2 = OSSL_CMP_CTX_set1_issuer(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x312,"setting second value failed");
      goto LAB_00105227;
    }
LAB_0010509a:
    pXVar8 = *(X509_NAME **)(lVar1 + 0x168);
    if (pXVar8 == (X509_NAME *)0x0) goto LAB_0010529c;
    if (a_00 == pXVar8) goto LAB_001052c0;
  }
  if (a == a_00) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x312,"second value is same as first value");
  }
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x312,"OSSL_CMP_CTX_get0_issuer");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    pXVar7 = *(X509_NAME **)(lVar1 + 0x168);
    if (pXVar7 != (X509_NAME *)0x0) goto LAB_001050d5;
  }
  uVar9 = 0;
  test_error("test/cmp_ctx_test.c",0x312,"third set reset the value");
  pXVar7 = (X509_NAME *)0x0;
LAB_001050d5:
  if (pXVar8 != pXVar7) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x312,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x312,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar9;
  }
  X509_NAME_free(a);
  X509_NAME_free(a_00);
  uVar5 = test_true("test/cmp_ctx_test.c",0x312,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set1_get0_cert(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  X509 *a;
  X509 *a_00;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  ptr = (void *)set_up("test_CTX_set1_get0_cert");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  a = X509_new();
  a_00 = X509_new();
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x303,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_cert(0,a);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar8 = (uint)(iVar2 != 0);
  }
  else {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x303,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x303,"OSSL_CMP_CTX_get0_cert");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x303,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x303,"OSSL_CMP_CTX_get0_cert");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_cert(0,a);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x303,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x303,"OSSL_CMP_CTX_get0_cert");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x303,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_cert(0,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x303,"setting second value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x303,"OSSL_CMP_CTX_get0_cert");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x303,"second set reset the value");
    if (a == a_00) {
      test_error("test/cmp_ctx_test.c",0x303,"second value is same as first value");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x303,"OSSL_CMP_CTX_get0_cert");
    ERR_set_error(0x3a,0x67,0);
LAB_001056bc:
    test_error("test/cmp_ctx_test.c",0x303,"third set reset the value");
  }
  else {
    if (*(long *)(lVar1 + 200) != 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x303,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_cert(lVar1,a);
    if (iVar2 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x303,"setting first value failed");
    }
    if (*(long *)(lVar1 + 200) == 0) {
      test_error("test/cmp_ctx_test.c",0x303,"first set had no effect");
      iVar2 = OSSL_CMP_CTX_set1_cert(lVar1,a_00);
      if (iVar2 == 0) goto LAB_00105668;
LAB_0010567e:
      lVar7 = *(long *)(lVar1 + 200);
      uVar8 = 0;
      if (lVar7 != 0) goto LAB_00105553;
LAB_00105692:
      test_error("test/cmp_ctx_test.c",0x303,"second set reset the value");
      if (a == a_00) {
        test_error("test/cmp_ctx_test.c",0x303,"second value is same as first value");
      }
      if (*(long *)(lVar1 + 200) == 0) goto LAB_001056bc;
    }
    else {
      iVar2 = OSSL_CMP_CTX_set1_cert(lVar1,a_00);
      if (iVar2 == 0) {
LAB_00105668:
        test_error("test/cmp_ctx_test.c",0x303,"setting second value failed");
        goto LAB_0010567e;
      }
      lVar7 = *(long *)(lVar1 + 200);
      if (lVar7 == 0) goto LAB_00105692;
LAB_00105553:
      if (a != a_00) goto LAB_0010555c;
      test_error("test/cmp_ctx_test.c",0x303,"second value is same as first value");
      if (*(long *)(lVar1 + 200) == 0) {
        test_error("test/cmp_ctx_test.c",0x303,"third set reset the value");
      }
      else if (lVar7 == *(long *)(lVar1 + 200)) goto LAB_00105720;
    }
    test_error("test/cmp_ctx_test.c",0x303,"third get gave different value");
  }
LAB_00105720:
  uVar8 = 0;
LAB_0010555c:
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x303,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar8;
  }
  X509_free(a);
  X509_free(a_00);
  uVar5 = test_true("test/cmp_ctx_test.c",0x303,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



int test_CTX_reqExtensions_have_SAN(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  ASN1_OCTET_STRING *str;
  X509_EXTENSION *pXVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  uchar local_58 [24];
  long local_40;
  
  iVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)set_up("test_CTX_reqExtensions_have_SAN");
  if (ptr == (void *)0x0) goto LAB_0010595a;
  uVar1 = *(undefined8 *)((long)ptr + 8);
  iVar2 = OSSL_CMP_CTX_reqExtensions_have_SAN(uVar1);
  iVar2 = test_false("test/cmp_ctx_test.c",0xe0,"OSSL_CMP_CTX_reqExtensions_have_SAN(ctx)",
                     iVar2 != 0);
  if (iVar2 != 0) {
    str = (ASN1_OCTET_STRING *)0x0;
    iVar2 = RAND_bytes(local_58,0x10);
    iVar2 = test_int_eq("test/cmp_ctx_test.c",0xe3,&_LC57,"RAND_bytes(str, len)",1,iVar2);
    if (iVar2 != 0) {
      str = ASN1_OCTET_STRING_new();
      iVar2 = test_ptr("test/cmp_ctx_test.c",0xe4,"data = ASN1_OCTET_STRING_new()",str);
      if (iVar2 != 0) {
        iVar2 = ASN1_OCTET_STRING_set(str,local_58,0x10);
        iVar2 = test_true("test/cmp_ctx_test.c",0xe5,"ASN1_OCTET_STRING_set(data, str, len)",
                          iVar2 != 0);
        if (iVar2 != 0) {
          pXVar4 = X509_EXTENSION_create_by_NID((X509_EXTENSION **)0x0,0x55,0,str);
          iVar2 = test_ptr("test/cmp_ctx_test.c",0xe8,&_LC60,pXVar4);
          if (iVar2 == 0) {
            local_60 = 0;
          }
          else {
            local_60 = OPENSSL_sk_new_null();
            iVar2 = test_ptr("test/cmp_ctx_test.c",0xe9,"exts = sk_X509_EXTENSION_new_null()",
                             local_60);
            if (iVar2 != 0) {
              iVar2 = OPENSSL_sk_push(local_60,pXVar4);
              iVar2 = test_true("test/cmp_ctx_test.c",0xea,"sk_X509_EXTENSION_push(exts, ext)",
                                iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = OSSL_CMP_CTX_set0_reqExtensions(uVar1,local_60);
                iVar2 = test_true("test/cmp_ctx_test.c",0xeb,
                                  "OSSL_CMP_CTX_set0_reqExtensions(ctx, exts)",iVar2 != 0);
                if (iVar2 != 0) {
                  uVar3 = OSSL_CMP_CTX_reqExtensions_have_SAN(uVar1);
                  iVar2 = test_int_eq("test/cmp_ctx_test.c",0xf0,
                                      "OSSL_CMP_CTX_reqExtensions_have_SAN(ctx)",&_LC57,uVar3,1);
                  if (iVar2 != 0) {
                    pXVar4 = (X509_EXTENSION *)OPENSSL_sk_pop(local_60);
                    iVar2 = OSSL_CMP_CTX_reqExtensions_have_SAN(uVar1);
                    iVar2 = test_false("test/cmp_ctx_test.c",0xf2,
                                       "OSSL_CMP_CTX_reqExtensions_have_SAN(ctx)",iVar2 != 0);
                    X509_EXTENSION_free(pXVar4);
                    goto LAB_001059c5;
                  }
                  goto LAB_00105a2c;
                }
              }
            }
          }
          X509_EXTENSION_free(pXVar4);
          OPENSSL_sk_free(local_60);
        }
      }
LAB_00105a2c:
      iVar2 = 0;
    }
LAB_001059c5:
    ASN1_OCTET_STRING_free(str);
  }
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
LAB_0010595a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_cmp_ctx_log_cb(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  void *ptr;
  
  ptr = (void *)set_up("test_cmp_ctx_log_cb");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  OSSL_CMP_log_open();
  OSSL_CMP_log_open();
  iVar2 = OSSL_CMP_CTX_set_log_cb(uVar1,0);
  iVar2 = test_true("test/cmp_ctx_test.c",0x11d,"OSSL_CMP_CTX_set_log_cb(ctx, NULL)",iVar2 != 0);
  if (iVar2 != 0) {
    ossl_cmp_print_log(3,uVar1,"execute_cmp_ctx_log_cb_test","test/cmp_ctx_test.c",0x120,"ERROR",
                       &_LC67,"this should be printed as CMP error message");
    ossl_cmp_print_log(4,uVar1,"execute_cmp_ctx_log_cb_test","test/cmp_ctx_test.c",0x121,&_LC68,
                       &_LC67,"this should be printed as CMP warning message");
    ossl_cmp_print_log(7,uVar1,"execute_cmp_ctx_log_cb_test","test/cmp_ctx_test.c",0x122,"DEBUG",
                       &_LC67,"this should not be printed");
    iVar2 = OSSL_CMP_CTX_set_option(uVar1,0,7);
    test_true("test/cmp_ctx_test.c",0x123,"OSSL_CMP_CTX_set_log_verbosity(ctx, OSSL_CMP_LOG_DEBUG)",
              iVar2 != 0);
    iVar2 = 1;
    ossl_cmp_print_log(7,uVar1,"execute_cmp_ctx_log_cb_test","test/cmp_ctx_test.c",0x124,"DEBUG",
                       &_LC67,"this should be printed as CMP debug message");
    iVar3 = OSSL_CMP_CTX_set_option(uVar1,0,6);
    test_true("test/cmp_ctx_test.c",0x125,"OSSL_CMP_CTX_set_log_verbosity(ctx, OSSL_CMP_LOG_INFO)",
              iVar3 != 0);
  }
  iVar3 = OSSL_CMP_CTX_set_log_cb(uVar1,test_log_cb);
  iVar3 = test_true("test/cmp_ctx_test.c",0x127,"OSSL_CMP_CTX_set_log_cb(ctx, test_log_cb)",
                    iVar3 != 0);
  if (iVar3 != 0) {
    test_log_line = 299;
    ossl_cmp_print_log(6,uVar1,"execute_cmp_ctx_log_cb_test","test/cmp_ctx_test.c",299,&_LC76,&_LC78
                       ,&_LC77,0x6b);
    iVar3 = test_int_eq("test/cmp_ctx_test.c",300,"test_log_cb_res",&_LC57,test_log_cb_res,1);
    if (iVar3 != 0) {
      iVar3 = iVar2;
    }
    OSSL_CMP_CTX_set_option(uVar1,0,3);
    test_log_cb_res = 0xffffffff;
    test_log_line = 0x131;
    ossl_cmp_print_log(6,uVar1,"execute_cmp_ctx_log_cb_test","test/cmp_ctx_test.c",0x131,&_LC76,
                       &_LC78,&_LC77,0x6b);
    iVar2 = test_int_eq("test/cmp_ctx_test.c",0x132,"test_log_cb_res",&_LC21,test_log_cb_res,
                        0xffffffff);
    if (iVar2 != 0) goto LAB_00105c33;
  }
  iVar3 = 0;
LAB_00105c33:
  OSSL_CMP_log_close();
  OSSL_CMP_log_close();
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return iVar3;
}



undefined4 test_CTX_set1_get0_serverPath(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  char *ptr_00;
  char *ptr_01;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  
  ptr = (void *)set_up("test_CTX_set1_get0_serverPath");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  ptr_00 = CRYPTO_strdup("test","test/cmp_ctx_test.c",0x1ef);
  ptr_01 = CRYPTO_strdup("test","test/cmp_ctx_test.c",0x1ef);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2ef,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_serverPath(0,ptr_00);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar9 = (uint)(iVar2 != 0);
  }
  else {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2ef,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x2ef,"OSSL_CMP_CTX_get0_serverPath");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2ef,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2ef,"OSSL_CMP_CTX_get0_serverPath");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_serverPath(0,ptr_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2ef,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2ef,"OSSL_CMP_CTX_get0_serverPath");
    ERR_set_error(0x3a,0x67,0);
    if (ptr_00 == (char *)0x0) goto LAB_00106194;
LAB_001061aa:
    test_error("test/cmp_ctx_test.c",0x2ef,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_serverPath(lVar1,ptr_01);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2ef,"setting second value failed");
    }
    if (lVar1 != 0) {
LAB_001061d4:
      uVar9 = 0;
      goto LAB_00106021;
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2ef,"OSSL_CMP_CTX_get0_serverPath");
    ERR_set_error(0x3a,0x67,0);
LAB_0010624c:
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2ef,"second set reset the value");
    pcVar8 = (char *)0x0;
    if (ptr_01 == (char *)0x0) {
LAB_00106270:
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2ef,"second set did not dup the value");
      pcVar8 = (char *)0x0;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x38) != 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2ef,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_serverPath(lVar1,ptr_00);
    if (iVar2 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2ef,"setting first value failed");
      pcVar8 = *(char **)(lVar1 + 0x38);
    }
    else {
      pcVar8 = *(char **)(lVar1 + 0x38);
    }
    if (ptr_00 == pcVar8) {
LAB_00106194:
      test_error("test/cmp_ctx_test.c",0x2ef,"first set did not dup the value");
      goto LAB_001061aa;
    }
    if (pcVar8 == (char *)0x0) goto LAB_001061aa;
    iVar2 = OSSL_CMP_CTX_set1_serverPath(lVar1,ptr_01);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2ef,"setting second value failed");
      goto LAB_001061d4;
    }
LAB_00106021:
    pcVar8 = *(char **)(lVar1 + 0x38);
    if (pcVar8 == (char *)0x0) goto LAB_0010624c;
    if (ptr_01 == pcVar8) goto LAB_00106270;
  }
  if (ptr_00 == ptr_01) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2ef,"second value is same as first value");
  }
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2ef,"OSSL_CMP_CTX_get0_serverPath");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    pcVar7 = *(char **)(lVar1 + 0x38);
    if (pcVar7 != (char *)0x0) goto LAB_00106075;
  }
  uVar9 = 0;
  test_error("test/cmp_ctx_test.c",0x2ef,"third set reset the value");
  pcVar7 = (char *)0x0;
LAB_00106075:
  if (pcVar8 != pcVar7) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2ef,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2ef,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar9;
  }
  CRYPTO_free(ptr_00);
  CRYPTO_free(ptr_01);
  uVar5 = test_true("test/cmp_ctx_test.c",0x2ef,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set_get_http_cb(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  ptr = (void *)set_up("test_CTX_set_get_http_cb");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2f5,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set_http_cb(0,0x100000);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar8 = (uint)(iVar2 != 0);
  }
  else {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x2f5,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x2f5,"OSSL_CMP_CTX_get_http_cb");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x2f5,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f5,"OSSL_CMP_CTX_get_http_cb");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set_http_cb(0,0x100000);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f5,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f5,"OSSL_CMP_CTX_get_http_cb");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x2f5,"set/get first value did not match");
    iVar2 = OSSL_CMP_CTX_set_http_cb(0,0x100000);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2f5,"setting second value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f5,"OSSL_CMP_CTX_get_http_cb");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x2f5,"second set reset the value");
    test_error("test/cmp_ctx_test.c",0x2f5,"set/get second value did not match");
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2f5,"OSSL_CMP_CTX_get_http_cb");
    ERR_set_error(0x3a,0x67,0);
LAB_00106518:
    test_error("test/cmp_ctx_test.c",0x2f5,"third set reset the value");
  }
  else {
    if (*(long *)(lVar1 + 0x78) != 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2f5,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set_http_cb(lVar1,0x100000);
    if (iVar2 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2f5,"setting first value failed");
      if (*(long *)(lVar1 + 0x78) == 0x100000) goto LAB_00106558;
LAB_001064a2:
      test_error("test/cmp_ctx_test.c",0x2f5,"set/get first value did not match");
      iVar2 = OSSL_CMP_CTX_set_http_cb(lVar1,0x100000);
      if (iVar2 == 0) goto LAB_00106690;
LAB_001064cb:
      lVar7 = *(long *)(lVar1 + 0x78);
      uVar8 = 0;
      if (lVar7 != 0) goto LAB_00106579;
LAB_001064e0:
      test_error("test/cmp_ctx_test.c",0x2f5,"second set reset the value");
      test_error("test/cmp_ctx_test.c",0x2f5,"set/get second value did not match");
      if (*(long *)(lVar1 + 0x78) == 0) goto LAB_00106518;
    }
    else {
      if (*(long *)(lVar1 + 0x78) != 0x100000) goto LAB_001064a2;
LAB_00106558:
      iVar2 = OSSL_CMP_CTX_set_http_cb(lVar1,0x100000);
      if (iVar2 == 0) {
LAB_00106690:
        test_error("test/cmp_ctx_test.c",0x2f5,"setting second value failed");
        goto LAB_001064cb;
      }
      lVar7 = *(long *)(lVar1 + 0x78);
      if (lVar7 == 0) goto LAB_001064e0;
LAB_00106579:
      if (lVar7 == 0x100000) goto LAB_001065d0;
      test_error("test/cmp_ctx_test.c",0x2f5,"set/get second value did not match");
      if (*(long *)(lVar1 + 0x78) == 0) {
        test_error("test/cmp_ctx_test.c",0x2f5,"third set reset the value");
      }
      else if (lVar7 == *(long *)(lVar1 + 0x78)) goto LAB_001065c7;
    }
    test_error("test/cmp_ctx_test.c",0x2f5,"third get gave different value");
  }
LAB_001065c7:
  uVar8 = 0;
LAB_001065d0:
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2f5,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar8;
  }
  uVar5 = test_true("test/cmp_ctx_test.c",0x2f5,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set_get_http_cb_arg(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  ptr = (void *)set_up("test_CTX_set_get_http_cb_arg");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2f6,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set_http_cb_arg(0,1);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar9 = (uint)(iVar2 != 0);
  }
  else {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f6,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  lVar7 = OSSL_CMP_CTX_get_http_cb_arg(0);
  if ((lVar7 != 0) || (uVar6 = ERR_peek_error(), uVar6 == 0)) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f6,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  lVar7 = OSSL_CMP_CTX_get_http_cb_arg(uVar1);
  if (lVar7 != 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f6,"did not get default value");
  }
  iVar2 = OSSL_CMP_CTX_set_http_cb_arg(uVar1,1);
  if (iVar2 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f6,"setting first value failed");
    lVar7 = OSSL_CMP_CTX_get_http_cb_arg(uVar1);
  }
  else {
    lVar7 = OSSL_CMP_CTX_get_http_cb_arg(uVar1);
  }
  if (lVar7 != 1) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f6,"set/get first value did not match");
  }
  iVar2 = OSSL_CMP_CTX_set_http_cb_arg(uVar1,1);
  if (iVar2 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f6,"setting second value failed");
  }
  lVar7 = OSSL_CMP_CTX_get_http_cb_arg(uVar1);
  if (lVar7 == 0) {
    test_error("test/cmp_ctx_test.c",0x2f6,"second set reset the value");
  }
  else if (lVar7 == 1) {
    lVar8 = OSSL_CMP_CTX_get_http_cb_arg(uVar1);
    goto joined_r0x00106a8d;
  }
  uVar9 = 0;
  test_error("test/cmp_ctx_test.c",0x2f6,"set/get second value did not match");
  lVar8 = OSSL_CMP_CTX_get_http_cb_arg(uVar1);
joined_r0x00106a8d:
  if (lVar8 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f6,"third set reset the value");
  }
  if (lVar7 != lVar8) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2f6,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2f6,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar9;
  }
  uVar5 = test_true("test/cmp_ctx_test.c",0x2f6,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set1_get0_expected_sender(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  X509_NAME *a;
  X509_NAME *a_00;
  ulong uVar6;
  X509_NAME *pXVar7;
  X509_NAME *pXVar8;
  uint uVar9;
  
  ptr = (void *)set_up("test_CTX_set1_get0_expected_sender");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  a = X509_NAME_new();
  a_00 = X509_NAME_new();
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2fd,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_expected_sender(0,a);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar9 = (uint)(iVar2 != 0);
  }
  else {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2fd,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x2fd,"OSSL_CMP_CTX_get0_expected_sender");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2fd,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2fd,"OSSL_CMP_CTX_get0_expected_sender");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_expected_sender(0,a);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2fd,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2fd,"OSSL_CMP_CTX_get0_expected_sender");
    ERR_set_error(0x3a,0x67,0);
    if (a == (X509_NAME *)0x0) goto LAB_00106dc7;
LAB_00106ddd:
    test_error("test/cmp_ctx_test.c",0x2fd,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_expected_sender(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2fd,"setting second value failed");
    }
    if (lVar1 != 0) {
LAB_00106e07:
      uVar9 = 0;
      goto LAB_00106c7a;
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2fd,"OSSL_CMP_CTX_get0_expected_sender");
    ERR_set_error(0x3a,0x67,0);
LAB_00106e7c:
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2fd,"second set reset the value");
    pXVar8 = (X509_NAME *)0x0;
    if (a_00 == (X509_NAME *)0x0) {
LAB_00106ea0:
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2fd,"second set did not dup the value");
      pXVar8 = (X509_NAME *)0x0;
    }
  }
  else {
    if (*(long *)(lVar1 + 0xa0) != 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2fd,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_expected_sender(lVar1,a);
    if (iVar2 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x2fd,"setting first value failed");
      pXVar8 = *(X509_NAME **)(lVar1 + 0xa0);
    }
    else {
      pXVar8 = *(X509_NAME **)(lVar1 + 0xa0);
    }
    if (a == pXVar8) {
LAB_00106dc7:
      test_error("test/cmp_ctx_test.c",0x2fd,"first set did not dup the value");
      goto LAB_00106ddd;
    }
    if (pXVar8 == (X509_NAME *)0x0) goto LAB_00106ddd;
    iVar2 = OSSL_CMP_CTX_set1_expected_sender(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2fd,"setting second value failed");
      goto LAB_00106e07;
    }
LAB_00106c7a:
    pXVar8 = *(X509_NAME **)(lVar1 + 0xa0);
    if (pXVar8 == (X509_NAME *)0x0) goto LAB_00106e7c;
    if (a_00 == pXVar8) goto LAB_00106ea0;
  }
  if (a == a_00) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2fd,"second value is same as first value");
  }
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2fd,"OSSL_CMP_CTX_get0_expected_sender");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    pXVar7 = *(X509_NAME **)(lVar1 + 0xa0);
    if (pXVar7 != (X509_NAME *)0x0) goto LAB_00106cb5;
  }
  uVar9 = 0;
  test_error("test/cmp_ctx_test.c",0x2fd,"third set reset the value");
  pXVar7 = (X509_NAME *)0x0;
LAB_00106cb5:
  if (pXVar8 != pXVar7) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x2fd,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2fd,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar9;
  }
  X509_NAME_free(a);
  X509_NAME_free(a_00);
  uVar5 = test_true("test/cmp_ctx_test.c",0x2fd,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set1_get0_oldCert(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  X509 *a;
  X509 *a_00;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  ptr = (void *)set_up("test_CTX_set1_get0_oldCert");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  a = X509_new();
  a_00 = X509_new();
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x319,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_oldCert(0,a);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar8 = (uint)(iVar2 != 0);
  }
  else {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x319,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x319,"OSSL_CMP_CTX_get0_oldCert");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x319,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x319,"OSSL_CMP_CTX_get0_oldCert");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_oldCert(0,a);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x319,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x319,"OSSL_CMP_CTX_get0_oldCert");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x319,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_oldCert(0,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x319,"setting second value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x319,"OSSL_CMP_CTX_get0_oldCert");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x319,"second set reset the value");
    if (a == a_00) {
      test_error("test/cmp_ctx_test.c",0x319,"second value is same as first value");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x319,"OSSL_CMP_CTX_get0_oldCert");
    ERR_set_error(0x3a,0x67,0);
LAB_0010729c:
    test_error("test/cmp_ctx_test.c",0x319,"third set reset the value");
  }
  else {
    if (*(long *)(lVar1 + 0x1b0) != 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x319,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_oldCert(lVar1,a);
    if (iVar2 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x319,"setting first value failed");
    }
    if (*(long *)(lVar1 + 0x1b0) == 0) {
      test_error("test/cmp_ctx_test.c",0x319,"first set had no effect");
      iVar2 = OSSL_CMP_CTX_set1_oldCert(lVar1,a_00);
      if (iVar2 == 0) goto LAB_00107248;
LAB_0010725e:
      lVar7 = *(long *)(lVar1 + 0x1b0);
      uVar8 = 0;
      if (lVar7 != 0) goto LAB_00107133;
LAB_00107272:
      test_error("test/cmp_ctx_test.c",0x319,"second set reset the value");
      if (a == a_00) {
        test_error("test/cmp_ctx_test.c",0x319,"second value is same as first value");
      }
      if (*(long *)(lVar1 + 0x1b0) == 0) goto LAB_0010729c;
    }
    else {
      iVar2 = OSSL_CMP_CTX_set1_oldCert(lVar1,a_00);
      if (iVar2 == 0) {
LAB_00107248:
        test_error("test/cmp_ctx_test.c",0x319,"setting second value failed");
        goto LAB_0010725e;
      }
      lVar7 = *(long *)(lVar1 + 0x1b0);
      if (lVar7 == 0) goto LAB_00107272;
LAB_00107133:
      if (a != a_00) goto LAB_0010713c;
      test_error("test/cmp_ctx_test.c",0x319,"second value is same as first value");
      if (*(long *)(lVar1 + 0x1b0) == 0) {
        test_error("test/cmp_ctx_test.c",0x319,"third set reset the value");
      }
      else if (lVar7 == *(long *)(lVar1 + 0x1b0)) goto LAB_00107300;
    }
    test_error("test/cmp_ctx_test.c",0x319,"third get gave different value");
  }
LAB_00107300:
  uVar8 = 0;
LAB_0010713c:
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x319,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar8;
  }
  X509_free(a);
  X509_free(a_00);
  uVar5 = test_true("test/cmp_ctx_test.c",0x319,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set1_get0_srvCert(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  X509 *a;
  X509 *a_00;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  ptr = (void *)set_up("test_CTX_set1_get0_srvCert");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  a = X509_new();
  a_00 = X509_new();
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2fb,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_srvCert(0,a);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar8 = (uint)(iVar2 != 0);
  }
  else {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x2fb,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x2fb,"OSSL_CMP_CTX_get0_srvCert");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x2fb,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2fb,"OSSL_CMP_CTX_get0_srvCert");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_srvCert(0,a);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2fb,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2fb,"OSSL_CMP_CTX_get0_srvCert");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x2fb,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_srvCert(0,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x2fb,"setting second value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2fb,"OSSL_CMP_CTX_get0_srvCert");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x2fb,"second set reset the value");
    if (a == a_00) {
      test_error("test/cmp_ctx_test.c",0x2fb,"second value is same as first value");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x2fb,"OSSL_CMP_CTX_get0_srvCert");
    ERR_set_error(0x3a,0x67,0);
LAB_0010776c:
    test_error("test/cmp_ctx_test.c",0x2fb,"third set reset the value");
  }
  else {
    if (*(long *)(lVar1 + 0x90) != 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2fb,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_srvCert(lVar1,a);
    if (iVar2 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2fb,"setting first value failed");
    }
    if (*(long *)(lVar1 + 0x90) == 0) {
      test_error("test/cmp_ctx_test.c",0x2fb,"first set had no effect");
      iVar2 = OSSL_CMP_CTX_set1_srvCert(lVar1,a_00);
      if (iVar2 == 0) goto LAB_00107718;
LAB_0010772e:
      lVar7 = *(long *)(lVar1 + 0x90);
      uVar8 = 0;
      if (lVar7 != 0) goto LAB_00107603;
LAB_00107742:
      test_error("test/cmp_ctx_test.c",0x2fb,"second set reset the value");
      if (a == a_00) {
        test_error("test/cmp_ctx_test.c",0x2fb,"second value is same as first value");
      }
      if (*(long *)(lVar1 + 0x90) == 0) goto LAB_0010776c;
    }
    else {
      iVar2 = OSSL_CMP_CTX_set1_srvCert(lVar1,a_00);
      if (iVar2 == 0) {
LAB_00107718:
        test_error("test/cmp_ctx_test.c",0x2fb,"setting second value failed");
        goto LAB_0010772e;
      }
      lVar7 = *(long *)(lVar1 + 0x90);
      if (lVar7 == 0) goto LAB_00107742;
LAB_00107603:
      if (a != a_00) goto LAB_0010760c;
      test_error("test/cmp_ctx_test.c",0x2fb,"second value is same as first value");
      if (*(long *)(lVar1 + 0x90) == 0) {
        test_error("test/cmp_ctx_test.c",0x2fb,"third set reset the value");
      }
      else if (lVar7 == *(long *)(lVar1 + 0x90)) goto LAB_001077d0;
    }
    test_error("test/cmp_ctx_test.c",0x2fb,"third get gave different value");
  }
LAB_001077d0:
  uVar8 = 0;
LAB_0010760c:
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2fb,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar8;
  }
  X509_free(a);
  X509_free(a_00);
  uVar5 = test_true("test/cmp_ctx_test.c",0x2fb,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set1_get0_validatedSrvCert(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *ptr;
  X509 *a;
  X509 *a_00;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  ptr = (void *)set_up("test_CTX_set1_get0_validatedSrvCert");
  if (ptr != (void *)0x0) {
    uVar1 = *(undefined8 *)((long)ptr + 8);
    a = X509_new();
    a_00 = X509_new();
    uVar5 = ERR_peek_error();
    iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2fc,"ERR_peek_error()",&_LC17,uVar5 & 0xffffffff,0);
    ERR_clear_error();
    lVar6 = OSSL_CMP_CTX_get0_validatedSrvCert(0);
    if ((lVar6 == 0) && (uVar5 = ERR_peek_error(), uVar5 != 0)) {
      uVar8 = (uint)(iVar2 != 0);
    }
    else {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2fc,"getter did not return error on ctx == NULL");
    }
    ERR_clear_error();
    lVar6 = OSSL_CMP_CTX_get0_validatedSrvCert(uVar1);
    if (lVar6 != 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2fc,"did not get default value");
    }
    iVar2 = ossl_cmp_ctx_set1_validatedSrvCert(uVar1,a);
    if (iVar2 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2fc,"setting first value failed");
      lVar6 = OSSL_CMP_CTX_get0_validatedSrvCert(uVar1);
    }
    else {
      lVar6 = OSSL_CMP_CTX_get0_validatedSrvCert(uVar1);
    }
    if (lVar6 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2fc,"first set had no effect");
      iVar2 = ossl_cmp_ctx_set1_validatedSrvCert(uVar1,a_00);
    }
    else {
      iVar2 = ossl_cmp_ctx_set1_validatedSrvCert(uVar1,a_00);
    }
    if (iVar2 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2fc,"setting second value failed");
    }
    lVar6 = OSSL_CMP_CTX_get0_validatedSrvCert(uVar1);
    if (lVar6 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2fc,"second set reset the value");
    }
    if (a == a_00) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2fc,"second value is same as first value");
      lVar7 = OSSL_CMP_CTX_get0_validatedSrvCert(uVar1);
    }
    else {
      lVar7 = OSSL_CMP_CTX_get0_validatedSrvCert(uVar1);
    }
    if (lVar7 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2fc,"third set reset the value");
    }
    if (lVar6 != lVar7) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x2fc,"third get gave different value");
    }
    uVar5 = ERR_peek_error();
    uVar3 = test_int_eq("test/cmp_ctx_test.c",0x2fc,"ERR_peek_error()",&_LC17,uVar5 & 0xffffffff,0);
    if (uVar3 != 0) {
      uVar3 = uVar8;
    }
    X509_free(a);
    X509_free(a_00);
    uVar4 = test_true("test/cmp_ctx_test.c",0x2fc,&_LC40,uVar3);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    CRYPTO_free(ptr);
    return uVar4;
  }
  return 0;
}



uint test_CTX_reinit(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  void *ptr;
  X509 *a;
  undefined8 uVar4;
  X509 *pXVar5;
  ASN1_OCTET_STRING *a_00;
  bool bVar6;
  undefined8 uVar7;
  bool bVar8;
  
  ptr = (void *)set_up("test_CTX_reinit");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  a = X509_new();
  *(undefined4 *)(lVar1 + 0x1d0) = 1;
  *(undefined4 *)(lVar1 + 0x1e0) = 1;
  uVar4 = OPENSSL_sk_new_null();
  iVar2 = ossl_cmp_ctx_set0_statusString(lVar1,uVar4);
  if (iVar2 != 0) {
    pXVar5 = X509_new();
    iVar2 = ossl_cmp_ctx_set0_newCert(lVar1,pXVar5);
    if (iVar2 != 0) {
      uVar4 = OPENSSL_sk_new_null();
      pXVar5 = X509_new();
      if ((pXVar5 == (X509 *)0x0) ||
         (iVar2 = OPENSSL_sk_push(uVar4,pXVar5), uVar7 = uVar4, iVar2 == 0)) {
        uVar7 = 0;
        OPENSSL_sk_free(uVar4);
        X509_free(pXVar5);
      }
      iVar2 = test_ptr("test/cmp_ctx_test.c",0x49,"certs = sk_X509_new_1()",uVar7);
      if (iVar2 != 0) {
        a_00 = (ASN1_OCTET_STRING *)0x0;
        uVar3 = ossl_cmp_ctx_set1_newChain(lVar1,uVar7);
        if (uVar3 == 0) goto LAB_00107cdb;
        iVar2 = ossl_cmp_ctx_set1_caPubs(lVar1,uVar7);
        if (((iVar2 != 0) && (iVar2 = ossl_cmp_ctx_set1_extraCertsIn(lVar1,uVar7), iVar2 != 0)) &&
           (iVar2 = ossl_cmp_ctx_set1_validatedSrvCert(lVar1,a), iVar2 != 0)) {
          a_00 = ASN1_OCTET_STRING_new();
          iVar2 = test_ptr("test/cmp_ctx_test.c",0x4e,"bytes = ASN1_OCTET_STRING_new()",a_00);
          if (((iVar2 != 0) && (iVar2 = OSSL_CMP_CTX_set1_transactionID(lVar1,a_00), iVar2 != 0)) &&
             ((iVar2 = OSSL_CMP_CTX_set1_senderNonce(lVar1,a_00), iVar2 != 0 &&
              (iVar2 = ossl_cmp_ctx_set1_recipNonce(lVar1,a_00), iVar2 != 0)))) {
            iVar2 = OSSL_CMP_CTX_reinit(lVar1);
            iVar2 = test_true("test/cmp_ctx_test.c",0x54,"OSSL_CMP_CTX_reinit(ctx)",iVar2 != 0);
            if (iVar2 != 0) {
              bVar8 = false;
              bVar6 = false;
              if ((((*(int *)(lVar1 + 0x1d0) == -1) && (*(int *)(lVar1 + 0x1e0) == -1)) &&
                  (((*(long *)(lVar1 + 0x1d8) == 0 &&
                    ((((bVar8 = bVar6, *(long *)(lVar1 + 0x1e8) == 0 &&
                       (*(long *)(lVar1 + 0x1f0) == 0)) && (*(long *)(lVar1 + 0x1f8) == 0)) &&
                     ((*(long *)(lVar1 + 0x200) == 0 && (*(long *)(lVar1 + 0x98) == 0)))))) &&
                   (*(long *)(lVar1 + 0x118) == 0)))) && (*(long *)(lVar1 + 0x120) == 0)) {
                bVar8 = *(long *)(lVar1 + 0x128) == 0;
              }
              iVar2 = test_true("test/cmp_ctx_test.c",0x58,
                                "ctx->status == -1 && ctx->failInfoCode == -1 && ctx->statusString == NULL && ctx->newCert == NULL && ctx->newChain == NULL && ctx->caPubs == NULL && ctx->extraCertsIn == NULL && ctx->validatedSrvCert == NULL && ctx->transactionID == NULL && ctx->senderNonce == NULL && ctx->recipNonce == NULL"
                                ,bVar8);
              uVar3 = (uint)(iVar2 != 0);
              goto LAB_00107cdb;
            }
          }
          uVar3 = 0;
          goto LAB_00107cdb;
        }
      }
      uVar3 = 0;
      a_00 = (ASN1_OCTET_STRING *)0x0;
      goto LAB_00107cdb;
    }
  }
  uVar3 = 0;
  uVar7 = 0;
  a_00 = (ASN1_OCTET_STRING *)0x0;
LAB_00107cdb:
  X509_free(a);
  OSSL_STACK_OF_X509_free(uVar7);
  ASN1_OCTET_STRING_free(a_00);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar3;
}



uint test_CTX_print_errors(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *ptr;
  
  ptr = (void *)set_up("test_CTX_print_errors");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  iVar2 = OSSL_CMP_CTX_set_log_cb(lVar1,0);
  iVar2 = test_true("test/cmp_ctx_test.c",0x9d,"OSSL_CMP_CTX_set_log_cb(ctx, NULL)",iVar2 != 0);
  uVar3 = test_true("test/cmp_ctx_test.c",0x9f,"ctx->log_cb == NULL",*(long *)(lVar1 + 0x10) == 0);
  if (uVar3 != 0) {
    uVar3 = (uint)(iVar2 != 0);
  }
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0xa3,"execute_CTX_print_errors_test");
  ERR_set_error(0x3a,0x66,0);
  OSSL_CMP_CTX_print_errors(lVar1);
  iVar2 = OSSL_CMP_CTX_set_log_cb(lVar1,msg_total_size_log_cb);
  uVar4 = test_true("test/cmp_ctx_test.c",0xa8,"OSSL_CMP_CTX_set_log_cb(ctx, msg_total_size_log_cb)"
                    ,iVar2 != 0);
  if (uVar4 != 0) {
    uVar4 = uVar3;
  }
  iVar2 = test_true("test/cmp_ctx_test.c",0xaa,"ctx->log_cb == msg_total_size_log_cb",
                    *(code **)(lVar1 + 0x10) == msg_total_size_log_cb);
  if (iVar2 != 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0xad,"execute_CTX_print_errors_test");
    ERR_set_error(0x3a,100,0);
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0xaf,"execute_CTX_print_errors_test");
    ERR_set_error(0x3a,0x67,0);
    ERR_add_error_txt(&_LC88,"data1");
    ERR_add_error_txt(&_LC88,"data2");
    ERR_add_error_txt(&_LC91,"new line");
    OSSL_CMP_CTX_print_errors(lVar1);
    uVar3 = test_int_eq("test/cmp_ctx_test.c",0xb9,"msg_total_size","expected_size",msg_total_size,
                        0x30);
    if (uVar3 != 0) {
      uVar3 = uVar4;
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0xbc,"execute_CTX_print_errors_test");
    iVar2 = 8;
    ERR_set_error(0x3a,100,0);
    do {
      ERR_add_error_txt("<SEP>",
                        "This is a 64 bytes looooooooooooooooooooooooooooooooong string.\nThis is a 64 bytes looooooooooooooooooooooooooooooooong string.\nThis is a 64 bytes looooooooooooooooooooooooooooooooong string.\nThis is a 64 bytes looooooooooooooooooooooooooooooooong string.\nThis is a 64 bytes looooooooooooooooooooooooooooooooong string.\nThis is a 64 bytes looooooooooooooooooooooooooooooooong string.\nThis is a 64 bytes looooooooooooooooooooooooooooooooong string.\nThis is a 61 bytes loooooooooooooooooooooooooooooong string.\n"
                       );
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    msg_total_size = 0;
    OSSL_CMP_CTX_print_errors(lVar1);
    iVar2 = test_int_eq("test/cmp_ctx_test.c",0xc6,"msg_total_size","expected_size",msg_total_size,
                        0x1020);
    if (iVar2 != 0) goto LAB_00108031;
  }
  uVar3 = 0;
LAB_00108031:
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar3;
}



undefined4 test_CTX_set1_get0_extraCertsOut(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *ptr;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  ptr = (void *)set_up("test_CTX_set1_get0_extraCertsOut");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar8 = *(long *)((long)ptr + 8);
  lVar5 = OPENSSL_sk_new_null();
  lVar6 = OPENSSL_sk_new_null();
  uVar7 = ERR_peek_error();
  iVar1 = test_int_eq("test/cmp_ctx_test.c",0x308,"ERR_peek_error()",&_LC17,uVar7 & 0xffffffff,0);
  iVar2 = OSSL_CMP_CTX_set1_extraCertsOut(0,lVar5);
  if ((iVar2 == 0) && (uVar7 = ERR_peek_error(), uVar7 != 0)) {
    uVar10 = (uint)(iVar1 != 0);
  }
  else {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x308,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x308,"OSSL_CMP_CTX_get0_extraCertsOut");
  ERR_set_error(0x3a,0x67,0);
  uVar7 = ERR_peek_error();
  if (uVar7 == 0) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x308,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar8 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x308,"OSSL_CMP_CTX_get0_extraCertsOut");
    ERR_set_error(0x3a,0x67,0);
    iVar1 = OSSL_CMP_CTX_set1_extraCertsOut(0,lVar5);
    if (iVar1 == 0) {
      test_error("test/cmp_ctx_test.c",0x308,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x308,"OSSL_CMP_CTX_get0_extraCertsOut");
    ERR_set_error(0x3a,0x67,0);
    if (lVar5 == 0) goto LAB_00108467;
LAB_0010847d:
    test_error("test/cmp_ctx_test.c",0x308,"first set had no effect");
    iVar1 = OSSL_CMP_CTX_set1_extraCertsOut(lVar8,lVar6);
    if (iVar1 == 0) {
      test_error("test/cmp_ctx_test.c",0x308,"setting second value failed");
    }
    if (lVar8 != 0) {
LAB_001084a7:
      uVar10 = 0;
      goto LAB_0010831a;
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x308,"OSSL_CMP_CTX_get0_extraCertsOut");
    ERR_set_error(0x3a,0x67,0);
LAB_0010851c:
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x308,"second set reset the value");
    lVar9 = 0;
    if (lVar6 == 0) {
LAB_00108540:
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x308,"second set did not dup the value");
      lVar9 = 0;
    }
  }
  else {
    if (*(long *)(lVar8 + 0x150) != 0) {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x308,"did not get default value");
    }
    iVar1 = OSSL_CMP_CTX_set1_extraCertsOut(lVar8,lVar5);
    if (iVar1 == 0) {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x308,"setting first value failed");
      lVar9 = *(long *)(lVar8 + 0x150);
    }
    else {
      lVar9 = *(long *)(lVar8 + 0x150);
    }
    if (lVar5 == lVar9) {
LAB_00108467:
      test_error("test/cmp_ctx_test.c",0x308,"first set did not dup the value");
      goto LAB_0010847d;
    }
    if (lVar9 == 0) goto LAB_0010847d;
    iVar1 = OSSL_CMP_CTX_set1_extraCertsOut(lVar8,lVar6);
    if (iVar1 == 0) {
      test_error("test/cmp_ctx_test.c",0x308,"setting second value failed");
      goto LAB_001084a7;
    }
LAB_0010831a:
    lVar9 = *(long *)(lVar8 + 0x150);
    if (lVar9 == 0) goto LAB_0010851c;
    if (lVar6 == lVar9) goto LAB_00108540;
  }
  if (lVar5 == lVar6) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x308,"second value is same as first value");
  }
  if (lVar8 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x308,"OSSL_CMP_CTX_get0_extraCertsOut");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x150);
    if (lVar8 != 0) goto LAB_00108355;
  }
  uVar10 = 0;
  test_error("test/cmp_ctx_test.c",0x308,"third set reset the value");
  lVar8 = 0;
LAB_00108355:
  if (lVar9 != lVar8) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x308,"third get gave different value");
  }
  uVar7 = ERR_peek_error();
  uVar3 = test_int_eq("test/cmp_ctx_test.c",0x308,"ERR_peek_error()",&_LC17,uVar7 & 0xffffffff,0);
  if (uVar3 != 0) {
    uVar3 = uVar10;
  }
  OPENSSL_sk_free(lVar5);
  OPENSSL_sk_free(lVar6);
  uVar4 = test_true("test/cmp_ctx_test.c",0x308,&_LC40,uVar3);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar4;
}



undefined4 test_CTX_set0_get0_newPkey_1(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  EVP_PKEY *pEVar6;
  EVP_PKEY *pEVar7;
  ulong uVar8;
  long lVar9;
  EVP_PKEY *pEVar10;
  uint uVar11;
  
  uVar5 = 0;
  ptr = (void *)set_up("test_CTX_set0_get0_newPkey_1");
  if (ptr != (void *)0x0) {
    uVar1 = *(undefined8 *)((long)ptr + 8);
    pEVar6 = EVP_PKEY_new();
    pEVar7 = EVP_PKEY_new();
    uVar8 = ERR_peek_error();
    iVar2 = test_int_eq("test/cmp_ctx_test.c",0x30a,"ERR_peek_error()",&_LC17,uVar8 & 0xffffffff,0);
    iVar3 = OSSL_CMP_CTX_set0_newPkey(0,1,pEVar6);
    if ((iVar3 == 0) && (uVar8 = ERR_peek_error(), uVar8 != 0)) {
      uVar11 = (uint)(iVar2 != 0);
    }
    else {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30a,"setter did not return error on ctx == NULL");
    }
    ERR_clear_error();
    lVar9 = OSSL_CMP_CTX_get0_newPkey(0,1);
    if ((lVar9 != 0) || (uVar8 = ERR_peek_error(), uVar8 == 0)) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30a,"getter did not return error on ctx == NULL");
    }
    ERR_clear_error();
    lVar9 = OSSL_CMP_CTX_get0_newPkey(uVar1,1);
    if (lVar9 != 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30a,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set0_newPkey(uVar1,1,pEVar6);
    if (iVar2 == 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30a,"setting first value failed");
    }
    pEVar10 = (EVP_PKEY *)OSSL_CMP_CTX_get0_newPkey(uVar1,1);
    if (pEVar6 != pEVar10) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30a,"set/get first value did not match");
    }
    iVar2 = OSSL_CMP_CTX_set0_newPkey(uVar1,1,pEVar7);
    if (iVar2 == 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30a,"setting second value failed");
    }
    pEVar6 = (EVP_PKEY *)OSSL_CMP_CTX_get0_newPkey(uVar1,1);
    if (pEVar6 == (EVP_PKEY *)0x0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30a,"second set reset the value");
    }
    if (pEVar7 != pEVar6) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30a,"set/get second value did not match");
    }
    pEVar7 = (EVP_PKEY *)OSSL_CMP_CTX_get0_newPkey(uVar1,1);
    if (pEVar7 == (EVP_PKEY *)0x0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30a,"third set reset the value");
    }
    if (pEVar6 != pEVar7) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30a,"third get gave different value");
    }
    uVar8 = ERR_peek_error();
    uVar4 = test_int_eq("test/cmp_ctx_test.c",0x30a,"ERR_peek_error()",&_LC17,uVar8 & 0xffffffff,0);
    if (uVar4 != 0) {
      uVar4 = uVar11;
    }
    EVP_PKEY_free((EVP_PKEY *)0x0);
    EVP_PKEY_free((EVP_PKEY *)0x0);
    uVar5 = test_true("test/cmp_ctx_test.c",0x30a,&_LC40,uVar4);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    CRYPTO_free(ptr);
  }
  return uVar5;
}



undefined4 test_CTX_set0_get0_newPkey_0(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  EVP_PKEY *pEVar6;
  EVP_PKEY *pEVar7;
  ulong uVar8;
  long lVar9;
  EVP_PKEY *pEVar10;
  uint uVar11;
  
  uVar5 = 0;
  ptr = (void *)set_up("test_CTX_set0_get0_newPkey_0");
  if (ptr != (void *)0x0) {
    uVar1 = *(undefined8 *)((long)ptr + 8);
    pEVar6 = EVP_PKEY_new();
    pEVar7 = EVP_PKEY_new();
    uVar8 = ERR_peek_error();
    iVar2 = test_int_eq("test/cmp_ctx_test.c",0x30c,"ERR_peek_error()",&_LC17,uVar8 & 0xffffffff,0);
    iVar3 = OSSL_CMP_CTX_set0_newPkey(0,0,pEVar6);
    if ((iVar3 == 0) && (uVar8 = ERR_peek_error(), uVar8 != 0)) {
      uVar11 = (uint)(iVar2 != 0);
    }
    else {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30c,"setter did not return error on ctx == NULL");
    }
    ERR_clear_error();
    lVar9 = OSSL_CMP_CTX_get0_newPkey(0,0);
    if ((lVar9 != 0) || (uVar8 = ERR_peek_error(), uVar8 == 0)) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30c,"getter did not return error on ctx == NULL");
    }
    ERR_clear_error();
    lVar9 = OSSL_CMP_CTX_get0_newPkey(uVar1,0);
    if (lVar9 != 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30c,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set0_newPkey(uVar1,0,pEVar6);
    if (iVar2 == 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30c,"setting first value failed");
      pEVar10 = (EVP_PKEY *)OSSL_CMP_CTX_get0_newPkey(uVar1,0);
    }
    else {
      pEVar10 = (EVP_PKEY *)OSSL_CMP_CTX_get0_newPkey(uVar1,0);
    }
    if (pEVar6 != pEVar10) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30c,"set/get first value did not match");
    }
    iVar2 = OSSL_CMP_CTX_set0_newPkey(uVar1,0,pEVar7);
    if (iVar2 == 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30c,"setting second value failed");
    }
    pEVar6 = (EVP_PKEY *)OSSL_CMP_CTX_get0_newPkey(uVar1,0);
    if (pEVar6 == (EVP_PKEY *)0x0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30c,"second set reset the value");
    }
    if (pEVar7 != pEVar6) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30c,"set/get second value did not match");
    }
    pEVar7 = (EVP_PKEY *)OSSL_CMP_CTX_get0_newPkey(uVar1,0);
    if (pEVar7 == (EVP_PKEY *)0x0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30c,"third set reset the value");
    }
    if (pEVar6 != pEVar7) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x30c,"third get gave different value");
    }
    uVar8 = ERR_peek_error();
    uVar4 = test_int_eq("test/cmp_ctx_test.c",0x30c,"ERR_peek_error()",&_LC17,uVar8 & 0xffffffff,0);
    if (uVar4 != 0) {
      uVar4 = uVar11;
    }
    EVP_PKEY_free((EVP_PKEY *)0x0);
    EVP_PKEY_free((EVP_PKEY *)0x0);
    uVar5 = test_true("test/cmp_ctx_test.c",0x30c,&_LC40,uVar4);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    CRYPTO_free(ptr);
  }
  return uVar5;
}



undefined4 test_CTX_set1_get1_referenceValue_str(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  char *__s;
  char *__s_00;
  ulong uVar6;
  size_t sVar7;
  void *ptr_00;
  char *ptr_01;
  uint uVar8;
  char *local_50;
  char *local_48;
  
  ptr = (void *)set_up("test_CTX_set1_get1_referenceValue_str");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  __s = CRYPTO_strdup("test","test/cmp_ctx_test.c",0x1ef);
  __s_00 = CRYPTO_strdup("test","test/cmp_ctx_test.c",0x1ef);
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x30e,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  sVar7 = strlen(__s);
  iVar3 = OSSL_CMP_CTX_set1_referenceValue(0,__s,sVar7 & 0xffffffff);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar8 = (uint)(iVar2 != 0);
  }
  else {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x30e,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x30d,"OSSL_CMP_CTX_get1_referenceValue_str");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x30e,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ptr_00 = (void *)OSSL_CMP_CTX_get1_referenceValue_str(uVar1);
  if (ptr_00 != (void *)0x0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x30e,"did not get default value");
  }
  sVar7 = strlen(__s);
  iVar2 = OSSL_CMP_CTX_set1_referenceValue(uVar1,__s,sVar7 & 0xffffffff);
  if (iVar2 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x30e,"setting first value failed");
  }
  CRYPTO_free(ptr_00);
  local_48 = (char *)OSSL_CMP_CTX_get1_referenceValue_str(uVar1);
  if (__s == local_48) {
    test_error("test/cmp_ctx_test.c",0x30e,"first set did not dup the value");
LAB_00108e2c:
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x30e,"first set had no effect");
    local_48 = (char *)0x0;
  }
  else if (local_48 == (char *)0x0) goto LAB_00108e2c;
  sVar7 = strlen(__s_00);
  iVar2 = OSSL_CMP_CTX_set1_referenceValue(uVar1,__s_00,sVar7 & 0xffffffff);
  if (iVar2 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x30e,"setting second value failed");
  }
  local_50 = (char *)OSSL_CMP_CTX_get1_referenceValue_str(uVar1);
  if (local_50 == (char *)0x0) {
    test_error("test/cmp_ctx_test.c",0x30e,"second set reset the value");
  }
  else {
    if (__s_00 != local_50) goto LAB_00108ea8;
    test_error("test/cmp_ctx_test.c",0x30e,"second set did not dup the value");
  }
  local_50 = (char *)0x0;
  uVar8 = 0;
LAB_00108ea8:
  if (__s == __s_00) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x30e,"second value is same as first value");
  }
  if (local_50 == local_48) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x30e,"second get returned same as first get");
  }
  ptr_01 = (char *)OSSL_CMP_CTX_get1_referenceValue_str(uVar1);
  if (ptr_01 == (char *)0x0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x30e,"third set reset the value");
  }
  if (local_50 == ptr_01) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x30e,"third get did not create a new dup");
    ptr_01 = (char *)0x0;
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x30e,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar8;
  }
  CRYPTO_free(__s);
  CRYPTO_free(__s_00);
  CRYPTO_free(local_48);
  CRYPTO_free(local_50);
  CRYPTO_free(ptr_01);
  uVar5 = test_true("test/cmp_ctx_test.c",0x30e,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_push0_genm_ITAV(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  ptr = (void *)set_up("test_CTX_push0_genm_ITAV");
  if (ptr != (void *)0x0) {
    lVar10 = *(long *)((long)ptr + 8);
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar10 + 0x1c8));
    lVar6 = OSSL_CMP_ITAV_new();
    lVar7 = OSSL_CMP_ITAV_new();
    uVar8 = ERR_peek_error();
    iVar2 = test_int_eq("test/cmp_ctx_test.c",0x31d,"ERR_peek_error()",&_LC17,uVar8 & 0xffffffff,0);
    iVar3 = OSSL_CMP_CTX_push0_genm_ITAV(0,lVar6);
    if ((iVar3 == 0) && (uVar8 = ERR_peek_error(), uVar8 != 0)) {
      uVar11 = (uint)(iVar2 != 0);
    }
    else {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x31d,"pusher did not return error on ctx == NULL");
    }
    ERR_clear_error();
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    if (*(long *)(lVar10 + 0x1c8) != 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x31d,"did not get default value for stack field");
    }
    iVar2 = OSSL_CMP_CTX_push0_genm_ITAV(lVar10,lVar6);
    if (iVar2 == 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x31d,"pushing first value failed");
    }
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar10 + 0x1c8));
    if (iVar2 != iVar1 + 1) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x31d,"pushing first value did not increment number");
    }
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar10 + 0x1c8));
    lVar9 = OPENSSL_sk_value(*(undefined8 *)(lVar10 + 0x1c8),iVar2 + -1);
    if (lVar6 != lVar9) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x31d,"push/sk_top first value did not match");
    }
    iVar2 = OSSL_CMP_CTX_push0_genm_ITAV(lVar10,lVar7);
    if (iVar2 == 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x31d,"pushing second value failed");
    }
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar10 + 0x1c8));
    if (iVar2 != iVar1 + 2) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x31d,"pushing second value did not increment number");
    }
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar10 + 0x1c8));
    lVar10 = OPENSSL_sk_value(*(undefined8 *)(lVar10 + 0x1c8),iVar1 + -1);
    if (lVar7 != lVar10) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x31d,"push/sk_top second value did not match");
    }
    uVar8 = ERR_peek_error();
    uVar4 = test_int_eq("test/cmp_ctx_test.c",0x31d,"ERR_peek_error()",&_LC17,uVar8 & 0xffffffff,0);
    if (uVar4 != 0) {
      uVar4 = uVar11;
    }
    OSSL_CMP_ITAV_free(0);
    OSSL_CMP_ITAV_free(0);
    uVar5 = test_true("test/cmp_ctx_test.c",0x31d,&_LC40,uVar4);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    CRYPTO_free(ptr);
    return uVar5;
  }
  return 0;
}



undefined4 test_CTX_set1_get0_recipNonce(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *ptr;
  ASN1_OCTET_STRING *a;
  ASN1_OCTET_STRING *a_00;
  ulong uVar5;
  ASN1_OCTET_STRING *pAVar6;
  ASN1_OCTET_STRING *pAVar7;
  uint uVar8;
  
  ptr = (void *)set_up("test_CTX_set1_get0_recipNonce");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  a = ASN1_OCTET_STRING_new();
  a_00 = ASN1_OCTET_STRING_new();
  uVar5 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x32c,"ERR_peek_error()",&_LC17,uVar5 & 0xffffffff,0);
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x32c,"OSSL_CMP_CTX_get0_recipNonce");
  ERR_set_error(0x3a,0x67,0);
  uVar5 = ERR_peek_error();
  if (uVar5 == 0) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x32c,"getter did not return error on ctx == NULL");
  }
  else {
    uVar8 = (uint)(iVar2 != 0);
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x32c,"OSSL_CMP_CTX_get0_recipNonce");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = ossl_cmp_ctx_set1_recipNonce(0,a);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x32c,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x32c,"OSSL_CMP_CTX_get0_recipNonce");
    ERR_set_error(0x3a,0x67,0);
    if (a == (ASN1_OCTET_STRING *)0x0) goto LAB_00109617;
LAB_0010962d:
    test_error("test/cmp_ctx_test.c",0x32c,"first set had no effect");
    iVar2 = ossl_cmp_ctx_set1_recipNonce(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x32c,"setting second value failed");
    }
    if (lVar1 != 0) {
LAB_0010965b:
      uVar8 = 0;
      goto LAB_001094f8;
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x32c,"OSSL_CMP_CTX_get0_recipNonce");
    ERR_set_error(0x3a,0x67,0);
LAB_0010977c:
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x32c,"second set reset the value");
    pAVar7 = (ASN1_OCTET_STRING *)0x0;
  }
  else {
    if (*(long *)(lVar1 + 0x128) != 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x32c,"did not get default value");
    }
    iVar2 = ossl_cmp_ctx_set1_recipNonce(lVar1,a);
    if (iVar2 == 0) {
      uVar8 = 0;
      test_error("test/cmp_ctx_test.c",0x32c,"setting first value failed");
      pAVar7 = *(ASN1_OCTET_STRING **)(lVar1 + 0x128);
    }
    else {
      pAVar7 = *(ASN1_OCTET_STRING **)(lVar1 + 0x128);
    }
    if (a == pAVar7) {
LAB_00109617:
      test_error("test/cmp_ctx_test.c",0x32c,"first set did not dup the value");
      goto LAB_0010962d;
    }
    if (pAVar7 == (ASN1_OCTET_STRING *)0x0) goto LAB_0010962d;
    iVar2 = ossl_cmp_ctx_set1_recipNonce(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x32c,"setting second value failed");
      goto LAB_0010965b;
    }
LAB_001094f8:
    pAVar7 = *(ASN1_OCTET_STRING **)(lVar1 + 0x128);
    if (pAVar7 == (ASN1_OCTET_STRING *)0x0) goto LAB_0010977c;
  }
  if (a_00 == pAVar7) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x32c,"second set did not dup the value");
    pAVar7 = (ASN1_OCTET_STRING *)0x0;
  }
  if (a == a_00) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x32c,"second value is same as first value");
  }
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x32c,"OSSL_CMP_CTX_get0_recipNonce");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    pAVar6 = *(ASN1_OCTET_STRING **)(lVar1 + 0x128);
    if (pAVar6 != (ASN1_OCTET_STRING *)0x0) goto LAB_00109533;
  }
  uVar8 = 0;
  test_error("test/cmp_ctx_test.c",0x32c,"third set reset the value");
  pAVar6 = (ASN1_OCTET_STRING *)0x0;
LAB_00109533:
  if (pAVar7 != pAVar6) {
    uVar8 = 0;
    test_error("test/cmp_ctx_test.c",0x32c,"third get gave different value");
  }
  uVar5 = ERR_peek_error();
  uVar3 = test_int_eq("test/cmp_ctx_test.c",0x32c,"ERR_peek_error()",&_LC17,uVar5 & 0xffffffff,0);
  if (uVar3 != 0) {
    uVar3 = uVar8;
  }
  ASN1_OCTET_STRING_free(a);
  ASN1_OCTET_STRING_free(a_00);
  uVar4 = test_true("test/cmp_ctx_test.c",0x32c,&_LC40,uVar3);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar4;
}



undefined4 test_CTX_set0_get0_trusted(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  X509_STORE *pXVar6;
  X509_VERIFY_PARAM *pXVar7;
  X509_STORE *pXVar8;
  ulong uVar9;
  long lVar10;
  X509_STORE *pXVar11;
  uint uVar12;
  
  ptr = (void *)set_up("test_CTX_set0_get0_trusted");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  pXVar6 = X509_STORE_new();
  if (pXVar6 != (X509_STORE *)0x0) {
    pXVar7 = (X509_VERIFY_PARAM *)X509_STORE_get0_param(pXVar6);
    X509_VERIFY_PARAM_set_flags(pXVar7,1);
  }
  pXVar8 = X509_STORE_new();
  if (pXVar8 != (X509_STORE *)0x0) {
    pXVar7 = (X509_VERIFY_PARAM *)X509_STORE_get0_param(pXVar8);
    X509_VERIFY_PARAM_set_flags(pXVar7,1);
  }
  uVar9 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x2fe,"ERR_peek_error()",&_LC17,uVar9 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set0_trustedStore(0,pXVar6);
  if ((iVar3 == 0) && (uVar9 = ERR_peek_error(), uVar9 != 0)) {
    uVar12 = (uint)(iVar2 != 0);
  }
  else {
    uVar12 = 0;
    test_error("test/cmp_ctx_test.c",0x2fe,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  lVar10 = OSSL_CMP_CTX_get0_trustedStore(0);
  if ((lVar10 != 0) || (uVar9 = ERR_peek_error(), uVar9 == 0)) {
    uVar12 = 0;
    test_error("test/cmp_ctx_test.c",0x2fe,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  lVar10 = OSSL_CMP_CTX_get0_trustedStore(uVar1);
  if (lVar10 == 0) {
LAB_00109959:
    iVar2 = OSSL_CMP_CTX_set0_trustedStore(uVar1,pXVar6);
    if (iVar2 != 0) goto LAB_0010996c;
LAB_00109b30:
    uVar12 = 0;
    test_error("test/cmp_ctx_test.c",0x2fe,"setting first value failed");
    pXVar11 = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(uVar1);
  }
  else {
    pXVar7 = (X509_VERIFY_PARAM *)X509_STORE_get0_param(lVar10);
    uVar9 = X509_VERIFY_PARAM_get_flags(pXVar7);
    if (uVar9 == 0) goto LAB_00109959;
    uVar12 = 0;
    test_error("test/cmp_ctx_test.c",0x2fe,"did not get default value");
    iVar2 = OSSL_CMP_CTX_set0_trustedStore(uVar1,pXVar6);
    if (iVar2 == 0) goto LAB_00109b30;
LAB_0010996c:
    pXVar11 = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(uVar1);
  }
  if (pXVar6 != pXVar11) {
    uVar12 = 0;
    test_error("test/cmp_ctx_test.c",0x2fe,"set/get first value did not match");
  }
  iVar2 = OSSL_CMP_CTX_set0_trustedStore(uVar1,pXVar8);
  if (iVar2 == 0) {
    uVar12 = 0;
    test_error("test/cmp_ctx_test.c",0x2fe,"setting second value failed");
    pXVar6 = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(uVar1);
    if (pXVar6 != (X509_STORE *)0x0) goto LAB_001099b5;
LAB_001099ca:
    uVar12 = 0;
    test_error("test/cmp_ctx_test.c",0x2fe,"second set reset the value");
  }
  else {
    pXVar6 = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(uVar1);
    if (pXVar6 == (X509_STORE *)0x0) goto LAB_001099ca;
LAB_001099b5:
    pXVar7 = (X509_VERIFY_PARAM *)X509_STORE_get0_param(pXVar6);
    uVar9 = X509_VERIFY_PARAM_get_flags(pXVar7);
    if (uVar9 == 0) goto LAB_001099ca;
  }
  if (pXVar6 != pXVar8) {
    uVar12 = 0;
    test_error("test/cmp_ctx_test.c",0x2fe,"set/get second value did not match");
  }
  pXVar8 = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(uVar1);
  if (pXVar8 != (X509_STORE *)0x0) {
    pXVar7 = (X509_VERIFY_PARAM *)X509_STORE_get0_param(pXVar8);
    uVar9 = X509_VERIFY_PARAM_get_flags(pXVar7);
    if (uVar9 != 0) goto LAB_00109a3f;
  }
  uVar12 = 0;
  test_error("test/cmp_ctx_test.c",0x2fe,"third set reset the value");
LAB_00109a3f:
  if (pXVar6 != pXVar8) {
    uVar12 = 0;
    test_error("test/cmp_ctx_test.c",0x2fe,"third get gave different value");
  }
  uVar9 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x2fe,"ERR_peek_error()",&_LC17,uVar9 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar12;
  }
  X509_STORE_free((X509_STORE *)0x0);
  X509_STORE_free((X509_STORE *)0x0);
  uVar5 = test_true("test/cmp_ctx_test.c",0x2fe,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set1_get0_recipient(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  X509_NAME *a;
  X509_NAME *a_00;
  ulong uVar6;
  X509_NAME *pXVar7;
  X509_NAME *pXVar8;
  uint uVar9;
  
  ptr = (void *)set_up("test_CTX_set1_get0_recipient");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  a = X509_NAME_new();
  a_00 = X509_NAME_new();
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x306,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_recipient(0,a);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar9 = (uint)(iVar2 != 0);
  }
  else {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x306,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x306,"OSSL_CMP_CTX_get0_recipient");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x306,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x306,"OSSL_CMP_CTX_get0_recipient");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_recipient(0,a);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x306,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x306,"OSSL_CMP_CTX_get0_recipient");
    ERR_set_error(0x3a,0x67,0);
    if (a == (X509_NAME *)0x0) goto LAB_00109e47;
LAB_00109e5d:
    test_error("test/cmp_ctx_test.c",0x306,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_recipient(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x306,"setting second value failed");
    }
    if (lVar1 != 0) {
LAB_00109e87:
      uVar9 = 0;
      goto LAB_00109cfa;
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x306,"OSSL_CMP_CTX_get0_recipient");
    ERR_set_error(0x3a,0x67,0);
LAB_00109efc:
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x306,"second set reset the value");
    pXVar8 = (X509_NAME *)0x0;
    if (a_00 == (X509_NAME *)0x0) {
LAB_00109f20:
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x306,"second set did not dup the value");
      pXVar8 = (X509_NAME *)0x0;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x108) != 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x306,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_recipient(lVar1,a);
    if (iVar2 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x306,"setting first value failed");
      pXVar8 = *(X509_NAME **)(lVar1 + 0x108);
    }
    else {
      pXVar8 = *(X509_NAME **)(lVar1 + 0x108);
    }
    if (a == pXVar8) {
LAB_00109e47:
      test_error("test/cmp_ctx_test.c",0x306,"first set did not dup the value");
      goto LAB_00109e5d;
    }
    if (pXVar8 == (X509_NAME *)0x0) goto LAB_00109e5d;
    iVar2 = OSSL_CMP_CTX_set1_recipient(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x306,"setting second value failed");
      goto LAB_00109e87;
    }
LAB_00109cfa:
    pXVar8 = *(X509_NAME **)(lVar1 + 0x108);
    if (pXVar8 == (X509_NAME *)0x0) goto LAB_00109efc;
    if (a_00 == pXVar8) goto LAB_00109f20;
  }
  if (a == a_00) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x306,"second value is same as first value");
  }
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x306,"OSSL_CMP_CTX_get0_recipient");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    pXVar7 = *(X509_NAME **)(lVar1 + 0x108);
    if (pXVar7 != (X509_NAME *)0x0) goto LAB_00109d35;
  }
  uVar9 = 0;
  test_error("test/cmp_ctx_test.c",0x306,"third set reset the value");
  pXVar7 = (X509_NAME *)0x0;
LAB_00109d35:
  if (pXVar8 != pXVar7) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x306,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x306,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar9;
  }
  X509_NAME_free(a);
  X509_NAME_free(a_00);
  uVar5 = test_true("test/cmp_ctx_test.c",0x306,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set1_get0_subjectName(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  X509_NAME *a;
  X509_NAME *a_00;
  ulong uVar6;
  X509_NAME *pXVar7;
  X509_NAME *pXVar8;
  uint uVar9;
  
  ptr = (void *)set_up("test_CTX_set1_get0_subjectName");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  a = X509_NAME_new();
  a_00 = X509_NAME_new();
  uVar6 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x313,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_subjectName(0,a);
  if ((iVar3 == 0) && (uVar6 = ERR_peek_error(), uVar6 != 0)) {
    uVar9 = (uint)(iVar2 != 0);
  }
  else {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x313,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x313,"OSSL_CMP_CTX_get0_subjectName");
  ERR_set_error(0x3a,0x67,0);
  uVar6 = ERR_peek_error();
  if (uVar6 == 0) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x313,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x313,"OSSL_CMP_CTX_get0_subjectName");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set1_subjectName(0,a);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x313,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x313,"OSSL_CMP_CTX_get0_subjectName");
    ERR_set_error(0x3a,0x67,0);
    if (a == (X509_NAME *)0x0) goto LAB_0010a2f7;
LAB_0010a30d:
    test_error("test/cmp_ctx_test.c",0x313,"first set had no effect");
    iVar2 = OSSL_CMP_CTX_set1_subjectName(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x313,"setting second value failed");
    }
    if (lVar1 != 0) {
LAB_0010a337:
      uVar9 = 0;
      goto LAB_0010a1aa;
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x313,"OSSL_CMP_CTX_get0_subjectName");
    ERR_set_error(0x3a,0x67,0);
LAB_0010a3ac:
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x313,"second set reset the value");
    pXVar8 = (X509_NAME *)0x0;
    if (a_00 == (X509_NAME *)0x0) {
LAB_0010a3d0:
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x313,"second set did not dup the value");
      pXVar8 = (X509_NAME *)0x0;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x180) != 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x313,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set1_subjectName(lVar1,a);
    if (iVar2 == 0) {
      uVar9 = 0;
      test_error("test/cmp_ctx_test.c",0x313,"setting first value failed");
      pXVar8 = *(X509_NAME **)(lVar1 + 0x180);
    }
    else {
      pXVar8 = *(X509_NAME **)(lVar1 + 0x180);
    }
    if (a == pXVar8) {
LAB_0010a2f7:
      test_error("test/cmp_ctx_test.c",0x313,"first set did not dup the value");
      goto LAB_0010a30d;
    }
    if (pXVar8 == (X509_NAME *)0x0) goto LAB_0010a30d;
    iVar2 = OSSL_CMP_CTX_set1_subjectName(lVar1,a_00);
    if (iVar2 == 0) {
      test_error("test/cmp_ctx_test.c",0x313,"setting second value failed");
      goto LAB_0010a337;
    }
LAB_0010a1aa:
    pXVar8 = *(X509_NAME **)(lVar1 + 0x180);
    if (pXVar8 == (X509_NAME *)0x0) goto LAB_0010a3ac;
    if (a_00 == pXVar8) goto LAB_0010a3d0;
  }
  if (a == a_00) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x313,"second value is same as first value");
  }
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x313,"OSSL_CMP_CTX_get0_subjectName");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    pXVar7 = *(X509_NAME **)(lVar1 + 0x180);
    if (pXVar7 != (X509_NAME *)0x0) goto LAB_0010a1e5;
  }
  uVar9 = 0;
  test_error("test/cmp_ctx_test.c",0x313,"third set reset the value");
  pXVar7 = (X509_NAME *)0x0;
LAB_0010a1e5:
  if (pXVar8 != pXVar7) {
    uVar9 = 0;
    test_error("test/cmp_ctx_test.c",0x313,"third get gave different value");
  }
  uVar6 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x313,"ERR_peek_error()",&_LC17,uVar6 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar9;
  }
  X509_NAME_free(a);
  X509_NAME_free(a_00);
  uVar5 = test_true("test/cmp_ctx_test.c",0x313,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set0_get0_reqExtensions(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  
  ptr = (void *)set_up("test_CTX_set0_get0_reqExtensions");
  if (ptr == (void *)0x0) {
    return 0;
  }
  lVar1 = *(long *)((long)ptr + 8);
  lVar6 = OPENSSL_sk_new_null();
  lVar7 = OPENSSL_sk_new_null();
  uVar8 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x317,"ERR_peek_error()",&_LC17,uVar8 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set0_reqExtensions(0,lVar6);
  if ((iVar3 == 0) && (uVar8 = ERR_peek_error(), uVar8 != 0)) {
    uVar10 = (uint)(iVar2 != 0);
  }
  else {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x317,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  ERR_new();
  ERR_set_debug("test/cmp_ctx_test.c",0x317,"OSSL_CMP_CTX_get0_reqExtensions");
  ERR_set_error(0x3a,0x67,0);
  uVar8 = ERR_peek_error();
  if (uVar8 == 0) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x317,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x317,"OSSL_CMP_CTX_get0_reqExtensions");
    ERR_set_error(0x3a,0x67,0);
    iVar2 = OSSL_CMP_CTX_set0_reqExtensions(0,lVar6);
    if (iVar2 == 0) {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x317,"setting first value failed");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x317,"OSSL_CMP_CTX_get0_reqExtensions");
    ERR_set_error(0x3a,0x67,0);
    lVar9 = 0;
  }
  else {
    if (*(long *)(lVar1 + 0x198) != 0) {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x317,"did not get default value");
    }
    iVar2 = OSSL_CMP_CTX_set0_reqExtensions(lVar1,lVar6);
    if (iVar2 == 0) {
      uVar10 = 0;
      test_error("test/cmp_ctx_test.c",0x317,"setting first value failed");
    }
    lVar9 = *(long *)(lVar1 + 0x198);
  }
  if (lVar6 != lVar9) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x317,"set/get first value did not match");
  }
  iVar2 = OSSL_CMP_CTX_set0_reqExtensions(lVar1,lVar7);
  if (iVar2 == 0) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x317,"setting second value failed");
  }
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x317,"OSSL_CMP_CTX_get0_reqExtensions");
    ERR_set_error(0x3a,0x67,0);
    test_error("test/cmp_ctx_test.c",0x317,"second set reset the value");
    if (lVar7 != 0) {
      test_error("test/cmp_ctx_test.c",0x317,"set/get second value did not match");
    }
    ERR_new();
    ERR_set_debug("test/cmp_ctx_test.c",0x317,"OSSL_CMP_CTX_get0_reqExtensions");
    ERR_set_error(0x3a,0x67,0);
LAB_0010a820:
    test_error("test/cmp_ctx_test.c",0x317,"third set reset the value");
  }
  else {
    lVar6 = *(long *)(lVar1 + 0x198);
    if (lVar6 == 0) {
      test_error("test/cmp_ctx_test.c",0x317,"second set reset the value");
      if (lVar7 != 0) {
        test_error("test/cmp_ctx_test.c",0x317,"set/get second value did not match");
      }
      if (*(long *)(lVar1 + 0x198) != 0) goto LAB_0010a6b4;
      goto LAB_0010a820;
    }
    if (lVar7 == lVar6) goto LAB_0010a6d0;
    test_error("test/cmp_ctx_test.c",0x317,"set/get second value did not match");
    if (*(long *)(lVar1 + 0x198) == 0) {
      test_error("test/cmp_ctx_test.c",0x317,"third set reset the value");
LAB_0010a6b4:
      test_error("test/cmp_ctx_test.c",0x317,"third get gave different value");
    }
    else if (lVar6 != *(long *)(lVar1 + 0x198)) goto LAB_0010a6b4;
  }
  uVar10 = 0;
LAB_0010a6d0:
  uVar8 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x317,"ERR_peek_error()",&_LC17,uVar8 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar10;
  }
  OPENSSL_sk_free(0);
  OPENSSL_sk_free(0);
  uVar5 = test_true("test/cmp_ctx_test.c",0x317,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_push0_policy(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  void *ptr;
  POLICYINFO *pPVar7;
  POLICYINFO *pPVar8;
  ulong uVar9;
  POLICYINFO *pPVar10;
  uint uVar11;
  
  ptr = (void *)set_up("test_CTX_push0_policy");
  if (ptr != (void *)0x0) {
    lVar1 = *(long *)((long)ptr + 8);
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x1a0));
    pPVar7 = POLICYINFO_new();
    pPVar8 = POLICYINFO_new();
    uVar9 = ERR_peek_error();
    iVar3 = test_int_eq("test/cmp_ctx_test.c",0x318,"ERR_peek_error()",&_LC17,uVar9 & 0xffffffff,0);
    iVar4 = OSSL_CMP_CTX_push0_policy(0,pPVar7);
    if ((iVar4 == 0) && (uVar9 = ERR_peek_error(), uVar9 != 0)) {
      uVar11 = (uint)(iVar3 != 0);
    }
    else {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x318,"pusher did not return error on ctx == NULL");
    }
    ERR_clear_error();
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (*(long *)(lVar1 + 0x1a0) != 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x318,"did not get default value for stack field");
    }
    iVar3 = OSSL_CMP_CTX_push0_policy(lVar1,pPVar7);
    if (iVar3 == 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x318,"pushing first value failed");
    }
    iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x1a0));
    if (iVar3 != iVar2 + 1) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x318,"pushing first value did not increment number");
    }
    iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x1a0));
    pPVar10 = (POLICYINFO *)OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x1a0),iVar3 + -1);
    if (pPVar7 != pPVar10) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x318,"push/sk_top first value did not match");
    }
    iVar3 = OSSL_CMP_CTX_push0_policy(lVar1,pPVar8);
    if (iVar3 == 0) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x318,"pushing second value failed");
    }
    iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x1a0));
    if (iVar3 != iVar2 + 2) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x318,"pushing second value did not increment number");
    }
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x1a0));
    pPVar7 = (POLICYINFO *)OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x1a0),iVar2 + -1);
    if (pPVar8 != pPVar7) {
      uVar11 = 0;
      test_error("test/cmp_ctx_test.c",0x318,"push/sk_top second value did not match");
    }
    uVar9 = ERR_peek_error();
    uVar5 = test_int_eq("test/cmp_ctx_test.c",0x318,"ERR_peek_error()",&_LC17,uVar9 & 0xffffffff,0);
    if (uVar5 != 0) {
      uVar5 = uVar11;
    }
    POLICYINFO_free((POLICYINFO *)0x0);
    POLICYINFO_free((POLICYINFO *)0x0);
    uVar6 = test_true("test/cmp_ctx_test.c",0x318,&_LC40,uVar5);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    CRYPTO_free(ptr);
    return uVar6;
  }
  return 0;
}



undefined4 test_CTX_set1_get0_untrusted(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *ptr;
  long lVar6;
  X509 *pXVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long local_40;
  
  ptr = (void *)set_up("test_CTX_set1_get0_untrusted");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  lVar6 = OPENSSL_sk_new_null();
  pXVar7 = X509_new();
  if ((pXVar7 == (X509 *)0x0) || (iVar2 = OPENSSL_sk_push(lVar6,pXVar7), lVar9 = lVar6, iVar2 == 0))
  {
    lVar9 = 0;
    OPENSSL_sk_free(lVar6);
    X509_free(pXVar7);
  }
  lVar6 = OPENSSL_sk_new_null();
  pXVar7 = X509_new();
  if ((pXVar7 == (X509 *)0x0) || (iVar2 = OPENSSL_sk_push(lVar6,pXVar7), lVar10 = lVar6, iVar2 == 0)
     ) {
    lVar10 = 0;
    OPENSSL_sk_free(lVar6);
    X509_free(pXVar7);
  }
  uVar8 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x301,"ERR_peek_error()",&_LC17,uVar8 & 0xffffffff,0);
  iVar3 = OSSL_CMP_CTX_set1_untrusted(0,lVar9);
  if ((iVar3 == 0) && (uVar8 = ERR_peek_error(), uVar8 != 0)) {
    uVar11 = (uint)(iVar2 != 0);
  }
  else {
    uVar11 = 0;
    test_error("test/cmp_ctx_test.c",0x301,"setter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  lVar6 = OSSL_CMP_CTX_get0_untrusted(0);
  if ((lVar6 != 0) || (uVar8 = ERR_peek_error(), uVar8 == 0)) {
    uVar11 = 0;
    test_error("test/cmp_ctx_test.c",0x301,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  lVar6 = OSSL_CMP_CTX_get0_untrusted(uVar1);
  if ((lVar6 == 0) || (iVar2 = OPENSSL_sk_num(lVar6), iVar2 == 0)) {
    iVar2 = OSSL_CMP_CTX_set1_untrusted(uVar1,lVar9);
    if (iVar2 != 0) goto LAB_0010ada6;
LAB_0010af60:
    uVar11 = 0;
    test_error("test/cmp_ctx_test.c",0x301,"setting first value failed");
    lVar6 = OSSL_CMP_CTX_get0_untrusted(uVar1);
    if (lVar6 == lVar9) goto LAB_0010af88;
LAB_0010adb7:
    if ((lVar6 != 0) && (iVar2 = OPENSSL_sk_num(lVar6), iVar2 != 0)) goto LAB_0010ade1;
  }
  else {
    uVar11 = 0;
    test_error("test/cmp_ctx_test.c",0x301,"did not get default value");
    iVar2 = OSSL_CMP_CTX_set1_untrusted(uVar1,lVar9);
    if (iVar2 == 0) goto LAB_0010af60;
LAB_0010ada6:
    lVar6 = OSSL_CMP_CTX_get0_untrusted(uVar1);
    if (lVar6 != lVar9) goto LAB_0010adb7;
LAB_0010af88:
    test_error("test/cmp_ctx_test.c",0x301,"first set did not dup the value");
  }
  uVar11 = 0;
  test_error("test/cmp_ctx_test.c",0x301,"first set had no effect");
LAB_0010ade1:
  iVar2 = OSSL_CMP_CTX_set1_untrusted(uVar1,lVar10);
  if (iVar2 == 0) {
    uVar11 = 0;
    test_error("test/cmp_ctx_test.c",0x301,"setting second value failed");
  }
  local_40 = OSSL_CMP_CTX_get0_untrusted(uVar1);
  if ((local_40 == 0) || (iVar2 = OPENSSL_sk_num(local_40), iVar2 == 0)) {
    uVar11 = 0;
    test_error("test/cmp_ctx_test.c",0x301,"second set reset the value");
  }
  if (local_40 == lVar10) {
    uVar11 = 0;
    test_error("test/cmp_ctx_test.c",0x301,"second set did not dup the value");
    local_40 = 0;
  }
  if (lVar10 == lVar9) {
    uVar11 = 0;
    test_error("test/cmp_ctx_test.c",0x301,"second value is same as first value");
  }
  lVar6 = OSSL_CMP_CTX_get0_untrusted(uVar1);
  if ((lVar6 == 0) || (iVar2 = OPENSSL_sk_num(lVar6), iVar2 == 0)) {
    uVar11 = 0;
    test_error("test/cmp_ctx_test.c",0x301,"third set reset the value");
  }
  if (lVar6 != local_40) {
    uVar11 = 0;
    test_error("test/cmp_ctx_test.c",0x301,"third get gave different value");
  }
  uVar8 = ERR_peek_error();
  uVar4 = test_int_eq("test/cmp_ctx_test.c",0x301,"ERR_peek_error()",&_LC17,uVar8 & 0xffffffff,0);
  if (uVar4 != 0) {
    uVar4 = uVar11;
  }
  OSSL_STACK_OF_X509_free(lVar9);
  OSSL_STACK_OF_X509_free(lVar10);
  uVar5 = test_true("test/cmp_ctx_test.c",0x301,&_LC40,uVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar5;
}



undefined4 test_CTX_set1_get1_caPubs(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *ptr;
  long lVar5;
  X509 *pXVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long local_50;
  long local_48;
  
  ptr = (void *)set_up("test_CTX_set1_get1_caPubs");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  lVar5 = OPENSSL_sk_new_null();
  pXVar6 = X509_new();
  if ((pXVar6 == (X509 *)0x0) || (iVar2 = OPENSSL_sk_push(lVar5,pXVar6), lVar9 = lVar5, iVar2 == 0))
  {
    lVar9 = 0;
    OPENSSL_sk_free(lVar5);
    X509_free(pXVar6);
  }
  lVar5 = OPENSSL_sk_new_null();
  pXVar6 = X509_new();
  if ((pXVar6 == (X509 *)0x0) || (iVar2 = OPENSSL_sk_push(lVar5,pXVar6), lVar8 = lVar5, iVar2 == 0))
  {
    lVar8 = 0;
    OPENSSL_sk_free(lVar5);
    X509_free(pXVar6);
  }
  uVar7 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x326,"ERR_peek_error()",&_LC17,uVar7 & 0xffffffff,0);
  ERR_clear_error();
  lVar5 = OSSL_CMP_CTX_get1_caPubs(0);
  if ((lVar5 == 0) && (uVar7 = ERR_peek_error(), uVar7 != 0)) {
    uVar10 = (uint)(iVar2 != 0);
  }
  else {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x326,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  lVar5 = OSSL_CMP_CTX_get1_caPubs(uVar1);
  if ((lVar5 != 0) && (iVar2 = OPENSSL_sk_num(lVar5), iVar2 != 0)) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x326,"did not get default value");
  }
  iVar2 = ossl_cmp_ctx_set1_caPubs(uVar1,lVar9);
  if (iVar2 == 0) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x326,"setting first value failed");
  }
  OSSL_STACK_OF_X509_free(lVar5);
  local_48 = OSSL_CMP_CTX_get1_caPubs(uVar1);
  if (local_48 == lVar9) {
    test_error("test/cmp_ctx_test.c",0x326,"first set did not dup the value");
LAB_0010b206:
    local_48 = 0;
  }
  else {
    if (local_48 == 0) goto LAB_0010b206;
    iVar2 = OPENSSL_sk_num(local_48);
    if (iVar2 != 0) goto LAB_0010b228;
  }
  uVar10 = 0;
  test_error("test/cmp_ctx_test.c",0x326,"first set had no effect");
LAB_0010b228:
  iVar2 = ossl_cmp_ctx_set1_caPubs(uVar1,lVar8);
  if (iVar2 == 0) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x326,"setting second value failed");
  }
  lVar5 = OSSL_CMP_CTX_get1_caPubs(uVar1);
  if ((lVar5 == 0) || (iVar2 = OPENSSL_sk_num(lVar5), iVar2 == 0)) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x326,"second set reset the value");
  }
  if (lVar5 == lVar8) {
    lVar5 = 0;
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x326,"second set did not dup the value");
  }
  if (lVar8 == lVar9) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x326,"second value is same as first value");
  }
  if (lVar5 == local_48) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x326,"second get returned same as first get");
  }
  local_50 = OSSL_CMP_CTX_get1_caPubs(uVar1);
  if ((local_50 == 0) || (iVar2 = OPENSSL_sk_num(local_50), iVar2 == 0)) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x326,"third set reset the value");
  }
  if (lVar5 == local_50) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x326,"third get did not create a new dup");
    local_50 = 0;
  }
  uVar7 = ERR_peek_error();
  uVar3 = test_int_eq("test/cmp_ctx_test.c",0x326,"ERR_peek_error()",&_LC17,uVar7 & 0xffffffff,0);
  if (uVar3 != 0) {
    uVar3 = uVar10;
  }
  OSSL_STACK_OF_X509_free(lVar9);
  OSSL_STACK_OF_X509_free(lVar8);
  OSSL_STACK_OF_X509_free(local_48);
  OSSL_STACK_OF_X509_free(lVar5);
  OSSL_STACK_OF_X509_free(local_50);
  uVar4 = test_true("test/cmp_ctx_test.c",0x326,&_LC40,uVar3);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar4;
}



undefined4 test_CTX_set1_get1_extraCertsIn(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *ptr;
  long lVar5;
  X509 *pXVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long local_50;
  long local_48;
  
  ptr = (void *)set_up("test_CTX_set1_get1_extraCertsIn");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  lVar5 = OPENSSL_sk_new_null();
  pXVar6 = X509_new();
  if ((pXVar6 == (X509 *)0x0) || (iVar2 = OPENSSL_sk_push(lVar5,pXVar6), lVar9 = lVar5, iVar2 == 0))
  {
    lVar9 = 0;
    OPENSSL_sk_free(lVar5);
    X509_free(pXVar6);
  }
  lVar5 = OPENSSL_sk_new_null();
  pXVar6 = X509_new();
  if ((pXVar6 == (X509 *)0x0) || (iVar2 = OPENSSL_sk_push(lVar5,pXVar6), lVar8 = lVar5, iVar2 == 0))
  {
    lVar8 = 0;
    OPENSSL_sk_free(lVar5);
    X509_free(pXVar6);
  }
  uVar7 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x327,"ERR_peek_error()",&_LC17,uVar7 & 0xffffffff,0);
  ERR_clear_error();
  lVar5 = OSSL_CMP_CTX_get1_extraCertsIn(0);
  if ((lVar5 == 0) && (uVar7 = ERR_peek_error(), uVar7 != 0)) {
    uVar10 = (uint)(iVar2 != 0);
  }
  else {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x327,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  lVar5 = OSSL_CMP_CTX_get1_extraCertsIn(uVar1);
  if ((lVar5 != 0) && (iVar2 = OPENSSL_sk_num(lVar5), iVar2 != 0)) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x327,"did not get default value");
  }
  iVar2 = ossl_cmp_ctx_set1_extraCertsIn(uVar1,lVar9);
  if (iVar2 == 0) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x327,"setting first value failed");
  }
  OSSL_STACK_OF_X509_free(lVar5);
  local_48 = OSSL_CMP_CTX_get1_extraCertsIn(uVar1);
  if (local_48 == lVar9) {
    test_error("test/cmp_ctx_test.c",0x327,"first set did not dup the value");
LAB_0010b646:
    local_48 = 0;
  }
  else {
    if (local_48 == 0) goto LAB_0010b646;
    iVar2 = OPENSSL_sk_num(local_48);
    if (iVar2 != 0) goto LAB_0010b668;
  }
  uVar10 = 0;
  test_error("test/cmp_ctx_test.c",0x327,"first set had no effect");
LAB_0010b668:
  iVar2 = ossl_cmp_ctx_set1_extraCertsIn(uVar1,lVar8);
  if (iVar2 == 0) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x327,"setting second value failed");
  }
  lVar5 = OSSL_CMP_CTX_get1_extraCertsIn(uVar1);
  if ((lVar5 == 0) || (iVar2 = OPENSSL_sk_num(lVar5), iVar2 == 0)) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x327,"second set reset the value");
  }
  if (lVar5 == lVar8) {
    lVar5 = 0;
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x327,"second set did not dup the value");
  }
  if (lVar8 == lVar9) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x327,"second value is same as first value");
  }
  if (lVar5 == local_48) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x327,"second get returned same as first get");
  }
  local_50 = OSSL_CMP_CTX_get1_extraCertsIn(uVar1);
  if ((local_50 == 0) || (iVar2 = OPENSSL_sk_num(local_50), iVar2 == 0)) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x327,"third set reset the value");
  }
  if (lVar5 == local_50) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x327,"third get did not create a new dup");
    local_50 = 0;
  }
  uVar7 = ERR_peek_error();
  uVar3 = test_int_eq("test/cmp_ctx_test.c",0x327,"ERR_peek_error()",&_LC17,uVar7 & 0xffffffff,0);
  if (uVar3 != 0) {
    uVar3 = uVar10;
  }
  OSSL_STACK_OF_X509_free(lVar9);
  OSSL_STACK_OF_X509_free(lVar8);
  OSSL_STACK_OF_X509_free(local_48);
  OSSL_STACK_OF_X509_free(lVar5);
  OSSL_STACK_OF_X509_free(local_50);
  uVar4 = test_true("test/cmp_ctx_test.c",0x327,&_LC40,uVar3);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar4;
}



undefined4 test_CTX_set1_get1_newChain(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *ptr;
  long lVar5;
  X509 *pXVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long local_50;
  long local_48;
  
  ptr = (void *)set_up("test_CTX_set1_get1_newChain");
  if (ptr == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  lVar5 = OPENSSL_sk_new_null();
  pXVar6 = X509_new();
  if ((pXVar6 == (X509 *)0x0) || (iVar2 = OPENSSL_sk_push(lVar5,pXVar6), lVar9 = lVar5, iVar2 == 0))
  {
    lVar9 = 0;
    OPENSSL_sk_free(lVar5);
    X509_free(pXVar6);
  }
  lVar5 = OPENSSL_sk_new_null();
  pXVar6 = X509_new();
  if ((pXVar6 == (X509 *)0x0) || (iVar2 = OPENSSL_sk_push(lVar5,pXVar6), lVar8 = lVar5, iVar2 == 0))
  {
    lVar8 = 0;
    OPENSSL_sk_free(lVar5);
    X509_free(pXVar6);
  }
  uVar7 = ERR_peek_error();
  iVar2 = test_int_eq("test/cmp_ctx_test.c",0x325,"ERR_peek_error()",&_LC17,uVar7 & 0xffffffff,0);
  ERR_clear_error();
  lVar5 = OSSL_CMP_CTX_get1_newChain(0);
  if ((lVar5 == 0) && (uVar7 = ERR_peek_error(), uVar7 != 0)) {
    uVar10 = (uint)(iVar2 != 0);
  }
  else {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x325,"getter did not return error on ctx == NULL");
  }
  ERR_clear_error();
  lVar5 = OSSL_CMP_CTX_get1_newChain(uVar1);
  if ((lVar5 != 0) && (iVar2 = OPENSSL_sk_num(lVar5), iVar2 != 0)) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x325,"did not get default value");
  }
  iVar2 = ossl_cmp_ctx_set1_newChain(uVar1,lVar9);
  if (iVar2 == 0) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x325,"setting first value failed");
  }
  OSSL_STACK_OF_X509_free(lVar5);
  local_48 = OSSL_CMP_CTX_get1_newChain(uVar1);
  if (local_48 == lVar9) {
    test_error("test/cmp_ctx_test.c",0x325,"first set did not dup the value");
LAB_0010ba86:
    local_48 = 0;
  }
  else {
    if (local_48 == 0) goto LAB_0010ba86;
    iVar2 = OPENSSL_sk_num(local_48);
    if (iVar2 != 0) goto LAB_0010baa8;
  }
  uVar10 = 0;
  test_error("test/cmp_ctx_test.c",0x325,"first set had no effect");
LAB_0010baa8:
  iVar2 = ossl_cmp_ctx_set1_newChain(uVar1,lVar8);
  if (iVar2 == 0) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x325,"setting second value failed");
  }
  lVar5 = OSSL_CMP_CTX_get1_newChain(uVar1);
  if ((lVar5 == 0) || (iVar2 = OPENSSL_sk_num(lVar5), iVar2 == 0)) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x325,"second set reset the value");
  }
  if (lVar5 == lVar8) {
    lVar5 = 0;
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x325,"second set did not dup the value");
  }
  if (lVar8 == lVar9) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x325,"second value is same as first value");
  }
  if (lVar5 == local_48) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x325,"second get returned same as first get");
  }
  local_50 = OSSL_CMP_CTX_get1_newChain(uVar1);
  if ((local_50 == 0) || (iVar2 = OPENSSL_sk_num(local_50), iVar2 == 0)) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x325,"third set reset the value");
  }
  if (lVar5 == local_50) {
    uVar10 = 0;
    test_error("test/cmp_ctx_test.c",0x325,"third get did not create a new dup");
    local_50 = 0;
  }
  uVar7 = ERR_peek_error();
  uVar3 = test_int_eq("test/cmp_ctx_test.c",0x325,"ERR_peek_error()",&_LC17,uVar7 & 0xffffffff,0);
  if (uVar3 != 0) {
    uVar3 = uVar10;
  }
  OSSL_STACK_OF_X509_free(lVar9);
  OSSL_STACK_OF_X509_free(lVar8);
  OSSL_STACK_OF_X509_free(local_48);
  OSSL_STACK_OF_X509_free(lVar5);
  OSSL_STACK_OF_X509_free(local_50);
  uVar4 = test_true("test/cmp_ctx_test.c",0x325,&_LC40,uVar3);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  CRYPTO_free(ptr);
  return uVar4;
}



void cleanup_tests(void)

{
  return;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 != 0) {
    add_test("test_CTX_libctx_propq",test_CTX_libctx_propq);
    add_test("test_CTX_reinit",test_CTX_reinit);
    add_test("test_CTX_set_get_option_35",test_CTX_set_get_option_35);
    add_test("test_CTX_set_get_log_cb",test_CTX_set_get_log_cb);
    add_test("test_cmp_ctx_log_cb",test_cmp_ctx_log_cb);
    add_test("test_CTX_print_errors",test_CTX_print_errors);
    add_test("test_CTX_set1_get0_serverPath",test_CTX_set1_get0_serverPath);
    add_test("test_CTX_set1_get0_server",test_CTX_set1_get0_server);
    add_test("test_CTX_set_get_serverPort",test_CTX_set_get_serverPort);
    add_test("test_CTX_set1_get0_proxy",test_CTX_set1_get0_proxy);
    add_test("test_CTX_set1_get0_no_proxy",test_CTX_set1_get0_no_proxy);
    add_test("test_CTX_set_get_http_cb",test_CTX_set_get_http_cb);
    add_test("test_CTX_set_get_http_cb_arg",test_CTX_set_get_http_cb_arg);
    add_test("test_CTX_set_get_transfer_cb",test_CTX_set_get_transfer_cb);
    add_test("test_CTX_set_get_transfer_cb_arg",test_CTX_set_get_transfer_cb_arg);
    add_test("test_CTX_set1_get0_srvCert",test_CTX_set1_get0_srvCert);
    add_test("test_CTX_set1_get0_validatedSrvCert",test_CTX_set1_get0_validatedSrvCert);
    add_test("test_CTX_set1_get0_expected_sender",test_CTX_set1_get0_expected_sender);
    add_test("test_CTX_set0_get0_trusted",test_CTX_set0_get0_trusted);
    add_test("test_CTX_set1_get0_untrusted",test_CTX_set1_get0_untrusted);
    add_test("test_CTX_set1_get0_cert",test_CTX_set1_get0_cert);
    add_test("test_CTX_set1_get0_pkey",test_CTX_set1_get0_pkey);
    add_test("test_CTX_set1_get1_referenceValue_str",test_CTX_set1_get1_referenceValue_str);
    add_test("test_CTX_set1_get1_secretValue_str",test_CTX_set1_get1_secretValue_str);
    add_test("test_CTX_set1_get0_recipient",test_CTX_set1_get0_recipient);
    add_test("test_CTX_push0_geninfo_ITAV",test_CTX_push0_geninfo_ITAV);
    add_test("test_CTX_set1_get0_extraCertsOut",test_CTX_set1_get0_extraCertsOut);
    add_test("test_CTX_set0_get0_newPkey_1",test_CTX_set0_get0_newPkey_1);
    add_test("test_CTX_set0_get0_newPkey_0",test_CTX_set0_get0_newPkey_0);
    add_test("test_CTX_set1_get0_issuer",test_CTX_set1_get0_issuer);
    add_test("test_CTX_set1_get0_subjectName",test_CTX_set1_get0_subjectName);
    add_test("test_CTX_set0_get0_reqExtensions",test_CTX_set0_get0_reqExtensions);
    add_test("test_CTX_reqExtensions_have_SAN",test_CTX_reqExtensions_have_SAN);
    add_test("test_CTX_push0_policy",test_CTX_push0_policy);
    add_test("test_CTX_set1_get0_oldCert",test_CTX_set1_get0_oldCert);
    add_test("test_CTX_push0_genm_ITAV",test_CTX_push0_genm_ITAV);
    add_test("test_CTX_set_get_certConf_cb",test_CTX_set_get_certConf_cb);
    add_test("test_CTX_set_get_certConf_cb_arg",test_CTX_set_get_certConf_cb_arg);
    add_test("test_CTX_set_get_status",test_CTX_set_get_status);
    add_test("test_CTX_set0_get0_statusString",test_CTX_set0_get0_statusString);
    add_test("test_CTX_set_get_failInfoCode",test_CTX_set_get_failInfoCode);
    add_test("test_CTX_set0_get0_newCert",test_CTX_set0_get0_newCert);
    add_test("test_CTX_set1_get1_newChain",test_CTX_set1_get1_newChain);
    add_test("test_CTX_set1_get1_caPubs",test_CTX_set1_get1_caPubs);
    add_test("test_CTX_set1_get1_extraCertsIn",test_CTX_set1_get1_extraCertsIn);
    add_test("test_CTX_set1_get0_transactionID",test_CTX_set1_get0_transactionID);
    add_test("test_CTX_set1_get0_senderNonce",test_CTX_set1_get0_senderNonce);
    add_test("test_CTX_set1_get0_recipNonce",test_CTX_set1_get0_recipNonce);
    return 1;
  }
  test_error("test/cmp_ctx_test.c",0x331,"Error parsing test options\n");
  return 0;
}



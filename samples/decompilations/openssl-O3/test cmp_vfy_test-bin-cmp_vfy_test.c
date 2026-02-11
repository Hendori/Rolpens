
undefined4 allow_unprotected(void)

{
  undefined4 in_ECX;
  
  return in_ECX;
}



bool execute_msg_check_test(long param_1)

{
  ASN1_OCTET_STRING *b;
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ASN1_OCTET_STRING *a;
  ASN1_OCTET_STRING *a_00;
  
  uVar3 = OSSL_CMP_MSG_get0_header(*(undefined8 *)(param_1 + 0x18));
  a = (ASN1_OCTET_STRING *)OSSL_CMP_HDR_get0_transactionID(uVar3);
  uVar1 = ossl_cmp_msg_check_update
                    (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                     *(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  iVar2 = test_int_eq("test/cmp_vfy_test.c",0x1bf,"fixture->expected",
                      "ossl_cmp_msg_check_update(fixture->cmp_ctx, fixture->msg, fixture->allow_unprotected_cb, fixture->additional_arg)"
                      ,*(undefined4 *)(param_1 + 8),uVar1);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      return true;
    }
    b = *(ASN1_OCTET_STRING **)(*(long *)(param_1 + 0x10) + 0x128);
    a_00 = (ASN1_OCTET_STRING *)ossl_cmp_hdr_get0_senderNonce(uVar3);
    iVar2 = ASN1_OCTET_STRING_cmp(a_00,b);
    iVar2 = test_int_eq("test/cmp_vfy_test.c",0x1c9,&_LC4,
                        "ASN1_OCTET_STRING_cmp(ossl_cmp_hdr_get0_senderNonce(hdr), fixture->cmp_ctx->recipNonce)"
                        ,0,iVar2);
    if (iVar2 != 0) {
      iVar2 = ASN1_OCTET_STRING_cmp(a,*(ASN1_OCTET_STRING **)(*(long *)(param_1 + 0x10) + 0x118));
      iVar2 = test_int_eq("test/cmp_vfy_test.c",0x1cc,&_LC4,
                          "ASN1_OCTET_STRING_cmp(tid, fixture->cmp_ctx->transactionID)",0,iVar2);
      return iVar2 != 0;
    }
  }
  return false;
}



uint execute_validate_msg_test(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = ossl_cmp_msg_check_update
                    (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0,0);
  uVar2 = test_int_eq("test/cmp_vfy_test.c",0x89,"fixture->expected",
                      "ossl_cmp_msg_check_update(fixture->cmp_ctx, fixture->msg, NULL, 0)",
                      *(undefined4 *)(param_1 + 8),uVar1);
  uVar4 = OSSL_CMP_CTX_get0_validatedSrvCert(*(undefined8 *)(param_1 + 0x10));
  if ((uVar2 != 0) && (uVar2 = 1, *(int *)(param_1 + 8) != 0)) {
    iVar3 = test_ptr_eq("test/cmp_vfy_test.c",0x8e,"validated","fixture->cert",uVar4,
                        *(undefined8 *)(param_1 + 0x20));
    return (uint)(iVar3 != 0);
  }
  return uVar2;
}



undefined8 execute_verify_popo_test(long param_1)

{
  ASN1_BIT_STRING *a;
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = load_pkimsg(ir_protected_f,libctx);
  *(long *)(param_1 + 0x18) = lVar3;
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
LAB_00100249:
      uVar2 = ossl_cmp_verify_popo
                        (*(undefined8 *)(param_1 + 0x10),lVar3,*(undefined4 *)(param_1 + 0x30));
      uVar4 = test_int_eq("test/cmp_vfy_test.c",0x6f,"fixture->expected",
                          "ossl_cmp_verify_popo(fixture->cmp_ctx, fixture->msg, fixture->additional_arg)"
                          ,*(undefined4 *)(param_1 + 8),uVar2);
      return uVar4;
    }
    lVar3 = OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar3 + 8) + 8),0);
    if (lVar3 != 0) {
      a = *(ASN1_BIT_STRING **)(*(long *)(*(long *)(lVar3 + 8) + 8) + 0x10);
      iVar1 = ASN1_BIT_STRING_get_bit(a,7);
      iVar1 = ASN1_BIT_STRING_set_bit(a,7,(uint)(iVar1 == 0));
      if (iVar1 != 0) {
        lVar3 = *(long *)(param_1 + 0x18);
        goto LAB_00100249;
      }
    }
  }
  return 0;
}



undefined8 * set_up(undefined8 param_1)

{
  time_t t;
  int iVar1;
  undefined8 *ptr;
  X509_STORE *v;
  undefined8 uVar2;
  X509_VERIFY_PARAM *param;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x38,"test/cmp_vfy_test.c",0x39);
  iVar1 = test_ptr("test/cmp_vfy_test.c",0x39,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  if (iVar1 != 0) {
    v = X509_STORE_new();
    *ptr = param_1;
    if (v != (X509_STORE *)0x0) {
      uVar2 = OSSL_CMP_CTX_new(libctx,0);
      ptr[2] = uVar2;
      iVar1 = test_ptr("test/cmp_vfy_test.c",0x3f,
                       "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar2);
      if (iVar1 != 0) {
        iVar1 = OSSL_CMP_CTX_set0_trustedStore(ptr[2],v);
        if (iVar1 != 0) {
          iVar1 = OSSL_CMP_CTX_set_log_cb(ptr[2],&print_to_bio_out);
          t = test_time_valid;
          if (iVar1 != 0) {
            param = (X509_VERIFY_PARAM *)X509_STORE_get0_param(v);
            X509_VERIFY_PARAM_set_time(param,t);
            X509_STORE_set_verify_cb(v,(verify_cb *)&X509_STORE_CTX_print_verify_cb);
            return ptr;
          }
        }
      }
    }
    OSSL_CMP_MSG_free(ptr[3]);
    OSSL_CMP_CTX_free(ptr[2]);
    CRYPTO_free(ptr);
    X509_STORE_free(v);
  }
  return (undefined8 *)0x0;
}



undefined4 test_validate_msg_unprotected_request(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  undefined8 uVar3;
  
  ptr = (void *)set_up("test_validate_msg_unprotected_request");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 0;
    uVar3 = load_pkimsg(ir_unprotected_f,libctx);
    *(undefined8 *)((long)ptr + 0x18) = uVar3;
    iVar1 = test_ptr("test/cmp_vfy_test.c",0x187,
                     "fixture->msg = load_pkimsg(ir_unprotected_f, libctx)",uVar3);
    if (iVar1 != 0) {
      uVar2 = execute_validate_msg_test(ptr);
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
      CRYPTO_free(ptr);
      return uVar2;
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_msg_signature_sender_cert_absent(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  undefined8 uVar3;
  
  ptr = (void *)set_up("test_validate_msg_signature_sender_cert_absent");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 0;
    uVar3 = load_pkimsg(ir_protected_0_extracerts,libctx);
    *(undefined8 *)((long)ptr + 0x18) = uVar3;
    iVar1 = test_ptr("test/cmp_vfy_test.c",0x15f,
                     "fixture->msg = load_pkimsg(ir_protected_0_extracerts, libctx)",uVar3);
    if (iVar1 != 0) {
      uVar2 = execute_validate_msg_test(ptr);
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
      CRYPTO_free(ptr);
      return uVar2;
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_msg_signature_unexpected_sender(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  X509_NAME *pXVar5;
  void *ptr;
  undefined8 uVar6;
  
  pXVar5 = X509_get_subject_name(root);
  ptr = (void *)set_up("test_validate_with_sender");
  uVar1 = libctx;
  uVar6 = srvcert;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 0;
    uVar2 = ir_protected_f;
    *(undefined8 *)((long)ptr + 0x20) = uVar6;
    uVar6 = load_pkimsg(uVar2,uVar1);
    *(undefined8 *)((long)ptr + 0x18) = uVar6;
    iVar3 = test_ptr("test/cmp_vfy_test.c",0x16e,
                     "fixture->msg = load_pkimsg(ir_protected_f, libctx)",uVar6);
    if (iVar3 != 0) {
      iVar3 = OSSL_CMP_CTX_set1_expected_sender(*(undefined8 *)((long)ptr + 0x10),pXVar5);
      iVar3 = test_true("test/cmp_vfy_test.c",0x16f,
                        "OSSL_CMP_CTX_set1_expected_sender(fixture->cmp_ctx, name)",iVar3 != 0);
      if (iVar3 != 0) {
        iVar3 = OSSL_CMP_CTX_set1_srvCert(*(undefined8 *)((long)ptr + 0x10),srvcert);
        iVar3 = test_true("test/cmp_vfy_test.c",0x170,
                          "OSSL_CMP_CTX_set1_srvCert(fixture->cmp_ctx, srvcert)",iVar3 != 0);
        if (iVar3 != 0) {
          uVar4 = execute_validate_msg_test(ptr);
          OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
          OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
          CRYPTO_free(ptr);
          return uVar4;
        }
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_verify_popo_bad(void)

{
  undefined4 uVar1;
  void *ptr;
  
  uVar1 = 0;
  ptr = (void *)set_up("test_verify_popo_bad");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 0;
    uVar1 = execute_verify_popo_test(ptr);
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return uVar1;
}



undefined4 test_verify_popo(void)

{
  undefined4 uVar1;
  void *ptr;
  
  uVar1 = 0;
  ptr = (void *)set_up("test_verify_popo");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    uVar1 = execute_verify_popo_test(ptr);
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return uVar1;
}



undefined4 test_msg_check_no_protection_permissive_cb(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  void *ptr;
  long lVar3;
  
  ptr = (void *)set_up("test_msg_check_no_protection_permissive_cb");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    uVar1 = ir_rmprotection;
    *(undefined8 *)((long)ptr + 0x28) = 0x100000;
    *(undefined4 *)((long)ptr + 0x30) = 1;
    lVar3 = OSSL_CMP_MSG_dup(uVar1);
    *(long *)((long)ptr + 0x18) = lVar3;
    if (lVar3 != 0) {
      uVar2 = execute_msg_check_test(ptr);
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
      CRYPTO_free(ptr);
      return uVar2;
    }
    OSSL_CMP_MSG_free(0);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_msg_check_no_protection_no_cb(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  void *ptr;
  long lVar3;
  
  ptr = (void *)set_up("test_msg_check_no_protection_no_cb");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 0;
    uVar1 = ir_rmprotection;
    *(undefined8 *)((long)ptr + 0x28) = 0;
    *(undefined4 *)((long)ptr + 0x30) = 0;
    lVar3 = OSSL_CMP_MSG_dup(uVar1);
    *(long *)((long)ptr + 0x18) = lVar3;
    if (lVar3 != 0) {
      uVar2 = execute_msg_check_test(ptr);
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
      CRYPTO_free(ptr);
      return uVar2;
    }
    OSSL_CMP_MSG_free(0);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_msg_check_no_protection_restrictive_cb(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  void *ptr;
  long lVar3;
  
  ptr = (void *)set_up("test_msg_check_no_protection_restrictive_cb");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 0;
    uVar1 = ir_rmprotection;
    *(undefined8 *)((long)ptr + 0x28) = 0x100000;
    *(undefined4 *)((long)ptr + 0x30) = 0;
    lVar3 = OSSL_CMP_MSG_dup(uVar1);
    *(long *)((long)ptr + 0x18) = lVar3;
    if (lVar3 != 0) {
      uVar2 = execute_msg_check_test(ptr);
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
      CRYPTO_free(ptr);
      return uVar2;
    }
    OSSL_CMP_MSG_free(0);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_msg_check_recipient_nonce_bad(void)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *ptr;
  long lVar5;
  
  ptr = (void *)set_up("test_msg_check_recipient_nonce_bad");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 0;
    lVar1 = *(long *)((long)ptr + 0x10);
    *(undefined8 *)((long)ptr + 0x28) = 0x100000;
    uVar2 = ir_rmprotection;
    *(undefined4 *)((long)ptr + 0x30) = 1;
    lVar5 = OSSL_CMP_MSG_dup(uVar2);
    *(long *)((long)ptr + 0x18) = lVar5;
    if (lVar5 != 0) {
      iVar3 = ossl_cmp_asn1_octet_string_set1_bytes(lVar1 + 0x120,rand_data,0x10);
      if (iVar3 != 0) {
        uVar4 = execute_msg_check_test(ptr);
        OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
        CRYPTO_free(ptr);
        return uVar4;
      }
      lVar5 = *(long *)((long)ptr + 0x18);
    }
    OSSL_CMP_MSG_free(lVar5);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_msg_check_recipient_nonce(void)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *ptr;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = __LC17;
  uStack_30 = _UNK_001044a8;
  ptr = (void *)set_up("test_msg_check_recipient_nonce");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    lVar1 = *(long *)((long)ptr + 0x10);
    *(undefined8 *)((long)ptr + 0x28) = 0x100000;
    uVar2 = ir_rmprotection;
    *(undefined4 *)((long)ptr + 0x30) = 1;
    lVar5 = OSSL_CMP_MSG_dup(uVar2);
    *(long *)((long)ptr + 0x18) = lVar5;
    if (lVar5 != 0) {
      iVar3 = ossl_cmp_asn1_octet_string_set1_bytes(lVar1 + 0x120,&local_38,0x10);
      if (iVar3 != 0) {
        uVar4 = execute_msg_check_test(ptr);
        OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
        CRYPTO_free(ptr);
        goto LAB_00100b58;
      }
      lVar5 = *(long *)((long)ptr + 0x18);
    }
    OSSL_CMP_MSG_free(lVar5);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  uVar4 = 0;
LAB_00100b58:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 test_validate_cert_path_ok(void)

{
  X509 *x;
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  X509_STORE *ctx;
  undefined8 uVar3;
  undefined8 uVar4;
  
  ptr = (void *)set_up("test_validate_cert_path_ok");
  uVar4 = endentity2;
  x = root;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    *(undefined8 *)((long)ptr + 0x20) = uVar4;
    ctx = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
    iVar1 = X509_STORE_add_cert(ctx,x);
    uVar4 = endentity1;
    if (iVar1 != 0) {
      uVar3 = OSSL_CMP_CTX_get0_untrusted(*(undefined8 *)((long)ptr + 0x10));
      iVar1 = X509_add_cert(uVar3,uVar4,1);
      uVar4 = intermediate;
      if (iVar1 != 0) {
        uVar3 = OSSL_CMP_CTX_get0_untrusted(*(undefined8 *)((long)ptr + 0x10));
        iVar1 = X509_add_cert(uVar3,uVar4,1);
        if (iVar1 != 0) {
          uVar4 = OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
          uVar2 = OSSL_CMP_validate_cert_path
                            (*(undefined8 *)((long)ptr + 0x10),uVar4,
                             *(undefined8 *)((long)ptr + 0x20));
          uVar2 = test_int_eq("test/cmp_vfy_test.c",0x94,"fixture->expected",
                              "OSSL_CMP_validate_cert_path(fixture->cmp_ctx, ts, fixture->cert)",
                              *(undefined4 *)((long)ptr + 8),uVar2);
          OSSL_CMP_CTX_print_errors(*(undefined8 *)((long)ptr + 0x10));
          OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
          OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
          CRYPTO_free(ptr);
          return uVar2;
        }
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_cert_path_wrong_anchor(void)

{
  X509 *pXVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  X509_STORE *ctx;
  undefined8 uVar4;
  undefined8 uVar5;
  X509 *x;
  
  ptr = (void *)set_up("test_validate_cert_path_wrong_anchor");
  pXVar1 = srvcert;
  if (ptr != (void *)0x0) {
    *(undefined8 *)((long)ptr + 0x20) = endentity2;
    x = pXVar1;
    if (pXVar1 == (X509 *)0x0) {
      x = root;
    }
    *(uint *)((long)ptr + 8) = (uint)(pXVar1 == (X509 *)0x0);
    ctx = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
    iVar2 = X509_STORE_add_cert(ctx,x);
    uVar5 = endentity1;
    if (iVar2 != 0) {
      uVar4 = OSSL_CMP_CTX_get0_untrusted(*(undefined8 *)((long)ptr + 0x10));
      iVar2 = X509_add_cert(uVar4,uVar5,1);
      uVar5 = intermediate;
      if (iVar2 != 0) {
        uVar4 = OSSL_CMP_CTX_get0_untrusted(*(undefined8 *)((long)ptr + 0x10));
        iVar2 = X509_add_cert(uVar4,uVar5,1);
        if (iVar2 != 0) {
          uVar5 = OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
          uVar3 = OSSL_CMP_validate_cert_path
                            (*(undefined8 *)((long)ptr + 0x10),uVar5,
                             *(undefined8 *)((long)ptr + 0x20));
          uVar3 = test_int_eq("test/cmp_vfy_test.c",0x94,"fixture->expected",
                              "OSSL_CMP_validate_cert_path(fixture->cmp_ctx, ts, fixture->cert)",
                              *(undefined4 *)((long)ptr + 8),uVar3);
          OSSL_CMP_CTX_print_errors(*(undefined8 *)((long)ptr + 0x10));
          OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
          OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
          CRYPTO_free(ptr);
          return uVar3;
        }
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_cert_path_expired(void)

{
  X509 *x;
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  undefined8 uVar3;
  X509_VERIFY_PARAM *param;
  X509_STORE *ctx;
  undefined8 uVar4;
  
  ptr = (void *)set_up("test_validate_cert_path_expired");
  uVar3 = endentity2;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 0;
    *(undefined8 *)((long)ptr + 0x20) = uVar3;
    uVar3 = OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
    param = (X509_VERIFY_PARAM *)X509_STORE_get0_param(uVar3);
    X509_VERIFY_PARAM_set_time(param,test_time_after_expiration);
    x = root;
    ctx = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
    iVar1 = X509_STORE_add_cert(ctx,x);
    uVar3 = endentity1;
    if (iVar1 != 0) {
      uVar4 = OSSL_CMP_CTX_get0_untrusted(*(undefined8 *)((long)ptr + 0x10));
      iVar1 = X509_add_cert(uVar4,uVar3,1);
      uVar3 = intermediate;
      if (iVar1 != 0) {
        uVar4 = OSSL_CMP_CTX_get0_untrusted(*(undefined8 *)((long)ptr + 0x10));
        iVar1 = X509_add_cert(uVar4,uVar3,1);
        if (iVar1 != 0) {
          uVar3 = OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
          uVar2 = OSSL_CMP_validate_cert_path
                            (*(undefined8 *)((long)ptr + 0x10),uVar3,
                             *(undefined8 *)((long)ptr + 0x20));
          uVar2 = test_int_eq("test/cmp_vfy_test.c",0x94,"fixture->expected",
                              "OSSL_CMP_validate_cert_path(fixture->cmp_ctx, ts, fixture->cert)",
                              *(undefined4 *)((long)ptr + 8),uVar2);
          OSSL_CMP_CTX_print_errors(*(undefined8 *)((long)ptr + 0x10));
          OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
          OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
          CRYPTO_free(ptr);
          return uVar2;
        }
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_msg_signature_srvcert_wrong(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *ptr;
  undefined8 uVar5;
  
  ptr = (void *)set_up("test_validate_msg_signature_srvcert");
  uVar1 = libctx;
  uVar5 = srvcert;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 0;
    uVar2 = ir_protected_f;
    *(undefined8 *)((long)ptr + 0x20) = uVar5;
    uVar5 = load_pkimsg(uVar2,uVar1);
    *(undefined8 *)((long)ptr + 0x18) = uVar5;
    iVar3 = test_ptr("test/cmp_vfy_test.c",0x108,
                     "fixture->msg = load_pkimsg(ir_protected_f, libctx)",uVar5);
    if (iVar3 != 0) {
      iVar3 = OSSL_CMP_CTX_set1_srvCert(*(undefined8 *)((long)ptr + 0x10),clcert);
      iVar3 = test_true("test/cmp_vfy_test.c",0x109,
                        "miss ? OSSL_CMP_CTX_set1_secretValue(fixture->cmp_ctx, sec_1, sizeof(sec_1)) : OSSL_CMP_CTX_set1_srvCert(fixture->cmp_ctx, wrong? clcert : srvcert)"
                        ,iVar3 != 0);
      if (iVar3 != 0) {
        uVar4 = execute_validate_msg_test(ptr);
        OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
        CRYPTO_free(ptr);
        return uVar4;
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_msg_signature_sender_cert_srvcert(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *ptr;
  undefined8 uVar5;
  
  ptr = (void *)set_up("test_validate_msg_signature_srvcert");
  uVar1 = libctx;
  uVar5 = srvcert;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    uVar2 = ir_protected_f;
    *(undefined8 *)((long)ptr + 0x20) = uVar5;
    uVar5 = load_pkimsg(uVar2,uVar1);
    *(undefined8 *)((long)ptr + 0x18) = uVar5;
    iVar3 = test_ptr("test/cmp_vfy_test.c",0x108,
                     "fixture->msg = load_pkimsg(ir_protected_f, libctx)",uVar5);
    if (iVar3 != 0) {
      iVar3 = OSSL_CMP_CTX_set1_srvCert(*(undefined8 *)((long)ptr + 0x10),srvcert);
      iVar3 = test_true("test/cmp_vfy_test.c",0x109,
                        "miss ? OSSL_CMP_CTX_set1_secretValue(fixture->cmp_ctx, sec_1, sizeof(sec_1)) : OSSL_CMP_CTX_set1_srvCert(fixture->cmp_ctx, wrong? clcert : srvcert)"
                        ,iVar3 != 0);
      if (iVar3 != 0) {
        uVar4 = execute_validate_msg_test(ptr);
        OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
        CRYPTO_free(ptr);
        return uVar4;
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_msg_signature_srvcert_missing(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *ptr;
  undefined8 uVar5;
  
  ptr = (void *)set_up("test_validate_msg_signature_srvcert");
  uVar1 = libctx;
  uVar5 = srvcert;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 0;
    uVar2 = ir_protected_f;
    *(undefined8 *)((long)ptr + 0x20) = uVar5;
    uVar5 = load_pkimsg(uVar2,uVar1);
    *(undefined8 *)((long)ptr + 0x18) = uVar5;
    iVar3 = test_ptr("test/cmp_vfy_test.c",0x108,
                     "fixture->msg = load_pkimsg(ir_protected_f, libctx)",uVar5);
    if (iVar3 != 0) {
      iVar3 = OSSL_CMP_CTX_set1_secretValue(*(undefined8 *)((long)ptr + 0x10),sec_1,0x13);
      iVar3 = test_true("test/cmp_vfy_test.c",0x109,
                        "miss ? OSSL_CMP_CTX_set1_secretValue(fixture->cmp_ctx, sec_1, sizeof(sec_1)) : OSSL_CMP_CTX_set1_srvCert(fixture->cmp_ctx, wrong? clcert : srvcert)"
                        ,iVar3 != 0);
      if (iVar3 != 0) {
        uVar4 = execute_validate_msg_test(ptr);
        OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
        CRYPTO_free(ptr);
        return uVar4;
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_msg_check_transaction_id_bad(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *ptr;
  long lVar5;
  ASN1_OCTET_STRING *str;
  
  ptr = (void *)set_up("test_msg_check_transaction_id_bad");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 0;
    uVar1 = *(undefined8 *)((long)ptr + 0x10);
    *(undefined8 *)((long)ptr + 0x28) = 0x100000;
    uVar2 = ir_rmprotection;
    *(undefined4 *)((long)ptr + 0x30) = 1;
    lVar5 = OSSL_CMP_MSG_dup(uVar2);
    *(long *)((long)ptr + 0x18) = lVar5;
    if (lVar5 == 0) {
      OSSL_CMP_MSG_free(0);
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
      CRYPTO_free(ptr);
    }
    else {
      str = ASN1_OCTET_STRING_new();
      if (str != (ASN1_OCTET_STRING *)0x0) {
        iVar3 = ASN1_OCTET_STRING_set(str,rand_data,0x10);
        if (iVar3 != 0) {
          iVar3 = OSSL_CMP_CTX_set1_transactionID(uVar1,str);
          if (iVar3 != 0) {
            ASN1_OCTET_STRING_free(str);
            uVar4 = execute_msg_check_test(ptr);
            OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
            OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
            CRYPTO_free(ptr);
            return uVar4;
          }
        }
      }
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
      CRYPTO_free(ptr);
      ASN1_OCTET_STRING_free(str);
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_msg_check_transaction_id(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *ptr;
  long lVar5;
  ASN1_OCTET_STRING *str;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = __LC20;
  uStack_30 = _UNK_001044b8;
  ptr = (void *)set_up("test_msg_check_transaction_id");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    uVar1 = *(undefined8 *)((long)ptr + 0x10);
    *(undefined8 *)((long)ptr + 0x28) = 0x100000;
    uVar2 = ir_rmprotection;
    *(undefined4 *)((long)ptr + 0x30) = 1;
    lVar5 = OSSL_CMP_MSG_dup(uVar2);
    *(long *)((long)ptr + 0x18) = lVar5;
    if (lVar5 == 0) {
      OSSL_CMP_MSG_free(0);
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
      CRYPTO_free(ptr);
    }
    else {
      str = ASN1_OCTET_STRING_new();
      if (str != (ASN1_OCTET_STRING *)0x0) {
        iVar3 = ASN1_OCTET_STRING_set(str,(uchar *)&local_38,0x10);
        if (iVar3 != 0) {
          iVar3 = OSSL_CMP_CTX_set1_transactionID(uVar1,str);
          if (iVar3 != 0) {
            ASN1_OCTET_STRING_free(str);
            uVar4 = execute_msg_check_test(ptr);
            OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
            OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
            CRYPTO_free(ptr);
            goto LAB_001014d7;
          }
        }
      }
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
      CRYPTO_free(ptr);
      ASN1_OCTET_STRING_free(str);
    }
  }
  uVar4 = 0;
LAB_001014d7:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 test_validate_msg_signature_bad(void)

{
  ASN1_BIT_STRING *a;
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *ptr;
  undefined8 uVar5;
  
  ptr = (void *)set_up("test_validate_msg_signature_srvcert");
  uVar1 = libctx;
  uVar5 = srvcert;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 0;
    uVar2 = ir_protected_f;
    *(undefined8 *)((long)ptr + 0x20) = uVar5;
    uVar5 = load_pkimsg(uVar2,uVar1);
    *(undefined8 *)((long)ptr + 0x18) = uVar5;
    iVar3 = test_ptr("test/cmp_vfy_test.c",0x108,
                     "fixture->msg = load_pkimsg(ir_protected_f, libctx)",uVar5);
    if (iVar3 != 0) {
      iVar3 = OSSL_CMP_CTX_set1_srvCert(*(undefined8 *)((long)ptr + 0x10),srvcert);
      iVar3 = test_true("test/cmp_vfy_test.c",0x109,
                        "miss ? OSSL_CMP_CTX_set1_secretValue(fixture->cmp_ctx, sec_1, sizeof(sec_1)) : OSSL_CMP_CTX_set1_srvCert(fixture->cmp_ctx, wrong? clcert : srvcert)"
                        ,iVar3 != 0);
      if (iVar3 != 0) {
        a = *(ASN1_BIT_STRING **)(*(long *)((long)ptr + 0x18) + 0x10);
        iVar3 = ASN1_BIT_STRING_get_bit(a,7);
        iVar3 = ASN1_BIT_STRING_set_bit(a,7,(uint)(iVar3 == 0));
        if (iVar3 != 0) {
          uVar4 = execute_validate_msg_test(ptr);
          OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
          OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
          CRYPTO_free(ptr);
          return uVar4;
        }
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_msg_mac_alg_protection_missing(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  undefined8 uVar3;
  
  ptr = (void *)set_up("test_validate_msg_mac_alg_protection");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 0;
    *(undefined8 *)((long)ptr + 0x20) = 0;
    iVar1 = OSSL_CMP_CTX_set0_trustedStore(*(undefined8 *)((long)ptr + 0x10),0);
    iVar1 = test_true("test/cmp_vfy_test.c",0xa2,
                      "miss ? OSSL_CMP_CTX_set0_trusted(fixture->cmp_ctx, NULL) : OSSL_CMP_CTX_set1_secretValue(fixture->cmp_ctx, sec_1, wrong ? 4 : sizeof(sec_1))"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      uVar3 = load_pkimsg(ip_waiting_f,libctx);
      *(undefined8 *)((long)ptr + 0x18) = uVar3;
      iVar1 = test_ptr("test/cmp_vfy_test.c",0xa5,"fixture->msg = load_pkimsg(ip_waiting_f, libctx)"
                       ,uVar3);
      if (iVar1 != 0) {
        uVar2 = execute_validate_msg_test(ptr);
        OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
        CRYPTO_free(ptr);
        return uVar2;
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_msg_mac_alg_protection_ok(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  undefined8 uVar3;
  
  ptr = (void *)set_up("test_validate_msg_mac_alg_protection");
  if (ptr != (void *)0x0) {
    *(undefined8 *)((long)ptr + 0x20) = 0;
    *(undefined4 *)((long)ptr + 8) = 1;
    iVar1 = OSSL_CMP_CTX_set1_secretValue(*(undefined8 *)((long)ptr + 0x10),sec_1,0x13);
    iVar1 = test_true("test/cmp_vfy_test.c",0xa2,
                      "miss ? OSSL_CMP_CTX_set0_trusted(fixture->cmp_ctx, NULL) : OSSL_CMP_CTX_set1_secretValue(fixture->cmp_ctx, sec_1, wrong ? 4 : sizeof(sec_1))"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      uVar3 = load_pkimsg(ip_waiting_f,libctx);
      *(undefined8 *)((long)ptr + 0x18) = uVar3;
      iVar1 = test_ptr("test/cmp_vfy_test.c",0xa5,"fixture->msg = load_pkimsg(ip_waiting_f, libctx)"
                       ,uVar3);
      if (iVar1 != 0) {
        uVar2 = execute_validate_msg_test(ptr);
        OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
        CRYPTO_free(ptr);
        return uVar2;
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_msg_mac_alg_protection_wrong(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  undefined8 uVar3;
  
  ptr = (void *)set_up("test_validate_msg_mac_alg_protection");
  if (ptr != (void *)0x0) {
    *(undefined8 *)((long)ptr + 0x20) = 0;
    *(undefined4 *)((long)ptr + 8) = 0;
    iVar1 = OSSL_CMP_CTX_set1_secretValue(*(undefined8 *)((long)ptr + 0x10),sec_1,4);
    iVar1 = test_true("test/cmp_vfy_test.c",0xa2,
                      "miss ? OSSL_CMP_CTX_set0_trusted(fixture->cmp_ctx, NULL) : OSSL_CMP_CTX_set1_secretValue(fixture->cmp_ctx, sec_1, wrong ? 4 : sizeof(sec_1))"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      uVar3 = load_pkimsg(ip_waiting_f,libctx);
      *(undefined8 *)((long)ptr + 0x18) = uVar3;
      iVar1 = test_ptr("test/cmp_vfy_test.c",0xa5,"fixture->msg = load_pkimsg(ip_waiting_f, libctx)"
                       ,uVar3);
      if (iVar1 != 0) {
        uVar2 = execute_validate_msg_test(ptr);
        OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
        CRYPTO_free(ptr);
        return uVar2;
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_validate_msg_mac_alg_protection_bad(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined7 uStack_30;
  undefined4 uStack_29;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = __LC24;
  uStack_30 = (undefined7)_UNK_001044c8;
  uStack_29 = 0x724e6475;
  ptr = (void *)set_up("test_validate_msg_mac_alg_protection_bad");
  if (ptr != (void *)0x0) {
    *(undefined8 *)((long)ptr + 0x20) = 0;
    *(undefined4 *)((long)ptr + 8) = 0;
    iVar1 = OSSL_CMP_CTX_set1_secretValue(*(undefined8 *)((long)ptr + 0x10),&local_38,0x13);
    iVar1 = test_true("test/cmp_vfy_test.c",200,
                      "OSSL_CMP_CTX_set1_secretValue(fixture->cmp_ctx, sec_bad, sizeof(sec_bad))",
                      iVar1 != 0);
    if (iVar1 != 0) {
      uVar3 = load_pkimsg(ip_waiting_f,libctx);
      *(undefined8 *)((long)ptr + 0x18) = uVar3;
      iVar1 = test_ptr("test/cmp_vfy_test.c",0xca,"fixture->msg = load_pkimsg(ip_waiting_f, libctx)"
                       ,uVar3);
      if (iVar1 != 0) {
        uVar2 = execute_validate_msg_test(ptr);
        OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
        CRYPTO_free(ptr);
        goto LAB_00101a8f;
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  uVar2 = 0;
LAB_00101a8f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 test_validate_msg_signature_sender_cert_extracert(void)

{
  X509 *x;
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  undefined8 uVar3;
  X509_STORE *ctx;
  
  ptr = (void *)set_up("test_validate_msg_signature_sender_cert_extracert");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    uVar3 = load_pkimsg(ir_protected_2_extracerts,libctx);
    *(undefined8 *)((long)ptr + 0x18) = uVar3;
    iVar1 = test_ptr("test/cmp_vfy_test.c",0x14f,
                     "fixture->msg = load_pkimsg(ir_protected_2_extracerts, libctx)",uVar3);
    x = instaca_cert;
    if (iVar1 != 0) {
      ctx = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
      iVar1 = X509_STORE_add_cert(ctx,x);
      if (iVar1 != 0) {
        uVar3 = OPENSSL_sk_value(*(undefined8 *)(*(long *)((long)ptr + 0x18) + 0x18),1);
        *(undefined8 *)((long)ptr + 0x20) = uVar3;
        uVar2 = execute_validate_msg_test(ptr);
        OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
        CRYPTO_free(ptr);
        return uVar2;
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_msg_signature_trusted_ok(void)

{
  X509 *x;
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  long lVar3;
  undefined8 uVar4;
  X509_STORE *ctx;
  X509_VERIFY_PARAM *param;
  
  ptr = (void *)set_up("test_validate_msg_signature_partial_chain");
  if (ptr != (void *)0x0) {
    *(X509 **)((long)ptr + 0x20) = srvcert;
    lVar3 = OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
    *(undefined4 *)((long)ptr + 8) = 1;
    if (lVar3 != 0) {
      uVar4 = load_pkimsg(ir_protected_f,libctx);
      *(undefined8 *)((long)ptr + 0x18) = uVar4;
      iVar1 = test_ptr("test/cmp_vfy_test.c",0xe8,
                       "fixture->msg = load_pkimsg(ir_protected_f, libctx)",uVar4);
      x = srvcert;
      if (iVar1 != 0) {
        ctx = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
        iVar1 = X509_STORE_add_cert(ctx,x);
        if (iVar1 != 0) {
          param = (X509_VERIFY_PARAM *)X509_STORE_get0_param(lVar3);
          X509_VERIFY_PARAM_set_flags(param,0x80000);
          uVar2 = execute_validate_msg_test(ptr);
          OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
          OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
          CRYPTO_free(ptr);
          return uVar2;
        }
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_msg_signature_trusted_expired(void)

{
  X509 *x;
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  long lVar3;
  undefined8 uVar4;
  X509_STORE *ctx;
  X509_VERIFY_PARAM *param;
  
  ptr = (void *)set_up("test_validate_msg_signature_partial_chain");
  if (ptr != (void *)0x0) {
    *(X509 **)((long)ptr + 0x20) = srvcert;
    lVar3 = OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
    *(undefined4 *)((long)ptr + 8) = 0;
    if (lVar3 != 0) {
      uVar4 = load_pkimsg(ir_protected_f,libctx);
      *(undefined8 *)((long)ptr + 0x18) = uVar4;
      iVar1 = test_ptr("test/cmp_vfy_test.c",0xe8,
                       "fixture->msg = load_pkimsg(ir_protected_f, libctx)",uVar4);
      x = srvcert;
      if (iVar1 != 0) {
        ctx = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
        iVar1 = X509_STORE_add_cert(ctx,x);
        if (iVar1 != 0) {
          param = (X509_VERIFY_PARAM *)X509_STORE_get0_param(lVar3);
          X509_VERIFY_PARAM_set_flags(param,0x80000);
          X509_VERIFY_PARAM_set_time(param,test_time_after_expiration);
          uVar2 = execute_validate_msg_test(ptr);
          OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
          OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
          CRYPTO_free(ptr);
          return uVar2;
        }
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_msg_signature_sender_cert_trusted(void)

{
  X509 *pXVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *ptr;
  undefined8 uVar5;
  X509_STORE *pXVar6;
  
  ptr = (void *)set_up("test_validate_msg_signature_sender_cert_trusted");
  uVar5 = libctx;
  pXVar1 = insta_cert;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    uVar2 = ir_protected_0_extracerts;
    *(X509 **)((long)ptr + 0x20) = pXVar1;
    uVar5 = load_pkimsg(uVar2,uVar5);
    *(undefined8 *)((long)ptr + 0x18) = uVar5;
    iVar3 = test_ptr("test/cmp_vfy_test.c",0x141,
                     "fixture->msg = load_pkimsg(ir_protected_0_extracerts, libctx)",uVar5);
    pXVar1 = instaca_cert;
    if (iVar3 != 0) {
      pXVar6 = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
      iVar3 = X509_STORE_add_cert(pXVar6,pXVar1);
      pXVar1 = insta_cert;
      if (iVar3 != 0) {
        pXVar6 = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
        iVar3 = X509_STORE_add_cert(pXVar6,pXVar1);
        if (iVar3 != 0) {
          uVar4 = execute_validate_msg_test(ptr);
          OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
          OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
          CRYPTO_free(ptr);
          return uVar4;
        }
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_msg_signature_sender_cert_untrusted(void)

{
  X509 *x;
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  X509_STORE *ctx;
  undefined8 uVar5;
  
  ptr = (void *)set_up("test_validate_msg_signature_sender_cert_untrusted");
  uVar5 = libctx;
  uVar4 = insta_cert;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    uVar1 = ir_protected_0_extracerts;
    *(undefined8 *)((long)ptr + 0x20) = uVar4;
    uVar4 = load_pkimsg(uVar1,uVar5);
    *(undefined8 *)((long)ptr + 0x18) = uVar4;
    iVar2 = test_ptr("test/cmp_vfy_test.c",0x132,
                     "fixture->msg = load_pkimsg(ir_protected_0_extracerts, libctx)",uVar4);
    x = instaca_cert;
    if (iVar2 != 0) {
      ctx = (X509_STORE *)OSSL_CMP_CTX_get0_trustedStore(*(undefined8 *)((long)ptr + 0x10));
      iVar2 = X509_STORE_add_cert(ctx,x);
      uVar4 = insta_cert;
      if (iVar2 != 0) {
        uVar5 = OSSL_CMP_CTX_get0_untrusted(*(undefined8 *)((long)ptr + 0x10));
        iVar2 = X509_add_cert(uVar5,uVar4,1);
        if (iVar2 != 0) {
          uVar3 = execute_validate_msg_test(ptr);
          OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
          OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
          CRYPTO_free(ptr);
          return uVar3;
        }
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_validate_msg_signature_expected_sender(void)

{
  X509 *pXVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  X509_NAME *pXVar5;
  void *ptr;
  undefined8 uVar6;
  
  pXVar5 = X509_get_subject_name(srvcert);
  ptr = (void *)set_up("test_validate_with_sender");
  uVar6 = libctx;
  pXVar1 = srvcert;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    uVar2 = ir_protected_f;
    *(X509 **)((long)ptr + 0x20) = pXVar1;
    uVar6 = load_pkimsg(uVar2,uVar6);
    *(undefined8 *)((long)ptr + 0x18) = uVar6;
    iVar3 = test_ptr("test/cmp_vfy_test.c",0x16e,
                     "fixture->msg = load_pkimsg(ir_protected_f, libctx)",uVar6);
    if (iVar3 != 0) {
      iVar3 = OSSL_CMP_CTX_set1_expected_sender(*(undefined8 *)((long)ptr + 0x10),pXVar5);
      iVar3 = test_true("test/cmp_vfy_test.c",0x16f,
                        "OSSL_CMP_CTX_set1_expected_sender(fixture->cmp_ctx, name)",iVar3 != 0);
      if (iVar3 != 0) {
        iVar3 = OSSL_CMP_CTX_set1_srvCert(*(undefined8 *)((long)ptr + 0x10),srvcert);
        iVar3 = test_true("test/cmp_vfy_test.c",0x170,
                          "OSSL_CMP_CTX_set1_srvCert(fixture->cmp_ctx, srvcert)",iVar3 != 0);
        if (iVar3 != 0) {
          uVar4 = execute_validate_msg_test(ptr);
          OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
          OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
          CRYPTO_free(ptr);
          return uVar4;
        }
      }
    }
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x18));
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
  }
  return 0;
}



void cleanup_tests(void)

{
  X509_free(srvcert);
  X509_free(clcert);
  X509_free(endentity1);
  X509_free(endentity2);
  X509_free(intermediate);
  X509_free(root);
  X509_free(insta_cert);
  X509_free(instaca_cert);
  OSSL_CMP_MSG_free(ir_unprotected);
  OSSL_CMP_MSG_free(ir_rmprotection);
  OSSL_PROVIDER_unload(default_null_provider);
  OSSL_PROVIDER_unload(provider);
  OSSL_LIB_CTX_free(libctx);
  return;
}



undefined1 * test_get_options(void)

{
  return options_22;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_58 [12];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = SUB1612((undefined1  [16])0x0,0);
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (char *)0x0;
  iStack_44 = 0x76;
  iStack_4c = (int)_LC26;
  iStack_48 = (int)((ulong)_LC26 >> 0x20);
  test_time_valid = mktime((tm *)local_58);
  iStack_44 = iStack_44 + 10;
  test_time_after_expiration = mktime((tm *)local_58);
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/cmp_vfy_test.c",0x26a,"Error parsing test options\n");
  }
  else {
    RAND_bytes(rand_data,0x10);
    server_f = test_get_argument(0);
    iVar1 = test_ptr("test/cmp_vfy_test.c",0x26f,"server_f = test_get_argument(0)",server_f);
    if (iVar1 != 0) {
      client_f = test_get_argument(1);
      iVar1 = test_ptr("test/cmp_vfy_test.c",0x270,"client_f = test_get_argument(1)",client_f);
      if (iVar1 != 0) {
        endentity1_f = test_get_argument(2);
        iVar1 = test_ptr("test/cmp_vfy_test.c",0x271,"endentity1_f = test_get_argument(2)",
                         endentity1_f);
        if (iVar1 != 0) {
          endentity2_f = test_get_argument(3);
          iVar1 = test_ptr("test/cmp_vfy_test.c",0x272,"endentity2_f = test_get_argument(3)",
                           endentity2_f);
          if (iVar1 != 0) {
            root_f = test_get_argument(4);
            iVar1 = test_ptr("test/cmp_vfy_test.c",0x273,"root_f = test_get_argument(4)",root_f);
            if (iVar1 != 0) {
              intermediate_f = test_get_argument(5);
              iVar1 = test_ptr("test/cmp_vfy_test.c",0x274,"intermediate_f = test_get_argument(5)",
                               intermediate_f);
              if (iVar1 != 0) {
                ir_protected_f = test_get_argument(6);
                iVar1 = test_ptr("test/cmp_vfy_test.c",0x275,"ir_protected_f = test_get_argument(6)"
                                 ,ir_protected_f);
                if (iVar1 != 0) {
                  ir_unprotected_f = test_get_argument(7);
                  iVar1 = test_ptr("test/cmp_vfy_test.c",0x276,
                                   "ir_unprotected_f = test_get_argument(7)",ir_unprotected_f);
                  if (iVar1 != 0) {
                    ip_waiting_f = test_get_argument(8);
                    iVar1 = test_ptr("test/cmp_vfy_test.c",0x277,
                                     "ip_waiting_f = test_get_argument(8)",ip_waiting_f);
                    if (iVar1 != 0) {
                      ir_rmprotection_f = test_get_argument(9);
                      iVar1 = test_ptr("test/cmp_vfy_test.c",0x278,
                                       "ir_rmprotection_f = test_get_argument(9)",ir_rmprotection_f)
                      ;
                      if (iVar1 != 0) {
                        instacert_f = test_get_argument(10);
                        iVar1 = test_ptr("test/cmp_vfy_test.c",0x279,
                                         "instacert_f = test_get_argument(10)",instacert_f);
                        if (iVar1 != 0) {
                          instaca_f = test_get_argument(0xb);
                          iVar1 = test_ptr("test/cmp_vfy_test.c",0x27a,
                                           "instaca_f = test_get_argument(11)",instaca_f);
                          if (iVar1 != 0) {
                            ir_protected_0_extracerts = test_get_argument(0xc);
                            iVar1 = test_ptr("test/cmp_vfy_test.c",0x27b,
                                             "ir_protected_0_extracerts = test_get_argument(12)",
                                             ir_protected_0_extracerts);
                            if (iVar1 != 0) {
                              ir_protected_2_extracerts = test_get_argument(0xd);
                              iVar1 = test_ptr("test/cmp_vfy_test.c",0x27c,
                                               "ir_protected_2_extracerts = test_get_argument(13)",
                                               ir_protected_2_extracerts);
                              if (iVar1 != 0) {
                                iVar1 = test_arg_libctx(&libctx,&default_null_provider,&provider,0xe
                                                        ,
                                                  "server.crt client.crt EndEntity1.crt EndEntity2.crt Root_CA.crt Intermediate_CA.crt CMP_IR_protected.der CMP_IR_unprotected.der IP_waitingStatus_PBM.der IR_rmprotection.der insta.cert.pem insta_ca.cert.pem IR_protected_0_extraCerts.der IR_protected_2_extraCerts.der module_name [module_conf_file]\n"
                                                  );
                                if (iVar1 != 0) {
                                  endentity1 = load_cert_pem(endentity1_f,libctx);
                                  iVar1 = test_ptr("test/cmp_vfy_test.c",0x285,
                                                                                                      
                                                  "endentity1 = load_cert_pem(endentity1_f, libctx)"
                                                  ,endentity1);
                                  if (iVar1 != 0) {
                                    endentity2 = load_cert_pem(endentity2_f,libctx);
                                    iVar1 = test_ptr("test/cmp_vfy_test.c",0x286,
                                                                                                          
                                                  "endentity2 = load_cert_pem(endentity2_f, libctx)"
                                                  ,endentity2);
                                    if (iVar1 != 0) {
                                      root = load_cert_pem(root_f,0);
                                      iVar1 = test_ptr("test/cmp_vfy_test.c",0x287,
                                                       "root = load_cert_pem(root_f, NULL)",root);
                                      if (iVar1 != 0) {
                                        intermediate = load_cert_pem(intermediate_f,libctx);
                                        iVar1 = test_ptr("test/cmp_vfy_test.c",0x288,
                                                                                                                  
                                                  "intermediate = load_cert_pem(intermediate_f, libctx)"
                                                  ,intermediate);
                                        if (iVar1 != 0) {
                                          insta_cert = load_cert_pem(instacert_f,libctx);
                                          iVar1 = test_ptr("test/cmp_vfy_test.c",0x28b,
                                                                                                                      
                                                  "insta_cert = load_cert_pem(instacert_f, libctx)",
                                                  insta_cert);
                                          if (iVar1 != 0) {
                                            instaca_cert = load_cert_pem(instaca_f,libctx);
                                            iVar1 = test_ptr("test/cmp_vfy_test.c",0x28c,
                                                                                                                          
                                                  "instaca_cert = load_cert_pem(instaca_f, libctx)",
                                                  instaca_cert);
                                            if (iVar1 != 0) {
                                              srvcert = load_cert_pem(server_f,libctx);
                                              iVar1 = test_ptr("test/cmp_vfy_test.c",0x290,
                                                                                                                              
                                                  "srvcert = load_cert_pem(server_f, libctx)",
                                                  srvcert);
                                              if (iVar1 != 0) {
                                                clcert = load_cert_pem(client_f,libctx);
                                                iVar1 = test_ptr("test/cmp_vfy_test.c",0x291,
                                                                                                                                  
                                                  "clcert = load_cert_pem(client_f, libctx)",clcert)
                                                ;
                                                if (iVar1 != 0) {
                                                  iVar1 = RAND_bytes(rand_data,0x10);
                                                  iVar1 = test_int_eq("test/cmp_vfy_test.c",0x293,
                                                                      &_LC53,
                                                  "RAND_bytes(rand_data, OSSL_CMP_TRANSACTIONID_LENGTH)"
                                                  ,1,iVar1);
                                                  if (iVar1 != 0) {
                                                    ir_unprotected =
                                                         load_pkimsg(ir_unprotected_f,libctx);
                                                    iVar1 = test_ptr("test/cmp_vfy_test.c",0x295,
                                                                                                                                          
                                                  "ir_unprotected = load_pkimsg(ir_unprotected_f, libctx)"
                                                  ,ir_unprotected);
                                                  if (iVar1 != 0) {
                                                    ir_rmprotection =
                                                         load_pkimsg(ir_rmprotection_f,libctx);
                                                    iVar1 = test_ptr("test/cmp_vfy_test.c",0x296,
                                                                                                                                          
                                                  "ir_rmprotection = load_pkimsg(ir_rmprotection_f, libctx)"
                                                  ,ir_rmprotection);
                                                  if (iVar1 != 0) {
                                                    add_test("test_verify_popo",test_verify_popo);
                                                    add_test("test_verify_popo_bad",
                                                             test_verify_popo_bad);
                                                    add_test(
                                                  "test_validate_msg_signature_trusted_ok",
                                                  test_validate_msg_signature_trusted_ok);
                                                  add_test(
                                                  "test_validate_msg_signature_trusted_expired",
                                                  test_validate_msg_signature_trusted_expired);
                                                  add_test(
                                                  "test_validate_msg_signature_srvcert_missing",
                                                  test_validate_msg_signature_srvcert_missing);
                                                  add_test(
                                                  "test_validate_msg_signature_srvcert_wrong",
                                                  test_validate_msg_signature_srvcert_wrong);
                                                  add_test("test_validate_msg_signature_bad",
                                                           test_validate_msg_signature_bad);
                                                  add_test(
                                                  "test_validate_msg_signature_sender_cert_srvcert",
                                                  test_validate_msg_signature_sender_cert_srvcert);
                                                  add_test(
                                                  "test_validate_msg_signature_sender_cert_untrusted"
                                                  ,test_validate_msg_signature_sender_cert_untrusted
                                                  );
                                                  add_test(
                                                  "test_validate_msg_signature_sender_cert_trusted",
                                                  test_validate_msg_signature_sender_cert_trusted);
                                                  add_test(
                                                  "test_validate_msg_signature_sender_cert_extracert"
                                                  ,test_validate_msg_signature_sender_cert_extracert
                                                  );
                                                  add_test(
                                                  "test_validate_msg_signature_sender_cert_absent",
                                                  test_validate_msg_signature_sender_cert_absent);
                                                  add_test(
                                                  "test_validate_msg_signature_expected_sender",
                                                  test_validate_msg_signature_expected_sender);
                                                  add_test(
                                                  "test_validate_msg_signature_unexpected_sender",
                                                  test_validate_msg_signature_unexpected_sender);
                                                  add_test("test_validate_msg_unprotected_request",
                                                           test_validate_msg_unprotected_request);
                                                  add_test("test_validate_msg_mac_alg_protection_ok"
                                                           ,test_validate_msg_mac_alg_protection_ok)
                                                  ;
                                                  add_test(
                                                  "test_validate_msg_mac_alg_protection_missing",
                                                  test_validate_msg_mac_alg_protection_missing);
                                                  add_test(
                                                  "test_validate_msg_mac_alg_protection_wrong",
                                                  test_validate_msg_mac_alg_protection_wrong);
                                                  add_test(
                                                  "test_validate_msg_mac_alg_protection_bad",
                                                  test_validate_msg_mac_alg_protection_bad);
                                                  add_test("test_validate_cert_path_ok",
                                                           test_validate_cert_path_ok);
                                                  add_test("test_validate_cert_path_expired",
                                                           test_validate_cert_path_expired);
                                                  add_test("test_validate_cert_path_wrong_anchor",
                                                           test_validate_cert_path_wrong_anchor);
                                                  add_test("test_msg_check_no_protection_no_cb",
                                                           test_msg_check_no_protection_no_cb);
                                                  add_test(
                                                  "test_msg_check_no_protection_restrictive_cb",
                                                  test_msg_check_no_protection_restrictive_cb);
                                                  add_test(
                                                  "test_msg_check_no_protection_permissive_cb",
                                                  test_msg_check_no_protection_permissive_cb);
                                                  add_test("test_msg_check_transaction_id",
                                                           test_msg_check_transaction_id);
                                                  add_test("test_msg_check_transaction_id_bad",
                                                           test_msg_check_transaction_id_bad);
                                                  add_test("test_msg_check_recipient_nonce",
                                                           test_msg_check_recipient_nonce);
                                                  add_test("test_msg_check_recipient_nonce_bad",
                                                           test_msg_check_recipient_nonce_bad);
                                                  uVar2 = 1;
                                                  goto LAB_0010243f;
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
                                  cleanup_tests();
                                }
                                goto LAB_0010243d;
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
      }
    }
    test_error("test/cmp_vfy_test.c",0x27d,"usage: cmp_vfy_test %s",
               "server.crt client.crt EndEntity1.crt EndEntity2.crt Root_CA.crt Intermediate_CA.crt CMP_IR_protected.der CMP_IR_unprotected.der IP_waitingStatus_PBM.der IR_rmprotection.der insta.cert.pem insta_ca.cert.pem IR_protected_0_extraCerts.der IR_protected_2_extraCerts.der module_name [module_conf_file]\n"
              );
  }
LAB_0010243d:
  uVar2 = 0;
LAB_0010243f:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



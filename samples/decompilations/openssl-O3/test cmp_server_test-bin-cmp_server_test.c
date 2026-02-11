
undefined8 process_cert_request(void)

{
  ERR_new();
  ERR_set_debug("test/cmp_server_test.c",0x3a,"process_cert_request");
  ERR_set_error(0x3a,0x66,0);
  return 0;
}



uint test_handle_request(void)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *ptr;
  undefined8 uVar6;
  char *__s1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x20,"test/cmp_server_test.c",0x23);
  iVar3 = test_ptr("test/cmp_server_test.c",0x23,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar6 = libctx;
  if (iVar3 == 0) {
    return 0;
  }
  *ptr = "test_handle_request";
  uVar6 = OSSL_CMP_SRV_CTX_new(uVar6,0);
  ptr[2] = uVar6;
  iVar3 = test_ptr("test/cmp_server_test.c",0x26,
                   "fixture->srv_ctx = OSSL_CMP_SRV_CTX_new(libctx, NULL)",uVar6);
  uVar6 = request;
  if (iVar3 == 0) {
    OSSL_CMP_SRV_CTX_free(ptr[2]);
    CRYPTO_free(ptr);
    return 0;
  }
  uVar7 = ptr[2];
  *(undefined4 *)(ptr + 1) = 1;
  uVar2 = libctx;
  ptr[3] = uVar6;
  uVar6 = OSSL_CMP_CTX_new(uVar2,0);
  iVar3 = test_ptr("test/cmp_server_test.c",0x48,"client_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar6
                  );
  if (iVar3 != 0) {
    iVar3 = OSSL_CMP_CTX_set_transfer_cb_arg(uVar6,uVar7);
    iVar3 = test_true("test/cmp_server_test.c",0x49,
                      "OSSL_CMP_CTX_set_transfer_cb_arg(client_ctx, ctx)",iVar3 != 0);
    if (iVar3 != 0) {
      iVar3 = OSSL_CMP_SRV_CTX_init(uVar7,"@test_dummy",0x100000,0,0,0,0);
      iVar3 = test_true("test/cmp_server_test.c",0x4c,
                        "OSSL_CMP_SRV_CTX_init(ctx, dummy_custom_ctx, process_cert_request, NULL, NULL, NULL, NULL, NULL)"
                        ,iVar3 != 0);
      if (iVar3 != 0) {
        iVar3 = OSSL_CMP_SRV_CTX_init_trans(uVar7,0,0,0);
        iVar3 = test_true("test/cmp_server_test.c",0x4f,
                          "OSSL_CMP_SRV_CTX_init_trans(ctx, NULL, NULL)",iVar3 != 0);
        if (iVar3 != 0) {
          __s1 = (char *)OSSL_CMP_SRV_CTX_get0_custom_ctx(uVar7);
          iVar3 = test_ptr("test/cmp_server_test.c",0x50,
                           "custom_ctx = OSSL_CMP_SRV_CTX_get0_custom_ctx(ctx)",__s1);
          if (iVar3 != 0) {
            iVar3 = strcmp(__s1,"@test_dummy");
            iVar3 = test_int_eq("test/cmp_server_test.c",0x51,"strcmp(custom_ctx, dummy_custom_ctx)"
                                ,&_LC9,iVar3,0);
            if (iVar3 != 0) {
              iVar3 = OSSL_CMP_SRV_CTX_set_send_unprotected_errors(uVar7,0);
              iVar3 = test_true("test/cmp_server_test.c",0x54,
                                "OSSL_CMP_SRV_CTX_set_send_unprotected_errors(ctx, 0)",iVar3 != 0);
              if (iVar3 != 0) {
                iVar3 = OSSL_CMP_SRV_CTX_set_accept_unprotected(uVar7,0);
                iVar3 = test_true("test/cmp_server_test.c",0x55,
                                  "OSSL_CMP_SRV_CTX_set_accept_unprotected(ctx, 0)",iVar3 != 0);
                if (iVar3 != 0) {
                  iVar3 = OSSL_CMP_SRV_CTX_set_accept_raverified(uVar7,1);
                  iVar3 = test_true("test/cmp_server_test.c",0x56,
                                    "OSSL_CMP_SRV_CTX_set_accept_raverified(ctx, 1)",iVar3 != 0);
                  if (iVar3 != 0) {
                    iVar3 = OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(uVar7,1);
                    iVar3 = test_true("test/cmp_server_test.c",0x57,
                                      "OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(ctx, 1)",
                                      iVar3 != 0);
                    if (iVar3 != 0) {
                      uVar7 = OSSL_CMP_SRV_CTX_get0_cmp_ctx(uVar7);
                      iVar3 = test_ptr("test/cmp_server_test.c",0x5a,
                                       "cmp_ctx = OSSL_CMP_SRV_CTX_get0_cmp_ctx(ctx)",uVar7);
                      if (((iVar3 != 0) &&
                          (iVar3 = OSSL_CMP_CTX_set1_referenceValue(uVar7,"server",6), iVar3 != 0))
                         && (iVar3 = OSSL_CMP_CTX_set1_secretValue(uVar7,&_LC17,4), iVar3 != 0)) {
                        lVar8 = OSSL_CMP_CTX_server_perform(uVar6,ptr[3]);
                        iVar3 = test_ptr("test/cmp_server_test.c",0x61,
                                         "rsp = OSSL_CMP_CTX_server_perform(client_ctx, fixture->req)"
                                         ,lVar8);
                        if (iVar3 != 0) {
                          uVar4 = OSSL_CMP_MSG_get_bodytype(lVar8);
                          iVar3 = test_int_eq("test/cmp_server_test.c",0x62,
                                              "OSSL_CMP_MSG_get_bodytype(rsp)",
                                              "OSSL_CMP_PKIBODY_ERROR",uVar4,0x17);
                          if (iVar3 != 0) {
                            lVar1 = *(long *)(*(long *)(lVar8 + 8) + 8);
                            uVar5 = test_ptr("test/cmp_server_test.c",100,
                                             "errorContent = rsp->body->value.error",lVar1);
                            if (uVar5 != 0) {
                              uVar9 = ASN1_INTEGER_get(*(ASN1_INTEGER **)(lVar1 + 8));
                              iVar3 = test_int_eq("test/cmp_server_test.c",0x65,
                                                  "ASN1_INTEGER_get(errorContent->errorCode)",
                                                  "ERR_PACK(ERR_LIB_CMP, 0, dummy_errorCode)",
                                                  uVar9 & 0xffffffff,0x1d000066);
                              uVar5 = (uint)(iVar3 != 0);
                            }
                            goto LAB_00100110;
                          }
                        }
                        uVar5 = 0;
                        goto LAB_00100110;
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
  uVar5 = 0;
  lVar8 = 0;
LAB_00100110:
  OSSL_CMP_MSG_free(lVar8);
  OSSL_CMP_CTX_free(uVar6);
  OSSL_CMP_SRV_CTX_free(ptr[2]);
  CRYPTO_free(ptr);
  return uVar5;
}



void cleanup_tests(void)

{
  OSSL_CMP_MSG_free(request);
  OSSL_PROVIDER_unload(default_null_provider);
  OSSL_PROVIDER_unload(provider);
  OSSL_LIB_CTX_free(libctx);
  return;
}



undefined1 * test_get_options(void)

{
  return options_2;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/cmp_server_test.c",0x8c,"Error parsing test options\n");
  }
  else {
    uVar2 = test_get_argument(0);
    iVar1 = test_ptr("test/cmp_server_test.c",0x90,"request_f = test_get_argument(0)",uVar2);
    if (iVar1 == 0) {
      test_error("test/cmp_server_test.c",0x91,"usage: cmp_server_test %s",
                 "CR_protected_PBM_1234.der module_name [module_conf_file]\n");
    }
    else {
      iVar1 = test_arg_libctx(&libctx,&default_null_provider,&provider,1,
                              "CR_protected_PBM_1234.der module_name [module_conf_file]\n");
      if (iVar1 != 0) {
        request = load_pkimsg(uVar2,libctx);
        iVar1 = test_ptr("test/cmp_server_test.c",0x98,"request = load_pkimsg(request_f, libctx)",
                         request);
        if (iVar1 != 0) {
          add_test("test_handle_request",test_handle_request);
          return 1;
        }
        OSSL_CMP_MSG_free(request);
        OSSL_PROVIDER_unload(default_null_provider);
        OSSL_PROVIDER_unload(provider);
        OSSL_LIB_CTX_free(libctx);
      }
    }
  }
  return 0;
}



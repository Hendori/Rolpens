
undefined4 test_explicit_provider(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/provider_fallback_test.c",0x29,"ctx = OSSL_LIB_CTX_new()",uVar3);
  if (iVar1 != 0) {
    uVar4 = OSSL_PROVIDER_load(uVar3,"default");
    iVar1 = test_ptr("test/provider_fallback_test.c",0x2a,
                     "prov = OSSL_PROVIDER_load(ctx, \"default\")",uVar4);
    if (iVar1 != 0) {
      iVar1 = OSSL_PROVIDER_available(uVar3,"default");
      iVar1 = test_true("test/provider_fallback_test.c",0x15,
                        "OSSL_PROVIDER_available(ctx, \"default\")",iVar1 != 0);
      if (iVar1 == 0) {
        EVP_KEYMGMT_free(0);
      }
      else {
        uVar5 = EVP_KEYMGMT_fetch(uVar3,&_LC5,0);
        iVar1 = test_ptr("test/provider_fallback_test.c",0x16,
                         "rsameth = EVP_KEYMGMT_fetch(ctx, \"RSA\", NULL)",uVar5);
        if (iVar1 != 0) {
          uVar6 = EVP_KEYMGMT_get0_provider(uVar5);
          iVar1 = test_ptr("test/provider_fallback_test.c",0x17,
                           "prov = EVP_KEYMGMT_get0_provider(rsameth)",uVar6);
          if (iVar1 != 0) {
            uVar6 = OSSL_PROVIDER_get0_name(uVar6);
            iVar1 = test_str_eq("test/provider_fallback_test.c",0x18,"OSSL_PROVIDER_get0_name(prov)"
                                ,"\"default\"",uVar6,"default");
            if (iVar1 != 0) {
              EVP_KEYMGMT_free(uVar5);
              iVar1 = OSSL_PROVIDER_unload(uVar4);
              uVar2 = test_true("test/provider_fallback_test.c",0x2f,"OSSL_PROVIDER_unload(prov)",
                                iVar1 != 0);
              goto LAB_0010003e;
            }
          }
        }
        EVP_KEYMGMT_free(uVar5);
      }
      OSSL_PROVIDER_unload(uVar4);
    }
  }
  uVar2 = 0;
LAB_0010003e:
  OSSL_LIB_CTX_free(uVar3);
  return uVar2;
}



uint test_fallback_provider(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = OSSL_PROVIDER_available(0,"default");
  uVar3 = 0;
  uVar2 = test_true("test/provider_fallback_test.c",0x15,"OSSL_PROVIDER_available(ctx, \"default\")"
                    ,iVar1 != 0);
  if (uVar2 != 0) {
    uVar3 = EVP_KEYMGMT_fetch(0,&_LC5,0);
    uVar2 = test_ptr("test/provider_fallback_test.c",0x16,
                     "rsameth = EVP_KEYMGMT_fetch(ctx, \"RSA\", NULL)",uVar3);
    if (uVar2 != 0) {
      uVar4 = EVP_KEYMGMT_get0_provider(uVar3);
      uVar2 = test_ptr("test/provider_fallback_test.c",0x17,
                       "prov = EVP_KEYMGMT_get0_provider(rsameth)",uVar4);
      if (uVar2 != 0) {
        uVar4 = OSSL_PROVIDER_get0_name(uVar4);
        iVar1 = test_str_eq("test/provider_fallback_test.c",0x18,"OSSL_PROVIDER_get0_name(prov)",
                            "\"default\"",uVar4,"default");
        uVar2 = (uint)(iVar1 != 0);
      }
    }
  }
  EVP_KEYMGMT_free(uVar3);
  return uVar2;
}



undefined8 setup_tests(void)

{
  add_test("test_fallback_provider",test_fallback_provider);
  add_test("test_explicit_provider",0x100000);
  return 1;
}



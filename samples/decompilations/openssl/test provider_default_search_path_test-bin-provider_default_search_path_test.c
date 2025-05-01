
bool test_default_libctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OSSL_PROVIDER_set_default_search_path(0,"./some/path");
  iVar1 = test_true("test/provider_default_search_path_test.c",0x15,
                    "OSSL_PROVIDER_set_default_search_path(ctx, path)",iVar1 != 0);
  if (iVar1 != 0) {
    uVar2 = OSSL_PROVIDER_get0_default_search_path(0);
    iVar1 = test_ptr("test/provider_default_search_path_test.c",0x16,
                     "retrieved_path = OSSL_PROVIDER_get0_default_search_path(ctx)",uVar2);
    if (iVar1 != 0) {
      iVar1 = test_str_eq("test/provider_default_search_path_test.c",0x17,&_LC5,"retrieved_path",
                          "./some/path",uVar2);
      return iVar1 != 0;
    }
  }
  return false;
}



uint test_explicit_libctx(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = OSSL_PROVIDER_set_default_search_path(0,"./some/path");
  uVar3 = 0;
  uVar2 = test_true("test/provider_default_search_path_test.c",0x28,
                    "OSSL_PROVIDER_set_default_search_path(NULL, def_libctx_path)",iVar1 != 0);
  if (uVar2 != 0) {
    uVar3 = OSSL_LIB_CTX_new();
    iVar1 = test_ptr("test/provider_default_search_path_test.c",0x29,"ctx = OSSL_LIB_CTX_new()",
                     uVar3);
    if (iVar1 != 0) {
      iVar1 = OSSL_PROVIDER_set_default_search_path(uVar3,"./another/location");
      iVar1 = test_true("test/provider_default_search_path_test.c",0x2a,
                        "OSSL_PROVIDER_set_default_search_path(ctx, path)",iVar1 != 0);
      if (iVar1 != 0) {
        uVar4 = OSSL_PROVIDER_get0_default_search_path(0);
        iVar1 = test_ptr("test/provider_default_search_path_test.c",0x2b,
                         "retrieved_defctx_path = OSSL_PROVIDER_get0_default_search_path(NULL)",
                         uVar4);
        if (iVar1 != 0) {
          iVar1 = test_str_eq("test/provider_default_search_path_test.c",0x2c,"def_libctx_path",
                              "retrieved_defctx_path","./some/path",uVar4);
          if (iVar1 != 0) {
            uVar5 = OSSL_PROVIDER_get0_default_search_path(uVar3);
            iVar1 = test_ptr("test/provider_default_search_path_test.c",0x2d,
                             "retrieved_path = OSSL_PROVIDER_get0_default_search_path(ctx)",uVar5);
            if (iVar1 != 0) {
              iVar1 = test_str_eq("test/provider_default_search_path_test.c",0x2e,&_LC5,
                                  "retrieved_path","./another/location",uVar5);
              if (iVar1 != 0) {
                iVar1 = test_str_ne("test/provider_default_search_path_test.c",0x2f,"retrieved_path"
                                    ,"retrieved_defctx_path",uVar5,uVar4);
                uVar2 = (uint)(iVar1 != 0);
                goto LAB_001000fd;
              }
            }
          }
        }
      }
    }
    uVar2 = 0;
  }
LAB_001000fd:
  OSSL_LIB_CTX_free(uVar3);
  return uVar2;
}



undefined8 setup_tests(void)

{
  add_test("test_default_libctx",0x100000);
  add_test("test_explicit_libctx",test_explicit_libctx);
  return 1;
}



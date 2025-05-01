
int test_cache_flushes(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/provider_internal_test.c",0x6d,"ctx = OSSL_LIB_CTX_new()",uVar2);
  if (iVar1 == 0) {
LAB_0010003c:
    iVar1 = 0;
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = OSSL_PROVIDER_load(uVar2,"default");
    iVar1 = test_ptr("test/provider_internal_test.c",0x6e,
                     "prov = OSSL_PROVIDER_load(ctx, \"default\")",uVar3);
    if (iVar1 != 0) {
      iVar1 = OSSL_PROVIDER_available(uVar2,"default");
      iVar1 = test_true("test/provider_internal_test.c",0x6f,
                        "OSSL_PROVIDER_available(ctx, \"default\")",iVar1 != 0);
      if (iVar1 != 0) {
        uVar4 = EVP_MD_fetch(uVar2,"SHA256",0);
        iVar1 = test_ptr("test/provider_internal_test.c",0x70,
                         "md = EVP_MD_fetch(ctx, \"SHA256\", NULL)",uVar4);
        if (iVar1 == 0) goto LAB_00100045;
        EVP_MD_free(uVar4);
        OSSL_PROVIDER_unload(uVar3);
        iVar1 = OSSL_PROVIDER_available(uVar2,"default");
        iVar1 = test_false("test/provider_internal_test.c",0x77,
                           "OSSL_PROVIDER_available(ctx, \"default\")",iVar1 != 0);
        if (iVar1 != 0) {
          uVar4 = EVP_MD_fetch(uVar2,"SHA256",0);
          iVar1 = test_ptr_null("test/provider_internal_test.c",0x7a,
                                "md = EVP_MD_fetch(ctx, \"SHA256\", NULL)",uVar4);
          if (iVar1 == 0) {
            uVar3 = EVP_MD_get0_provider(uVar4);
            uVar3 = OSSL_PROVIDER_get0_name(uVar3);
            iVar1 = OSSL_PROVIDER_available(0,uVar3);
            if (iVar1 == 0) {
              test_info("test/provider_internal_test.c",0x80,"%s provider is not available\n",uVar3)
              ;
            }
            else {
              test_info("test/provider_internal_test.c",0x7e,"%s provider is available\n",uVar3);
            }
          }
          iVar1 = 1;
          uVar3 = 0;
          goto LAB_00100045;
        }
        goto LAB_0010003c;
      }
    }
    iVar1 = 0;
    uVar4 = 0;
  }
LAB_00100045:
  OSSL_PROVIDER_unload(uVar3);
  EVP_MD_free(uVar4);
  OSSL_LIB_CTX_free(uVar2);
  return iVar1;
}



bool test_provider(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = ossl_provider_activate(param_1,1,0);
  iVar1 = test_true("test/provider_internal_test.c",0x1d,"ossl_provider_activate(prov, 1, 0)",
                    iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = ossl_provider_get_params(param_1,greeting_request);
    iVar1 = test_true("test/provider_internal_test.c",0x1e,
                      "ossl_provider_get_params(prov, greeting_request)",iVar1 != 0);
    pcVar2 = (char *)greeting_request._16_8_;
    if (iVar1 != 0) {
      iVar1 = test_ptr("test/provider_internal_test.c",0x1f,"greeting = greeting_request[0].data",
                       greeting_request._16_8_);
      if (iVar1 != 0) {
        iVar1 = test_size_t_gt("test/provider_internal_test.c",0x20,"greeting_request[0].data_size",
                               &_LC13,greeting_request._24_8_,0);
        if (iVar1 != 0) {
          iVar1 = test_str_eq("test/provider_internal_test.c",0x21,"greeting","expected_greeting",
                              pcVar2,param_2);
          if (iVar1 != 0) {
            iVar1 = ossl_provider_deactivate(param_1,1);
            iVar1 = test_true("test/provider_internal_test.c",0x22,
                              "ossl_provider_deactivate(prov, 1)",iVar1 != 0);
            bVar3 = iVar1 != 0;
            goto LAB_0010022c;
          }
        }
      }
      bVar3 = false;
      goto LAB_0010022c;
    }
  }
  bVar3 = false;
  pcVar2 = "no greeting received";
LAB_0010022c:
  test_info("test/provider_internal_test.c",0x24,"Got this greeting: %s\n",pcVar2);
  ossl_provider_free(param_1);
  return bVar3;
}



ulong test_configured_provider(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = ossl_provider_find(0,"p_test_configured",0);
  uVar3 = test_ptr("test/provider_internal_test.c",0x60,"prov = ossl_provider_find(NULL, name, 0)",
                   uVar2);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar1 = test_provider(uVar2,"Hello OpenSSL, greetings from Test Provider");
  return (ulong)(iVar1 != 0);
}



ulong test_loaded_provider(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = ossl_provider_new(0,"p_test",0,0,0);
  uVar3 = test_ptr("test/provider_internal_test.c",0x52,
                   "prov = ossl_provider_new(NULL, name, NULL, NULL, 0)",uVar2);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  BIO_snprintf(expected_greeting_0,0x100,"Hello OpenSSL %.20s, greetings from %s!","3.5.0","p_test")
  ;
  iVar1 = test_provider(uVar2,expected_greeting_0);
  return (ulong)(iVar1 != 0);
}



uint test_builtin_provider(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  EVP_set_default_properties(0,"fips=yes");
  uVar3 = ossl_provider_new(0,"p_test_builtin",&p_test_init,0,0);
  uVar1 = test_ptr("test/provider_internal_test.c",0x42,
                   "prov = ossl_provider_new(NULL, name, PROVIDER_INIT_FUNCTION_NAME, NULL, 0)",
                   uVar3);
  if (uVar1 != 0) {
    BIO_snprintf(expected_greeting_0,0x100,"Hello OpenSSL %.20s, greetings from %s!","3.5.0",
                 "p_test_builtin");
    iVar2 = test_provider(uVar3,expected_greeting_0);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_set_default_properties(0,&_LC29);
  return uVar1;
}



undefined8 setup_tests(void)

{
  add_test("test_builtin_provider",test_builtin_provider);
  add_test("test_loaded_provider",test_loaded_provider);
  add_test("test_configured_provider",test_configured_provider);
  add_test("test_cache_flushes",0x100000);
  return 1;
}




undefined8 tmpmd_digest(void)

{
  return 0;
}



undefined1 * testprov_query(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  
  *param_3 = 0;
  puVar1 = testprov_digests;
  if (param_2 != 1) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined8
testprov_provider_init
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = param_1;
  *param_3 = testprov_dispatch_table;
  return 1;
}



uint test_default_props_and_providers(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/user_property_test.c",0x5d,"libctx = OSSL_LIB_CTX_new()",uVar3);
  if (iVar1 != 0) {
    iVar1 = OSSL_PROVIDER_add_builtin(uVar3,"testprov",testprov_provider_init);
    iVar1 = test_true("test/user_property_test.c",0x5e,
                      "OSSL_PROVIDER_add_builtin(libctx, \"testprov\", testprov_provider_init)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      if (param_1 != 0) {
        uVar4 = OSSL_PROVIDER_load(uVar3,"testprov");
        iVar1 = test_ptr("test/user_property_test.c",0x66,
                         "testprov = OSSL_PROVIDER_load(libctx, \"testprov\")",uVar4);
        if (iVar1 == 0) {
LAB_00100254:
          uVar2 = 0;
          uVar5 = 0;
          goto LAB_00100097;
        }
        if (param_1 == 1) {
          iVar1 = EVP_set_default_properties(uVar3,"foo.bar=yes");
          iVar1 = test_true("test/user_property_test.c",0x6a,
                            "EVP_set_default_properties(libctx, MYPROPERTIES)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_00100254;
        }
LAB_0010016d:
        uVar5 = EVP_MD_fetch(uVar3,"testprovmd",0);
        iVar1 = test_ptr("test/user_property_test.c",0x6d,
                         "testprovmd = EVP_MD_fetch(libctx, \"testprovmd\", NULL)",uVar5);
        if (iVar1 != 0) {
          uVar2 = 1;
          if (param_1 != 2) goto LAB_00100097;
          iVar1 = EVP_set_default_properties(uVar3,"foo.bar=yes");
          iVar1 = test_true("test/user_property_test.c",0x71,
                            "EVP_set_default_properties(libctx, MYPROPERTIES)",iVar1 != 0);
          if (iVar1 != 0) {
            EVP_MD_free(uVar5);
            uVar5 = EVP_MD_fetch(uVar3,"testprovmd",0);
            iVar1 = test_ptr("test/user_property_test.c",0x74,
                             "testprovmd = EVP_MD_fetch(libctx, \"testprovmd\", NULL)",uVar5);
            uVar2 = (uint)(iVar1 != 0);
            goto LAB_00100097;
          }
        }
        uVar2 = 0;
        goto LAB_00100097;
      }
      iVar1 = EVP_set_default_properties(uVar3,"foo.bar=yes");
      iVar1 = test_true("test/user_property_test.c",99,
                        "EVP_set_default_properties(libctx, MYPROPERTIES)",iVar1 != 0);
      if (iVar1 != 0) {
        uVar5 = 0;
        uVar4 = OSSL_PROVIDER_load(uVar3,"testprov");
        uVar2 = test_ptr("test/user_property_test.c",0x66,
                         "testprov = OSSL_PROVIDER_load(libctx, \"testprov\")",uVar4);
        if (uVar2 == 0) goto LAB_00100097;
        goto LAB_0010016d;
      }
    }
  }
  uVar2 = 0;
  uVar5 = 0;
  uVar4 = 0;
LAB_00100097:
  EVP_MD_free(uVar5);
  OSSL_PROVIDER_unload(uVar4);
  OSSL_LIB_CTX_free(uVar3);
  return uVar2;
}



ulong tmpmd_get_params(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_1,"blocksize");
  if ((lVar2 != 0) && (uVar3 = OSSL_PARAM_set_size_t(lVar2,1), (int)uVar3 == 0)) {
    return uVar3;
  }
  lVar2 = OSSL_PARAM_locate(param_1,&_LC10);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,1);
    return (ulong)(iVar1 != 0);
  }
  return 1;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_default_props_and_providers",test_default_props_and_providers,3,1);
  return 1;
}




bool test_is_fips_enabled(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar1 = EVP_default_properties_is_fips_enabled(0);
  uVar2 = OSSL_PROVIDER_available(0,&_LC0);
  iVar3 = test_int_eq("test/defltfips_test.c",0x25,"is_fips || bad_fips","is_fips_enabled",
                      is_fips != 0 || bad_fips != 0,uVar1);
  if (iVar3 != 0) {
    uVar6 = is_fips;
    if (is_fips != 0) {
      uVar6 = (uint)(bad_fips == 0);
    }
    iVar3 = test_int_eq("test/defltfips_test.c",0x26,"is_fips && !bad_fips","is_fips_loaded",uVar6,
                        uVar2);
    if (iVar3 != 0) {
      uVar4 = EVP_MD_fetch(0,"SHA2-256",0);
      if (bad_fips == 0) {
        iVar3 = test_ptr("test/defltfips_test.c",0x34,"sha256",uVar4);
        if (iVar3 == 0) {
          return false;
        }
        if (is_fips != 0) {
          uVar5 = EVP_MD_get0_provider(uVar4);
          uVar5 = OSSL_PROVIDER_get0_name(uVar5);
          iVar3 = test_str_eq("test/defltfips_test.c",0x37,
                              "OSSL_PROVIDER_get0_name(EVP_MD_get0_provider(sha256))","\"fips\"",
                              uVar5,&_LC0);
          if (iVar3 == 0) goto LAB_00100198;
        }
        EVP_MD_free(uVar4);
      }
      else {
        iVar3 = test_ptr_null("test/defltfips_test.c",0x2f);
        if (iVar3 == 0) {
LAB_00100198:
          EVP_MD_free(uVar4);
          return false;
        }
      }
      uVar1 = EVP_default_properties_is_fips_enabled(0);
      iVar3 = test_int_eq("test/defltfips_test.c",0x41,"is_fips || bad_fips","is_fips_enabled",
                          is_fips != 0 || bad_fips != 0,uVar1);
      return iVar3 != 0;
    }
  }
  return false;
}



undefined8 setup_tests(void)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/defltfips_test.c",0x4d,"Error parsing test options\n");
  }
  else {
    lVar2 = test_get_argument_count();
    if (lVar2 == 0) {
      is_fips = 0;
      bad_fips = 0;
      goto LAB_0010021c;
    }
    if (lVar2 == 1) {
      __s1 = (char *)test_get_argument(0);
      iVar1 = strcmp(__s1,"fips");
      if (iVar1 == 0) {
        is_fips = 1;
        bad_fips = 0;
LAB_0010021c:
        add_test("test_is_fips_enabled",0x100000);
        return 1;
      }
      iVar1 = strcmp(__s1,"badfips");
      if (iVar1 == 0) {
        bad_fips = 1;
        is_fips = 0;
        goto LAB_0010021c;
      }
    }
    test_error("test/defltfips_test.c",0x65,"Invalid argument\n");
  }
  return 0;
}



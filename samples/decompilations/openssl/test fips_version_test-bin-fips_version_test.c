
undefined8 test_fips_version(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = test_get_argument((long)param_1);
  iVar1 = test_ptr("test/fips_version_test.c",0x27,"version",uVar3);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = fips_provider_version_match(libctx,uVar3);
  uVar3 = test_int_eq("test/fips_version_test.c",0x29,"fips_provider_version_match(libctx, version)"
                      ,&_LC2,uVar2,1);
  return uVar3;
}



undefined1 * test_get_options(void)

{
  return test_options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        iVar1 = test_get_libctx(&libctx,0,uVar2,&libprov,0);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = test_get_argument_count();
        if (iVar1 == 0) {
          return 0;
        }
        add_all_tests("test_fips_version",0x100000,iVar1,1);
        return 1;
      }
      if (iVar1 != 1) break;
      uVar2 = opt_arg();
      iVar1 = opt_next();
    }
    if (5 < iVar1 - 500U) {
      return 0;
    }
  } while( true );
}



void cleanup_tests(void)

{
  OSSL_PROVIDER_unload(libprov);
  OSSL_LIB_CTX_free(libctx);
  return;
}



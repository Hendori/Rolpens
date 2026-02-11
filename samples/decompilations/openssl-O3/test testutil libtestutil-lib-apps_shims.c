
void * app_malloc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = CRYPTO_malloc((int)param_1,"test/testutil/apps_shims.c",0x19);
  iVar1 = test_ptr("test/testutil/apps_shims.c",0x19,"vp = OPENSSL_malloc(sz)",pvVar2);
  if (iVar1 != 0) {
    return pvVar2;
  }
  test_info("test/testutil/apps_shims.c",0x1a,"Could not allocate %zu bytes for %s\n",param_1,
            param_2);
                    /* WARNING: Subroutine does not return */
  abort();
}



undefined8 opt_legacy_okay(void)

{
  return 1;
}



undefined8 opt_provider_option_given(void)

{
  return 0;
}



undefined8 app_get0_propq(void)

{
  return 0;
}



undefined8 app_get0_libctx(void)

{
  return 0;
}




undefined8 app_set_propq(undefined8 param_1)

{
  app_propq = param_1;
  return 1;
}



undefined8 app_get0_propq(void)

{
  return app_propq;
}



undefined8 app_get0_libctx(void)

{
  return app_libctx;
}



long app_create_libctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = app_libctx;
  if (app_libctx == 0) {
    iVar1 = app_provider_load(0,&_LC0);
    if (iVar1 == 0) {
      opt_printf_stderr("Failed to create null provider\n");
    }
    else {
      lVar2 = OSSL_LIB_CTX_new();
      app_libctx = lVar2;
      if (lVar2 == 0) {
        opt_printf_stderr("Failed to create library context\n");
        return app_libctx;
      }
    }
  }
  return lVar2;
}



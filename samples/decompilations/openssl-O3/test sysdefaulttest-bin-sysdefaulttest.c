
bool test_func(void)

{
  int iVar1;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  ulong uVar2;
  bool bVar3;
  
  meth = (SSL_METHOD *)TLS_method();
  ctx = SSL_CTX_new(meth);
  if (expect_failure == 0) {
    iVar1 = test_ptr("test/sysdefaulttest.c",0x1f,&_LC0);
    if (iVar1 == 0) {
      return false;
    }
    uVar2 = SSL_CTX_ctrl(ctx,0x82,0,(void *)0x0);
    iVar1 = test_int_eq("test/sysdefaulttest.c",0x21,"SSL_CTX_get_min_proto_version(ctx)",
                        "TLS1_2_VERSION",uVar2 & 0xffffffff,0x303);
    if (iVar1 == 0) {
      uVar2 = SSL_CTX_ctrl(ctx,0x83,0,(void *)0x0);
      iVar1 = test_int_eq("test/sysdefaulttest.c",0x22,"SSL_CTX_get_max_proto_version(ctx)",
                          "TLS1_2_VERSION",uVar2 & 0xffffffff,0x303);
      if (iVar1 == 0) {
        test_info("test/sysdefaulttest.c",0x23,"min/max version setting incorrect");
        bVar3 = false;
        goto LAB_00100045;
      }
    }
    bVar3 = true;
  }
  else {
    iVar1 = test_ptr_null("test/sysdefaulttest.c",0x1c);
    bVar3 = iVar1 != 0;
  }
LAB_00100045:
  SSL_CTX_free(ctx);
  return bVar3;
}



bool global_init(void)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_ssl(0x7640,0);
  return iVar1 != 0;
}



undefined1 * test_get_options(void)

{
  return test_options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        add_test("test_func",0x100000);
        return 1;
      }
      if (iVar1 != 1) break;
      expect_failure = 1;
      iVar1 = opt_next();
    }
  } while (iVar1 - 500U < 6);
  return 0;
}



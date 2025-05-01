
undefined4 test_asn1_stable_parse(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/asn1_stable_parse_test.c",0x2c,"newctx",uVar3);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = OSSL_LIB_CTX_load_config(uVar3,config_file);
  iVar1 = test_int_eq("test/asn1_stable_parse_test.c",0x2f,
                      "OSSL_LIB_CTX_load_config(newctx, config_file)",&_LC2,uVar2,0);
  if (iVar1 != 0) {
    uVar4 = ERR_peek_error();
    if ((((uVar4 & 0x80000000) == 0) && ((char)(uVar4 >> 0x17) == '\r')) &&
       (((uint)uVar4 & 0x7fffff) == 0xda)) {
      ERR_clear_error();
      uVar2 = 1;
      goto LAB_001000a2;
    }
  }
  uVar2 = 0;
LAB_001000a2:
  OSSL_LIB_CTX_free(uVar3);
  return uVar2;
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  while( true ) {
    iVar1 = opt_next();
    if (iVar1 == 0) {
      add_test("test_asn1_stable_parse",0x100000);
      return 1;
    }
    if (iVar1 != 1) break;
    config_file = opt_arg();
  }
  return 0;
}



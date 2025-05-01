
uint test_rsa_x931_keygen(void)

{
  uint uVar1;
  int iVar2;
  RSA *rsa;
  BIGNUM *a;
  
  a = (BIGNUM *)0x0;
  rsa = (RSA *)ossl_rsa_new_with_ctx(libctx);
  uVar1 = test_ptr("test/rsa_x931_test.c",0x1a,"rsa = ossl_rsa_new_with_ctx(libctx)",rsa);
  if (uVar1 != 0) {
    a = BN_new();
    iVar2 = test_ptr("test/rsa_x931_test.c",0x1b,"e = BN_new()",a);
    if (iVar2 != 0) {
      iVar2 = BN_set_word(a,0x10001);
      iVar2 = test_int_eq("test/rsa_x931_test.c",0x1c,"BN_set_word(e, RSA_F4)",&_LC3,iVar2,1);
      if (iVar2 != 0) {
        iVar2 = RSA_X931_generate_key_ex(rsa,0x400,a,(BN_GENCB *)0x0);
        iVar2 = test_int_eq("test/rsa_x931_test.c",0x1d,
                            "RSA_X931_generate_key_ex(rsa, 1024, e, NULL)",&_LC3,iVar2,1);
        uVar1 = (uint)(iVar2 != 0);
        goto LAB_00100044;
      }
    }
    uVar1 = 0;
  }
LAB_00100044:
  BN_free(a);
  RSA_free(rsa);
  return uVar1;
}



undefined8 setup_tests(void)

{
  undefined8 uVar1;
  
  uVar1 = test_get_libctx(&libctx,&prov_null,0,0,0);
  if ((int)uVar1 != 0) {
    add_test("test_rsa_x931_keygen",0x100000);
    uVar1 = 1;
  }
  return uVar1;
}



void cleanup_tests(void)

{
  OSSL_PROVIDER_unload(prov_null);
  OSSL_LIB_CTX_free(libctx);
  return;
}



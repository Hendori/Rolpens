
bool test_no_deflt_ctx_init(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar2 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/nodefltctxtest.c",0x18,&_LC0,uVar2);
  if (iVar1 == 0) {
    return false;
  }
  uVar3 = EVP_MD_fetch(uVar2,"SHA2-256",0);
  iVar1 = test_ptr("test/nodefltctxtest.c",0x1c,&_LC3,uVar3);
  if (iVar1 != 0) {
    OPENSSL_init_crypto(0x80,0);
    iVar1 = OSSL_PROVIDER_available(0,"default");
    iVar1 = test_true("test/nodefltctxtest.c",0x2c,"OSSL_PROVIDER_available(NULL, \"default\")",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = OSSL_PROVIDER_available(0,&_LC6);
      iVar1 = test_false("test/nodefltctxtest.c",0x2e,"OSSL_PROVIDER_available(NULL, \"null\")",
                         iVar1 != 0);
      bVar4 = iVar1 != 0;
      goto LAB_001000ba;
    }
  }
  bVar4 = false;
LAB_001000ba:
  EVP_MD_free(uVar3);
  OSSL_LIB_CTX_free(uVar2);
  return bVar4;
}



undefined8 setup_tests(void)

{
  add_test("test_no_deflt_ctx_init",0x100000);
  return 1;
}



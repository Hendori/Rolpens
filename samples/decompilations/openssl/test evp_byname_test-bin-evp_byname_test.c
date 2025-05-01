
bool test_evp_get_cipherbyname(void)

{
  int iVar1;
  EVP_CIPHER *pEVar2;
  
  pEVar2 = EVP_get_cipherbyname("AES-256-WRAP");
  iVar1 = test_ptr("test/evp_byname_test.c",0x1e,"cipher = EVP_get_cipherbyname(\"AES-256-WRAP\")",
                   pEVar2);
  return iVar1 != 0;
}



bool test_evp_get_digestbyname(void)

{
  int iVar1;
  EVP_MD *pEVar2;
  
  pEVar2 = EVP_get_digestbyname("SHA2-256");
  iVar1 = test_ptr("test/evp_byname_test.c",0x15,"md = EVP_get_digestbyname(\"SHA2-256\")",pEVar2);
  return iVar1 != 0;
}



undefined8 setup_tests(void)

{
  add_test("test_evp_get_digestbyname",test_evp_get_digestbyname);
  add_test("test_evp_get_cipherbyname",0x100000);
  return 1;
}



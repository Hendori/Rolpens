
uint test_cipher_is_a(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  EVP_CIPHER *pEVar4;
  
  uVar3 = EVP_CIPHER_fetch(0,"AES-256-CCM",0);
  iVar1 = test_ptr("test/namemap_internal_test.c",0x8a,"fetched",uVar3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = EVP_CIPHER_is_a(uVar3,"id-aes256-CCM");
  uVar2 = test_true("test/namemap_internal_test.c",0x8c,
                    "EVP_CIPHER_is_a(fetched, \"id-aes256-CCM\")",iVar1 != 0);
  if (uVar2 != 0) {
    iVar1 = EVP_CIPHER_is_a(uVar3,"AES-128-GCM");
    iVar1 = test_false("test/namemap_internal_test.c",0x8d,
                       "EVP_CIPHER_is_a(fetched, \"AES-128-GCM\")",iVar1 != 0);
    uVar2 = (uint)(iVar1 != 0);
  }
  pEVar4 = EVP_aes_256_gcm();
  iVar1 = EVP_CIPHER_is_a(pEVar4,"AES-256-GCM");
  iVar1 = test_true("test/namemap_internal_test.c",0x8f,
                    "EVP_CIPHER_is_a(EVP_aes_256_gcm(), \"AES-256-GCM\")",iVar1 != 0);
  if (iVar1 != 0) {
    pEVar4 = EVP_aes_256_gcm();
    iVar1 = EVP_CIPHER_is_a(pEVar4,"AES-128-CCM");
    iVar1 = test_false("test/namemap_internal_test.c",0x90,
                       "EVP_CIPHER_is_a(EVP_aes_256_gcm(), \"AES-128-CCM\")",iVar1 != 0);
    if (iVar1 != 0) goto LAB_001000b9;
  }
  uVar2 = 0;
LAB_001000b9:
  EVP_CIPHER_free(uVar3);
  return uVar2;
}



uint test_digest_is_a(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  EVP_MD *pEVar4;
  
  uVar3 = EVP_MD_fetch(0,"SHA2-512",0);
  iVar1 = test_ptr("test/namemap_internal_test.c",0xa0,"fetched",uVar3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = EVP_MD_is_a(uVar3,"SHA512");
  uVar2 = test_true("test/namemap_internal_test.c",0xa2,"EVP_MD_is_a(fetched, \"SHA512\")",
                    iVar1 != 0);
  if (uVar2 != 0) {
    iVar1 = EVP_MD_is_a(uVar3,&_LC14);
    iVar1 = test_false("test/namemap_internal_test.c",0xa3,"EVP_MD_is_a(fetched, \"SHA1\")",
                       iVar1 != 0);
    uVar2 = (uint)(iVar1 != 0);
  }
  pEVar4 = EVP_sha256();
  iVar1 = EVP_MD_is_a(pEVar4,"SHA2-256");
  iVar1 = test_true("test/namemap_internal_test.c",0xa5,"EVP_MD_is_a(EVP_sha256(), \"SHA2-256\")",
                    iVar1 != 0);
  if (iVar1 != 0) {
    pEVar4 = EVP_sha256();
    iVar1 = EVP_MD_is_a(pEVar4,"SHA3-256");
    iVar1 = test_false("test/namemap_internal_test.c",0xa6,"EVP_MD_is_a(EVP_sha256(), \"SHA3-256\")"
                       ,iVar1 != 0);
    if (iVar1 != 0) goto LAB_001001f9;
  }
  uVar2 = 0;
LAB_001001f9:
  EVP_MD_free(uVar3);
  return uVar2;
}



bool test_cipherbyname(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  EVP_CIPHER *pEVar5;
  EVP_CIPHER *pEVar6;
  
  uVar4 = ossl_namemap_stored(0);
  iVar1 = test_ptr("test/namemap_internal_test.c",0x6f,&_LC20,uVar4);
  if (iVar1 != 0) {
    uVar2 = ossl_namemap_add_name(uVar4,0,"AES-128-CBC");
    iVar1 = test_int_ne("test/namemap_internal_test.c",0x72,&_LC23,&_LC22,uVar2,0);
    if (iVar1 != 0) {
      uVar3 = ossl_namemap_add_name(uVar4,uVar2,&_LC24);
      iVar1 = test_int_eq("test/namemap_internal_test.c",0x74,
                          "ossl_namemap_add_name(nm, id, \"bar\")",&_LC23,uVar3,uVar2);
      if (iVar1 != 0) {
        pEVar5 = EVP_get_cipherbyname("AES-128-CBC");
        iVar1 = test_ptr("test/namemap_internal_test.c",0x78,"aes128",pEVar5);
        if (iVar1 != 0) {
          pEVar6 = EVP_get_cipherbyname("bar");
          iVar1 = test_ptr_eq("test/namemap_internal_test.c",0x7b,"aes128",&_LC24,pEVar5,pEVar6);
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}



bool test_digestbyname(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  EVP_MD *pEVar5;
  EVP_MD *pEVar6;
  
  uVar4 = ossl_namemap_stored(0);
  iVar1 = test_ptr("test/namemap_internal_test.c",0x53,&_LC20,uVar4);
  if (iVar1 != 0) {
    uVar2 = ossl_namemap_add_name(uVar4,0,"SHA256");
    iVar1 = test_int_ne("test/namemap_internal_test.c",0x56,&_LC23,&_LC22,uVar2,0);
    if (iVar1 != 0) {
      uVar3 = ossl_namemap_add_name(uVar4,uVar2,&_LC28);
      iVar1 = test_int_eq("test/namemap_internal_test.c",0x58,
                          "ossl_namemap_add_name(nm, id, \"foo\")",&_LC23,uVar3,uVar2);
      if (iVar1 != 0) {
        pEVar5 = EVP_get_digestbyname("SHA256");
        iVar1 = test_ptr("test/namemap_internal_test.c",0x5c,"sha256",pEVar5);
        if (iVar1 != 0) {
          pEVar6 = EVP_get_digestbyname("foo");
          iVar1 = test_ptr_eq("test/namemap_internal_test.c",0x5f,"sha256",&_LC28,pEVar5,pEVar6);
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}



bool test_namemap(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  uVar1 = ossl_namemap_add_name(param_1,0,"name1");
  uVar2 = ossl_namemap_add_name(param_1,0,"name2");
  uVar3 = ossl_namemap_add_name(param_1,uVar1,"alias1");
  uVar4 = ossl_namemap_add_name(param_1,0,"ALIAS1");
  uVar5 = ossl_namemap_name2num(param_1,"name1");
  uVar6 = ossl_namemap_name2num(param_1,"name2");
  uVar7 = ossl_namemap_name2num(param_1,"alias1");
  uVar8 = ossl_namemap_name2num(param_1,"ALIAS1");
  uVar9 = ossl_namemap_name2num(param_1,"cookie");
  iVar10 = test_int_ne("test/namemap_internal_test.c",0x2d,&_LC36,&_LC22,uVar1,0);
  if (((((iVar10 != 0) &&
        (iVar10 = test_int_ne("test/namemap_internal_test.c",0x2e,&_LC37,&_LC22,uVar2,0),
        iVar10 != 0)) &&
       (iVar10 = test_int_eq("test/namemap_internal_test.c",0x2f,&_LC36,&_LC38,uVar1,uVar3),
       iVar10 != 0)) &&
      ((iVar10 = test_int_eq("test/namemap_internal_test.c",0x30,&_LC38,&_LC39,uVar3,uVar4),
       iVar10 != 0 &&
       (iVar10 = test_int_eq("test/namemap_internal_test.c",0x31,&_LC36,"check1",uVar1,uVar5),
       iVar10 != 0)))) &&
     ((iVar10 = test_int_eq("test/namemap_internal_test.c",0x32,&_LC37,"check2",uVar2,uVar6),
      iVar10 != 0 &&
      ((iVar10 = test_int_eq("test/namemap_internal_test.c",0x33,&_LC38,"check3",uVar3,uVar7),
       iVar10 != 0 &&
       (iVar10 = test_int_eq("test/namemap_internal_test.c",0x34,&_LC39,"check4",uVar4,uVar8),
       iVar10 != 0)))))) {
    iVar10 = test_int_eq("test/namemap_internal_test.c",0x35,"false1",&_LC22,uVar9,0);
    return iVar10 != 0;
  }
  return false;
}



ulong test_namemap_stored(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = ossl_namemap_stored(0);
  uVar3 = test_ptr("test/namemap_internal_test.c",0x45,&_LC20,uVar2);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar1 = test_namemap(uVar2);
  return (ulong)(iVar1 != 0);
}



uint test_namemap_independent(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = ossl_namemap_new(0);
  uVar1 = test_ptr("test/namemap_internal_test.c",0x3b,&_LC20,uVar3);
  if (uVar1 != 0) {
    iVar2 = test_namemap(uVar3);
    uVar1 = (uint)(iVar2 != 0);
  }
  ossl_namemap_free(uVar3);
  return uVar1;
}



uint test_namemap_empty(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  uVar1 = ossl_namemap_empty(0);
  uVar2 = test_int_eq("test/namemap_internal_test.c",0x18,"ossl_namemap_empty(NULL)",&_LC45,uVar1,1)
  ;
  if (uVar2 != 0) {
    uVar4 = ossl_namemap_new(0);
    iVar3 = test_ptr("test/namemap_internal_test.c",0x19,"nm = ossl_namemap_new(NULL)",uVar4);
    if (iVar3 != 0) {
      uVar1 = ossl_namemap_empty(uVar4);
      iVar3 = test_int_eq("test/namemap_internal_test.c",0x1a,"ossl_namemap_empty(nm)",&_LC45,uVar1,
                          1);
      if (iVar3 != 0) {
        uVar1 = ossl_namemap_add_name(uVar4,0,"name1");
        iVar3 = test_int_ne("test/namemap_internal_test.c",0x1b,
                            "ossl_namemap_add_name(nm, 0, NAME1)",&_LC22,uVar1,0);
        if (iVar3 != 0) {
          uVar1 = ossl_namemap_empty(uVar4);
          iVar3 = test_int_eq("test/namemap_internal_test.c",0x1c,"ossl_namemap_empty(nm)",&_LC22,
                              uVar1,0);
          uVar2 = (uint)(iVar3 != 0);
          goto LAB_0010083b;
        }
      }
    }
    uVar2 = 0;
  }
LAB_0010083b:
  ossl_namemap_free(uVar4);
  return uVar2;
}



undefined8 setup_tests(void)

{
  add_test("test_namemap_empty",test_namemap_empty);
  add_test("test_namemap_independent",test_namemap_independent);
  add_test("test_namemap_stored",test_namemap_stored);
  add_test("test_digestbyname",test_digestbyname);
  add_test("test_cipherbyname",test_cipherbyname);
  add_test("test_digest_is_a",test_digest_is_a);
  add_test("test_cipher_is_a",0x100000);
  return 1;
}



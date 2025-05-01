
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_object_group_attr(int param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  BIO *a;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  lVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  a = BIO_new_fp(_stderr,0);
  iVar2 = test_ptr("test/x509_acert_test.c",0x80,"bout = BIO_new_fp(stderr, BIO_NOCLOSE)",a);
  if (iVar2 == 0) goto LAB_0010005b;
  lVar1 = (long)param_1 * 0x18;
  local_38 = *(undefined8 *)(ietf_syntax_tests + lVar1);
  lVar5 = d2i_OSSL_IETF_ATTR_SYNTAX(0,&local_38,*(undefined8 *)(ietf_syntax_tests + lVar1 + 8));
  if (*(int *)(ietf_syntax_tests + lVar1 + 0x10) == 0) {
    iVar2 = test_ptr_null("test/x509_acert_test.c",0x88);
    if (iVar2 != 0) goto LAB_001000d9;
  }
  else {
    iVar2 = test_ptr("test/x509_acert_test.c",0x87,&_LC2,lVar5);
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_0010005b;
    }
LAB_001000d9:
    iVar2 = 1;
    if (lVar5 == 0) goto LAB_0010005b;
    iVar2 = 1;
    uVar3 = OSSL_IETF_ATTR_SYNTAX_print(a,lVar5,4);
    iVar4 = test_int_eq("test/x509_acert_test.c",0x8c,"OSSL_IETF_ATTR_SYNTAX_print(bout, ias, 4)",
                        &_LC3,uVar3,1);
    if (iVar4 != 0) goto LAB_0010005b;
    OSSL_IETF_ATTR_SYNTAX_free(lVar5);
  }
  iVar2 = 0;
LAB_0010005b:
  OSSL_IETF_ATTR_SYNTAX_free(lVar5);
  BIO_free(a);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_acert_sign(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *filename;
  EVP_PKEY *pkey;
  BIO *a;
  undefined8 uVar4;
  EVP_MD *pEVar5;
  
  filename = (char *)test_get_argument(0);
  iVar1 = test_ptr("test/x509_acert_test.c",0x38,"acert_file = test_get_argument(0)",filename);
  if (iVar1 != 0) {
    pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(0,0,&_LC6,0x800);
    iVar1 = test_ptr("test/x509_acert_test.c",0x3b,"pkey = EVP_RSA_gen(2048)",pkey);
    if (iVar1 != 0) {
      uVar4 = 0;
      a = BIO_new_file(filename,"r");
      uVar2 = test_ptr("test/x509_acert_test.c",0x3e,"bp = BIO_new_file(acert_file, \"r\")",a);
      if (uVar2 != 0) {
        uVar4 = PEM_read_bio_X509_ACERT(a,0,0,0);
        iVar1 = test_ptr("test/x509_acert_test.c",0x41,
                         "acert = PEM_read_bio_X509_ACERT(bp, NULL, NULL, NULL)",uVar4);
        if (iVar1 != 0) {
          pEVar5 = EVP_sha256();
          uVar3 = X509_ACERT_sign(uVar4,pkey,pEVar5);
          iVar1 = test_int_gt("test/x509_acert_test.c",0x44,
                              "X509_ACERT_sign(acert, pkey, EVP_sha256())",&_LC11,uVar3,0);
          if (iVar1 != 0) {
            uVar3 = X509_ACERT_verify(uVar4,pkey);
            iVar1 = test_int_eq("test/x509_acert_test.c",0x45,"X509_ACERT_verify(acert, pkey)",&_LC3
                                ,uVar3,1);
            uVar2 = (uint)(iVar1 != 0);
            goto LAB_0010020f;
          }
        }
        uVar2 = 0;
      }
LAB_0010020f:
      BIO_free(a);
      X509_ACERT_free(uVar4);
      EVP_PKEY_free(pkey);
      return uVar2;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_print_acert(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *filename;
  BIO *a;
  BIO *a_00;
  undefined8 uVar4;
  
  filename = (char *)test_get_argument((long)param_1);
  iVar1 = test_ptr("test/x509_acert_test.c",0x17,"acert_file = test_get_argument(idx)",filename);
  if (iVar1 != 0) {
    a = BIO_new_file(filename,"r");
    iVar1 = test_ptr("test/x509_acert_test.c",0x1a,"bp = BIO_new_file(acert_file, \"r\")",a);
    if (iVar1 != 0) {
      uVar4 = 0;
      a_00 = BIO_new_fp(_stderr,0);
      uVar2 = test_ptr("test/x509_acert_test.c",0x1d,"bout = BIO_new_fp(stderr, BIO_NOCLOSE)",a_00);
      if (uVar2 != 0) {
        uVar4 = PEM_read_bio_X509_ACERT(a,0,0,0);
        uVar2 = test_ptr("test/x509_acert_test.c",0x20,
                         "acert = PEM_read_bio_X509_ACERT(bp, NULL, NULL, NULL)",uVar4);
        if (uVar2 != 0) {
          uVar3 = X509_ACERT_print(a_00,uVar4);
          iVar1 = test_int_eq("test/x509_acert_test.c",0x23,"X509_ACERT_print(bout, acert)",&_LC3,
                              uVar3,1);
          uVar2 = (uint)(iVar1 != 0);
        }
      }
      BIO_free(a);
      BIO_free(a_00);
      X509_ACERT_free(uVar4);
      return uVar2;
    }
  }
  return 0;
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/x509_acert_test.c",0x9f,"Error parsing test options\n");
  }
  else {
    iVar1 = test_get_argument_count();
    if (0 < iVar1) {
      add_all_tests("test_print_acert",test_print_acert,iVar1,1);
      add_test("test_acert_sign",test_acert_sign);
      add_all_tests("test_object_group_attr",0x100000,4,1);
      return 1;
    }
    test_error("test/x509_acert_test.c",0xa5,"Must specify at least 1 attribute certificate file\n")
    ;
  }
  return 0;
}



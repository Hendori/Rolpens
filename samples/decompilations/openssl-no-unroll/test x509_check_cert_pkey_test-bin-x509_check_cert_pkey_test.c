
undefined4 test_x509_check_cert_pkey(void)

{
  char *__s1;
  int iVar1;
  int iVar2;
  BIO *bp;
  EVP_PKEY *pkey;
  X509 *x509;
  X509_REQ *x509_00;
  undefined4 uVar3;
  int local_40;
  
  __s1 = t;
  iVar1 = strcmp(t,"cert");
  if (iVar1 != 0) {
    iVar2 = 2;
    iVar1 = strcmp(__s1,"req");
    if (iVar1 == 0) {
      if (*e == 'o') goto LAB_0010005d;
      goto LAB_001000f8;
    }
    test_error("test/x509_check_cert_pkey_test.c",0x2d,"invalid \'type\'");
LAB_0010012a:
    uVar3 = 0;
    pkey = (EVP_PKEY *)0x0;
    x509_00 = (X509_REQ *)0x0;
    x509 = (X509 *)0x0;
    bp = (BIO *)0x0;
    goto LAB_001000c3;
  }
  iVar2 = 1;
  if (*e == 'o') {
LAB_0010005d:
    if ((e[1] != 'k') || (local_40 = 1, e[2] != '\0')) goto LAB_001000f8;
  }
  else {
LAB_001000f8:
    local_40 = strcmp(e,"failed");
    if (local_40 != 0) {
      test_error("test/x509_check_cert_pkey_test.c",0x36,"invalid \'expected\'");
      goto LAB_0010012a;
    }
  }
  bp = BIO_new_file(k,"r");
  iVar1 = test_ptr("test/x509_check_cert_pkey_test.c",0x3b,"bio = BIO_new_file(k, \"r\")");
  if (iVar1 == 0) {
    pkey = (EVP_PKEY *)0x0;
    x509_00 = (X509_REQ *)0x0;
    x509 = (X509 *)0x0;
    uVar3 = 0;
    goto LAB_001000c3;
  }
  pkey = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
  iVar1 = test_ptr("test/x509_check_cert_pkey_test.c",0x3e,
                   "pkey = PEM_read_bio_PrivateKey(bio, NULL, NULL, NULL)",pkey);
  if (iVar1 == 0) {
    x509_00 = (X509_REQ *)0x0;
    x509 = (X509 *)0x0;
    uVar3 = 0;
    goto LAB_001000c3;
  }
  BIO_free(bp);
  bp = BIO_new_file(c,"r");
  iVar1 = test_ptr("test/x509_check_cert_pkey_test.c",0x44,"bio = BIO_new_file(c, \"r\")");
  if (iVar1 == 0) {
LAB_00100288:
    uVar3 = 0;
    x509_00 = (X509_REQ *)0x0;
    x509 = (X509 *)0x0;
  }
  else {
    if (iVar2 == 2) {
      x509_00 = PEM_read_bio_X509_REQ(bp,(X509_REQ **)0x0,(undefined1 *)0x0,(void *)0x0);
      if (x509_00 == (X509_REQ *)0x0) {
        test_error("test/x509_check_cert_pkey_test.c",0x54,"read PEM x509 req failed");
        goto LAB_00100288;
      }
      x509 = (X509 *)0x0;
      iVar1 = X509_REQ_check_private_key(x509_00,pkey);
    }
    else {
      x509 = PEM_read_bio_X509(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
      if (x509 == (X509 *)0x0) {
        x509_00 = (X509_REQ *)0x0;
        uVar3 = 0;
        test_error("test/x509_check_cert_pkey_test.c",0x4b,"read PEM x509 failed");
        goto LAB_001000c3;
      }
      x509_00 = (X509_REQ *)0x0;
      iVar1 = X509_check_private_key(x509,pkey);
    }
    iVar2 = test_int_eq("test/x509_check_cert_pkey_test.c",0x5f,"result","expected",iVar1,local_40);
    if (iVar2 == 0) {
      test_error("test/x509_check_cert_pkey_test.c",0x60,"check private key: expected: %d, got: %d",
                 local_40,iVar1);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
LAB_001000c3:
  BIO_free(bp);
  X509_free(x509);
  X509_REQ_free(x509_00);
  EVP_PKEY_free(pkey);
  return uVar3;
}



undefined8 test_PEM_X509_INFO_read_bio(void)

{
  int iVar1;
  int iVar2;
  BIO *bp;
  stack_st_X509_INFO *psVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  
  bp = BIO_new_file(file,"r");
  iVar1 = test_ptr("test/x509_check_cert_pkey_test.c",0x77,"(in = BIO_new_file(file, \"r\"))",bp);
  if (iVar1 == 0) {
    return 0;
  }
  psVar3 = PEM_X509_INFO_read_bio(bp,(stack_st_X509_INFO *)0x0,(undefined1 *)0x0,&_LC16);
  iVar6 = 0;
  iVar1 = 0;
  BIO_free(bp);
  while( true ) {
    iVar2 = OPENSSL_sk_num(psVar3);
    if (iVar2 <= iVar6) break;
    plVar4 = (long *)OPENSSL_sk_value(psVar3,iVar6);
    iVar1 = (((iVar1 - (uint)(*plVar4 == 0)) - (uint)(plVar4[1] == 0)) + 3) - (uint)(plVar4[2] == 0)
    ;
    iVar6 = iVar6 + 1;
  }
  OPENSSL_sk_pop_free(psVar3,&X509_INFO_free);
  uVar5 = test_int_eq("test/x509_check_cert_pkey_test.c",0x85,"count","expected",iVar1,expected);
  return uVar5;
}



undefined1 * test_get_options(void)

{
  return test_options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/x509_check_cert_pkey_test.c",0x9c,"Error parsing test options\n");
  }
  else {
    lVar3 = test_get_argument_count();
    if (lVar3 == 2) {
      file = test_get_argument(0);
      iVar1 = test_ptr("test/x509_check_cert_pkey_test.c",0xa3,"file = test_get_argument(0)",file);
      if (iVar1 != 0) {
        uVar4 = test_get_argument(1);
        iVar1 = test_ptr("test/x509_check_cert_pkey_test.c",0xa4,"num = test_get_argument(1)",uVar4)
        ;
        if (iVar1 != 0) {
          uVar2 = __isoc99_sscanf(uVar4,&_LC21,&expected);
          iVar1 = test_int_eq("test/x509_check_cert_pkey_test.c",0xa6,
                              "sscanf(num, \"%d\", &expected)",&_LC22,uVar2,1);
          if (iVar1 != 0) {
            add_test("test_PEM_X509_INFO_read_bio",test_PEM_X509_INFO_read_bio);
            return 1;
          }
        }
      }
    }
    else {
      c = test_get_argument(0);
      iVar1 = test_ptr("test/x509_check_cert_pkey_test.c",0xac,"c = test_get_argument(0)",c);
      if (iVar1 != 0) {
        k = test_get_argument(1);
        iVar1 = test_ptr("test/x509_check_cert_pkey_test.c",0xad,"k = test_get_argument(1)",k);
        if (iVar1 != 0) {
          t = test_get_argument(2);
          iVar1 = test_ptr("test/x509_check_cert_pkey_test.c",0xae,"t = test_get_argument(2)",t);
          if (iVar1 != 0) {
            e = test_get_argument(3);
            iVar1 = test_ptr("test/x509_check_cert_pkey_test.c",0xaf,"e = test_get_argument(3)",e);
            if (iVar1 != 0) {
              add_test("test_x509_check_cert_pkey",0x100000);
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



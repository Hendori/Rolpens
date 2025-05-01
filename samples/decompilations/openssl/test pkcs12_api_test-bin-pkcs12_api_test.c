
undefined4 pkcs12_create_cb(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}



PKCS12 * PKCS12_load(char *param_1)

{
  int iVar1;
  BIO *bp;
  PKCS12 *pPVar2;
  long in_FS_OFFSET;
  PKCS12 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (PKCS12 *)0x0;
  bp = BIO_new_file(param_1,"rb");
  iVar1 = test_ptr("test/pkcs12_api_test.c",0x26,&_LC1,bp);
  if (iVar1 != 0) {
    local_28 = (PKCS12 *)PKCS12_init_ex(0x15,testctx,"provider=default");
    iVar1 = test_ptr("test/pkcs12_api_test.c",0x2a,&_LC4,local_28);
    if (iVar1 != 0) {
      pPVar2 = d2i_PKCS12_bio(bp,&local_28);
      iVar1 = test_true("test/pkcs12_api_test.c",0x2d,"p12 == d2i_PKCS12_bio(bio, &p12)",
                        local_28 == pPVar2);
      if (iVar1 != 0) {
        BIO_free(bp);
        pPVar2 = local_28;
        goto LAB_001000e3;
      }
    }
  }
  BIO_free(bp);
  PKCS12_free(local_28);
  pPVar2 = (PKCS12 *)0x0;
LAB_001000e3:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_null_args(void)

{
  int iVar1;
  
  iVar1 = PKCS12_parse((PKCS12 *)0x0,(char *)0x0,(EVP_PKEY **)0x0,(X509 **)0x0,(stack_st_X509 **)0x0
                      );
  test_false("test/pkcs12_api_test.c",0x1d,"PKCS12_parse(NULL, NULL, NULL, NULL, NULL)",iVar1 != 0);
  return;
}



void pkcs12_create_ex2_test(int param_1)

{
  int iVar1;
  uint uVar2;
  PKCS12 *pPVar3;
  PKCS12 *a;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_4c;
  EVP_PKEY *local_48;
  X509 *local_40;
  stack_st_X509 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  local_48 = (EVP_PKEY *)0x0;
  local_40 = (X509 *)0x0;
  local_38 = (stack_st_X509 *)0x0;
  pPVar3 = (PKCS12 *)PKCS12_load("out6.p12");
  iVar1 = test_ptr("test/pkcs12_api_test.c",0x93,&_LC4,pPVar3);
  if (iVar1 == 0) {
LAB_00100300:
    a = (PKCS12 *)0x0;
    PKCS12_free(pPVar3);
  }
  else {
    iVar1 = PKCS12_parse(pPVar3,"",&local_48,&local_40,&local_38);
    iVar1 = test_true("test/pkcs12_api_test.c",0x96,"PKCS12_parse(p12, \"\", key, cert, ca)",
                      iVar1 != 0);
    a = pPVar3;
    if (iVar1 == 0) goto LAB_00100300;
  }
  uVar2 = test_ptr("test/pkcs12_api_test.c",0xa8,&_LC4,a);
  pPVar3 = (PKCS12 *)0x0;
  if (uVar2 == 0) goto LAB_0010023d;
  if (param_1 == 0) {
    pPVar3 = (PKCS12 *)PKCS12_create_ex2(0,0,0,0,0,0,0,0,0,0,testctx,0,0,0);
    iVar1 = test_ptr("test/pkcs12_api_test.c",0xb2,&_LC10,pPVar3);
    if (iVar1 == 0) {
      iVar1 = test_ptr("test/pkcs12_api_test.c",0xb6,&_LC11,local_40);
      if (iVar1 != 0) {
        local_4c = 1;
        pPVar3 = (PKCS12 *)
                 PKCS12_create_ex2(0,0,0,local_40,0,0,0,0,0,0,testctx,0,0x100000,&local_4c);
        uVar4 = 0xc1;
        goto LAB_0010037b;
      }
    }
    uVar2 = 0;
  }
  else {
    if (param_1 == 1) {
      local_4c = 0xffffffff;
      pPVar3 = (PKCS12 *)PKCS12_create_ex2(0,0,0,local_40,0,0,0,0,0,0,testctx,0,0x100000,&local_4c);
      iVar1 = test_ptr("test/pkcs12_api_test.c",0xcc,&_LC10,pPVar3);
      uVar2 = (uint)(iVar1 == 0);
      goto LAB_0010023d;
    }
    uVar2 = 1;
    if (param_1 != 2) goto LAB_0010023d;
    local_4c = 0;
    pPVar3 = (PKCS12 *)PKCS12_create_ex2(0,0,0,local_40,0,0,0,0,0,0,testctx,0,0x100000,&local_4c);
    uVar4 = 0xd7;
LAB_0010037b:
    iVar1 = test_ptr("test/pkcs12_api_test.c",uVar4,&_LC10,pPVar3);
    uVar2 = (uint)(iVar1 != 0);
  }
LAB_0010023d:
  PKCS12_free(a);
  PKCS12_free(pPVar3);
  EVP_PKEY_free(local_48);
  X509_free(local_40);
  OSSL_STACK_OF_X509_free(local_38);
  test_true("test/pkcs12_api_test.c",0xe2,&_LC12,uVar2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pkcs12_parse_test(void)

{
  EVP_PKEY *pEVar1;
  X509 *a;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  PKCS12 *p12;
  BIO_METHOD *type;
  BIO *bp;
  PKCS12 *pPVar5;
  long in_FS_OFFSET;
  EVP_PKEY *local_78;
  X509 *local_70;
  stack_st_X509 *local_68;
  PKCS12 *local_60;
  EVP_PKEY *local_58;
  X509 *local_50;
  stack_st_X509 *local_48;
  long local_40;
  
  uVar3 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (EVP_PKEY *)0x0;
  local_70 = (X509 *)0x0;
  local_68 = (stack_st_X509 *)0x0;
  p12 = in_file;
  if (in_file == (PKCS12 *)0x0) goto LAB_001004e0;
  p12 = (PKCS12 *)PKCS12_load(in_file);
  iVar2 = test_ptr("test/pkcs12_api_test.c",0x71,&_LC4,p12);
  if (iVar2 != 0) {
    iVar2 = PKCS12_parse(p12,in_pass,&local_78,&local_70,&local_68);
    iVar2 = test_true("test/pkcs12_api_test.c",0x74,"PKCS12_parse(p12, in_pass, &key, &cert, &ca)",
                      iVar2 != 0);
    if (iVar2 != 0) {
      if (has_key == 0) {
LAB_0010059d:
        iVar2 = test_ptr_null("test/pkcs12_api_test.c",0x77,&_LC14,local_78);
        if (iVar2 != 0) {
LAB_001005b5:
          if (has_cert == 0) {
LAB_001005d1:
            iVar2 = test_ptr_null("test/pkcs12_api_test.c",0x79,&_LC11,local_70);
            if (iVar2 != 0) {
LAB_001005e9:
              if (has_ca == 0) {
LAB_00100603:
                iVar2 = test_ptr_null("test/pkcs12_api_test.c",0x7b,&_LC15,local_68);
                if (iVar2 != 0) {
LAB_0010061b:
                  a = local_70;
                  pEVar1 = local_78;
                  uVar3 = 1;
                  if (has_key == 0) goto LAB_001004e0;
                  local_60 = (PKCS12 *)0x0;
                  local_58 = (EVP_PKEY *)0x0;
                  local_50 = (X509 *)0x0;
                  local_48 = (stack_st_X509 *)0x0;
                  iVar2 = PKCS12_newpass(p12,in_pass,"NEWPASS");
                  bp = (BIO *)0x0;
                  uVar3 = test_true("test/pkcs12_api_test.c",0x49,
                                    "PKCS12_newpass(p12, in_pass, \"NEWPASS\")",iVar2 != 0);
                  if (uVar3 == 0) goto LAB_001006d8;
                  type = BIO_s_mem();
                  bp = BIO_new(type);
                  iVar2 = test_ptr("test/pkcs12_api_test.c",0x4b,"bio = BIO_new(BIO_s_mem())",bp);
                  if (iVar2 == 0) {
LAB_001006cf:
                    uVar3 = 0;
                  }
                  else {
                    iVar2 = i2d_PKCS12_bio(bp,p12);
                    iVar2 = test_true("test/pkcs12_api_test.c",0x4d,"i2d_PKCS12_bio(bio, p12)",
                                      iVar2 != 0);
                    if (iVar2 == 0) goto LAB_001006cf;
                    local_60 = (PKCS12 *)PKCS12_init_ex(0x15,testctx,"provider=default");
                    iVar2 = test_ptr("test/pkcs12_api_test.c",0x4f,
                                     "p12new = PKCS12_init_ex(NID_pkcs7_data, testctx, \"provider=default\")"
                                     ,local_60);
                    if (iVar2 == 0) goto LAB_001006cf;
                    pPVar5 = d2i_PKCS12_bio(bp,&local_60);
                    iVar2 = test_ptr("test/pkcs12_api_test.c",0x51,"d2i_PKCS12_bio(bio, &p12new)",
                                     pPVar5);
                    if (iVar2 == 0) goto LAB_001006cf;
                    iVar2 = PKCS12_parse(local_60,"NEWPASS",&local_58,&local_50,&local_48);
                    iVar2 = test_true("test/pkcs12_api_test.c",0x53,
                                      "PKCS12_parse(p12new, \"NEWPASS\", &key2, &cert2, &ca2)",
                                      iVar2 != 0);
                    if (iVar2 == 0) goto LAB_001006cf;
                    if (has_key != 0) {
                      iVar2 = test_ptr("test/pkcs12_api_test.c",0x56,&_LC23,local_58);
                      if (iVar2 != 0) {
                        uVar4 = EVP_PKEY_eq(pEVar1,local_58);
                        iVar2 = test_int_eq("test/pkcs12_api_test.c",0x56,"EVP_PKEY_eq(key, key2)",
                                            &_LC24,uVar4,1);
                        if (iVar2 != 0) goto LAB_0010088e;
                      }
                      goto LAB_001006cf;
                    }
LAB_0010088e:
                    if (has_cert == 0) {
                      uVar3 = 1;
                    }
                    else {
                      iVar2 = test_ptr("test/pkcs12_api_test.c",0x5a,"cert2",local_50);
                      if (iVar2 == 0) goto LAB_001006cf;
                      iVar2 = X509_cmp(a,local_50);
                      iVar2 = test_int_eq("test/pkcs12_api_test.c",0x5a,"X509_cmp(cert, cert2)",
                                          &_LC27,iVar2,0);
                      uVar3 = (uint)(iVar2 != 0);
                    }
                  }
LAB_001006d8:
                  BIO_free(bp);
                  PKCS12_free(local_60);
                  EVP_PKEY_free(local_58);
                  X509_free(local_50);
                  OSSL_STACK_OF_X509_free(local_48);
                  goto LAB_001004e0;
                }
              }
              else {
                iVar2 = test_ptr("test/pkcs12_api_test.c",0x7b,&_LC15,local_68);
                if (iVar2 != 0) {
                  if (has_ca == 0) goto LAB_00100603;
                  goto LAB_0010061b;
                }
              }
            }
          }
          else {
            iVar2 = test_ptr("test/pkcs12_api_test.c",0x79,&_LC11,local_70);
            if (iVar2 != 0) {
              if (has_cert == 0) goto LAB_001005d1;
              goto LAB_001005e9;
            }
          }
        }
      }
      else {
        iVar2 = test_ptr("test/pkcs12_api_test.c",0x77,&_LC14,local_78);
        if (iVar2 != 0) {
          if (has_key == 0) goto LAB_0010059d;
          goto LAB_001005b5;
        }
      }
    }
  }
  uVar3 = 0;
LAB_001004e0:
  PKCS12_free(p12);
  EVP_PKEY_free(local_78);
  X509_free(local_70);
  OSSL_STACK_OF_X509_free(local_68);
  test_true("test/pkcs12_api_test.c",0x86,&_LC12,uVar3);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
switchD_001009bc_caseD_6:
  iVar1 = opt_next();
  do {
    if (iVar1 == 0) {
      iVar1 = test_get_libctx(&testctx,&nullprov,0,0,0);
      if (iVar1 == 0) {
        OSSL_LIB_CTX_free(testctx);
        testctx = 0;
        return 0;
      }
      add_test("test_null_args",test_null_args);
      add_test("pkcs12_parse_test",pkcs12_parse_test);
      add_all_tests("pkcs12_create_ex2_test",pkcs12_create_ex2_test,3,1);
      return 1;
    }
    if (6 < iVar1) {
      if (5 < iVar1 - 500U) {
        return 0;
      }
      goto switchD_001009bc_caseD_6;
    }
    if (iVar1 < 1) {
      return 0;
    }
    switch(iVar1) {
    default:
      goto switchD_001009bc_caseD_1;
    case 2:
      in_pass = (undefined *)opt_arg();
      goto switchD_001009bc_caseD_6;
    case 3:
      has_key = opt_int_arg();
      goto switchD_001009bc_caseD_6;
    case 4:
      has_cert = opt_int_arg();
      goto switchD_001009bc_caseD_6;
    case 5:
      has_ca = opt_int_arg();
      iVar1 = opt_next();
      break;
    case 6:
      goto switchD_001009bc_caseD_6;
    }
  } while( true );
switchD_001009bc_caseD_1:
  in_file = opt_arg();
  goto switchD_001009bc_caseD_6;
}



void cleanup_tests(void)

{
  OSSL_LIB_CTX_free(testctx);
  OSSL_PROVIDER_unload(nullprov);
  return;
}



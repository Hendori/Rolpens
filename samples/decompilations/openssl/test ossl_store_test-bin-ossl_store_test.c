
uint test_store_attach_unregistered_scheme(void)

{
  int iVar1;
  uint uVar2;
  char *filename;
  undefined8 uVar3;
  undefined8 uVar4;
  BIO *a;
  undefined8 uVar5;
  ulong uVar6;
  
  filename = (char *)test_mk_file_path(inputdir,sm2file);
  iVar1 = test_ptr("test/ossl_store_test.c",0xa5,"input",filename);
  if (iVar1 == 0) {
    uVar2 = 0;
    a = (BIO *)0x0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = OSSL_LIB_CTX_new();
    iVar1 = test_ptr("test/ossl_store_test.c",0xa6,"libctx = OSSL_LIB_CTX_new()",uVar3);
    if (iVar1 == 0) {
      a = (BIO *)0x0;
      uVar4 = 0;
      uVar5 = 0;
      uVar2 = 0;
    }
    else {
      uVar5 = 0;
      uVar4 = OSSL_PROVIDER_load(uVar3,"default");
      uVar2 = test_ptr("test/ossl_store_test.c",0xa7,
                       "provider = OSSL_PROVIDER_load(libctx, \"default\")",uVar4);
      a = (BIO *)0x0;
      if (uVar2 != 0) {
        a = BIO_new_file(filename,"r");
        uVar2 = test_ptr("test/ossl_store_test.c",0xa8,"bio = BIO_new_file(input, \"r\")",a);
        if (uVar2 != 0) {
          uVar5 = OSSL_STORE_attach(a,&_LC7,uVar3,0,0,0,0,0,0);
          iVar1 = test_ptr("test/ossl_store_test.c",0xa9,
                           "store_ctx = OSSL_STORE_attach(bio, \"file\", libctx, NULL, NULL, NULL, NULL, NULL, NULL)"
                           ,uVar5);
          if (iVar1 != 0) {
            uVar6 = ERR_peek_error();
            uVar2 = 2;
            if ((uVar6 & 0x80000000) == 0) {
              uVar2 = (uint)(uVar6 >> 0x17) & 0xff;
            }
            iVar1 = test_int_ne("test/ossl_store_test.c",0xab,"ERR_GET_LIB(ERR_peek_error())",
                                "ERR_LIB_OSSL_STORE",uVar2,0x2c);
            if (iVar1 != 0) {
              uVar6 = ERR_peek_error();
              uVar2 = (uint)uVar6 & 0x7fffff;
              if ((uVar6 & 0x80000000) != 0) {
                uVar2 = (uint)uVar6 & 0x7fffffff;
              }
              iVar1 = test_int_ne("test/ossl_store_test.c",0xac,"ERR_GET_REASON(ERR_peek_error())",
                                  "OSSL_STORE_R_UNREGISTERED_SCHEME",uVar2,0x69);
              uVar2 = (uint)(iVar1 != 0);
              goto LAB_00100058;
            }
          }
          uVar2 = 0;
        }
      }
    }
  }
LAB_00100058:
  BIO_free(a);
  OSSL_STORE_close(uVar5);
  OSSL_PROVIDER_unload(uVar4);
  OSSL_LIB_CTX_free(uVar3);
  CRYPTO_free(filename);
  return uVar2;
}



bool test_store_get_params(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  EVP_PKEY *pkey;
  undefined *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  char acStack_1038 [4104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 1) {
    puVar4 = &_LC14;
LAB_001002d7:
    iVar1 = BIO_snprintf(acStack_1038,0x1000,"%s/%s-params.pem",datadir,puVar4);
    iVar1 = test_true("test/ossl_store_test.c",0x8e,
                      "BIO_snprintf(uri, sizeof(uri), urifmt, datadir, type)",iVar1 != 0);
    if (iVar1 != 0) {
      pkey = (EVP_PKEY *)0x0;
      test_info("test/ossl_store_test.c",0x91,"Testing uri: %s",acStack_1038);
      uVar2 = OSSL_STORE_open_ex(acStack_1038,0,0,0,0,0,0);
      iVar1 = test_ptr("test/ossl_store_test.c",0x50,&_LC20,uVar2);
      if (iVar1 == 0) {
        bVar5 = false;
      }
      else {
        while( true ) {
          iVar1 = OSSL_STORE_eof(uVar2);
          if (iVar1 != 0) break;
          lVar3 = OSSL_STORE_load(uVar2);
          if (pkey != (EVP_PKEY *)0x0) goto LAB_00100430;
          if (lVar3 == 0) break;
          pkey = (EVP_PKEY *)0x0;
          iVar1 = OSSL_STORE_INFO_get_type(lVar3);
          if (iVar1 == 2) {
            pkey = (EVP_PKEY *)OSSL_STORE_INFO_get1_PARAMS(lVar3);
          }
          OSSL_STORE_INFO_free(lVar3);
        }
        if (pkey == (EVP_PKEY *)0x0) {
          bVar5 = false;
        }
        else {
LAB_00100430:
          iVar1 = EVP_PKEY_is_a(pkey,puVar4);
          bVar5 = iVar1 != 0;
        }
        EVP_PKEY_free(pkey);
      }
      OSSL_STORE_close(uVar2);
      iVar1 = test_true("test/ossl_store_test.c",0x92,"get_params(uri, type)",bVar5);
      bVar5 = iVar1 != 0;
      goto LAB_0010029f;
    }
  }
  else {
    if (param_1 == 2) {
      puVar4 = &_LC15;
      goto LAB_001002d7;
    }
    if (param_1 == 0) {
      puVar4 = &_LC13;
      goto LAB_001002d7;
    }
    test_error("test/ossl_store_test.c",0x81,"Invalid test index");
  }
  bVar5 = false;
LAB_0010029f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 test_store_search_by_key_fingerprint_fail(void)

{
  undefined4 uVar1;
  EVP_MD *pEVar2;
  undefined8 uVar3;
  
  pEVar2 = EVP_sha256();
  uVar3 = OSSL_STORE_SEARCH_by_key_fingerprint(pEVar2,0,0);
  uVar1 = test_ptr_null("test/ossl_store_test.c",0x42,
                        "search = OSSL_STORE_SEARCH_by_key_fingerprint( EVP_sha256(), NULL, 0)",
                        uVar3);
  OSSL_STORE_SEARCH_free(uVar3);
  return uVar1;
}



uint test_store_open(void)

{
  int iVar1;
  uint uVar2;
  void *ptr;
  undefined8 uVar3;
  UI_METHOD *ui_method;
  undefined8 uVar4;
  
  ptr = (void *)test_mk_file_path(inputdir,infile);
  iVar1 = test_ptr("test/ossl_store_test.c",0x2f,"input",ptr);
  if (iVar1 == 0) {
    uVar2 = 0;
    ui_method = (UI_METHOD *)0x0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    ui_method = (UI_METHOD *)0x0;
    uVar4 = 0;
    uVar3 = OSSL_STORE_SEARCH_by_alias("nothing");
    uVar2 = test_ptr("test/ossl_store_test.c",0x30,
                     "search = OSSL_STORE_SEARCH_by_alias(\"nothing\")",uVar3);
    if (uVar2 != 0) {
      ui_method = UI_create_method("DummyUI");
      uVar2 = test_ptr("test/ossl_store_test.c",0x31,"ui_method= UI_create_method(\"DummyUI\")",
                       ui_method);
      if (uVar2 != 0) {
        uVar4 = OSSL_STORE_open_ex(ptr,0,0,ui_method,0,0);
        iVar1 = test_ptr("test/ossl_store_test.c",0x32,
                         "sctx = OSSL_STORE_open_ex(input, NULL, NULL, ui_method, NULL, NULL, NULL, NULL)"
                         ,uVar4);
        if (iVar1 != 0) {
          iVar1 = OSSL_STORE_find(uVar4,0,0,0);
          iVar1 = test_false("test/ossl_store_test.c",0x34,"OSSL_STORE_find(sctx, NULL)",iVar1 != 0)
          ;
          if (iVar1 != 0) {
            iVar1 = OSSL_STORE_find(uVar4,uVar3);
            iVar1 = test_true("test/ossl_store_test.c",0x35,"OSSL_STORE_find(sctx, search)",
                              iVar1 != 0);
            uVar2 = (uint)(iVar1 != 0);
            goto LAB_001004f5;
          }
        }
        uVar2 = 0;
      }
    }
  }
LAB_001004f5:
  UI_destroy_method(ui_method);
  OSSL_STORE_SEARCH_free(uVar3);
  OSSL_STORE_close(uVar4);
  CRYPTO_free(ptr);
  return uVar2;
}



undefined1 * test_get_options(void)

{
  return test_options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
LAB_00100658:
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        if (datadir == 0) {
          test_error("test/ossl_store_test.c",0xdf,"No data directory specified");
          return 0;
        }
        if (inputdir == 0) {
          test_error("test/ossl_store_test.c",0xe3,"No input directory specified");
          return 0;
        }
        if (infile != 0) {
          add_test("test_store_open",test_store_open);
        }
        add_test("test_store_search_by_key_fingerprint_fail",
                 test_store_search_by_key_fingerprint_fail);
        add_all_tests("test_store_get_params",test_store_get_params,3,1);
        if (sm2file != 0) {
          add_test("test_store_attach_unregistered_scheme",0x100000);
        }
        return 1;
      }
      if (iVar1 == 3) {
        sm2file = opt_arg();
        goto LAB_00100658;
      }
      if (3 < iVar1) {
        if (iVar1 == 4) {
          datadir = opt_arg();
        }
        else if (5 < iVar1 - 500U) {
          return 0;
        }
        goto LAB_00100658;
      }
      if (iVar1 == 1) break;
      if (iVar1 != 2) {
        return 0;
      }
      infile = opt_arg();
      iVar1 = opt_next();
    }
    inputdir = opt_arg();
  } while( true );
}



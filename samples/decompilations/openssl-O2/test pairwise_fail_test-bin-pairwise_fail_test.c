
int setup_selftest_pairwise_failure(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = OSSL_PROVIDER_load(libctx,&_LC0);
  iVar1 = test_ptr("test/pairwise_fail_test.c",0x4a,"prov = OSSL_PROVIDER_load(libctx, \"fips\")",
                   uVar2);
  if (iVar1 != 0) {
    iVar1 = 1;
    self_test_args = param_1;
    OSSL_SELF_TEST_set_callback(libctx,self_test_on_pairwise_fail,&self_test_args);
  }
  OSSL_PROVIDER_unload(uVar2);
  return iVar1;
}



uint test_keygen_pairwise_failure(void)

{
  int iVar1;
  uint uVar2;
  BIO *a;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar3;
  char *pcVar4;
  EVP_PKEY *pkey_00;
  long in_FS_OFFSET;
  EVP_PKEY *local_38;
  long local_30;
  
  pcVar4 = pairwise_name;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (EVP_PKEY *)0x0;
  iVar1 = strcmp(pairwise_name,"rsa");
  if (iVar1 == 0) {
    iVar1 = setup_selftest_pairwise_failure("Conditional_PCT");
    uVar2 = test_true("test/pairwise_fail_test.c",0x61,"setup_selftest_pairwise_failure(type)",
                      iVar1 != 0);
    if (uVar2 != 0) {
      local_38 = (EVP_PKEY *)EVP_PKEY_Q_keygen(libctx,0,&_LC7,0x800);
      pcVar4 = "pkey = EVP_PKEY_Q_keygen(libctx, NULL, \"RSA\", (size_t)2048)";
      uVar3 = 99;
LAB_00100311:
      iVar1 = test_ptr_null("test/pairwise_fail_test.c",uVar3,pcVar4,local_38);
      uVar2 = (uint)(iVar1 != 0);
    }
  }
  else if ((*pcVar4 == 'e') && (pcVar4[1] == 'c')) {
    iVar1 = strcmp(pcVar4,"eckat");
    pcVar4 = "Conditional_KAT";
    if (iVar1 != 0) {
      pcVar4 = "Conditional_PCT";
    }
    iVar1 = setup_selftest_pairwise_failure(pcVar4);
    uVar2 = test_true("test/pairwise_fail_test.c",0x68,"setup_selftest_pairwise_failure(type)",
                      iVar1 != 0);
    if (uVar2 != 0) {
      local_38 = (EVP_PKEY *)EVP_PKEY_Q_keygen(libctx,0,&_LC11,"P-256");
      pcVar4 = "pkey = EVP_PKEY_Q_keygen(libctx, NULL, \"EC\", \"P-256\")";
      uVar3 = 0x6a;
      goto LAB_00100311;
    }
  }
  else if ((*pcVar4 == 'd') && ((pcVar4[1] == 's' && (pcVar4[2] == 'a')))) {
    iVar1 = strcmp(pcVar4,"dsakat");
    pcVar4 = "Conditional_KAT";
    if (iVar1 != 0) {
      pcVar4 = "Conditional_PCT";
    }
    iVar1 = setup_selftest_pairwise_failure(pcVar4);
    uVar2 = test_true("test/pairwise_fail_test.c",0x6f,"setup_selftest_pairwise_failure(type)",
                      iVar1 != 0);
    if (uVar2 != 0) {
      a = BIO_new_file(dsaparam_file,"r");
      iVar1 = test_ptr("test/pairwise_fail_test.c",0x71,"bio = BIO_new_file(dsaparam_file, \"r\")",a
                      );
      if (iVar1 == 0) {
        pkey = (EVP_PKEY *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        uVar2 = 0;
        pkey_00 = local_38;
      }
      else {
        pkey = (EVP_PKEY *)PEM_read_bio_Parameters_ex(a,0,libctx,0);
        iVar1 = test_ptr("test/pairwise_fail_test.c",0x73,
                         "pParams = PEM_read_bio_Parameters_ex(bio, NULL, libctx, NULL)",pkey);
        if (iVar1 == 0) {
          ctx = (EVP_PKEY_CTX *)0x0;
          uVar2 = 0;
          pkey_00 = local_38;
        }
        else {
          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pkey,0);
          uVar2 = test_ptr("test/pairwise_fail_test.c",0x75,
                           "ctx = EVP_PKEY_CTX_new_from_pkey(libctx, pParams, NULL)",ctx);
          pkey_00 = local_38;
          if (uVar2 != 0) {
            iVar1 = EVP_PKEY_keygen_init(ctx);
            uVar2 = test_int_eq("test/pairwise_fail_test.c",0x77,"EVP_PKEY_keygen_init(ctx)",&_LC18,
                                iVar1,1);
            pkey_00 = local_38;
            if (uVar2 != 0) {
              iVar1 = EVP_PKEY_keygen(ctx,&local_38);
              uVar2 = test_int_le("test/pairwise_fail_test.c",0x79,"EVP_PKEY_keygen(ctx, &pkey)",
                                  &_LC20,iVar1,0);
              pkey_00 = local_38;
              if (uVar2 != 0) {
                iVar1 = test_ptr_null("test/pairwise_fail_test.c",0x7b,&_LC22,local_38);
                uVar2 = (uint)(iVar1 != 0);
                pkey_00 = local_38;
              }
            }
          }
        }
      }
      goto LAB_00100139;
    }
  }
  else {
    iVar1 = strncmp(pcVar4,"eddsa",5);
    if (iVar1 != 0) {
      uVar2 = 1;
      pkey = (EVP_PKEY *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      a = (BIO *)0x0;
      pkey_00 = (EVP_PKEY *)0x0;
      goto LAB_00100139;
    }
    iVar1 = setup_selftest_pairwise_failure("Conditional_PCT");
    uVar2 = test_true("test/pairwise_fail_test.c",0x7e,"setup_selftest_pairwise_failure(type)",
                      iVar1 != 0);
    if (uVar2 != 0) {
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,"ED25519",0);
      uVar2 = test_ptr("test/pairwise_fail_test.c",0x80,
                       "ctx = EVP_PKEY_CTX_new_from_name(libctx, \"ED25519\", NULL)",ctx);
      if (uVar2 != 0) {
        iVar1 = EVP_PKEY_keygen_init(ctx);
        uVar2 = test_int_eq("test/pairwise_fail_test.c",0x82,"EVP_PKEY_keygen_init(ctx)",&_LC18,
                            iVar1,1);
        if (uVar2 != 0) {
          iVar1 = EVP_PKEY_keygen(ctx,&local_38);
          uVar2 = test_int_le("test/pairwise_fail_test.c",0x84,"EVP_PKEY_keygen(ctx, &pkey)",&_LC20,
                              iVar1,0);
          if (uVar2 != 0) {
            iVar1 = test_ptr_null("test/pairwise_fail_test.c",0x86,&_LC22,local_38);
            uVar2 = (uint)(iVar1 != 0);
          }
        }
      }
      pkey = (EVP_PKEY *)0x0;
      a = (BIO *)0x0;
      pkey_00 = local_38;
      goto LAB_00100139;
    }
  }
  pkey = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY_CTX *)0x0;
  a = (BIO *)0x0;
  pkey_00 = local_38;
LAB_00100139:
  EVP_PKEY_free(pkey_00);
  EVP_PKEY_CTX_free(ctx);
  BIO_free(a);
  EVP_PKEY_free(pkey);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



bool self_test_on_pairwise_fail(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_PARAM_locate_const(param_1,"st-phase");
  if ((lVar2 != 0) && (*(int *)(lVar2 + 8) == 4)) {
    iVar1 = strcmp(*(char **)(lVar2 + 0x10),"Corrupt");
    if (iVar1 != 0) {
      return true;
    }
    lVar2 = OSSL_PARAM_locate_const(param_1,"st-type");
    if ((lVar2 != 0) && (*(int *)(lVar2 + 8) == 4)) {
      iVar1 = strcmp(*(char **)(lVar2 + 0x10),(char *)*param_2);
      return iVar1 != 0;
    }
  }
  return false;
}



undefined1 * test_get_options(void)

{
  return test_options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
LAB_001005d7:
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        libctx = OSSL_LIB_CTX_new();
        if (libctx == 0) {
          return 0;
        }
        iVar1 = OSSL_LIB_CTX_load_config(libctx,uVar2);
        if (iVar1 == 0) {
          opt_printf_stderr("Failed to load config\n");
          return 0;
        }
        add_test("test_keygen_pairwise_failure",test_keygen_pairwise_failure);
        return 1;
      }
      if (iVar1 == 4) {
        dsaparam_file = opt_arg();
        goto LAB_001005d7;
      }
      if (4 < iVar1) {
        if (5 < iVar1 - 500U) {
          return 0;
        }
        goto LAB_001005d7;
      }
      if (iVar1 == 2) break;
      if (iVar1 != 3) {
        return 0;
      }
      pairwise_name = opt_arg();
      iVar1 = opt_next();
    }
    uVar2 = opt_arg();
  } while( true );
}



void cleanup_tests(void)

{
  OSSL_LIB_CTX_free(libctx);
  return;
}



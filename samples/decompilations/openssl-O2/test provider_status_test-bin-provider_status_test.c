
bool get_provider_params(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  int local_124;
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_PROVIDER_gettable_params();
  iVar1 = test_ptr("test/provider_status_test.c",0x73,
                   "gettable = OSSL_PROVIDER_gettable_params(prov)",uVar2);
  if (iVar1 != 0) {
    uVar3 = OSSL_PARAM_locate_const(uVar2,&_LC2);
    iVar1 = test_ptr("test/provider_status_test.c",0x74,
                     "p = OSSL_PARAM_locate_const(gettable, OSSL_PROV_PARAM_NAME)",uVar3);
    if (iVar1 != 0) {
      uVar3 = OSSL_PARAM_locate_const(uVar2,"version");
      iVar1 = test_ptr("test/provider_status_test.c",0x75,
                       "p = OSSL_PARAM_locate_const(gettable, OSSL_PROV_PARAM_VERSION)",uVar3);
      if (iVar1 != 0) {
        uVar3 = OSSL_PARAM_locate_const(uVar2,"status");
        iVar1 = test_ptr("test/provider_status_test.c",0x76,
                         "p = OSSL_PARAM_locate_const(gettable, OSSL_PROV_PARAM_STATUS)",uVar3);
        if (iVar1 != 0) {
          uVar2 = OSSL_PARAM_locate_const(uVar2,"buildinfo");
          iVar1 = test_ptr("test/provider_status_test.c",0x77,
                           "p = OSSL_PARAM_locate_const(gettable, OSSL_PROV_PARAM_BUILDINFO)",uVar2)
          ;
          if (iVar1 != 0) {
            OSSL_PARAM_construct_utf8_ptr(&local_158,&_LC2,local_120,0);
            local_108 = local_158;
            uStack_100 = uStack_150;
            local_f8 = local_148;
            uStack_f0 = uStack_140;
            local_e8 = local_138;
            OSSL_PARAM_construct_utf8_ptr(&local_158,"version",local_118,0);
            local_e0 = local_158;
            uStack_d8 = uStack_150;
            local_d0 = local_148;
            uStack_c8 = uStack_140;
            local_c0 = local_138;
            OSSL_PARAM_construct_int(&local_158,"status",&local_124);
            local_b8 = local_158;
            uStack_b0 = uStack_150;
            local_a8 = local_148;
            uStack_a0 = uStack_140;
            local_98 = local_138;
            OSSL_PARAM_construct_utf8_ptr(&local_158,"buildinfo",local_110,0);
            local_90 = local_158;
            uStack_88 = uStack_150;
            local_80 = local_148;
            uStack_78 = uStack_140;
            local_70 = local_138;
            OSSL_PARAM_construct_end(&local_158);
            local_48 = local_138;
            local_68 = local_158;
            uStack_60 = uStack_150;
            local_58 = local_148;
            uStack_50 = uStack_140;
            OSSL_PARAM_set_all_unmodified(&local_108);
            iVar1 = OSSL_PROVIDER_get_params(param_1,&local_108);
            iVar1 = test_true("test/provider_status_test.c",0x82,
                              "OSSL_PROVIDER_get_params(prov, params)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = OSSL_PARAM_modified(&local_108);
              iVar1 = test_true("test/provider_status_test.c",0x84,"OSSL_PARAM_modified(params + 0)"
                                ,iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = OSSL_PARAM_modified(&local_e0);
                iVar1 = test_true("test/provider_status_test.c",0x85,
                                  "OSSL_PARAM_modified(params + 1)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = OSSL_PARAM_modified(&local_b8);
                  iVar1 = test_true("test/provider_status_test.c",0x86,
                                    "OSSL_PARAM_modified(params + 2)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = OSSL_PARAM_modified(&local_90);
                    iVar1 = test_true("test/provider_status_test.c",0x87,
                                      "OSSL_PARAM_modified(params + 3)",iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = test_true("test/provider_status_test.c",0x88,"status == 1",
                                        local_124 == 1);
                      bVar4 = iVar1 != 0;
                      goto LAB_00100053;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_00100053:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_provider_gettable_params(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = OSSL_PROVIDER_load(libctx,provider_name);
  iVar1 = test_ptr("test/provider_status_test.c",0xd1,
                   "prov = OSSL_PROVIDER_load(libctx, provider_name)",uVar2);
  if (iVar1 != 0) {
    iVar1 = get_provider_params(uVar2);
    OSSL_PROVIDER_unload(uVar2);
  }
  return iVar1;
}



uint test_provider_status(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int local_a4;
  EVP_PKEY *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a4 = 0;
  local_a0 = (EVP_PKEY *)0x0;
  uVar4 = OSSL_PROVIDER_load(libctx,provider_name);
  iVar1 = test_ptr("test/provider_status_test.c",0x9a,
                   "prov = OSSL_PROVIDER_load(libctx, provider_name)",uVar4);
  if (iVar1 != 0) {
    iVar1 = get_provider_params(uVar4);
    if (iVar1 != 0) {
      OSSL_PARAM_construct_uint(&local_d8,"status",&local_a4);
      local_78 = local_b8;
      local_98 = local_d8;
      uStack_90 = uStack_d0;
      local_88 = local_c8;
      uStack_80 = uStack_c0;
      OSSL_PARAM_construct_end(&local_d8);
      local_50 = local_b8;
      local_70 = local_d8;
      uStack_68 = uStack_d0;
      local_60 = local_c8;
      uStack_58 = uStack_c0;
      iVar1 = OSSL_PROVIDER_get_params(uVar4,&local_98);
      iVar1 = test_true("test/provider_status_test.c",0xa2,"OSSL_PROVIDER_get_params(prov, params)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = test_true("test/provider_status_test.c",0xa3,"status == 1",local_a4 == 1);
        if (iVar1 != 0) {
          uVar5 = EVP_MD_fetch(libctx,"SHA256",0);
          uVar2 = test_ptr("test/provider_status_test.c",0xa5,
                           "fetch = EVP_MD_fetch(libctx, \"SHA256\", NULL)",uVar5);
          if (uVar2 == 0) goto LAB_00100456;
          EVP_MD_free(uVar5);
          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,&_LC19,0);
          iVar1 = test_ptr("test/provider_status_test.c",0xaa,
                           "(pctx = EVP_PKEY_CTX_new_from_name(libctx, \"RSA\", NULL))",ctx);
          if (iVar1 != 0) {
            iVar1 = EVP_PKEY_keygen_init(ctx);
            iVar1 = test_int_gt("test/provider_status_test.c",0xab,"EVP_PKEY_keygen_init(pctx)",
                                &_LC21,iVar1,0);
            if (iVar1 != 0) {
              uVar3 = EVP_PKEY_CTX_set_rsa_keygen_bits(ctx,0x800);
              iVar1 = test_int_gt("test/provider_status_test.c",0xac,
                                  "EVP_PKEY_CTX_set_rsa_keygen_bits(pctx, 2048)",&_LC21,uVar3,0);
              if (iVar1 != 0) {
                iVar1 = EVP_PKEY_keygen(ctx,&local_a0);
                iVar1 = test_int_gt("test/provider_status_test.c",0xad,
                                    "EVP_PKEY_keygen(pctx, &pkey)",&_LC21,iVar1,0);
                if (iVar1 != 0) {
                  EVP_PKEY_free(local_a0);
                  EVP_PKEY_CTX_free(ctx);
                  local_a0 = (EVP_PKEY *)0x0;
                  self_test_args = 0;
                  OSSL_SELF_TEST_set_callback(libctx,self_test_on_demand,&self_test_args);
                  iVar1 = OSSL_PROVIDER_self_test(uVar4);
                  iVar1 = test_true("test/provider_status_test.c",0xb7,
                                    "OSSL_PROVIDER_self_test(prov)",iVar1 != 0);
                  if (iVar1 != 0) {
                    self_test_args = 0;
                    OSSL_SELF_TEST_set_callback(libctx,self_test_on_demand_fail,&self_test_args);
                    iVar1 = OSSL_PROVIDER_self_test(uVar4);
                    iVar1 = test_false("test/provider_status_test.c",0xbd,
                                       "OSSL_PROVIDER_self_test(prov)",iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = OSSL_PROVIDER_get_params(uVar4,&local_98);
                      iVar1 = test_true("test/provider_status_test.c",0xbf,
                                        "OSSL_PROVIDER_get_params(prov, params)",iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = test_uint_eq("test/provider_status_test.c",0xc0,"status",&_LC21,
                                             local_a4,0);
                        if (iVar1 != 0) {
                          uVar5 = EVP_MD_fetch(libctx,"SHA256",0);
                          iVar1 = test_ptr_null("test/provider_status_test.c",0xc2,
                                                "fetch = EVP_MD_fetch(libctx, \"SHA256\", NULL)",
                                                uVar5);
                          uVar2 = (uint)(iVar1 != 0);
                          goto LAB_00100456;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
  uVar2 = 0;
LAB_00100456:
  EVP_MD_free(uVar5);
  OSSL_PROVIDER_unload(uVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool self_test_events(undefined8 param_1,int *param_2,undefined8 param_3,int param_4)

{
  char *__s1;
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *param_2;
  if (iVar3 == 0) {
    BIO_printf(_bio_out,"\n%s\n");
    iVar3 = *param_2;
  }
  *param_2 = iVar3 + 1;
  lVar4 = OSSL_PARAM_locate_const(param_1,"st-phase");
  if ((lVar4 != 0) && (*(int *)(lVar4 + 8) == 4)) {
    __s1 = *(char **)(lVar4 + 0x10);
    lVar4 = OSSL_PARAM_locate_const(param_1,"st-desc");
    if ((lVar4 != 0) && (*(int *)(lVar4 + 8) == 4)) {
      uVar1 = *(undefined8 *)(lVar4 + 0x10);
      lVar4 = OSSL_PARAM_locate_const(param_1,"st-type");
      if ((lVar4 != 0) && (*(int *)(lVar4 + 8) == 4)) {
        uVar2 = *(undefined8 *)(lVar4 + 0x10);
        iVar3 = strcmp(__s1,"Start");
        if (iVar3 == 0) {
          BIO_printf(_bio_out,"%s : (%s) : ",uVar1,uVar2);
        }
        else {
          iVar3 = strcmp(__s1,"Pass");
          if ((iVar3 == 0) || (iVar3 = strcmp(__s1,"Fail"), iVar3 == 0)) {
            BIO_printf(_bio_out,"%s\n",__s1);
          }
        }
        if (param_4 == 0) {
          return true;
        }
        iVar3 = strcmp(__s1,"Corrupt");
        return iVar3 != 0;
      }
    }
  }
  return false;
}



void self_test_on_demand_fail(undefined8 param_1,undefined8 param_2)

{
  self_test_events(param_1,param_2,"On Demand Failure",1);
  return;
}



void self_test_on_demand(undefined8 param_1,undefined8 param_2)

{
  self_test_events(param_1,param_2,"On Demand",0);
  return;
}



void self_test_on_load(undefined8 param_1,undefined8 param_2)

{
  self_test_events(param_1,param_2,"On Loading",0);
  return;
}



undefined1 * test_get_options(void)

{
  return test_options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
LAB_001009ac:
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        lVar2 = OSSL_LIB_CTX_new();
        if (lVar2 == 0) {
          libctx = lVar2;
          return 0;
        }
        libctx = lVar2;
        iVar1 = strcmp(provider_name,"fips");
        if (iVar1 == 0) {
          self_test_args = 0;
          OSSL_SELF_TEST_set_callback(lVar2,self_test_on_load,&self_test_args);
          iVar1 = OSSL_LIB_CTX_load_config(libctx,uVar3);
          if (iVar1 == 0) {
            opt_printf_stderr("Failed to load config\n");
            return 0;
          }
          add_test("test_provider_status",test_provider_status);
        }
        else {
          add_test("test_provider_gettable_params",test_provider_gettable_params);
        }
        return 1;
      }
      if (iVar1 == 2) {
        uVar3 = opt_arg();
        goto LAB_001009ac;
      }
      if (2 < iVar1) break;
      if (iVar1 != 1) {
        return 0;
      }
      provider_name = (char *)opt_arg();
      iVar1 = opt_next();
    }
    if (5 < iVar1 - 500U) {
      return 0;
    }
  } while( true );
}



void cleanup_tests(void)

{
  OSSL_LIB_CTX_free(libctx);
  return;
}



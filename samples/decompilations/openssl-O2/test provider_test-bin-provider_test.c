
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_provider(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  FILE *fp;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_158;
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BIO_snprintf(local_148,0x100,"Hello OpenSSL %.20s, greetings from %s!","3.5.0",param_2);
  EVP_set_default_properties(*param_1,"fips=yes");
  uVar3 = OSSL_PROVIDER_load(*param_1,&_LC3);
  iVar2 = test_ptr("test/provider_test.c",0x3f,"base = OSSL_PROVIDER_load(*libctx, \"base\")",uVar3)
  ;
  local_158 = param_3;
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar6 = 0;
    uVar4 = 0;
    goto LAB_001000a2;
  }
  uVar4 = OSSL_PROVIDER_load(*param_1,param_2);
  iVar2 = test_ptr("test/provider_test.c",0x41,"prov = OSSL_PROVIDER_load(*libctx, name)",uVar4);
  if (iVar2 != 0) {
    EVP_set_default_properties(*param_1,&_LC7);
    if (param_3 == 0) {
LAB_00100280:
      iVar2 = OSSL_PROVIDER_get_params(uVar4,greeting_request);
      iVar2 = test_true("test/provider_test.c",0x5b,
                        "OSSL_PROVIDER_get_params(prov, greeting_request)",iVar2 != 0);
      uVar6 = greeting_request._16_8_;
      if (iVar2 != 0) {
        iVar2 = test_ptr("test/provider_test.c",0x5c,"greeting = greeting_request[0].data",
                         greeting_request._16_8_);
        if (iVar2 != 0) {
          iVar2 = test_size_t_gt("test/provider_test.c",0x5d,"greeting_request[0].data_size",&_LC14,
                                 greeting_request._24_8_,0);
          if (iVar2 != 0) {
            iVar2 = test_str_eq("test/provider_test.c",0x5e,"greeting","expected_greeting",uVar6,
                                local_148);
            if (iVar2 != 0) {
              uVar5 = ERR_peek_last_error();
              iVar2 = test_int_gt("test/provider_test.c",99,&_LC18,&_LC14,uVar5 & 0xffffffff,0);
              if (iVar2 != 0) {
                uVar1 = (uint)uVar5 & 0x7fffff;
                if ((uVar5 & 0x80000000) != 0) {
                  uVar1 = (uint)uVar5 & 0x7fffffff;
                }
                iVar2 = test_int_eq("test/provider_test.c",100,"ERR_GET_REASON(err)",&_LC19,uVar1,1)
                ;
                if (iVar2 != 0) {
                  OSSL_PROVIDER_unload(param_3);
                  if (param_3 == 0) {
LAB_0010055d:
                    iVar2 = OSSL_PROVIDER_unload(uVar3);
                    iVar2 = test_true("test/provider_test.c",0x85,"OSSL_PROVIDER_unload(base)",
                                      iVar2 != 0);
                    if (iVar2 != 0) {
                      OSSL_PROVIDER_unload(uVar4);
                      iVar2 = test_true("test/provider_test.c",0x88,"OSSL_PROVIDER_unload(prov)");
                      if (iVar2 == 0) {
                        uVar3 = 0;
                        uVar6 = 0;
                        local_158 = 0;
                        iVar2 = 0;
                      }
                      else {
                        uVar3 = 0;
                        uVar6 = 0;
                        iVar2 = 1;
                        uVar4 = 0;
                        OSSL_LIB_CTX_free(*param_1);
                        fp = _stderr;
                        *param_1 = 0;
                        ERR_print_errors_fp(fp);
                        local_158 = 0;
                      }
                      goto LAB_001000a2;
                    }
                  }
                  else {
                    iVar2 = OSSL_PROVIDER_get_params(uVar4,digest_check);
                    iVar2 = test_true("test/provider_test.c",0x6c,
                                      "OSSL_PROVIDER_get_params(prov, digest_check)",iVar2 != 0);
                    if (iVar2 != 0) {
                      iVar2 = test_false("test/provider_test.c",0x6d,"digestsuccess",
                                         digestsuccess != 0);
                      if (iVar2 != 0) {
                        local_158 = OSSL_PROVIDER_load(*param_1,"legacy");
                        uVar6 = OSSL_PROVIDER_load(*param_1,"default");
                        iVar2 = test_ptr("test/provider_test.c",0x77,"deflt",uVar6);
                        if (iVar2 == 0) goto LAB_001000a2;
                        iVar2 = OSSL_PROVIDER_available(*param_1,"default");
                        iVar2 = test_true("test/provider_test.c",0x78,
                                          "OSSL_PROVIDER_available(*libctx, \"default\")",iVar2 != 0
                                         );
                        if (iVar2 == 0) goto LAB_001000a2;
                        OSSL_PROVIDER_unload(uVar6);
                        iVar2 = test_ptr("test/provider_test.c",0x7c,"legacy",local_158);
                        if (iVar2 != 0) {
                          iVar2 = OSSL_PROVIDER_available(*param_1,"default");
                          uVar6 = 0;
                          iVar2 = test_false("test/provider_test.c",0x7d,
                                             "OSSL_PROVIDER_available(*libctx, \"default\")",
                                             iVar2 != 0);
                          if (iVar2 == 0) goto LAB_001000a2;
                          iVar2 = OSSL_PROVIDER_get_params(uVar4,digest_check);
                          iVar2 = test_true("test/provider_test.c",0x7e,
                                            "OSSL_PROVIDER_get_params(prov, digest_check)",
                                            iVar2 != 0);
                          if (iVar2 != 0) {
                            iVar2 = test_true("test/provider_test.c",0x7f,"digestsuccess",
                                              digestsuccess != 0);
                            if (iVar2 != 0) {
                              OSSL_PROVIDER_unload(local_158);
                              goto LAB_0010055d;
                            }
                          }
                        }
                        goto LAB_00100129;
                      }
                    }
                  }
                  uVar6 = 0;
                  iVar2 = 0;
                  local_158 = 0;
                  goto LAB_001000a2;
                }
              }
            }
          }
        }
      }
    }
    else {
      iVar2 = OSSL_PROVIDER_get_params(uVar4,digest_check);
      iVar2 = test_true("test/provider_test.c",0x4a,"OSSL_PROVIDER_get_params(prov, digest_check)",
                        iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = test_true("test/provider_test.c",0x4b,"digestsuccess",digestsuccess != 0);
        if (iVar2 != 0) {
          iVar2 = OSSL_PROVIDER_get_params(uVar4,stop_property_mirror);
          iVar2 = test_true("test/provider_test.c",0x52,
                            "OSSL_PROVIDER_get_params(prov, stop_property_mirror)",iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = test_true("test/provider_test.c",0x53,"stopsuccess",stopsuccess != 0);
            if (iVar2 != 0) {
              EVP_set_default_properties(*param_1,"fips=yes");
              iVar2 = OSSL_PROVIDER_get_params(uVar4,digest_check);
              iVar2 = test_true("test/provider_test.c",0x56,
                                "OSSL_PROVIDER_get_params(prov, digest_check)",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = test_true("test/provider_test.c",0x57,"digestsuccess",digestsuccess != 0);
                if (iVar2 != 0) {
                  EVP_set_default_properties(*param_1,&_LC7);
                  goto LAB_00100280;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00100129:
  uVar6 = 0;
  iVar2 = 0;
LAB_001000a2:
  OSSL_PROVIDER_unload(uVar3);
  OSSL_PROVIDER_unload(uVar6);
  OSSL_PROVIDER_unload(local_158);
  OSSL_PROVIDER_unload(uVar4);
  OSSL_LIB_CTX_free(*param_1);
  *param_1 = 0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_builtin_provider_with_child(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_LIB_CTX_new();
  local_38 = uVar2;
  iVar1 = test_ptr("test/provider_test.c",0xf3,"libctx",uVar2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = OSSL_PROVIDER_load(uVar2,"legacy");
    if (lVar3 == 0) {
      OSSL_LIB_CTX_free(uVar2);
      uVar2 = 1;
    }
    else {
      iVar1 = OSSL_PROVIDER_add_builtin(uVar2,"p_test",&p_test_init);
      iVar1 = test_true("test/provider_test.c",0x100,
                        "OSSL_PROVIDER_add_builtin(libctx, name, PROVIDER_INIT_FUNCTION_NAME)",
                        iVar1 != 0);
      if (iVar1 == 0) {
        OSSL_PROVIDER_unload(lVar3);
        OSSL_LIB_CTX_free(uVar2);
        uVar2 = 0;
      }
      else {
        uVar2 = test_provider(&local_38,"p_test",lVar3);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_builtin_provider(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_LIB_CTX_new();
  local_28 = uVar2;
  iVar1 = test_ptr("test/provider_test.c",0xe1,"libctx",uVar2);
  if (iVar1 != 0) {
    iVar1 = OSSL_PROVIDER_add_builtin(uVar2,"p_test_builtin",&p_test_init);
    iVar1 = test_true("test/provider_test.c",0xe2,
                      "OSSL_PROVIDER_add_builtin(libctx, name, PROVIDER_INIT_FUNCTION_NAME)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = test_provider(&local_28,"p_test_builtin",0);
      bVar3 = iVar1 != 0;
      uVar2 = local_28;
      goto LAB_0010074c;
    }
  }
  bVar3 = false;
LAB_0010074c:
  OSSL_LIB_CTX_free(uVar2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_loaded_provider(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_60;
  char local_58 [8];
  char acStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = OSSL_LIB_CTX_new();
  iVar2 = test_ptr("test/provider_test.c",0x113,"libctx",local_60);
  if (iVar2 != 0) {
    iVar2 = test_provider(&local_60,"p_test",0);
    uVar4 = OSSL_LIB_CTX_new();
    local_60 = uVar4;
    iVar3 = test_ptr("test/provider_test.c",0x11a,"libctx",uVar4);
    if ((iVar3 != 0) && (iVar2 != 0)) {
      local_58[0] = _LC36[0];
      local_58[1] = _LC36[1];
      local_58[2] = _LC36[2];
      local_58[3] = _LC36[3];
      local_58[4] = _LC36[4];
      local_58[5] = _LC36[5];
      local_58[6] = _LC36[6];
      local_58[7] = _LC36[7];
      acStack_50[0] = _LC36[8];
      acStack_50[1] = _LC36[9];
      acStack_50[2] = _LC36[10];
      acStack_50[3] = _LC36[0xb];
      acStack_50[4] = _LC36[0xc];
      acStack_50[5] = _LC36[0xd];
      acStack_50[6] = _LC36[0xe];
      acStack_50[7] = _LC36[0xf];
      uVar5 = OSSL_PARAM_BLD_new();
      iVar2 = test_ptr("test/provider_test.c",0xac,"bld = OSSL_PARAM_BLD_new()",uVar5);
      uVar8 = uVar4;
      if (iVar2 == 0) {
LAB_001008c2:
        local_78 = 0;
        iVar2 = 0;
        uVar6 = 0;
      }
      else {
        iVar2 = OSSL_PARAM_BLD_push_utf8_string(uVar5,"greeting",local_58,0xf);
        iVar2 = test_true("test/provider_test.c",0xad,
                          "OSSL_PARAM_BLD_push_utf8_string(bld, \"greeting\", custom_buf, strlen(custom_buf))"
                          ,iVar2 != 0);
        if (iVar2 == 0) goto LAB_001008c2;
        uVar6 = 0;
        local_78 = OSSL_PARAM_BLD_to_param(uVar5);
        iVar2 = test_ptr("test/provider_test.c",0xaf,"params = OSSL_PARAM_BLD_to_param(bld)",
                         local_78);
        if (iVar2 != 0) {
          uVar6 = OSSL_PROVIDER_load_ex(uVar4,"p_test",local_78);
          iVar2 = test_ptr("test/provider_test.c",0xb3,
                           "prov = OSSL_PROVIDER_load_ex(*libctx, name, params)",uVar6);
          if (iVar2 != 0) {
            iVar2 = OSSL_PROVIDER_get_params(uVar6,greeting_request);
            iVar2 = test_true("test/provider_test.c",0xb6,
                              "OSSL_PROVIDER_get_params(prov, greeting_request)",iVar2 != 0);
            uVar1 = greeting_request._16_8_;
            if (iVar2 != 0) {
              iVar2 = test_ptr("test/provider_test.c",0xb7,"greeting = greeting_request[0].data",
                               greeting_request._16_8_);
              if (iVar2 != 0) {
                iVar2 = test_size_t_gt("test/provider_test.c",0xb8,"greeting_request[0].data_size",
                                       &_LC14,greeting_request._24_8_,0);
                if (iVar2 != 0) {
                  iVar2 = test_str_eq("test/provider_test.c",0xb9,"greeting","custom_buf",uVar1,
                                      local_58);
                  if (iVar2 != 0) {
                    uVar7 = ERR_peek_last_error();
                    iVar2 = test_int_gt("test/provider_test.c",0xbe,&_LC18,&_LC14,uVar7 & 0xffffffff
                                        ,0);
                    if (iVar2 != 0) {
                      uVar9 = (uint)uVar7 & 0x7fffff;
                      if ((uVar7 & 0x80000000) != 0) {
                        uVar9 = (uint)uVar7 & 0x7fffffff;
                      }
                      iVar2 = test_int_eq("test/provider_test.c",0xbf,"ERR_GET_REASON(err)",&_LC19,
                                          uVar9,1);
                      if (iVar2 != 0) {
                        iVar2 = OSSL_PROVIDER_unload(uVar6);
                        iVar2 = test_true("test/provider_test.c",0xc2,"OSSL_PROVIDER_unload(prov)",
                                          iVar2 != 0);
                        if (iVar2 != 0) {
                          iVar2 = 1;
                          uVar8 = 0;
                          uVar6 = 0;
                          OSSL_LIB_CTX_free(uVar4);
                          ERR_print_errors_fp(_stderr);
                          goto LAB_001008d0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          iVar2 = 0;
        }
      }
LAB_001008d0:
      OSSL_PARAM_BLD_free(uVar5);
      OSSL_PARAM_free(local_78);
      OSSL_PROVIDER_unload(uVar6);
      OSSL_LIB_CTX_free(uVar8);
      goto LAB_00100824;
    }
  }
  iVar2 = 0;
LAB_00100824:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return test_options_0;
}



undefined8 setup_tests(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  do {
    iVar2 = opt_next();
    while( true ) {
      if (iVar2 == 0) {
        if (bVar1) {
          add_test("test_loaded_provider",test_loaded_provider);
        }
        else {
          add_test("test_builtin_provider",test_builtin_provider);
          add_test("test_builtin_provider_with_child",test_builtin_provider_with_child);
        }
        return 1;
      }
      if (iVar2 != 1) break;
      bVar1 = true;
      iVar2 = opt_next();
    }
  } while (iVar2 - 500U < 6);
  return 0;
}



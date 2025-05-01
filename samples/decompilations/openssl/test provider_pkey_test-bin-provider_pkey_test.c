
uint test_pkey_store_open_ex(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UI_METHOD *method;
  undefined8 uVar6;
  
  uVar3 = OSSL_PROVIDER_load(libctx,"default");
  iVar1 = test_ptr("test/provider_pkey_test.c",0x183,
                   "deflt = OSSL_PROVIDER_load(libctx, \"default\")",uVar3);
  if (iVar1 == 0) {
    uVar2 = 0;
    method = (UI_METHOD *)0x0;
    uVar4 = 0;
  }
  else {
    uVar4 = fake_rsa_start(libctx);
    uVar2 = test_ptr("test/provider_pkey_test.c",0x186,"fake_rsa = fake_rsa_start(libctx)",uVar4);
    if (uVar2 != 0) {
      uVar5 = OSSL_STORE_LOADER_fetch(libctx,"fake_rsa","?provider=fake-rsa");
      uVar2 = test_ptr("test/provider_pkey_test.c",0x189,
                       "loader = OSSL_STORE_LOADER_fetch(libctx, \"fake_rsa\", propq)",uVar5);
      if (uVar2 != 0) {
        OSSL_STORE_LOADER_free(uVar5);
        method = UI_create_method("PW Callbacks");
        uVar2 = test_ptr("test/provider_pkey_test.c",399,
                         "ui_method= UI_create_method(\"PW Callbacks\")",method);
        if (uVar2 != 0) {
          uVar2 = 0;
          iVar1 = UI_method_set_reader(method,fake_pw_read_string);
          if (iVar1 == 0) {
            uVar6 = 0;
            uVar5 = OSSL_STORE_open_ex("fake_rsa:openpwtest",libctx,"?provider=fake-rsa",method,0,0,
                                       0,0);
            uVar2 = test_ptr("test/provider_pkey_test.c",0x195,
                             "ctx = OSSL_STORE_open_ex(\"fake_rsa:openpwtest\", libctx, propq, ui_method, NULL, NULL, NULL, NULL)"
                             ,uVar5);
            if (uVar2 != 0) {
              OSSL_STORE_close(uVar5,uVar6);
              uVar5 = OSSL_STORE_open_ex("fake_rsa:openpwtest",libctx,"?provider=fake-rsa",0,0,0,0,0
                                        );
              iVar1 = test_ptr_null("test/provider_pkey_test.c",0x19b,
                                    "ctx = OSSL_STORE_open_ex(\"fake_rsa:openpwtest\", libctx, propq, NULL, NULL, NULL, NULL, NULL)"
                                    ,uVar5);
              uVar2 = (uint)(iVar1 != 0);
            }
          }
        }
        goto LAB_00100055;
      }
    }
    method = (UI_METHOD *)0x0;
  }
LAB_00100055:
  UI_destroy_method(method);
  fake_rsa_finish(uVar4);
  OSSL_PROVIDER_unload(uVar3);
  OSSL_STORE_close();
  EVP_PKEY_free((EVP_PKEY *)0x0);
  return uVar2;
}



undefined8 fake_pw_read_string(UI *param_1,UI_STRING *param_2)

{
  UI_string_types UVar1;
  
  UVar1 = UI_get_string_type(param_2);
  if (UVar1 != UIT_PROMPT) {
    return 0;
  }
  UI_set_result(param_1,param_2,"Passphrase Testing");
  return 1;
}



uint test_pkey_store(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  EVP_PKEY *pkey;
  char *pcVar8;
  
  pcVar8 = "?provider=default";
  if (param_1 == 0) {
    pcVar8 = "?provider=fake-rsa";
  }
  uVar4 = OSSL_PROVIDER_load(libctx,"default");
  iVar1 = test_ptr("test/provider_pkey_test.c",0xff,
                   "deflt = OSSL_PROVIDER_load(libctx, \"default\")",uVar4);
  if (iVar1 == 0) {
    uVar2 = 0;
    uVar6 = 0;
    pkey = (EVP_PKEY *)0x0;
    uVar5 = 0;
  }
  else {
    uVar5 = fake_rsa_start(libctx);
    uVar2 = test_ptr("test/provider_pkey_test.c",0x102,"fake_rsa = fake_rsa_start(libctx)",uVar5);
    if (uVar2 != 0) {
      uVar6 = OSSL_STORE_LOADER_fetch(libctx,"fake_rsa",pcVar8);
      uVar2 = test_ptr("test/provider_pkey_test.c",0x105,
                       "loader = OSSL_STORE_LOADER_fetch(libctx, \"fake_rsa\", propq)",uVar6);
      if (uVar2 != 0) {
        pkey = (EVP_PKEY *)0x0;
        OSSL_STORE_LOADER_free(uVar6);
        uVar6 = OSSL_STORE_open_ex("fake_rsa:test",libctx,pcVar8,0,0,0,0);
        iVar1 = test_ptr("test/provider_pkey_test.c",0x10b,
                         "ctx = OSSL_STORE_open_ex(\"fake_rsa:test\", libctx, propq, NULL, NULL, NULL, NULL, NULL)"
                         ,uVar6);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          while( true ) {
            iVar1 = OSSL_STORE_eof(uVar6);
            if (iVar1 != 0) break;
            lVar7 = OSSL_STORE_load(uVar6);
            if ((lVar7 == 0) || (pkey != (EVP_PKEY *)0x0)) break;
            pkey = (EVP_PKEY *)0x0;
            iVar1 = OSSL_STORE_INFO_get_type(lVar7);
            if (iVar1 == 4) {
              pkey = (EVP_PKEY *)OSSL_STORE_INFO_get1_PKEY(lVar7);
            }
            OSSL_STORE_INFO_free(lVar7);
          }
          uVar2 = test_ptr("test/provider_pkey_test.c",0x118,&_LC16,pkey);
          if (uVar2 != 0) {
            uVar3 = EVP_PKEY_is_a(pkey,&_LC17);
            iVar1 = test_int_eq("test/provider_pkey_test.c",0x118,"EVP_PKEY_is_a(pkey, \"RSA\")",
                                &_LC18,uVar3,1);
            uVar2 = (uint)(iVar1 != 0);
          }
        }
        goto LAB_001002c9;
      }
    }
    uVar6 = 0;
    pkey = (EVP_PKEY *)0x0;
  }
LAB_001002c9:
  fake_rsa_finish(uVar5);
  OSSL_PROVIDER_unload(uVar4);
  OSSL_STORE_close(uVar6);
  EVP_PKEY_free(pkey);
  return uVar2;
}



int test_pkey_delete(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  EVP_PKEY *pkey;
  
  uVar3 = OSSL_PROVIDER_load(libctx,"default");
  iVar1 = test_ptr("test/provider_pkey_test.c",0x131,
                   "deflt = OSSL_PROVIDER_load(libctx, \"default\")",uVar3);
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar6 = 0;
    uVar4 = fake_rsa_start(libctx);
    iVar1 = test_ptr("test/provider_pkey_test.c",0x134,"fake_rsa = fake_rsa_start(libctx)",uVar4);
    if (iVar1 != 0) {
      uVar5 = OSSL_STORE_LOADER_fetch(libctx,"fake_rsa","?provider=fake-rsa");
      iVar1 = test_ptr("test/provider_pkey_test.c",0x137,
                       "loader = OSSL_STORE_LOADER_fetch(libctx, \"fake_rsa\", propq)",uVar5);
      if (iVar1 != 0) {
        pkey = (EVP_PKEY *)0x0;
        OSSL_STORE_LOADER_free(uVar5);
        uVar6 = OSSL_STORE_open_ex("fake_rsa:test",libctx,"?provider=fake-rsa",0,0,0,0,0);
        iVar1 = test_ptr("test/provider_pkey_test.c",0x13e,
                         "ctx = OSSL_STORE_open_ex(\"fake_rsa:test\", libctx, propq, NULL, NULL, NULL, NULL, NULL)"
                         ,uVar6);
        if (iVar1 != 0) {
          while (((iVar1 = OSSL_STORE_eof(uVar6), iVar1 == 0 &&
                  (lVar7 = OSSL_STORE_load(uVar6), pkey == (EVP_PKEY *)0x0)) && (lVar7 != 0))) {
            pkey = (EVP_PKEY *)0x0;
            iVar1 = OSSL_STORE_INFO_get_type(lVar7);
            if (iVar1 == 4) {
              pkey = (EVP_PKEY *)OSSL_STORE_INFO_get1_PKEY(lVar7);
            }
            OSSL_STORE_INFO_free(lVar7);
          }
          iVar1 = test_ptr("test/provider_pkey_test.c",0x14b,&_LC16,pkey);
          if (iVar1 != 0) {
            uVar2 = EVP_PKEY_is_a(pkey,&_LC17);
            iVar1 = test_int_eq("test/provider_pkey_test.c",0x14b,"EVP_PKEY_is_a(pkey, \"RSA\")",
                                &_LC18,uVar2,1);
            if (iVar1 == 0) goto LAB_001004c2;
            EVP_PKEY_free(pkey);
            uVar2 = OSSL_STORE_delete("fake_rsa:test",libctx,"?provider=fake-rsa",0,0,0);
            iVar1 = test_int_eq("test/provider_pkey_test.c",0x150,
                                "OSSL_STORE_delete(\"fake_rsa:test\", libctx, propq, NULL, NULL, NULL)"
                                ,&_LC18,uVar2,1);
            if (iVar1 != 0) {
              uVar2 = OSSL_STORE_close(uVar6);
              iVar1 = test_int_eq("test/provider_pkey_test.c",0x153,"OSSL_STORE_close(ctx)",&_LC18,
                                  uVar2,1);
              if (iVar1 != 0) {
                uVar6 = OSSL_STORE_open_ex("fake_rsa:test",libctx,"?provider=fake-rsa",0,0,0,0,0);
                iVar1 = test_ptr("test/provider_pkey_test.c",0x157,
                                 "ctx = OSSL_STORE_open_ex(\"fake_rsa:test\", libctx, propq, NULL, NULL, NULL, NULL, NULL)"
                                 ,uVar6);
                while (iVar1 != 0) {
                  iVar1 = OSSL_STORE_eof(uVar6);
                  if (iVar1 != 0) {
                    iVar1 = 1;
                    goto LAB_001004c2;
                  }
                  uVar5 = OSSL_STORE_load(uVar6);
                  iVar1 = test_ptr_null("test/provider_pkey_test.c",0x15d,&_LC22,uVar5);
                }
              }
            }
          }
        }
        iVar1 = 0;
      }
    }
  }
LAB_001004c2:
  fake_rsa_finish(uVar4);
  OSSL_PROVIDER_unload(uVar3);
  OSSL_STORE_close(uVar6);
  fake_rsa_restore_store_state();
  return iVar1;
}



uint test_pkey_eq(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  long in_FS_OFFSET;
  EVP_PKEY *local_50;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (EVP_PKEY *)0x0;
  local_48 = (EVP_PKEY *)0x0;
  uVar4 = fake_rsa_start(libctx);
  uVar1 = test_ptr("test/provider_pkey_test.c",0xbf,"fake_rsa = fake_rsa_start(libctx)",uVar4);
  if (uVar1 == 0) goto LAB_00100808;
  uVar5 = OSSL_PROVIDER_load(libctx,"default");
  iVar2 = test_ptr("test/provider_pkey_test.c",0xc2,
                   "deflt = OSSL_PROVIDER_load(libctx, \"default\")",uVar5);
  if (iVar2 == 0) {
    uVar6 = 0;
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    uVar1 = 0;
  }
  else {
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    uVar6 = fake_rsa_key_params(0);
    uVar1 = test_ptr("test/provider_pkey_test.c",0xc6,"params = fake_rsa_key_params(0)",uVar6);
    if (uVar1 != 0) {
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,&_LC17,"provider=fake-rsa");
      iVar2 = test_ptr("test/provider_pkey_test.c",199,
                       "ctx = EVP_PKEY_CTX_new_from_name(libctx, \"RSA\", \"provider=fake-rsa\")",
                       ctx);
      ctx_00 = ctx;
      if (iVar2 != 0) {
        iVar2 = EVP_PKEY_fromdata_init(ctx);
        iVar2 = test_true("test/provider_pkey_test.c",0xc9,"EVP_PKEY_fromdata_init(ctx)",iVar2 != 0)
        ;
        if (iVar2 != 0) {
          iVar2 = EVP_PKEY_fromdata(ctx,&local_50,0x86,uVar6);
          iVar2 = test_true("test/provider_pkey_test.c",0xca,
                            "EVP_PKEY_fromdata(ctx, &pkey_fake, EVP_PKEY_PUBLIC_KEY, params)",
                            iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = test_ptr("test/provider_pkey_test.c",0xcc,"pkey_fake",local_50);
            if (iVar2 != 0) {
              ctx_00 = (EVP_PKEY_CTX *)0x0;
              EVP_PKEY_CTX_free(ctx);
              OSSL_PARAM_free(uVar6);
              uVar6 = fake_rsa_key_params(0);
              uVar1 = test_ptr("test/provider_pkey_test.c",0xd5,"params = fake_rsa_key_params(0)",
                               uVar6);
              if (uVar1 == 0) goto LAB_0010088f;
              ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,&_LC17,"provider=default");
              iVar2 = test_ptr("test/provider_pkey_test.c",0xd6,
                               "ctx = EVP_PKEY_CTX_new_from_name(libctx, \"RSA\", \"provider=default\")"
                               ,ctx_00);
              if (iVar2 != 0) {
                iVar2 = EVP_PKEY_fromdata_init(ctx_00);
                iVar2 = test_true("test/provider_pkey_test.c",0xd8,"EVP_PKEY_fromdata_init(ctx)",
                                  iVar2 != 0);
                if (iVar2 != 0) {
                  iVar2 = EVP_PKEY_fromdata(ctx_00,&local_48,0x86,uVar6);
                  iVar2 = test_true("test/provider_pkey_test.c",0xd9,
                                    "EVP_PKEY_fromdata(ctx, &pkey_dflt, EVP_PKEY_PUBLIC_KEY, params)"
                                    ,iVar2 != 0);
                  if (iVar2 != 0) {
                    iVar2 = test_ptr("test/provider_pkey_test.c",0xdb,"pkey_dflt",local_48);
                    if (iVar2 != 0) {
                      EVP_PKEY_CTX_free(ctx_00);
                      OSSL_PARAM_free(uVar6);
                      uVar3 = EVP_PKEY_eq(local_50,local_48);
                      iVar2 = test_int_eq("test/provider_pkey_test.c",0xe4,
                                          "EVP_PKEY_eq(pkey_fake, pkey_dflt)",&_LC18,uVar3,1);
                      uVar1 = (uint)(iVar2 != 0);
                      uVar6 = 0;
                      ctx_00 = (EVP_PKEY_CTX *)0x0;
                      goto LAB_0010088f;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar1 = 0;
    }
  }
LAB_0010088f:
  fake_rsa_finish(uVar4);
  OSSL_PROVIDER_unload(uVar5);
  EVP_PKEY_CTX_free(ctx_00);
  EVP_PKEY_free(local_50);
  EVP_PKEY_free(local_48);
  OSSL_PARAM_free(uVar6);
LAB_00100808:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_alternative_keygen_init(void)

{
  int iVar1;
  undefined8 uVar2;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar2 = OSSL_PROVIDER_load(libctx,"default");
  iVar1 = test_ptr("test/provider_pkey_test.c",0x82,
                   "deflt = OSSL_PROVIDER_load(libctx, \"default\")",uVar2);
  if (iVar1 == 0) {
    bVar5 = false;
    uVar3 = 0;
    ctx = (EVP_PKEY_CTX *)0x0;
  }
  else {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,&_LC17,0);
    iVar1 = test_ptr("test/provider_pkey_test.c",0x86,
                     "ctx = EVP_PKEY_CTX_new_from_name(libctx, \"RSA\", NULL)",ctx);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_keygen_init(ctx);
      iVar1 = test_int_gt("test/provider_pkey_test.c",0x89,"EVP_PKEY_keygen_init(ctx)",&_LC35,iVar1,
                          0);
      if (iVar1 != 0) {
        uVar3 = EVP_PKEY_CTX_get0_provider(ctx);
        iVar1 = test_ptr("test/provider_pkey_test.c",0x8c,
                         "provider = EVP_PKEY_CTX_get0_provider(ctx)",uVar3);
        if (iVar1 != 0) {
          uVar3 = OSSL_PROVIDER_get0_name(uVar3);
          iVar1 = test_ptr("test/provider_pkey_test.c",0x8f,
                           "provname = OSSL_PROVIDER_get0_name(provider)",uVar3);
          if ((iVar1 != 0) &&
             (iVar1 = test_str_eq("test/provider_pkey_test.c",0x92,"provname","\"default\"",uVar3,
                                  "default"), iVar1 != 0)) {
            EVP_PKEY_CTX_free(ctx);
            uVar3 = fake_rsa_start(libctx);
            iVar1 = test_ptr("test/provider_pkey_test.c",0x99,"fake_rsa = fake_rsa_start(libctx)",
                             uVar3);
            if (iVar1 == 0) {
              return false;
            }
            ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,&_LC17,"?provider=fake-rsa");
            iVar1 = test_ptr("test/provider_pkey_test.c",0x9c,
                             "ctx = EVP_PKEY_CTX_new_from_name(libctx, \"RSA\", \"?provider=fake-rsa\")"
                             ,ctx);
            if (iVar1 != 0) {
              iVar1 = EVP_PKEY_keygen_init(ctx);
              iVar1 = test_int_gt("test/provider_pkey_test.c",0xa0,"EVP_PKEY_keygen_init(ctx)",
                                  &_LC35,iVar1,0);
              if (iVar1 != 0) {
                uVar4 = EVP_PKEY_CTX_get0_provider(ctx);
                iVar1 = test_ptr("test/provider_pkey_test.c",0xa3,
                                 "provider = EVP_PKEY_CTX_get0_provider(ctx)",uVar4);
                if (iVar1 != 0) {
                  uVar4 = OSSL_PROVIDER_get0_name(uVar4);
                  iVar1 = test_ptr("test/provider_pkey_test.c",0xa6,
                                   "provname = OSSL_PROVIDER_get0_name(provider)",uVar4);
                  if (iVar1 != 0) {
                    iVar1 = test_str_eq("test/provider_pkey_test.c",0xa9,"provname","\"fake-rsa\"",
                                        uVar4,"fake-rsa");
                    bVar5 = iVar1 != 0;
                    goto LAB_00100b55;
                  }
                }
              }
            }
            bVar5 = false;
            goto LAB_00100b55;
          }
        }
      }
    }
    bVar5 = false;
    uVar3 = 0;
  }
LAB_00100b55:
  fake_rsa_finish(uVar3);
  OSSL_PROVIDER_unload(uVar2);
  EVP_PKEY_CTX_free(ctx);
  return bVar5;
}



undefined4 fetch_sig_constprop_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar2 = EVP_SIGNATURE_fetch(param_1,&_LC17,param_2);
  iVar1 = test_ptr("test/provider_pkey_test.c",0x20,&_LC44,uVar2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = EVP_SIGNATURE_get0_provider(uVar2);
  iVar1 = test_ptr("test/provider_pkey_test.c",0x23,"prov = EVP_SIGNATURE_get0_provider(sig)",uVar3)
  ;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    iVar1 = test_ptr_eq("test/provider_pkey_test.c",0x26,&_LC47,"expected_prov",uVar3,param_3);
    if (iVar1 == 0) {
      uVar4 = OSSL_PROVIDER_get0_name(param_3);
      uVar3 = OSSL_PROVIDER_get0_name(uVar3);
      uVar5 = 0;
      test_info("test/provider_pkey_test.c",0x27,"Fetched provider: %s, Expected provider: %s",uVar3
                ,uVar4);
    }
  }
  EVP_SIGNATURE_free(uVar2);
  return uVar5;
}



int test_pkey_sig(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  EVP_PKEY *local_50;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (EVP_PKEY *)0x0;
  uVar3 = fake_rsa_start(libctx);
  iVar1 = test_ptr("test/provider_pkey_test.c",0x3c,"fake_rsa = fake_rsa_start(libctx)",uVar3);
  if (iVar1 == 0) goto LAB_00100edf;
  uVar4 = OSSL_PROVIDER_load(libctx,"default");
  iVar1 = test_ptr("test/provider_pkey_test.c",0x3f,
                   "deflt = OSSL_PROVIDER_load(libctx, \"default\")",uVar4);
  if (iVar1 == 0) {
LAB_00100f71:
    ctx = (EVP_PKEY_CTX *)0x0;
    iVar1 = 0;
  }
  else {
    iVar1 = fetch_sig_constprop_0(libctx,"provider=fake-rsa",uVar3);
    iVar1 = test_true("test/provider_pkey_test.c",0x43,
                      "fetch_sig(libctx, \"RSA\", \"provider=fake-rsa\", fake_rsa)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100f71;
    iVar1 = fetch_sig_constprop_0(libctx,"?provider=fake-rsa",uVar3);
    iVar1 = test_true("test/provider_pkey_test.c",0x44,
                      "fetch_sig(libctx, \"RSA\", \"?provider=fake-rsa\", fake_rsa)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100f71;
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,&_LC17,"provider=fake-rsa");
    iVar1 = test_ptr("test/provider_pkey_test.c",0x48,
                     "ctx = EVP_PKEY_CTX_new_from_name(libctx, \"RSA\", \"provider=fake-rsa\")",ctx)
    ;
    if (iVar1 == 0) {
LAB_00101009:
      iVar1 = 0;
    }
    else {
      iVar1 = EVP_PKEY_fromdata_init(ctx);
      iVar1 = test_true("test/provider_pkey_test.c",0x4a,"EVP_PKEY_fromdata_init(ctx)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EVP_PKEY_fromdata(ctx,&local_50,0x87,0);
        iVar1 = test_true("test/provider_pkey_test.c",0x4b,
                          "EVP_PKEY_fromdata(ctx, &pkey, EVP_PKEY_KEYPAIR, NULL)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_ptr("test/provider_pkey_test.c",0x4c,&_LC16,local_50);
          if (iVar1 != 0) {
            iVar1 = 3;
            EVP_PKEY_CTX_free(ctx);
            do {
              ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,local_50,"?provider=default");
              iVar2 = test_ptr("test/provider_pkey_test.c",0x5b,
                               "ctx = EVP_PKEY_CTX_new_from_pkey(libctx, pkey, \"?provider=default\")"
                               ,ctx);
              if (iVar2 == 0) goto LAB_00101009;
              iVar2 = EVP_PKEY_sign_init(ctx);
              iVar2 = test_int_eq("test/provider_pkey_test.c",100,"EVP_PKEY_sign_init(ctx)",&_LC18,
                                  iVar2,1);
              if (iVar2 == 0) goto LAB_00101009;
              iVar2 = EVP_PKEY_sign(ctx,(uchar *)0x0,&local_48,(uchar *)0x0,0);
              iVar2 = test_int_eq("test/provider_pkey_test.c",0x67,
                                  "EVP_PKEY_sign(ctx, NULL, &siglen, NULL, 0)",&_LC18,iVar2,1);
              if (iVar2 == 0) goto LAB_00101009;
              iVar2 = test_size_t_eq("test/provider_pkey_test.c",0x68,"siglen",&_LC55,local_48,0x100
                                    );
              if (iVar2 == 0) goto LAB_00101009;
              EVP_PKEY_CTX_free(ctx);
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
            ctx = (EVP_PKEY_CTX *)0x0;
            iVar1 = 1;
            goto LAB_00100f77;
          }
        }
        goto LAB_00101009;
      }
    }
  }
LAB_00100f77:
  fake_rsa_finish(uVar3);
  OSSL_PROVIDER_unload(uVar4);
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(local_50);
LAB_00100edf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool setup_tests(void)

{
  bool bVar1;
  
  libctx = OSSL_LIB_CTX_new();
  bVar1 = libctx != 0;
  if (bVar1) {
    add_test("test_pkey_sig",test_pkey_sig);
    add_test("test_alternative_keygen_init",test_alternative_keygen_init);
    add_test("test_pkey_eq",test_pkey_eq);
    add_all_tests("test_pkey_store",test_pkey_store,2,1);
    add_test("test_pkey_delete",test_pkey_delete);
    add_test("test_pkey_store_open_ex",0x100000);
  }
  return bVar1;
}



void cleanup_tests(void)

{
  OSSL_LIB_CTX_free(libctx);
  return;
}



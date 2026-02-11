
uint test_hpke_noncereuse(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined2 uStack_882;
  EVP_PKEY *local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 local_868;
  undefined8 local_860;
  char local_858 [8];
  char acStack_850 [8];
  undefined1 local_848 [512];
  undefined1 local_648 [512];
  undefined1 local_448 [512];
  undefined1 local_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_878 = 0x200;
  local_858 = (char  [8])_LC13._0_8_;
  acStack_850 = (char  [8])_LC13._8_8_;
  local_880 = (EVP_PKEY *)0x0;
  local_870 = 0x200;
  local_868 = 0x200;
  local_860 = 0x200;
  iVar1 = OSSL_HPKE_keygen(CONCAT26(uStack_882,0x100010020),local_848,&local_878,&local_880,0,0,
                           testctx,0);
  iVar1 = test_true("test/hpke_test.c",0x768,
                    "OSSL_HPKE_keygen(hpke_suite, pub, &publen, &privp, NULL, 0, testctx, NULL)",
                    iVar1 != 0);
  if (iVar1 == 0) {
    uVar2 = 0;
    uVar5 = 0;
    uVar3 = 0;
    goto LAB_001000cd;
  }
  uVar3 = OSSL_HPKE_CTX_new(0,CONCAT26(uStack_882,0x100010020),0,testctx,0);
  iVar1 = test_ptr("test/hpke_test.c",0x76b,
                   "ctx = OSSL_HPKE_CTX_new(hpke_mode, hpke_suite, OSSL_HPKE_ROLE_SENDER, testctx, NULL)"
                   ,uVar3);
  if (iVar1 != 0) {
    iVar1 = OSSL_HPKE_CTX_set_seq(uVar3,0xbad1dea);
    uVar5 = 0;
    uVar2 = test_false("test/hpke_test.c",0x770,"OSSL_HPKE_CTX_set_seq(ctx, seq)",iVar1 != 0);
    if (uVar2 == 0) goto LAB_001000cd;
    iVar1 = OSSL_HPKE_encap(uVar3,local_648,&local_870,local_848,local_878,0,0);
    uVar2 = test_true("test/hpke_test.c",0x772,
                      "OSSL_HPKE_encap(ctx, enc, &enclen, pub, publen, NULL, 0)",iVar1 != 0);
    if (uVar2 == 0) goto LAB_001000cd;
    iVar1 = OSSL_HPKE_CTX_set_seq(uVar3,0xbad1deb);
    iVar1 = test_false("test/hpke_test.c",0x775,"OSSL_HPKE_CTX_set_seq(ctx, seq + 1)",iVar1 != 0);
    if (iVar1 != 0) {
      uVar5 = 0x10;
      iVar1 = OSSL_HPKE_seal(uVar3,local_448,&local_868,0,0,local_858);
      iVar1 = test_true("test/hpke_test.c",0x777,
                        "OSSL_HPKE_seal(ctx, cipher, &cipherlen, NULL, 0, plain, plainlen)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        uVar5 = OSSL_HPKE_CTX_new(0,CONCAT26(uStack_882,0x100010020),1,testctx,0,uVar5);
        iVar1 = test_ptr("test/hpke_test.c",0x77c,
                         "rctx = OSSL_HPKE_CTX_new(hpke_mode, hpke_suite, OSSL_HPKE_ROLE_RECEIVER, testctx, NULL)"
                         ,uVar5);
        if (iVar1 != 0) {
          iVar1 = OSSL_HPKE_CTX_set_seq(uVar5,0xbad1dea);
          iVar1 = test_true("test/hpke_test.c",0x781,"OSSL_HPKE_CTX_set_seq(rctx, seq)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OSSL_HPKE_decap(uVar5,local_648,local_870,local_880,0,0);
            iVar1 = test_true("test/hpke_test.c",0x783,
                              "OSSL_HPKE_decap(rctx, enc, enclen, privp, NULL, 0)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = OSSL_HPKE_CTX_set_seq(uVar5,0xbad1dea);
              iVar1 = test_true("test/hpke_test.c",0x786,"OSSL_HPKE_CTX_set_seq(rctx, seq)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = OSSL_HPKE_open(uVar5,local_248,&local_860,0,0,local_448,local_868);
                iVar1 = test_false("test/hpke_test.c",0x789,
                                   "OSSL_HPKE_open(rctx, clear, &clearlen, NULL, 0, cipher, cipherlen)"
                                   ,iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = OSSL_HPKE_CTX_set_seq(uVar5,0);
                  uVar4 = test_true("test/hpke_test.c",0x78d,"OSSL_HPKE_CTX_set_seq(rctx, 0)",
                                    iVar1 != 0);
                  if ((int)uVar4 != 0) {
                    iVar1 = OSSL_HPKE_open(uVar5,local_248,&local_860,0,0,local_448,local_868,uVar4)
                    ;
                    iVar1 = test_true("test/hpke_test.c",0x78f,
                                      "OSSL_HPKE_open(rctx, clear, &clearlen, NULL, 0, cipher, cipherlen)"
                                      ,iVar1 != 0);
                    uVar2 = (uint)(iVar1 != 0);
                    goto LAB_001000cd;
                  }
                }
              }
            }
          }
        }
        uVar2 = 0;
        goto LAB_001000cd;
      }
    }
  }
  uVar5 = 0;
  uVar2 = 0;
LAB_001000cd:
  EVP_PKEY_free(local_880);
  OSSL_HPKE_CTX_free(uVar3);
  OSSL_HPKE_CTX_free(uVar5);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_hpke_compressed(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined2 uStack_a92;
  EVP_PKEY *local_a90;
  undefined8 local_a88;
  EVP_PKEY *local_a80;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined8 local_a60;
  char local_a58 [8];
  char acStack_a50 [8];
  undefined1 local_a48 [512];
  undefined1 local_848 [512];
  undefined1 local_648 [512];
  undefined1 local_448 [512];
  undefined1 local_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a58 = (char  [8])_LC13._0_8_;
  acStack_a50 = (char  [8])_LC13._8_8_;
  local_a90 = (EVP_PKEY *)0x0;
  local_a88 = 0x200;
  local_a80 = (EVP_PKEY *)0x0;
  local_a78 = 0x200;
  local_a70 = 0x200;
  local_a68 = 0x200;
  local_a60 = 0x200;
  iVar1 = OSSL_HPKE_keygen(CONCAT26(uStack_a92,0x100010010),local_848,&local_a78,&local_a80,0,0,
                           testctx,0);
  iVar1 = test_true("test/hpke_test.c",0x71b,
                    "OSSL_HPKE_keygen(hpke_suite, authpub, &authpublen, &authpriv, NULL, 0, testctx, NULL)"
                    ,iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_set_utf8_string_param(local_a80,"point-format","compressed");
    iVar1 = test_true("test/hpke_test.c",0x71f,
                      "EVP_PKEY_set_utf8_string_param(authpriv, OSSL_PKEY_PARAM_EC_POINT_CONVERSION_FORMAT, OSSL_PKEY_EC_POINT_CONVERSION_FORMAT_COMPRESSED)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_get_octet_string_param(local_a80,&_LC19,local_848,0x200,&local_a78);
      iVar1 = test_true("test/hpke_test.c",0x723,
                        "EVP_PKEY_get_octet_string_param(authpriv, OSSL_PKEY_PARAM_PUB_KEY, authpub, sizeof(authpub), &authpublen)"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = OSSL_HPKE_keygen(CONCAT26(uStack_a92,0x100010010),local_a48,&local_a88,&local_a90,0,
                                 0,testctx,0);
        iVar1 = test_true("test/hpke_test.c",0x72b,
                          "OSSL_HPKE_keygen(hpke_suite, pub, &publen, &privp, NULL, 0, testctx, NULL)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          uVar2 = OSSL_HPKE_CTX_new(2,CONCAT26(uStack_a92,0x100010010),0,testctx,0);
          iVar1 = test_ptr("test/hpke_test.c",0x72e,
                           "ctx = OSSL_HPKE_CTX_new(hpke_mode, hpke_suite, OSSL_HPKE_ROLE_SENDER, testctx, NULL)"
                           ,uVar2);
          if (iVar1 != 0) {
            iVar1 = OSSL_HPKE_CTX_set1_authpriv(uVar2,local_a80);
            iVar1 = test_true("test/hpke_test.c",0x732,"OSSL_HPKE_CTX_set1_authpriv(ctx, authpriv)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = OSSL_HPKE_encap(uVar2,local_648,&local_a70,local_a48,local_a88,0,0);
              iVar1 = test_true("test/hpke_test.c",0x734,
                                "OSSL_HPKE_encap(ctx, enc, &enclen, pub, publen, NULL, 0)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = OSSL_HPKE_seal(uVar2,local_448,&local_a68,0,0,local_a58,0x10);
                iVar1 = test_true("test/hpke_test.c",0x736,
                                  "OSSL_HPKE_seal(ctx, cipher, &cipherlen, NULL, 0, plain, plainlen)"
                                  ,iVar1 != 0);
                if (iVar1 != 0) {
                  uVar3 = OSSL_HPKE_CTX_new(2,CONCAT26(uStack_a92,0x100010010),1,testctx,0);
                  iVar1 = test_ptr("test/hpke_test.c",0x73b,
                                   "rctx = OSSL_HPKE_CTX_new(hpke_mode, hpke_suite, OSSL_HPKE_ROLE_RECEIVER, testctx, NULL)"
                                   ,uVar3);
                  if (iVar1 != 0) {
                    iVar1 = OSSL_HPKE_CTX_set1_authpub(uVar3,local_848,local_a78);
                    iVar1 = test_true("test/hpke_test.c",0x73f,
                                      "OSSL_HPKE_CTX_set1_authpub(rctx, authpub, authpublen)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = OSSL_HPKE_decap(uVar3,local_648,local_a70,local_a90,0,0);
                      uVar4 = test_true("test/hpke_test.c",0x741,
                                        "OSSL_HPKE_decap(rctx, enc, enclen, privp, NULL, 0)",
                                        iVar1 != 0);
                      uVar5 = uVar4 & 0xffffffff;
                      if ((int)uVar4 != 0) {
                        iVar1 = OSSL_HPKE_open(uVar3,local_248,&local_a60,0,0,local_448,local_a68,
                                               uVar4);
                        iVar1 = test_true("test/hpke_test.c",0x743,
                                          "OSSL_HPKE_open(rctx, clear, &clearlen, NULL, 0, cipher, cipherlen)"
                                          ,iVar1 != 0);
                        uVar5 = (ulong)(iVar1 != 0);
                      }
                      goto LAB_001004f7;
                    }
                  }
                  uVar5 = 0;
                  goto LAB_001004f7;
                }
              }
            }
          }
          uVar3 = 0;
          uVar5 = 0;
          goto LAB_001004f7;
        }
      }
    }
  }
  uVar3 = 0;
  uVar2 = 0;
  uVar5 = 0;
LAB_001004f7:
  EVP_PKEY_free(local_a90);
  EVP_PKEY_free(local_a80);
  OSSL_HPKE_CTX_free(uVar2);
  OSSL_HPKE_CTX_free(uVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_hpke_one_ikm_gen
               (undefined2 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_248;
  EVP_PKEY *local_240;
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_240 = (EVP_PKEY *)0x0;
  local_248 = 0x200;
  iVar1 = OSSL_HPKE_keygen((ulong)CONCAT42(0x10001,param_1),local_238,&local_248,&local_240,param_2,
                           param_3,testctx,0);
  iVar1 = test_true("test/hpke_test.c",0x6ce,
                    "OSSL_HPKE_keygen(hpke_suite, lpub, &lpublen, &sk, ikm, ikmlen, testctx, NULL)",
                    iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/hpke_test.c",0x6d1,&_LC24,local_240);
    if (iVar1 != 0) {
      EVP_PKEY_free(local_240);
      iVar1 = test_mem_eq("test/hpke_test.c",0x6d4,&_LC19,&_LC25,param_4,param_5,local_238,local_248
                         );
      bVar2 = iVar1 != 0;
      goto LAB_001008e1;
    }
  }
  bVar2 = false;
LAB_001008e1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool cmpkey(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_140;
  undefined1 local_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_140 = 0;
  iVar1 = test_true("test/hpke_test.c",0x50,"publen <= sizeof(pubbuf)",param_3 < 0x101);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_get_octet_string_param(param_1,"encoded-pub-key",local_138,0x100,&local_140);
    iVar1 = test_true("test/hpke_test.c",0x55,&_LC28,iVar1 != 0);
    if (iVar1 != 0) {
      bVar2 = true;
      if (param_2 != 0) {
        iVar1 = test_mem_eq("test/hpke_test.c",0x57,"pubbuf",&_LC19,local_138,local_140,param_2,
                            param_3);
        bVar2 = iVar1 != 0;
      }
      goto LAB_001009d1;
    }
  }
  bVar2 = false;
LAB_001009d1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_hpke_random_suites(void)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_328;
  undefined2 local_324;
  undefined4 local_320;
  undefined2 local_31c;
  undefined4 local_318;
  undefined2 local_314;
  undefined8 local_310;
  undefined1 local_308 [208];
  undefined1 local_238 [504];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_324 = 1;
  local_31c = 1;
  local_314 = 0xff03;
  local_328 = _LC0;
  local_320 = _LC0;
  local_318 = 0xff02ff01;
  local_310 = 200;
  iVar1 = OSSL_HPKE_get_grease_value(0,0,0,0,0,0,testctx,0);
  iVar1 = test_false("test/hpke_test.c",0x678,
                     "OSSL_HPKE_get_grease_value(NULL, NULL, NULL, NULL, NULL, 0, testctx, NULL)",
                     iVar1 != 0);
  if (iVar1 != 0) {
    local_310 = 10;
    iVar1 = OSSL_HPKE_get_grease_value
                      (&local_328,&local_318,local_308,&local_310,local_238,500,testctx,0);
    iVar1 = test_false("test/hpke_test.c",0x67d,
                       "OSSL_HPKE_get_grease_value(&def_suite, &suite2, enc, &enclen, ct, ctlen, testctx, NULL)"
                       ,iVar1 != 0);
    if (iVar1 != 0) {
      local_310 = 200;
      iVar1 = OSSL_HPKE_get_grease_value
                        (&local_328,&local_318,local_308,&local_310,local_238,500,testctx,0);
      iVar1 = test_true("test/hpke_test.c",0x684,
                        "OSSL_HPKE_get_grease_value(&def_suite, &suite2, enc, &enclen, ct, ctlen, testctx, NULL)"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        local_310 = 200;
        iVar1 = OSSL_HPKE_get_grease_value
                          (0,&local_318,local_308,&local_310,local_238,500,testctx,0);
        iVar1 = test_true("test/hpke_test.c",0x68a,
                          "OSSL_HPKE_get_grease_value(NULL, &suite2, enc, &enclen, ct, ctlen, testctx, NULL)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          local_320 = CONCAT22(local_320._2_2_,0x12);
          local_310 = 200;
          iVar1 = OSSL_HPKE_get_grease_value
                            (&local_320,&local_318,local_308,&local_310,local_238,500,testctx,0);
          iVar1 = test_true("test/hpke_test.c",0x692,
                            "OSSL_HPKE_get_grease_value(&suite, &suite2, enc, &enclen, ct, ctlen, testctx, NULL)"
                            ,iVar1 != 0);
          if (iVar1 != 0) {
            local_310 = 200;
            iVar1 = OSSL_HPKE_get_grease_value
                              (0,&local_318,local_308,&local_310,local_238,2,testctx,0);
            iVar1 = test_false("test/hpke_test.c",0x698,
                               "OSSL_HPKE_get_grease_value(NULL, &suite2, enc, &enclen, ct, ctlen, testctx, NULL)"
                               ,iVar1 != 0);
            if (iVar1 != 0) {
              local_31c = 0x1234;
              local_320 = CONCAT22(local_320._2_2_,0x20);
              local_310 = 200;
              iVar1 = OSSL_HPKE_get_grease_value
                                (&local_320,&local_318,local_308,&local_310,local_238,500,testctx,0)
              ;
              iVar1 = test_false("test/hpke_test.c",0x6a2,
                                 "OSSL_HPKE_get_grease_value(&suite, &suite2, enc, &enclen, ct, ctlen, testctx, NULL)"
                                 ,iVar1 != 0);
              if (iVar1 != 0) {
                local_320 = CONCAT22(0x3451,(undefined2)local_320);
                local_310 = 200;
                local_31c = local_324;
                iVar1 = OSSL_HPKE_get_grease_value
                                  (&local_320,&local_318,local_308,&local_310,local_238,500,testctx,
                                   0);
                iVar1 = test_false("test/hpke_test.c",0x6a9,
                                   "OSSL_HPKE_get_grease_value(&suite, &suite2, enc, &enclen, ct, ctlen, testctx, NULL)"
                                   ,iVar1 != 0);
                if (iVar1 != 0) {
                  local_310 = 200;
                  local_320 = CONCAT22((short)((uint)local_328 >> 0x10),0x4517);
                  iVar1 = OSSL_HPKE_get_grease_value
                                    (&local_320,&local_318,local_308,&local_310,local_238,500,
                                     testctx,0);
                  iVar1 = test_false("test/hpke_test.c",0x6b0,
                                     "OSSL_HPKE_get_grease_value(&suite, &suite2, enc, &enclen, ct, ctlen, testctx, NULL)"
                                     ,iVar1 != 0);
                  bVar2 = iVar1 != 0;
                  goto LAB_00100b40;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_00100b40:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_hpke_export(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 uStack_902;
  EVP_PKEY *local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  char local_8d8 [8];
  char acStack_8d0 [8];
  undefined1 local_8c8 [32];
  undefined1 local_8a8 [32];
  undefined1 local_888 [32];
  undefined1 local_868 [32];
  undefined1 local_848 [512];
  undefined1 local_648 [512];
  undefined1 local_448 [512];
  undefined1 local_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8f8 = 0x200;
  local_8d8 = (char  [8])_LC13._0_8_;
  acStack_8d0 = (char  [8])_LC13._8_8_;
  local_900 = (EVP_PKEY *)0x0;
  local_8f0 = 0x200;
  local_8e8 = 0x200;
  local_8e0 = 0x200;
  uVar3 = testctx;
  iVar1 = OSSL_HPKE_keygen(CONCAT26(uStack_902,0x100010020),local_848,&local_8f8,&local_900,0,0,
                           testctx,0);
  iVar1 = test_true("test/hpke_test.c",0x475,
                    "OSSL_HPKE_keygen(hpke_suite, pub, &publen, &privp, NULL, 0, testctx, NULL)",
                    iVar1 != 0);
  if (iVar1 == 0) {
    uVar2 = 0;
    uVar4 = 0;
    uVar3 = 0;
    goto LAB_00100f56;
  }
  uVar3 = OSSL_HPKE_CTX_new(0,CONCAT26(uStack_902,0x100010020),0,testctx,0,uVar3);
  iVar1 = test_ptr("test/hpke_test.c",0x478,
                   "ctx = OSSL_HPKE_CTX_new(hpke_mode, hpke_suite, OSSL_HPKE_ROLE_SENDER, testctx, NULL)"
                   ,uVar3);
  if (iVar1 != 0) {
    puVar7 = local_8c8;
    iVar1 = OSSL_HPKE_export(0,puVar7,0x20,&_LC35,3);
    uVar4 = 0;
    uVar2 = test_false("test/hpke_test.c",0x47d,
                       "OSSL_HPKE_export(NULL, exp, sizeof(exp), (unsigned char *)estr, strlen(estr))"
                       ,iVar1 != 0);
    if (uVar2 == 0) goto LAB_00100f56;
    iVar1 = OSSL_HPKE_export(uVar3,puVar7,0x20,&_LC35,3);
    uVar2 = test_false("test/hpke_test.c",0x481,
                       "OSSL_HPKE_export(ctx, exp, sizeof(exp), (unsigned char *)estr, strlen(estr))"
                       ,iVar1 != 0);
    if (uVar2 == 0) goto LAB_00100f56;
    iVar1 = OSSL_HPKE_encap(uVar3,local_648,&local_8f0,local_848,local_8f8,0,0);
    iVar1 = test_true("test/hpke_test.c",0x484,
                      "OSSL_HPKE_encap(ctx, enc, &enclen, pub, publen, NULL, 0)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = OSSL_HPKE_seal(uVar3,local_448,&local_8e8,0,0,local_8d8);
      iVar1 = test_true("test/hpke_test.c",0x486,
                        "OSSL_HPKE_seal(ctx, cipher, &cipherlen, NULL, 0, plain, plainlen)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = OSSL_HPKE_export(uVar3,puVar7,0x20,&_LC35,3);
        iVar1 = test_true("test/hpke_test.c",0x48a,
                          "OSSL_HPKE_export(ctx, exp, sizeof(exp), (unsigned char *)estr, strlen(estr))"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = OSSL_HPKE_export(uVar3,local_8a8,0x20,&_LC35,3);
          iVar1 = test_true("test/hpke_test.c",0x48e,
                            "OSSL_HPKE_export(ctx, exp2, sizeof(exp2), (unsigned char *)estr, strlen(estr))"
                            ,iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/hpke_test.c",0x491,&_LC40,&_LC39,puVar7,0x20,local_8a8,0x20);
            if (iVar1 != 0) {
              uVar4 = OSSL_HPKE_CTX_new(0,CONCAT26(uStack_902,0x100010020),1,testctx);
              iVar1 = test_ptr("test/hpke_test.c",0x493,
                               "rctx = OSSL_HPKE_CTX_new(hpke_mode, hpke_suite, OSSL_HPKE_ROLE_RECEIVER, testctx, NULL)"
                               ,uVar4);
              if (iVar1 != 0) {
                uVar5 = 0;
                iVar1 = OSSL_HPKE_decap(uVar4,local_648,local_8f0,local_900,0,0);
                iVar1 = test_true("test/hpke_test.c",0x497,
                                  "OSSL_HPKE_decap(rctx, enc, enclen, privp, NULL, 0)",iVar1 != 0);
                if (iVar1 != 0) {
                  uVar6 = local_8e8;
                  iVar1 = OSSL_HPKE_open(uVar4,local_248,&local_8e0,0,0,local_448,local_8e8,uVar5);
                  iVar1 = test_true("test/hpke_test.c",0x499,
                                    "OSSL_HPKE_open(rctx, clear, &clearlen, NULL, 0, cipher, cipherlen)"
                                    ,iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = OSSL_HPKE_export(uVar4,local_888,0x20,&_LC35,3,uVar6);
                    iVar1 = test_true("test/hpke_test.c",0x49c,
                                      "OSSL_HPKE_export(rctx, rexp, sizeof(rexp), (unsigned char *)estr, strlen(estr))"
                                      ,iVar1 != 0);
                    if (iVar1 != 0) {
                      puVar8 = local_868;
                      iVar1 = OSSL_HPKE_export(uVar4,puVar8,0x20,&_LC35,3,puVar8,puVar7,puVar8);
                      iVar1 = test_true("test/hpke_test.c",0x4a0,
                                        "OSSL_HPKE_export(rctx, rexp2, sizeof(rexp2), (unsigned char *)estr, strlen(estr))"
                                        ,iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = test_mem_eq("test/hpke_test.c",0x4a3,&_LC44,"rexp2",local_888,0x20,
                                            puVar8,0x20);
                        if (iVar1 != 0) {
                          iVar1 = test_mem_eq("test/hpke_test.c",0x4a5,&_LC40,&_LC44,puVar7,0x20,
                                              local_888,0x20);
                          uVar2 = (uint)(iVar1 != 0);
                          goto LAB_00100f56;
                        }
                      }
                    }
                  }
                }
              }
              uVar2 = 0;
              goto LAB_00100f56;
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
  uVar2 = 0;
LAB_00100f56:
  OSSL_HPKE_CTX_free(uVar3);
  OSSL_HPKE_CTX_free(uVar4);
  EVP_PKEY_free(local_900);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_hpke_oddcalls(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  byte bVar9;
  undefined8 uVar10;
  undefined2 uStack_cfa;
  undefined2 uStack_cf2;
  EVP_PKEY *local_cf0;
  undefined8 local_ce8;
  undefined8 local_ce0;
  undefined8 local_cd8;
  undefined8 local_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined1 local_cb2 [10];
  char local_ca8 [8];
  char acStack_ca0 [8];
  undefined1 local_c98 [75];
  undefined1 local_c4d;
  undefined1 local_c48 [512];
  undefined1 local_a48 [512];
  undefined1 local_848 [512];
  undefined1 local_648 [512];
  undefined1 local_448 [512];
  undefined1 local_248 [520];
  long local_40;
  
  bVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ca8 = (char  [8])_LC13._0_8_;
  acStack_ca0 = (char  [8])_LC13._8_8_;
  local_cf0 = (EVP_PKEY *)0x0;
  local_ce8 = 0x200;
  local_ce0 = 0x200;
  local_cd8 = 10;
  local_cd0 = 0x200;
  local_cc8 = 0x200;
  local_cc0 = 0;
  OSSL_HPKE_CTX_free(0);
  iVar1 = OSSL_HPKE_CTX_set_seq(0,1);
  iVar1 = test_false("test/hpke_test.c",0x538,"OSSL_HPKE_CTX_set_seq(NULL, 1)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = OSSL_HPKE_CTX_get_seq(0,&local_cc0);
    iVar1 = test_false("test/hpke_test.c",0x53a,"OSSL_HPKE_CTX_get_seq(NULL, &lseq)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = OSSL_HPKE_CTX_set1_authpub(0,local_c48,local_ce8);
      iVar1 = test_false("test/hpke_test.c",0x53c,"OSSL_HPKE_CTX_set1_authpub(NULL, pub, publen)",
                         iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = OSSL_HPKE_CTX_set1_authpriv(0,local_cf0);
        iVar1 = test_false("test/hpke_test.c",0x53e,"OSSL_HPKE_CTX_set1_authpriv(NULL, privp)",
                           iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = OSSL_HPKE_CTX_set1_ikme(0,0,0);
          iVar1 = test_false("test/hpke_test.c",0x540,"OSSL_HPKE_CTX_set1_ikme(NULL, NULL, 0)",
                             iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OSSL_HPKE_CTX_set1_psk(0,0,0,0);
            iVar1 = test_false("test/hpke_test.c",0x542,
                               "OSSL_HPKE_CTX_set1_psk(NULL, NULL, NULL, 0)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = OSSL_HPKE_suite_check(CONCAT26(uStack_cfa,0xbad00010020));
              iVar1 = test_false("test/hpke_test.c",0x547,"OSSL_HPKE_suite_check(hpke_suite)",
                                 iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = OSSL_HPKE_suite_check(CONCAT26(uStack_cf2,0xbad0bad0bad));
                iVar1 = test_false("test/hpke_test.c",0x54a,"OSSL_HPKE_suite_check(bad_suite)",
                                   iVar1 != 0);
                if (iVar1 != 0) {
                  lVar3 = OSSL_HPKE_get_recommended_ikmelen(CONCAT26(uStack_cf2,0xbad0bad0bad));
                  iVar1 = test_false("test/hpke_test.c",0x54c,
                                     "OSSL_HPKE_get_recommended_ikmelen(bad_suite)",lVar3 != 0);
                  if (iVar1 != 0) {
                    lVar3 = OSSL_HPKE_get_public_encap_size(CONCAT26(uStack_cf2,0xbad0bad0bad));
                    iVar1 = test_false("test/hpke_test.c",0x54e,
                                       "OSSL_HPKE_get_public_encap_size(bad_suite)",lVar3 != 0);
                    if (iVar1 != 0) {
                      lVar3 = OSSL_HPKE_get_ciphertext_size(CONCAT26(uStack_cf2,0xbad0bad0bad),0);
                      iVar1 = test_false("test/hpke_test.c",0x550,
                                         "OSSL_HPKE_get_ciphertext_size(bad_suite, 0)",lVar3 != 0);
                      if (iVar1 != 0) {
                        iVar1 = OSSL_HPKE_keygen(CONCAT26(uStack_cf2,0xbad0bad0bad),local_c48,
                                                 &local_ce8,&local_cf0,0,0,testctx,
                                                 "yeah, this won\'t work");
                        iVar1 = test_false("test/hpke_test.c",0x552,
                                           "OSSL_HPKE_keygen(bad_suite, pub, &publen, &privp, NULL, 0, testctx, badpropq)"
                                           ,iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = OSSL_HPKE_keygen(CONCAT26(uStack_cf2,0xbad0bad0bad),local_c48,
                                                   &local_ce8,&local_cf0,0,0,testctx);
                          iVar1 = test_false("test/hpke_test.c",0x555,
                                             "OSSL_HPKE_keygen(bad_suite, pub, &publen, &privp, NULL, 0, testctx, NULL)"
                                             ,iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = OSSL_HPKE_keygen(CONCAT26(uStack_cfa,0x100010020),0,&local_ce8,
                                                     &local_cf0,0,0,testctx,0);
                            iVar1 = test_false("test/hpke_test.c",0x55b,
                                               "OSSL_HPKE_keygen(hpke_suite, NULL, &publen, &privp, NULL, 0, testctx, NULL)"
                                               ,iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = OSSL_HPKE_keygen(CONCAT26(uStack_cfa,0x100010020),local_c48,
                                                       &local_ce8,&local_cf0,0,0x50,testctx,0);
                              iVar1 = test_false("test/hpke_test.c",0x55f,
                                                 "OSSL_HPKE_keygen(hpke_suite, pub, &publen, &privp, NULL, 80, testctx, NULL)"
                                                 ,iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = OSSL_HPKE_keygen(CONCAT26(uStack_cfa,0x100010020),local_c48,
                                                         &local_ce8,&local_cf0,local_448,0,testctx,0
                                                        );
                                iVar1 = test_false("test/hpke_test.c",0x563,
                                                                                                      
                                                  "OSSL_HPKE_keygen(hpke_suite, pub, &publen, &privp, fake_ikm, 0, testctx, NULL)"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = OSSL_HPKE_keygen(CONCAT26(uStack_cfa,0x100010020),
                                                           local_c48,&local_ce8,&local_cf0,local_448
                                                           ,0xffffffffffffffff,testctx,0);
                                  iVar1 = test_false("test/hpke_test.c",0x567,
                                                                                                          
                                                  "OSSL_HPKE_keygen(hpke_suite, pub, &publen, &privp, fake_ikm, -1, testctx, NULL)"
                                                  ,iVar1 != 0);
                                  if (iVar1 != 0) {
                                    uVar4 = 0;
                                    local_ce8 = 10;
                                    iVar1 = OSSL_HPKE_keygen(CONCAT26(uStack_cfa,0x100010020),
                                                             local_c48,&local_ce8,&local_cf0,0,0,
                                                             testctx);
                                    iVar1 = test_false("test/hpke_test.c",0x56c,
                                                                                                              
                                                  "OSSL_HPKE_keygen(hpke_suite, pub, &publen, &privp, NULL, 0, testctx, NULL)"
                                                  ,iVar1 != 0);
                                    if (iVar1 != 0) {
                                      local_ce8 = 0x200;
                                      iVar1 = OSSL_HPKE_encap(0,0,0,0,0,0,0,uVar4);
                                      iVar1 = test_false("test/hpke_test.c",0x572,
                                                                                                                  
                                                  "OSSL_HPKE_encap(NULL, NULL, NULL, NULL, 0, NULL, 0)"
                                                  ,iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = OSSL_HPKE_decap(0,0,0,0,0);
                                        iVar1 = test_false("test/hpke_test.c",0x574,
                                                                                                                      
                                                  "OSSL_HPKE_decap(NULL, NULL, 0, NULL, NULL, 0)",
                                                  iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = OSSL_HPKE_keygen(CONCAT26(uStack_cfa,0x100010020),
                                                                   local_c48,&local_ce8,&local_cf0,0
                                                                   ,0,testctx,0);
                                          iVar1 = test_true("test/hpke_test.c",0x57c,
                                                                                                                        
                                                  "OSSL_HPKE_keygen(hpke_suite, pub, &publen, &privp, NULL, 0, testctx, NULL)"
                                                  ,iVar1 != 0);
                                          if (iVar1 != 0) {
                                            uVar4 = OSSL_HPKE_CTX_new(1,CONCAT26(uStack_cfa,
                                                                                 0x100010020),0,
                                                                      testctx,0);
                                            iVar1 = test_ptr("test/hpke_test.c",0x581,
                                                                                                                          
                                                  "ctx = OSSL_HPKE_CTX_new(OSSL_HPKE_MODE_PSK, hpke_suite, OSSL_HPKE_ROLE_SENDER, testctx, NULL)"
                                                  ,uVar4);
                                            if (iVar1 != 0) {
                                              iVar1 = OSSL_HPKE_CTX_set1_psk
                                                                (uVar4,&_LC35,&_LC67,
                                                                 0xffffffffffffffff);
                                              uVar5 = 0;
                                              uVar2 = test_false("test/hpke_test.c",0x586,
                                                                                                                                  
                                                  "OSSL_HPKE_CTX_set1_psk(ctx, \"foo\", (unsigned char *)\"bar\", -1)"
                                                  ,iVar1 != 0);
                                              if (uVar2 == 0) goto LAB_00101464;
                                              local_c4d = 0;
                                              puVar7 = local_c98;
                                              for (lVar3 = 0x4b; lVar3 != 0; lVar3 = lVar3 + -1) {
                                                *puVar7 = 0x41;
                                                puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
                                              }
                                              iVar1 = OSSL_HPKE_CTX_set1_psk
                                                                (uVar4,local_c98,&_LC67,3);
                                              uVar2 = test_false("test/hpke_test.c",0x58c,
                                                                                                                                  
                                                  "OSSL_HPKE_CTX_set1_psk(ctx, giant_pskid, (unsigned char *)\"bar\", 3)"
                                                  ,iVar1 != 0);
                                              if (uVar2 == 0) goto LAB_00101464;
                                              uVar6 = 0;
                                              iVar1 = OSSL_HPKE_encap(uVar4,local_a48,&local_ce0,
                                                                      local_c48,local_ce8);
                                              iVar1 = test_false("test/hpke_test.c",0x590,
                                                                                                                                  
                                                  "OSSL_HPKE_encap(ctx, enc, &enclen, pub, publen, NULL, 0)"
                                                  ,iVar1 != 0);
                                              if (iVar1 != 0) {
                                                OSSL_HPKE_CTX_free(uVar4);
                                                uVar4 = OSSL_HPKE_CTX_new(0,CONCAT26(uStack_cf2,
                                                                                     0xbad0bad0bad),
                                                                          0,testctx,0);
                                                uVar2 = test_ptr_null("test/hpke_test.c",0x595,
                                                                                                                                            
                                                  "ctx = OSSL_HPKE_CTX_new(hpke_mode, bad_suite, OSSL_HPKE_ROLE_SENDER, testctx, NULL)"
                                                  ,uVar4);
                                                if (uVar2 == 0) goto LAB_00101464;
                                                uVar4 = OSSL_HPKE_CTX_new(0xbad,CONCAT26(uStack_cfa,
                                                                                         0x100010020
                                                                                        ),0,testctx,
                                                                          0);
                                                uVar2 = test_ptr_null("test/hpke_test.c",0x59a,
                                                                                                                                            
                                                  "ctx = OSSL_HPKE_CTX_new(bad_mode, hpke_suite, OSSL_HPKE_ROLE_SENDER, testctx, NULL)"
                                                  ,uVar4);
                                                uVar5 = 0;
                                                if (uVar2 == 0) goto LAB_00101464;
                                                uVar4 = OSSL_HPKE_CTX_new(0,CONCAT26(uStack_cfa,
                                                                                     0x100010020),0,
                                                                          testctx,0);
                                                iVar1 = test_ptr("test/hpke_test.c",0x59f,
                                                                                                                                  
                                                  "ctx = OSSL_HPKE_CTX_new(hpke_mode, hpke_suite, OSSL_HPKE_ROLE_SENDER, testctx, NULL)"
                                                  ,uVar4);
                                                if (iVar1 != 0) {
                                                  iVar1 = OSSL_HPKE_CTX_set1_ikme
                                                                    (uVar4,local_448,
                                                                     0xffffffffffffffff);
                                                  uVar2 = test_false("test/hpke_test.c",0x5a4,
                                                                                                                                          
                                                  "OSSL_HPKE_CTX_set1_ikme(ctx, fake_ikm, -1)",
                                                  iVar1 != 0);
                                                  if (uVar2 == 0) goto LAB_00101464;
                                                  iVar1 = OSSL_HPKE_CTX_set1_ikme(uVar4,local_448,0)
                                                  ;
                                                  iVar1 = test_false("test/hpke_test.c",0x5a7,
                                                                                                                                          
                                                  "OSSL_HPKE_CTX_set1_ikme(ctx, fake_ikm, 0)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_CTX_set1_authpub(uVar4,0,0);
                                                    iVar1 = test_false("test/hpke_test.c",0x5aa,
                                                                                                                                              
                                                  "OSSL_HPKE_CTX_set1_authpub(ctx, NULL, 0)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_CTX_set1_authpriv(uVar4,0);
                                                    iVar1 = test_false("test/hpke_test.c",0x5ad,
                                                                                                                                              
                                                  "OSSL_HPKE_CTX_set1_authpriv(ctx, NULL)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_CTX_set1_authpriv
                                                                      (uVar4,local_cf0);
                                                    iVar1 = test_false("test/hpke_test.c",0x5b0,
                                                                                                                                              
                                                  "OSSL_HPKE_CTX_set1_authpriv(ctx, privp)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_CTX_set1_psk
                                                                      (uVar4,&_LC35,&_LC67,3);
                                                    iVar1 = test_false("test/hpke_test.c",0x5b3,
                                                                                                                                              
                                                  "OSSL_HPKE_CTX_set1_psk(ctx, \"foo\", (unsigned char *)\"bar\", 3)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_seal(uVar4,local_848,
                                                                           &local_cd0,0,0,local_ca8,
                                                                           0x10,uVar6);
                                                    uVar5 = 0x5b7;
                                                    iVar1 = test_false("test/hpke_test.c",0x5b7,
                                                                                                                                              
                                                  "OSSL_HPKE_seal(ctx, cipher, &cipherlen, NULL, 0, plain, plainlen)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_encap(uVar4,local_a48,
                                                                            &local_ce0,local_c48,1,0
                                                                            ,0,uVar5);
                                                    uVar5 = test_false("test/hpke_test.c",0x5bb,
                                                                                                                                              
                                                  "OSSL_HPKE_encap(ctx, enc, &enclen, pub, 1, NULL, 0)"
                                                  ,iVar1 != 0);
                                                  if ((int)uVar5 != 0) {
                                                    puVar7 = local_248;
                                                    iVar1 = OSSL_HPKE_encap(uVar4,local_a48,
                                                                            &local_ce0,local_c48,1,
                                                                            local_248,
                                                                            0xffffffffffffffff,uVar5
                                                                           );
                                                    iVar1 = test_false("test/hpke_test.c",0x5be,
                                                                                                                                              
                                                  "OSSL_HPKE_encap(ctx, enc, &enclen, pub, 1, info, -1)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_encap(uVar4,local_a48,
                                                                            &local_ce0,local_c48,1,0
                                                                            ,1,puVar7);
                                                    uVar5 = 0x5c1;
                                                    iVar1 = test_false("test/hpke_test.c",0x5c1,
                                                                                                                                              
                                                  "OSSL_HPKE_encap(ctx, enc, &enclen, pub, 1, NULL, 1)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_encap(uVar4,local_a48,
                                                                            &local_ce0,local_c48,1,
                                                                            local_248,0,uVar5);
                                                    uVar5 = test_false("test/hpke_test.c",0x5c4,
                                                                                                                                              
                                                  "OSSL_HPKE_encap(ctx, enc, &enclen, pub, 1, info, 0)"
                                                  ,iVar1 != 0);
                                                  if ((int)uVar5 != 0) {
                                                    uVar6 = 0;
                                                    iVar1 = OSSL_HPKE_encap(uVar4,local_cb2,
                                                                            &local_cd8,local_c48,1,0
                                                                            ,0,uVar5);
                                                    iVar1 = test_false("test/hpke_test.c",0x5c7,
                                                                                                                                              
                                                  "OSSL_HPKE_encap(ctx, smallenc, &smallenclen, pub, 1, NULL, 0)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_encap(uVar4,local_a48,
                                                                            &local_ce0,local_c48,
                                                                            local_ce8,0,0,uVar6);
                                                    uVar5 = 0x5ca;
                                                    iVar1 = test_true("test/hpke_test.c",0x5ca,
                                                                                                                                            
                                                  "OSSL_HPKE_encap(ctx, enc, &enclen, pub, publen, NULL, 0)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_encap(uVar4,local_a48,
                                                                            &local_ce0,local_c48,
                                                                            local_ce8,0,0,uVar5);
                                                    iVar1 = test_false("test/hpke_test.c",0x5cd,
                                                                                                                                              
                                                  "OSSL_HPKE_encap(ctx, enc, &enclen, pub, publen, NULL, 0)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    pcVar8 = local_ca8;
                                                    iVar1 = OSSL_HPKE_seal(uVar4,local_848,
                                                                           &local_cd0,0,0,local_ca8,
                                                                           0,local_a48);
                                                    iVar1 = test_false("test/hpke_test.c",0x5d1,
                                                                                                                                              
                                                  "OSSL_HPKE_seal(ctx, cipher, &cipherlen, NULL, 0, plain, plainlen)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_seal(uVar4,local_848,
                                                                           &local_cd0,0,0,local_ca8,
                                                                           0x10,pcVar8);
                                                    iVar1 = test_true("test/hpke_test.c",0x5d6,
                                                                                                                                            
                                                  "OSSL_HPKE_seal(ctx, cipher, &cipherlen, NULL, 0, plain, plainlen)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar5 = OSSL_HPKE_CTX_new(1,CONCAT26(uStack_cfa,
                                                                                         0x100010020
                                                                                        ),1,testctx,
                                                                              0);
                                                    uVar2 = test_ptr("test/hpke_test.c",0x5dc,
                                                                                                                                          
                                                  "rctx = OSSL_HPKE_CTX_new(OSSL_HPKE_MODE_PSK, hpke_suite, OSSL_HPKE_ROLE_RECEIVER, testctx, NULL)"
                                                  ,uVar5);
                                                  if (uVar2 != 0) {
                                                    iVar1 = OSSL_HPKE_decap(uVar5,local_a48,
                                                                            local_ce0,local_cf0,0,0)
                                                    ;
                                                    uVar2 = test_false("test/hpke_test.c",0x5e0,
                                                                                                                                              
                                                  "OSSL_HPKE_decap(rctx, enc, enclen, privp, NULL, 0)"
                                                  ,iVar1 != 0);
                                                  if (uVar2 != 0) {
                                                    OSSL_HPKE_CTX_free(uVar5);
                                                    uVar5 = OSSL_HPKE_CTX_new(0,CONCAT26(uStack_cfa,
                                                                                         0x100010020
                                                                                        ),1,testctx,
                                                                              0);
                                                    uVar6 = 0x5e6;
                                                    uVar2 = test_ptr("test/hpke_test.c",0x5e6,
                                                                                                                                          
                                                  "rctx = OSSL_HPKE_CTX_new(hpke_mode, hpke_suite, OSSL_HPKE_ROLE_RECEIVER, testctx, NULL)"
                                                  ,uVar5);
                                                  if (uVar2 != 0) {
                                                    iVar1 = OSSL_HPKE_open(uVar5,local_648,
                                                                           &local_cc8,0,0,local_848,
                                                                           local_cd0,uVar6);
                                                    uVar2 = test_false("test/hpke_test.c",0x5eb,
                                                                                                                                              
                                                  "OSSL_HPKE_open(rctx, clear, &clearlen, NULL, 0, cipher, cipherlen)"
                                                  ,iVar1 != 0);
                                                  if (uVar2 != 0) {
                                                    iVar1 = OSSL_HPKE_decap(uVar5,local_a48,
                                                                            local_ce0,local_cf0,
                                                                            local_248,
                                                                            0xffffffffffffffff);
                                                    iVar1 = test_false("test/hpke_test.c",0x5ef,
                                                                                                                                              
                                                  "OSSL_HPKE_decap(rctx, enc, enclen, privp, info, -1)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_decap(uVar5,local_a48,
                                                                            local_ce0,local_cf0,0,0)
                                                    ;
                                                    iVar1 = test_true("test/hpke_test.c",0x5f2,
                                                                                                                                            
                                                  "OSSL_HPKE_decap(rctx, enc, enclen, privp, NULL, 0)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_decap(uVar5,local_a48,
                                                                            local_ce0,local_cf0,0,0)
                                                    ;
                                                    uVar6 = test_false("test/hpke_test.c",0x5f5,
                                                                                                                                              
                                                  "OSSL_HPKE_decap(rctx, enc, enclen, privp, NULL, 0)"
                                                  ,iVar1 != 0);
                                                  if ((int)uVar6 != 0) {
                                                    local_cc8 = 0;
                                                    puVar7 = local_848;
                                                    uVar10 = local_cd0;
                                                    iVar1 = OSSL_HPKE_open(uVar5,local_648,
                                                                           &local_cc8,0,0);
                                                    iVar1 = test_false("test/hpke_test.c",0x5f9,
                                                                                                                                              
                                                  "OSSL_HPKE_open(rctx, clear, &clearlen, NULL, 0, cipher, cipherlen)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    local_cc8 = 0x200;
                                                    iVar1 = OSSL_HPKE_CTX_set_seq
                                                                      (uVar5,0xffffffffffffffff,
                                                                       uVar10,uVar6);
                                                    iVar1 = test_true("test/hpke_test.c",0x5fe,
                                                                                                                                            
                                                  "OSSL_HPKE_CTX_set_seq(rctx, -1)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_open(uVar5,local_648,
                                                                           &local_cc8,0,0,local_848,
                                                                           local_cd0,puVar7);
                                                    iVar1 = test_false("test/hpke_test.c",0x600,
                                                                                                                                              
                                                  "OSSL_HPKE_open(rctx, clear, &clearlen, NULL, 0, cipher, cipherlen)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_CTX_set_seq(uVar5,0);
                                                    uVar6 = 0x603;
                                                    iVar1 = test_true("test/hpke_test.c",0x603,
                                                                                                                                            
                                                  "OSSL_HPKE_CTX_set_seq(rctx, 0)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_HPKE_open(uVar5,local_648,
                                                                           &local_cc8,0,0,local_848,
                                                                           local_cd0,uVar6);
                                                    iVar1 = test_true("test/hpke_test.c",0x605,
                                                                                                                                            
                                                  "OSSL_HPKE_open(rctx, clear, &clearlen, NULL, 0, cipher, cipherlen)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_mem_eq("test/hpke_test.c",0x608,
                                                                        "plain","clear",local_ca8,
                                                                        0x10,local_648,local_cc8);
                                                    uVar2 = (uint)(iVar1 != 0);
                                                    goto LAB_00101464;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_00101464;
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
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                            uVar5 = 0;
                                            uVar2 = 0;
                                            goto LAB_00101464;
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
  uVar2 = 0;
  uVar5 = 0;
LAB_00101464:
  OSSL_HPKE_CTX_free(uVar4);
  OSSL_HPKE_CTX_free(uVar5);
  EVP_PKEY_free(local_cf0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_hpke_grease(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined2 local_456;
  undefined2 uStack_454;
  undefined2 local_452;
  undefined8 local_450;
  undefined1 local_448 [512];
  undefined1 local_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_452 = 0;
  local_450 = 10;
  local_456 = 0;
  uStack_454 = 0;
  iVar1 = OSSL_HPKE_get_grease_value(0,&local_456,local_448,&local_450,local_248,0x10a,testctx,0);
  iVar1 = test_false("test/hpke_test.c",0x4f9,
                     "OSSL_HPKE_get_grease_value(NULL, &g_suite, g_pub, &g_pub_len, g_cipher, g_cipher_len, testctx, NULL)"
                     ,iVar1 != 0);
  local_450 = 0x200;
  iVar2 = OSSL_HPKE_get_grease_value(0,&local_456,local_448,&local_450,local_248,0x10a,testctx,0);
  uVar4 = 0;
  iVar2 = test_true("test/hpke_test.c",0x501,
                    "OSSL_HPKE_get_grease_value(NULL, &g_suite, g_pub, &g_pub_len, g_cipher, g_cipher_len, testctx, NULL)"
                    ,iVar2 != 0);
  if (iVar2 == 1) {
    uVar4 = (uint)(iVar1 == 1);
  }
  uVar5 = OSSL_HPKE_get_ciphertext_size
                    ((ulong)CONCAT24(local_452,CONCAT22(uStack_454,local_456)),0x80);
  uVar3 = test_size_t_gt("test/hpke_test.c",0x509,"expanded","clearlen",uVar5,0x80);
  if (uVar3 != 0) {
    uVar3 = uVar4;
  }
  uVar5 = OSSL_HPKE_get_public_encap_size((ulong)CONCAT24(local_452,CONCAT22(uStack_454,local_456)))
  ;
  uVar4 = test_size_t_ne("test/hpke_test.c",0x50d,"enclen",&_LC91,uVar5,0);
  if (uVar4 != 0) {
    uVar4 = uVar3;
  }
  uVar5 = OSSL_HPKE_get_recommended_ikmelen
                    ((ulong)CONCAT24(local_452,CONCAT22(uStack_454,local_456)));
  uVar3 = test_size_t_ne("test/hpke_test.c",0x511,"ikmelen",&_LC91,uVar5,0);
  if (uVar3 != 0) {
    uVar3 = uVar4;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_hpke_suite_strs(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  byte bVar10;
  int local_8dc;
  undefined1 local_8ce [6];
  char local_8c8 [128];
  undefined8 local_848 [255];
  undefined1 local_49;
  long local_40;
  
  bVar10 = 0;
  ppuVar8 = &kem_str_list;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8dc = 1;
  do {
    ppuVar7 = &kdf_str_list;
    do {
      ppuVar6 = &aead_str_list;
      do {
        BIO_snprintf(local_8c8,0x80,"%s,%s,%s",*ppuVar8,*ppuVar7,*ppuVar6);
        iVar2 = OSSL_HPKE_str2suite(local_8c8,local_8ce);
        iVar2 = test_true("test/hpke_test.c",0x4c3,"OSSL_HPKE_str2suite(sstr, &stirred)",iVar2 != 0)
        ;
        if (iVar2 != 1) {
          if (verbose != 0) {
            test_note("Unexpected str2suite fail for :%s","3,33,3");
          }
          local_8dc = 0;
        }
        ppuVar6 = ppuVar6 + 1;
      } while (ppuVar6 != (undefined **)&DAT_001078b8);
      ppuVar7 = ppuVar7 + 1;
    } while (ppuVar7 != &kem_str_list);
    ppuVar8 = ppuVar8 + 1;
  } while (ppuVar8 != (undefined **)&DAT_00107998);
  uVar9 = 0;
  do {
    puVar1 = (&bogus_suite_strs)[uVar9];
    iVar2 = OSSL_HPKE_str2suite(puVar1,local_8ce);
    iVar2 = test_false("test/hpke_test.c",0x4cd,
                       "OSSL_HPKE_str2suite(bogus_suite_strs[sind], &stirred)",iVar2 != 0);
    if (iVar2 != 1) {
      if (verbose != 0) {
        test_note("OSSL_HPKE_str2suite didn\'t fail for bogus[%d]:%s",uVar9 & 0xffffffff,puVar1);
      }
      local_8dc = 0;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0x23);
  iVar2 = OSSL_HPKE_str2suite(&_LC100,local_8ce);
  iVar2 = test_false("test/hpke_test.c",0x4d6,"OSSL_HPKE_str2suite(\"\", &stirred)",iVar2 != 0);
  if (iVar2 != 0) {
    iVar2 = local_8dc;
  }
  iVar3 = OSSL_HPKE_str2suite(0,local_8ce);
  iVar3 = test_false("test/hpke_test.c",0x4d8,"OSSL_HPKE_str2suite(NULL, &stirred)",iVar3 != 0);
  if (iVar3 != 0) {
    iVar3 = iVar2;
  }
  iVar2 = OSSL_HPKE_str2suite(&_LC100,0);
  iVar2 = test_false("test/hpke_test.c",0x4da,"OSSL_HPKE_str2suite(\"\", NULL)",iVar2 != 0);
  puVar5 = local_848;
  for (lVar4 = 0xff; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0x4141414141414141;
    puVar5 = puVar5 + (ulong)bVar10 * -2 + 1;
  }
  if (iVar2 != 0) {
    iVar2 = iVar3;
  }
  *(undefined4 *)puVar5 = 0x41414141;
  *(undefined2 *)((long)puVar5 + 4) = 0x4141;
  *(undefined1 *)((long)puVar5 + 6) = 0x41;
  local_49 = 0;
  iVar3 = OSSL_HPKE_str2suite(local_848,local_8ce);
  iVar3 = test_false("test/hpke_test.c",0x4de,"OSSL_HPKE_str2suite(giant, &stirred)",iVar3 != 0);
  if (iVar3 != 0) {
    iVar3 = iVar2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_hpke_ikms(void)

{
  int iVar1;
  
  iVar1 = test_hpke_one_ikm_gen(0x20,ikm25519,0x20,pub25519,0x20);
  if (iVar1 == 1) {
    iVar1 = test_hpke_one_ikm_gen(0x12,ikmp521,0x42,pubp521,0x85);
    if (iVar1 == 1) {
      iVar1 = test_hpke_one_ikm_gen(0x10,ikmp256,0x20,pubp256,0x41);
      if (iVar1 == 1) {
        test_hpke_one_ikm_gen(0x10,ikmiter,0x20,pubiter,0x41);
        return;
      }
    }
  }
  return;
}



uint test_hpke_modes_suites(void)

{
  short sVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 extraout_RDX;
  ulong uVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long in_FS_OFFSET;
  byte bVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_f98;
  undefined8 local_f60;
  char *local_f58;
  undefined **local_f20;
  ulong local_f18;
  undefined **local_f10;
  char *local_f08;
  undefined8 local_f00;
  char *local_ef8;
  undefined2 uStack_ee6;
  undefined2 uStack_ee4;
  undefined2 uStack_ee2;
  EVP_PKEY *local_ee0;
  undefined8 local_ed8;
  EVP_PKEY *local_ed0;
  undefined8 local_ec8;
  undefined8 local_ec0;
  undefined8 local_eb8;
  undefined8 local_eb0;
  char local_ea8 [8];
  char acStack_ea0 [8];
  char local_e98 [8];
  char acStack_e90 [8];
  char local_e88 [8];
  char acStack_e80 [8];
  char local_e78 [8];
  char acStack_e70 [8];
  char local_e68 [8];
  undefined7 uStack_e60;
  char cStack_e59;
  undefined7 uStack_e58;
  char acStack_e51 [8];
  undefined1 local_e49;
  undefined8 local_e48 [64];
  char local_c48 [8];
  undefined2 uStack_c40;
  undefined6 uStack_c3e;
  undefined2 uStack_c38;
  char acStack_c36 [494];
  undefined1 local_a48 [512];
  undefined1 local_848 [512];
  undefined1 local_648 [512];
  undefined1 local_448 [512];
  undefined1 local_248 [520];
  long local_40;
  
  bVar19 = 0;
  uVar8 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f18 = 0;
  local_f10 = &mode_str_list;
  do {
    puVar18 = (undefined8 *)0x0;
    local_ee0 = (EVP_PKEY *)0x0;
    uVar2 = *(uint *)(hpke_mode_list + local_f18 * 4);
    uStack_ee6 = (undefined2)_LC107;
    uStack_ee4 = (undefined2)((uint)_LC107 >> 0x10);
    pcVar16 = local_c48;
    for (lVar14 = 0x40; lVar14 != 0; lVar14 = lVar14 + -1) {
      pcVar16[0] = '\0';
      pcVar16[1] = '\0';
      pcVar16[2] = '\0';
      pcVar16[3] = '\0';
      pcVar16[4] = '\0';
      pcVar16[5] = '\0';
      pcVar16[6] = '\0';
      pcVar16[7] = '\0';
      pcVar16 = pcVar16 + ((ulong)bVar19 * -2 + 1) * 8;
    }
    local_c48[0] = _LC108[0x30];
    local_c48[1] = _LC108[0x31];
    local_c48[2] = _LC108[0x32];
    local_c48[3] = _LC108[0x33];
    local_c48[4] = _LC108[0x34];
    local_c48[5] = _LC108[0x35];
    local_c48[6] = _LC108[0x36];
    local_c48[7] = _LC108[0x37];
    uStack_c40 = (undefined2)_LC108._56_8_;
    uStack_c3e = (undefined6)_LC108._64_8_;
    uStack_c38 = SUB82(_LC108._64_8_,6);
    acStack_c36[0] = _LC108[0x48];
    acStack_c36[1] = _LC108[0x49];
    acStack_c36[2] = _LC108[0x4a];
    acStack_c36[3] = _LC108[0x4b];
    acStack_c36[4] = _LC108[0x4c];
    acStack_c36[5] = _LC108[0x4d];
    acStack_c36[6] = _LC108[0x4e];
    acStack_c36[7] = _LC108[0x4f];
    uVar11 = test_random();
    local_f98 = 0;
    if ((uVar11 & 1) != 0) {
      puVar18 = local_e48;
      local_f98 = 0x200;
      puVar17 = puVar18;
      for (lVar14 = 0x40; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar17 = 0x6161616161616161;
        puVar17 = puVar17 + (ulong)bVar19 * -2 + 1;
      }
    }
    uVar11 = test_random();
    local_f58 = (char *)0x0;
    local_f60 = 0;
    if ((uVar11 & 1) != 0) {
      local_ea8[0] = _LC108[0];
      local_ea8[1] = _LC108[1];
      local_ea8[2] = _LC108[2];
      local_ea8[3] = _LC108[3];
      local_ea8[4] = _LC108[4];
      local_ea8[5] = _LC108[5];
      local_ea8[6] = _LC108[6];
      local_ea8[7] = _LC108[7];
      acStack_ea0[0] = _LC108[8];
      acStack_ea0[1] = _LC108[9];
      acStack_ea0[2] = _LC108[10];
      acStack_ea0[3] = _LC108[0xb];
      acStack_ea0[4] = _LC108[0xc];
      acStack_ea0[5] = _LC108[0xd];
      acStack_ea0[6] = _LC108[0xe];
      acStack_ea0[7] = _LC108[0xf];
      local_f58 = local_ea8;
      local_f60 = 0x20;
      local_e98 = local_ea8;
      acStack_e90 = acStack_ea0;
    }
    uVar5 = uVar2 & 0xfffffffd;
    if (uVar5 == 1) {
      local_e88[0] = _LC108[0x10];
      local_e88[1] = _LC108[0x11];
      local_e88[2] = _LC108[0x12];
      local_e88[3] = _LC108[0x13];
      local_e88[4] = _LC108[0x14];
      local_e88[5] = _LC108[0x15];
      local_e88[6] = _LC108[0x16];
      local_e88[7] = _LC108[0x17];
      acStack_e80[0] = _LC108[0x18];
      acStack_e80[1] = _LC108[0x19];
      acStack_e80[2] = _LC108[0x1a];
      acStack_e80[3] = _LC108[0x1b];
      acStack_e80[4] = _LC108[0x1c];
      acStack_e80[5] = _LC108[0x1d];
      acStack_e80[6] = _LC108[0x1e];
      acStack_e80[7] = _LC108[0x1f];
      local_e68[0] = _LC108[0x20];
      local_e68[1] = _LC108[0x21];
      local_e68[2] = _LC108[0x22];
      local_e68[3] = _LC108[0x23];
      local_e68[4] = _LC108[0x24];
      local_e68[5] = _LC108[0x25];
      local_e68[6] = _LC108[0x26];
      local_e68[7] = _LC108[0x27];
      acStack_e51[0] = _LC108[0x28];
      acStack_e51[1] = _LC108[0x29];
      acStack_e51[2] = _LC108[0x2a];
      acStack_e51[3] = _LC108[0x2b];
      acStack_e51[4] = _LC108[0x2c];
      acStack_e51[5] = _LC108[0x2d];
      acStack_e51[6] = _LC108[0x2e];
      acStack_e51[7] = _LC108[0x2f];
      local_ef8 = local_e68;
      local_e49 = 0;
      local_f08 = local_e88;
      uStack_e60 = (undefined7)_LC108._40_8_;
      local_f00 = 0x20;
      cStack_e59 = (char)_LC108._32_8_;
      uStack_e58 = SUB87(_LC108._32_8_,1);
      local_e78 = local_e88;
      acStack_e70 = acStack_e80;
    }
    else {
      local_ef8 = (char *)0x0;
      local_f00 = 0;
      local_f08 = (char *)0x0;
    }
    if (uVar8 == 0) {
LAB_001031f8:
      uVar8 = 0;
    }
    else {
      uVar11 = 0;
      uVar6 = uVar2 - 2;
      local_f20 = &kem_str_list;
      do {
        local_ed8 = 0x200;
        sVar1 = (&hpke_kem_list)[uVar11];
        local_ed0 = (EVP_PKEY *)0x0;
        if (uVar6 < 2) {
          iVar7 = OSSL_HPKE_keygen(CONCAT26(uStack_ee2,
                                            CONCAT24(uStack_ee4,CONCAT22(uStack_ee6,sVar1))),
                                   local_a48,&local_ed8,&local_ed0,0,0,testctx,0);
          iVar7 = test_true("test/hpke_test.c",0x3ce,
                            "OSSL_HPKE_keygen(hpke_suite, authpub, &authpublen, &authpriv, NULL, 0, testctx, NULL)"
                            ,iVar7 != 0);
          if (iVar7 != 1) {
            EVP_PKEY_free(local_ed0);
            goto LAB_001031f8;
          }
        }
        else {
          local_ed8 = 0;
        }
        uVar13 = 0;
        do {
          uVar15 = 0;
          uStack_ee6 = (&hpke_aead_list)[uVar13];
          do {
            local_ec8 = 0x200;
            uStack_ee4 = (&hpke_aead_list)[uVar15];
            local_ec0 = 0x200;
            local_eb8 = 0x200;
            local_eb0 = 0x200;
            iVar7 = OSSL_HPKE_keygen(CONCAT26(uStack_ee2,
                                              CONCAT24(uStack_ee4,CONCAT22(uStack_ee6,sVar1))),
                                     local_848,&local_ec8,&local_ee0,0,0,testctx,0);
            iVar7 = test_true("test/hpke_test.c",0x3ec,
                              "OSSL_HPKE_keygen(hpke_suite, pub, &publen, &privp, NULL, 0, testctx, NULL)"
                              ,iVar7 != 0);
            uVar12 = OSSL_HPKE_CTX_new(uVar2,CONCAT26(uStack_ee2,
                                                      CONCAT24(uStack_ee4,CONCAT22(uStack_ee6,sVar1)
                                                              )),0,testctx,0);
            uVar8 = test_ptr("test/hpke_test.c",0x3f0,
                             "ctx = OSSL_HPKE_CTX_new(hpke_mode, hpke_suite, OSSL_HPKE_ROLE_SENDER, testctx, NULL)"
                             ,uVar12);
            if (uVar8 != 0) {
              uVar8 = (uint)(iVar7 != 0);
            }
            if (uVar5 == 1) {
              iVar7 = OSSL_HPKE_CTX_set1_psk(uVar12,local_ef8,local_f08,local_f00);
              iVar7 = test_true("test/hpke_test.c",0x3f6,
                                "OSSL_HPKE_CTX_set1_psk(ctx, pskidp, pskp, psklen)",iVar7 != 0);
              if (iVar7 != 0) goto LAB_00102b78;
              uVar8 = 0;
              if (uVar6 < 2) goto LAB_00103083;
LAB_00102b86:
              uVar9 = uVar8;
            }
            else {
LAB_00102b78:
              if (1 < uVar6) goto LAB_00102b86;
LAB_00103083:
              iVar7 = OSSL_HPKE_CTX_set1_authpriv(uVar12,local_ed0);
              uVar9 = test_true("test/hpke_test.c",0x3fc,
                                "OSSL_HPKE_CTX_set1_authpriv(ctx, authpriv)",iVar7 != 0);
              if (uVar9 != 0) goto LAB_00102b86;
            }
            iVar7 = OSSL_HPKE_encap(uVar12,local_648,&local_ec0,local_848,local_ec8,local_f58,
                                    local_f60);
            uVar8 = test_true("test/hpke_test.c",0x400,
                              "OSSL_HPKE_encap(ctx, senderpub, &senderpublen, pub, publen, infop, infolen)"
                              ,iVar7 != 0);
            if (uVar8 != 0) {
              uVar8 = uVar9;
            }
            local_eb8 = 0xf;
            iVar7 = OSSL_HPKE_seal(uVar12,local_448,&local_eb8,puVar18,local_f98,local_c48,0x19);
            uVar9 = test_false("test/hpke_test.c",0x407,
                               "OSSL_HPKE_seal(ctx, cipher, &cipherlen, aadp, aadlen, plain, plainlen)"
                               ,iVar7 != 0);
            if (uVar9 != 0) {
              uVar9 = uVar8;
            }
            local_eb8 = 0x200;
            iVar7 = OSSL_HPKE_seal(uVar12,local_448,&local_eb8,puVar18,local_f98,local_c48);
            uVar8 = test_true("test/hpke_test.c",0x40d,
                              "OSSL_HPKE_seal(ctx, cipher, &cipherlen, aadp, aadlen, plain, plainlen)"
                              ,iVar7 != 0);
            if (uVar8 != 0) {
              uVar8 = uVar9;
            }
            OSSL_HPKE_CTX_free(uVar12);
            __memset_chk(local_248,0,local_eb0,0x200);
            uVar12 = OSSL_HPKE_CTX_new(uVar2,CONCAT26(uStack_ee2,
                                                      CONCAT24(uStack_ee4,CONCAT22(uStack_ee6,sVar1)
                                                              )),1,testctx,0);
            uVar9 = test_ptr("test/hpke_test.c",0x416,&_LC114,uVar12);
            if (uVar9 != 0) {
              uVar9 = uVar8;
            }
            if (uVar5 == 1) {
              iVar7 = OSSL_HPKE_CTX_set1_psk(uVar12,local_ef8,local_f08,local_f00);
              uVar8 = test_true("test/hpke_test.c",0x41a,
                                "OSSL_HPKE_CTX_set1_psk(rctx, pskidp, pskp, psklen)",iVar7 != 0);
              if (uVar8 != 0) goto LAB_00102d0a;
            }
            else {
LAB_00102d0a:
              uVar8 = uVar9;
            }
            if (uVar6 < 2) {
              if (sVar1 == 0x10) {
                iVar7 = OSSL_HPKE_CTX_set1_authpub(uVar12,local_a48,10);
                iVar7 = test_false("test/hpke_test.c",0x423,
                                   "OSSL_HPKE_CTX_set1_authpub(rctx, authpub, 10 )",iVar7 != 0);
                if (iVar7 == 0) {
                  uVar8 = 0;
                }
              }
              iVar7 = OSSL_HPKE_CTX_set1_authpub(uVar12,local_a48,local_ed8);
              iVar7 = test_true("test/hpke_test.c",0x429,
                                "OSSL_HPKE_CTX_set1_authpub(rctx, authpubp, authpublen)",iVar7 != 0)
              ;
              if (iVar7 == 0) {
                uVar8 = 0;
              }
            }
            iVar7 = OSSL_HPKE_decap(uVar12,local_648,local_ec0,local_ee0,local_f58,local_f60);
            uVar21 = 0x102d5a;
            uVar9 = test_true("test/hpke_test.c",0x42e,
                              "OSSL_HPKE_decap(rctx, senderpub, senderpublen, privp, infop, infolen)"
                              ,iVar7 != 0);
            local_eb0 = 0xf;
            if (uVar9 != 0) {
              uVar9 = uVar8;
            }
            iVar7 = OSSL_HPKE_open(uVar12,local_248,&local_eb0,puVar18,local_f98,local_448,local_eb8
                                  );
            uVar10 = test_false("test/hpke_test.c",0x434,
                                "OSSL_HPKE_open(rctx, clear, &clearlen, aadp, aadlen, cipher, cipherlen)"
                                ,iVar7 != 0);
            local_eb0 = 0x200;
            if (uVar10 != 0) {
              uVar10 = uVar9;
            }
            uVar20 = local_eb8;
            iVar7 = OSSL_HPKE_open(uVar12,local_248,&local_eb0,puVar18,local_f98,local_448);
            uVar8 = test_true("test/hpke_test.c",0x43a,
                              "OSSL_HPKE_open(rctx, clear, &clearlen, aadp, aadlen, cipher, cipherlen)"
                              ,iVar7 != 0);
            if (uVar8 != 0) {
              uVar8 = uVar10;
            }
            uVar15 = uVar15 + 1;
            OSSL_HPKE_CTX_free(uVar12,uVar21,extraout_RDX,uVar20);
            EVP_PKEY_free(local_ee0);
            local_ee0 = (EVP_PKEY *)0x0;
            iVar7 = test_mem_eq("test/hpke_test.c",0x442,"clear","plain",local_248,local_eb0,
                                local_c48,0x19);
            if (iVar7 == 0) {
LAB_00102ed8:
              bVar4 = false;
              bVar3 = false;
              uVar8 = 0;
              pcVar16 = "failed";
LAB_00102ee9:
              test_note("HPKE %s for mode: %s/0x%02x, kem: %s/0x%02x, kdf: %s/0x%02x, aead: %s/0x%02x"
                        ,pcVar16,*local_f10,local_f18 & 0xffffffff,*local_f20,sVar1,
                        (&kdf_str_list)[uVar13],uStack_ee6,
                        *(undefined8 *)(&DAT_00107838 + uVar15 * 8),uStack_ee4);
            }
            else {
              bVar3 = uVar15 < 3;
              if (verbose != 0) {
                bVar4 = true;
                pcVar16 = "worked";
                if (uVar8 != 1) goto LAB_00102ed8;
                goto LAB_00102ee9;
              }
              if (uVar8 != 1) goto LAB_00102ed8;
              bVar4 = true;
            }
          } while (bVar3);
          uVar13 = uVar13 + 1;
        } while ((uVar13 < 3) && (bVar4));
        EVP_PKEY_free(local_ed0);
        uVar11 = uVar11 + 1;
        local_f20 = local_f20 + 1;
      } while ((uVar11 < 5) && (bVar4));
    }
    local_f18 = local_f18 + 1;
    local_f10 = local_f10 + 1;
    if (local_f18 == 4) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar8;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



int do_testhpke_constprop_0(uint *param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  byte bVar14;
  undefined8 local_b98;
  undefined8 local_b90;
  undefined8 local_b88;
  undefined8 local_b80;
  EVP_PKEY *local_b78;
  undefined8 local_b70;
  EVP_PKEY *local_b68;
  undefined8 local_b60;
  EVP_PKEY *local_b58;
  long local_b50;
  undefined8 local_b48 [32];
  undefined1 local_a48 [256];
  undefined8 local_948 [32];
  undefined1 local_848 [512];
  undefined1 local_648 [512];
  undefined1 local_448 [512];
  undefined1 local_248 [520];
  long local_40;
  
  uVar8 = testctx;
  bVar14 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b98 = 0x100;
  local_b90 = 0x100;
  local_b88 = 0x100;
  local_b80 = 0x200;
  local_b78 = (EVP_PKEY *)0x0;
  local_b70 = 0x200;
  local_b68 = (EVP_PKEY *)0x0;
  local_b60 = 0x200;
  local_b58 = (EVP_PKEY *)0x0;
  local_b50 = 0;
  iVar3 = OSSL_HPKE_keygen((ulong)*(uint6 *)(param_1 + 1),local_848,&local_b80,&local_b78,
                           *(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),testctx);
  iVar3 = test_true("test/hpke_test.c",0x76,
                    "OSSL_HPKE_keygen(base->suite, pub, &publen, &privE, base->ikmE, base->ikmElen, libctx, propq)"
                    ,iVar3 != 0);
  if (iVar3 != 0) {
    iVar3 = cmpkey(local_b78,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10));
    iVar3 = test_true("test/hpke_test.c",0x79,
                      "cmpkey(privE, base->expected_pkEm, base->expected_pkEmlen)",iVar3 != 0);
    if (iVar3 != 0) {
      uVar5 = OSSL_HPKE_CTX_new(*param_1,(ulong)*(uint6 *)(param_1 + 1),0,uVar8,"provider=default");
      iVar3 = test_ptr("test/hpke_test.c",0x7b,
                       "sealctx = OSSL_HPKE_CTX_new(base->mode, base->suite, OSSL_HPKE_ROLE_SENDER, libctx, propq)"
                       ,uVar5);
      if (iVar3 != 0) {
        iVar3 = OSSL_HPKE_CTX_set1_ikme
                          (uVar5,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6));
        uVar7 = 0;
        iVar3 = test_true("test/hpke_test.c",0x7f,
                          "OSSL_HPKE_CTX_set1_ikme(sealctx, base->ikmE, base->ikmElen)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_001033e6;
        if (*param_1 - 2 < 2) {
          bVar13 = false;
          if (*(long *)(param_1 + 0x20) != 0) {
            bVar13 = *(long *)(param_1 + 0x22) != 0;
          }
          iVar3 = test_true("test/hpke_test.c",0x83,"base->ikmAuth != NULL && base->ikmAuthlen > 0",
                            bVar13);
          if (iVar3 != 0) {
            iVar3 = OSSL_HPKE_keygen((ulong)*(uint6 *)(param_1 + 1),local_648,&local_b70,&local_b68,
                                     *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x22)
                                     ,uVar8,"provider=default");
            iVar3 = test_true("test/hpke_test.c",0x85,
                              "OSSL_HPKE_keygen(base->suite, authpub, &authpublen, &authpriv, base->ikmAuth, base->ikmAuthlen, libctx, propq)"
                              ,iVar3 != 0);
            if (iVar3 != 0) {
              iVar3 = OSSL_HPKE_CTX_set1_authpriv(uVar5,local_b68);
              iVar3 = test_true("test/hpke_test.c",0x8a,
                                "OSSL_HPKE_CTX_set1_authpriv(sealctx, authpriv)",iVar3 != 0);
              if (iVar3 != 0) goto LAB_00103610;
            }
          }
        }
        else {
LAB_00103610:
          iVar3 = OSSL_HPKE_keygen((ulong)*(uint6 *)(param_1 + 1),local_448,&local_b60,&local_b58,
                                   *(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),
                                   uVar8,"provider=default");
          iVar3 = test_true("test/hpke_test.c",0x8d,
                            "OSSL_HPKE_keygen(base->suite, rpub, &rpublen, &privR, base->ikmR, base->ikmRlen, libctx, propq)"
                            ,iVar3 != 0);
          if (iVar3 != 0) {
            iVar3 = cmpkey(local_b58,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x12)
                          );
            iVar3 = test_true("test/hpke_test.c",0x90,
                              "cmpkey(privR, base->expected_pkRm, base->expected_pkRmlen)",
                              iVar3 != 0);
            if (iVar3 != 0) {
              if ((*param_1 & 0xfffffffd) == 1) {
                iVar3 = OSSL_HPKE_CTX_set1_psk
                                  (uVar5,*(undefined8 *)(param_1 + 0x28),
                                   *(undefined8 *)(param_1 + 0x24),*(undefined8 *)(param_1 + 0x26));
                iVar3 = test_true("test/hpke_test.c",0x94,
                                  "OSSL_HPKE_CTX_set1_psk(sealctx, base->pskid, base->psk, base->psklen)"
                                  ,iVar3 != 0);
                if (iVar3 == 0) goto LAB_001034c7;
              }
              iVar3 = OSSL_HPKE_encap(uVar5,local_a48,&local_b90,local_448,local_b60,
                                      *(undefined8 *)(param_1 + 0x1c),
                                      *(undefined8 *)(param_1 + 0x1e));
              iVar3 = test_true("test/hpke_test.c",0x98,
                                "OSSL_HPKE_encap(sealctx, enc, &enclen, rpub, rpublen, base->ksinfo, base->ksinfolen)"
                                ,iVar3 != 0);
              if (iVar3 != 0) {
                iVar3 = cmpkey(local_b78,local_a48,local_b90);
                iVar3 = test_true("test/hpke_test.c",0x9c,"cmpkey(privE, enc, enclen)",iVar3 != 0);
                if (iVar3 != 0) {
                  lVar12 = 0;
                  puVar6 = (undefined8 *)(param_2 + 8);
                  puVar11 = puVar6;
                  do {
                    if (lVar12 == param_3) {
                      uVar7 = OSSL_HPKE_CTX_new(*param_1,(ulong)*(uint6 *)(param_1 + 1),1,uVar8,
                                                "provider=default");
                      iVar3 = test_ptr("test/hpke_test.c",0xad,
                                       "openctx = OSSL_HPKE_CTX_new(base->mode, base->suite, OSSL_HPKE_ROLE_RECEIVER, libctx, propq)"
                                       ,uVar7);
                      if (iVar3 == 0) goto LAB_00103cb3;
                      uVar4 = *param_1;
                      if ((uVar4 & 0xfffffffd) == 1) {
                        if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x24) == 0)) {
                          bVar13 = false;
                        }
                        else {
                          bVar13 = *(long *)(param_1 + 0x26) != 0;
                        }
                        iVar3 = test_true("test/hpke_test.c",0xb3,
                                          "base->pskid != NULL && base->psk != NULL && base->psklen > 0"
                                          ,bVar13);
                        if (iVar3 == 0) goto LAB_00103cb3;
                        iVar3 = OSSL_HPKE_CTX_set1_psk
                                          (uVar7,*(undefined8 *)(param_1 + 0x28),
                                           *(undefined8 *)(param_1 + 0x24),
                                           *(undefined8 *)(param_1 + 0x26));
                        iVar3 = test_true("test/hpke_test.c",0xb6,
                                          "OSSL_HPKE_CTX_set1_psk(openctx, base->pskid, base->psk, base->psklen)"
                                          ,iVar3 != 0);
                        if (iVar3 == 0) goto LAB_00103cb3;
                        uVar4 = *param_1;
                      }
                      if (uVar4 - 2 < 2) {
                        iVar3 = OSSL_HPKE_CTX_set1_authpub(uVar7,local_648,local_b70);
                        iVar3 = test_true("test/hpke_test.c",0xbc,
                                          "OSSL_HPKE_CTX_set1_authpub(openctx, authpub, authpublen)"
                                          ,iVar3 != 0);
                        if (iVar3 == 0) {
                          iVar3 = 0;
                          goto LAB_001033e6;
                        }
                      }
                      iVar3 = OSSL_HPKE_decap(uVar7,local_a48,local_b90,local_b58,
                                              *(undefined8 *)(param_1 + 0x1c),
                                              *(undefined8 *)(param_1 + 0x1e));
                      iVar3 = test_true("test/hpke_test.c",0xc0,
                                        "OSSL_HPKE_decap(openctx, enc, enclen, privR, base->ksinfo, base->ksinfolen)"
                                        ,iVar3 != 0);
                      if (iVar3 == 0) goto LAB_00103cb3;
                      lVar12 = 0;
                      goto LAB_00103b5c;
                    }
                    uVar7 = puVar11[3];
                    uVar1 = *puVar11;
                    local_b88 = 0x100;
                    puVar10 = local_b48;
                    for (lVar9 = 0x20; lVar9 != 0; lVar9 = lVar9 + -1) {
                      *puVar10 = 0;
                      puVar10 = puVar10 + (ulong)bVar14 * -2 + 1;
                    }
                    iVar3 = OSSL_HPKE_seal(uVar5,local_b48,&local_b88,puVar11[2],uVar7,uVar1,
                                           puVar11[1]);
                    iVar3 = test_true("test/hpke_test.c",0xa1,
                                      "OSSL_HPKE_seal(sealctx, ct, &ctlen, aead[i].aad, aead[i].aadlen, aead[i].pt, aead[i].ptlen)"
                                      ,iVar3 != 0);
                    if (iVar3 == 0) break;
                    uVar7 = puVar11[5];
                    iVar3 = test_mem_eq("test/hpke_test.c",0xa5,&_LC138,"aead[i].expected_ct",
                                        local_b48,local_b88,puVar11[4]);
                    if (iVar3 == 0) break;
                    iVar3 = OSSL_HPKE_CTX_get_seq(uVar5,&local_b50,uVar7);
                    iVar3 = test_true("test/hpke_test.c",0xa8,
                                      "OSSL_HPKE_CTX_get_seq(sealctx, &lastseq)",iVar3 != 0);
                    if (iVar3 == 0) break;
                    lVar12 = lVar12 + 1;
                    puVar11 = puVar11 + 7;
                  } while (lVar12 == local_b50);
                }
              }
            }
          }
        }
      }
LAB_001034c7:
      iVar3 = 0;
      uVar7 = 0;
      goto LAB_001033e6;
    }
  }
  iVar3 = 0;
  uVar7 = 0;
  uVar5 = 0;
  goto LAB_001033e6;
  while( true ) {
    iVar3 = OSSL_HPKE_CTX_get_seq(uVar7,&local_b50);
    iVar3 = test_true("test/hpke_test.c",0xce,"OSSL_HPKE_CTX_get_seq(openctx, &lastseq)",iVar3 != 0)
    ;
    if (iVar3 == 0) break;
    lVar12 = lVar12 + 1;
    puVar6 = puVar6 + 7;
    if (lVar12 != local_b50) break;
LAB_00103b5c:
    if (param_3 == lVar12) {
      puVar11 = param_4 + 0xc;
      goto LAB_00103b96;
    }
    uVar8 = puVar6[4];
    uVar1 = puVar6[3];
    local_b98 = 0x100;
    puVar11 = local_948;
    for (lVar9 = 0x20; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
    }
    iVar3 = OSSL_HPKE_open(uVar7,local_948,&local_b98,puVar6[2],uVar1,uVar8,puVar6[5]);
    iVar3 = test_true("test/hpke_test.c",0xc6,
                      "OSSL_HPKE_open(openctx, ptout, &ptoutlen, aead[i].aad, aead[i].aadlen, aead[i].expected_ct, aead[i].expected_ctlen)"
                      ,iVar3 != 0);
    if ((iVar3 == 0) ||
       (iVar3 = test_mem_eq("test/hpke_test.c",0xcb,"aead[i].pt","ptout",*puVar6,puVar6[1]),
       iVar3 == 0)) break;
  }
  iVar3 = 0;
  goto LAB_001033e6;
LAB_00103cb3:
  iVar3 = 0;
  goto LAB_001033e6;
  while( true ) {
    iVar3 = OSSL_HPKE_export(uVar5,local_248,uVar2,*param_4,0xffffffffffffffff);
    iVar3 = test_false("test/hpke_test.c",0xdb,
                       "OSSL_HPKE_export(sealctx, eval, len, export[i].context, -1)",iVar3 != 0);
    if (iVar3 == 0) goto LAB_00103cb3;
    iVar3 = OSSL_HPKE_export(uVar5,local_248,uVar2,*param_4,param_4[1]);
    iVar3 = test_true("test/hpke_test.c",0xdf,
                      "OSSL_HPKE_export(sealctx, eval, len, export[i].context, export[i].contextlen)"
                      ,iVar3 != 0);
    if ((iVar3 == 0) ||
       (uVar8 = test_mem_eq("test/hpke_test.c",0xe3,&_LC152,"export[i].expected_secret",local_248,
                            uVar2,param_4[2],param_4[3]), (int)uVar8 == 0)) goto LAB_00103cb3;
    if (param_3 == 0) {
      iVar3 = OSSL_HPKE_seal(uVar5,local_b48,&local_b88,0,0,local_948,local_b98,uVar8);
      iVar3 = test_false("test/hpke_test.c",0xea,
                         "OSSL_HPKE_seal(sealctx, ct, &ctlen, NULL, 0, ptout, ptoutlen)",iVar3 != 0)
      ;
      if (iVar3 == 0) goto LAB_00103cb3;
    }
    param_4 = param_4 + 4;
    if (param_4 == puVar11) break;
LAB_00103b96:
    uVar2 = param_4[3];
    if (0x200 < uVar2) goto LAB_00103cb3;
  }
  iVar3 = 1;
LAB_001033e6:
  OSSL_HPKE_CTX_free(uVar5);
  OSSL_HPKE_CTX_free(uVar7);
  EVP_PKEY_free(local_b78);
  EVP_PKEY_free(local_b58);
  EVP_PKEY_free(local_b68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



void export_only_test(void)

{
  long in_FS_OFFSET;
  undefined8 local_128;
  undefined2 local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_110 = 0x20;
  local_100 = 0x20;
  local_f0 = 0x20;
  local_e0 = 0x20;
  local_d0 = 0x20;
  local_c0 = 0x20;
  local_128 = 0x1002000000000;
  local_120 = 0xffff;
  local_118 = fourth_ikme;
  local_108 = fourth_ikmepub;
  local_f8 = fourth_ikmr;
  local_e8 = fourth_ikmrpub;
  local_d8 = fourth_ikmrpriv;
  local_c8 = fourth_expected_shared_secret;
  local_b8 = "Ode on a Grecian Urn";
  local_68 = fourth_export1;
  local_58 = &fourth_context2;
  local_48 = fourth_export2;
  local_b0 = 0x14;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0x20;
  local_50 = 1;
  local_40 = 0x20;
  local_38 = "TestContext";
  local_30 = 0xb;
  local_28 = fourth_export3;
  local_20 = 0x20;
  do_testhpke_constprop_0(&local_128,0,0,&local_78);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void x25519kdfsha256_hkdfsha256_aes128gcm_base_test(void)

{
  long in_FS_OFFSET;
  undefined8 local_198;
  undefined2 local_190;
  undefined1 *local_188;
  undefined8 local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined1 *local_138;
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined1 *local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = "Count-0";
  local_60 = second_ct0;
  local_180 = 0x20;
  local_170 = 0x20;
  local_160 = 0x20;
  local_150 = 0x20;
  local_198 = 0x1002000000000;
  local_190 = 1;
  local_188 = second_ikme;
  local_178 = second_ikmepub;
  local_168 = second_ikmr;
  local_158 = second_ikmrpub;
  local_148 = second_ikmrpriv;
  local_138 = second_expected_shared_secret;
  local_128 = "Ode on a Grecian Urn";
  local_80 = pt;
  local_140 = 0x20;
  local_130 = 0x20;
  local_120 = 0x14;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_88[0] = 0;
  local_78 = 0x1d;
  local_68 = 7;
  local_58 = 0x2d;
  local_50 = 1;
  local_48 = pt;
  local_38 = "Count-1";
  local_28 = second_ct1;
  local_d8 = second_export1;
  local_c8 = &second_context2;
  local_b8 = second_export2;
  local_a8 = "TestContext";
  local_40 = 0x1d;
  local_30 = 7;
  local_20 = 0x2d;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0x20;
  local_c0 = 1;
  local_b0 = 0x20;
  local_a0 = 0xb;
  local_98 = &second_export3;
  local_90 = 0x20;
  do_testhpke_constprop_0(&local_198,local_88,2,&local_e8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void x25519kdfsha256_hkdfsha256_aes128gcm_psk_test(void)

{
  long in_FS_OFFSET;
  undefined8 local_1c8;
  undefined2 local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined1 *local_1a8;
  undefined8 local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  undefined1 *local_188;
  undefined8 local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 *local_138;
  undefined8 local_130;
  char *local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8 [2];
  undefined1 *local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = "Count-0";
  local_90 = first_ct0;
  local_1b0 = 0x20;
  local_1a0 = 0x20;
  local_190 = 0x20;
  local_180 = 0x20;
  local_1c8 = 0x1002000000001;
  local_1c0 = 1;
  local_1b8 = first_ikme;
  local_1a8 = first_ikmepub;
  local_198 = first_ikmr;
  local_188 = first_ikmrpub;
  local_178 = first_ikmrpriv;
  local_168 = first_expected_shared_secret;
  local_158 = "Ode on a Grecian Urn";
  local_138 = psk;
  local_128 = "Ennyn Durin aran Moria";
  local_b0 = pt;
  local_170 = 0x20;
  local_160 = 0x20;
  local_150 = 0x14;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0x20;
  local_b8[0] = 0;
  local_a8 = 0x1d;
  local_98 = 7;
  local_88 = 0x2d;
  local_80 = 1;
  local_78 = pt;
  local_40 = pt;
  local_30 = "Count-2";
  local_20 = first_ct2;
  local_108 = first_export1;
  local_f8 = &first_context2;
  local_e8 = first_export2;
  local_68 = "Count-1";
  local_58 = first_ct1;
  local_d8 = "TestContext";
  local_70 = 0x1d;
  local_60 = 7;
  local_50 = 0x2d;
  local_48 = 2;
  local_38 = 0x1d;
  local_28 = 7;
  local_18 = 0x2d;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0x20;
  local_f0 = 1;
  local_e0 = 0x20;
  local_d0 = 0xb;
  local_c8 = first_export3;
  local_c0 = 0x20;
  do_testhpke_constprop_0(&local_1c8,local_b8,3,&local_118);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void P256kdfsha256_hkdfsha256_aes128gcm_base_test(void)

{
  long in_FS_OFFSET;
  undefined8 local_198;
  undefined2 local_190;
  undefined1 *local_188;
  undefined8 local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined1 *local_138;
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined1 *local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = "Count-0";
  local_60 = third_ct0;
  local_180 = 0x20;
  local_170 = 0x41;
  local_160 = 0x20;
  local_150 = 0x41;
  local_198 = 0x1001000000000;
  local_190 = 1;
  local_188 = third_ikme;
  local_178 = third_ikmepub;
  local_168 = third_ikmr;
  local_158 = third_ikmrpub;
  local_148 = third_ikmrpriv;
  local_138 = third_expected_shared_secret;
  local_128 = "Ode on a Grecian Urn";
  local_80 = pt;
  local_140 = 0x20;
  local_130 = 0x20;
  local_120 = 0x14;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_88[0] = 0;
  local_78 = 0x1d;
  local_68 = 7;
  local_58 = 0x2d;
  local_50 = 1;
  local_48 = pt;
  local_38 = "Count-1";
  local_28 = third_ct1;
  local_d8 = third_export1;
  local_c8 = &third_context2;
  local_b8 = third_export2;
  local_a8 = "TestContext";
  local_40 = 0x1d;
  local_30 = 7;
  local_20 = 0x2d;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0x20;
  local_c0 = 1;
  local_b0 = 0x20;
  local_a0 = 0xb;
  local_98 = &third_export3;
  local_90 = 0x20;
  do_testhpke_constprop_0(&local_198,local_88,2,&local_e8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
  int iVar1;
  
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        iVar1 = test_get_libctx(&testctx,&nullprov,0,&deflprov,"default");
        if (iVar1 == 0) {
          return 0;
        }
        add_test("export_only_test",export_only_test);
        add_test("x25519kdfsha256_hkdfsha256_aes128gcm_base_test",
                 x25519kdfsha256_hkdfsha256_aes128gcm_base_test);
        add_test("x25519kdfsha256_hkdfsha256_aes128gcm_psk_test",
                 x25519kdfsha256_hkdfsha256_aes128gcm_psk_test);
        add_test("P256kdfsha256_hkdfsha256_aes128gcm_base_test",
                 P256kdfsha256_hkdfsha256_aes128gcm_base_test);
        add_test("test_hpke_export",test_hpke_export);
        add_test("test_hpke_modes_suites",test_hpke_modes_suites);
        add_test("test_hpke_suite_strs",test_hpke_suite_strs);
        add_test("test_hpke_grease",test_hpke_grease);
        add_test("test_hpke_ikms",test_hpke_ikms);
        add_test("test_hpke_random_suites",test_hpke_random_suites);
        add_test("test_hpke_oddcalls",test_hpke_oddcalls);
        add_test("test_hpke_compressed",test_hpke_compressed);
        add_test("test_hpke_noncereuse",0x100000);
        return 1;
      }
      if (iVar1 != 1) break;
      verbose = 1;
      iVar1 = opt_next();
    }
  } while (iVar1 - 500U < 6);
  return 0;
}



void cleanup_tests(void)

{
  OSSL_PROVIDER_unload(deflprov);
  OSSL_PROVIDER_unload(nullprov);
  OSSL_LIB_CTX_free(testctx);
  return;
}



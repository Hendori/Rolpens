
bool test_evp_pkey_export_to_provider(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  BIO *bp;
  X509 *a;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  uVar2 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/keymgmt_internal_test.c",0x134,"libctx = OSSL_LIB_CTX_new()",uVar2);
  if (iVar1 == 0) {
    bVar7 = false;
    bp = (BIO *)0x0;
    a = (X509 *)0x0;
    uVar3 = 0;
  }
  else {
    uVar3 = OSSL_PROVIDER_load(uVar2,"default");
    iVar1 = test_ptr("test/keymgmt_internal_test.c",0x135,
                     "prov = OSSL_PROVIDER_load(libctx, \"default\")");
    if (iVar1 != 0) {
      bp = BIO_new_file(cert_filename,"r");
      if (bp != (BIO *)0x0) {
        a = PEM_read_bio_X509(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
        if (a == (X509 *)0x0) {
          bVar7 = false;
          test_error("test/keymgmt_internal_test.c",0x13f,
                     "\'%s\' doesn\'t appear to be a X.509 certificate in PEM format\n",
                     cert_filename);
          test_openssl_errors();
        }
        else {
          uVar4 = X509_get_X509_PUBKEY(a);
          uVar4 = X509_PUBKEY_get0(uVar4);
          if (param_1 == 0) {
            uVar4 = evp_pkey_export_to_provider(uVar4,0,0,0);
            pcVar5 = "keydata = evp_pkey_export_to_provider(pkey, NULL, NULL, NULL)";
            uVar6 = 0x149;
          }
          else if (param_1 == 1) {
            uVar4 = evp_pkey_export_to_provider(uVar4,0,&local_48,0);
            pcVar5 = "keydata = evp_pkey_export_to_provider(pkey, NULL, &keymgmt, NULL)";
            uVar6 = 0x14d;
          }
          else {
            local_48 = EVP_KEYMGMT_fetch(uVar2,&_LC9,0);
            uVar4 = evp_pkey_export_to_provider(uVar4,0,&local_48,0);
            pcVar5 = "keydata = evp_pkey_export_to_provider(pkey, NULL, &keymgmt, NULL)";
            uVar6 = 0x153;
          }
          iVar1 = test_ptr("test/keymgmt_internal_test.c",uVar6,pcVar5,uVar4);
          bVar7 = iVar1 != 0;
        }
        goto LAB_00100063;
      }
      test_error("test/keymgmt_internal_test.c",0x139,"Couldn\'t open \'%s\' for reading\n",
                 cert_filename);
      test_openssl_errors();
    }
    bVar7 = false;
    bp = (BIO *)0x0;
    a = (X509 *)0x0;
  }
LAB_00100063:
  BIO_free(bp);
  X509_free(a);
  EVP_KEYMGMT_free(local_48);
  OSSL_PROVIDER_unload(uVar3);
  OSSL_LIB_CTX_free(uVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_pass_rsa(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  RSA *r;
  BIGNUM *a;
  BIGNUM *a_00;
  EVP_PKEY *pkey;
  undefined8 uVar5;
  undefined8 uVar6;
  EVP_PKEY *pEVar7;
  long lVar8;
  long in_FS_OFFSET;
  BIGNUM *local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_60 = 0;
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  r = RSA_new();
  uVar1 = test_ptr("test/keymgmt_internal_test.c",0xb1,"rsa = RSA_new()",r);
  if (uVar1 == 0) {
LAB_001002f0:
    uVar5 = 0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    local_78 = 0;
    local_80 = (BIGNUM *)0x0;
    pkey = (EVP_PKEY *)0x0;
    goto LAB_0010030d;
  }
  a = BN_new();
  uVar1 = test_ptr("test/keymgmt_internal_test.c",0xb4,"bn1 = BN_new()",a);
  if (uVar1 != 0) {
    iVar2 = BN_set_word(a,0xbc747fc5);
    uVar1 = test_true("test/keymgmt_internal_test.c",0xb5,"BN_set_word(bn1, expected[N])",iVar2 != 0
                     );
    if (uVar1 != 0) {
      a_00 = BN_new();
      uVar1 = test_ptr("test/keymgmt_internal_test.c",0xb6,"bn2 = BN_new()",a_00);
      if (uVar1 != 0) {
        iVar2 = BN_set_word(a_00,0x10001);
        uVar1 = test_true("test/keymgmt_internal_test.c",0xb7,"BN_set_word(bn2, expected[E])",
                          iVar2 != 0);
        if (uVar1 != 0) {
          local_80 = BN_new();
          iVar2 = test_ptr("test/keymgmt_internal_test.c",0xb8,"bn3 = BN_new()",local_80);
          if (iVar2 != 0) {
            iVar2 = BN_set_word(local_80,0x7b133399);
            uVar1 = test_true("test/keymgmt_internal_test.c",0xb9,"BN_set_word(bn3, expected[D])",
                              iVar2 != 0);
            if (uVar1 == 0) goto LAB_0010076e;
            iVar2 = RSA_set0_key(r,a,a_00,local_80);
            iVar2 = test_true("test/keymgmt_internal_test.c",0xba,"RSA_set0_key(rsa, bn1, bn2, bn3)"
                              ,iVar2 != 0);
            if (iVar2 != 0) {
              a = BN_new();
              iVar2 = test_ptr("test/keymgmt_internal_test.c",0xbd,"bn1 = BN_new()",a);
              if (iVar2 != 0) {
                iVar2 = BN_set_word(a,0xe963);
                iVar2 = test_true("test/keymgmt_internal_test.c",0xbe,
                                  "BN_set_word(bn1, expected[P])",iVar2 != 0);
                if (iVar2 != 0) {
                  a_00 = BN_new();
                  iVar2 = test_ptr("test/keymgmt_internal_test.c",0xbf,"bn2 = BN_new()",a_00);
                  if (iVar2 != 0) {
                    iVar2 = BN_set_word(a_00,0xceb7);
                    uVar1 = test_true("test/keymgmt_internal_test.c",0xc0,
                                      "BN_set_word(bn2, expected[Q])",iVar2 != 0);
                    if (uVar1 != 0) {
                      iVar2 = RSA_set0_factors(r,a,a_00);
                      iVar2 = test_true("test/keymgmt_internal_test.c",0xc1,
                                        "RSA_set0_factors(rsa, bn1, bn2)",iVar2 != 0);
                      if (iVar2 == 0) goto LAB_00100758;
                      a = BN_new();
                      uVar1 = test_ptr("test/keymgmt_internal_test.c",0xc4,"bn1 = BN_new()",a);
                      if (uVar1 != 0) {
                        iVar2 = BN_set_word(a,0x8599);
                        uVar1 = test_true("test/keymgmt_internal_test.c",0xc5,
                                          "BN_set_word(bn1, expected[DP])",iVar2 != 0);
                        if (uVar1 != 0) {
                          a_00 = BN_new();
                          uVar1 = test_ptr("test/keymgmt_internal_test.c",0xc6,"bn2 = BN_new()",a_00
                                          );
                          if (uVar1 != 0) {
                            iVar2 = BN_set_word(a_00,0xbd87);
                            uVar1 = test_true("test/keymgmt_internal_test.c",199,
                                              "BN_set_word(bn2, expected[DQ])",iVar2 != 0);
                            if (uVar1 != 0) {
                              local_80 = BN_new();
                              iVar2 = test_ptr("test/keymgmt_internal_test.c",200,"bn3 = BN_new()",
                                               local_80);
                              if (iVar2 != 0) {
                                iVar2 = BN_set_word(local_80,0xcc3b);
                                uVar1 = test_true("test/keymgmt_internal_test.c",0xc9,
                                                  "BN_set_word(bn3, expected[QINV])",iVar2 != 0);
                                if (uVar1 == 0) goto LAB_0010076e;
                                iVar2 = RSA_set0_crt_params(r,a,a_00,local_80);
                                iVar2 = test_true("test/keymgmt_internal_test.c",0xca,
                                                  "RSA_set0_crt_params(rsa, bn1, bn2, bn3)",
                                                  iVar2 != 0);
                                if (iVar2 != 0) {
                                  local_58 = BN_new();
                                  iVar2 = test_ptr("test/keymgmt_internal_test.c",0xce,
                                                   "bn_primes[0] = BN_new()",local_58);
                                  if (iVar2 != 0) {
                                    iVar2 = BN_set_word(local_58,1);
                                    uVar1 = test_true("test/keymgmt_internal_test.c",0xcf,
                                                      "BN_set_word(bn_primes[0], expected[F3])",
                                                      iVar2 != 0);
                                    if (uVar1 == 0) goto LAB_001002f0;
                                    local_50 = BN_new();
                                    iVar2 = test_ptr("test/keymgmt_internal_test.c",0xd0,
                                                     "bn_exps[0] = BN_new()",local_50);
                                    if (iVar2 != 0) {
                                      iVar2 = BN_set_word(local_50,2);
                                      iVar2 = test_true("test/keymgmt_internal_test.c",0xd1,
                                                        "BN_set_word(bn_exps[0], expected[E3])",
                                                        iVar2 != 0);
                                      if (iVar2 != 0) {
                                        local_48 = BN_new();
                                        iVar2 = test_ptr("test/keymgmt_internal_test.c",0xd2,
                                                         "bn_coeffs[0] = BN_new()",local_48);
                                        if (iVar2 != 0) {
                                          iVar2 = BN_set_word(local_48,3);
                                          iVar2 = test_true("test/keymgmt_internal_test.c",0xd3,
                                                                                                                        
                                                  "BN_set_word(bn_coeffs[0], expected[C2])",
                                                  iVar2 != 0);
                                          if (iVar2 != 0) {
                                            iVar2 = RSA_set0_multi_prime_params
                                                              (r,&local_58,&local_50,&local_48);
                                            iVar2 = test_true("test/keymgmt_internal_test.c",0xd4,
                                                                                                                            
                                                  "RSA_set0_multi_prime_params(rsa, bn_primes, bn_exps, bn_coeffs, 1)"
                                                  ,iVar2 != 0);
                                            if (iVar2 != 0) {
                                              pkey = EVP_PKEY_new();
                                              uVar1 = test_ptr("test/keymgmt_internal_test.c",0xd8,
                                                               "pk = EVP_PKEY_new()",pkey);
                                              if (uVar1 != 0) {
                                                iVar2 = EVP_PKEY_assign(pkey,6,r);
                                                uVar1 = test_true("test/keymgmt_internal_test.c",
                                                                  0xd9,
                                                  "EVP_PKEY_assign_RSA(pk, rsa)",iVar2 != 0);
                                                if (uVar1 != 0) {
                                                  local_60 = EVP_KEYMGMT_fetch(*param_1,&_LC9,0);
                                                  iVar2 = test_ptr("test/keymgmt_internal_test.c",
                                                                   0xdd,
                                                  "km1 = EVP_KEYMGMT_fetch(fixture->ctx1, \"RSA\", NULL)"
                                                  ,local_60);
                                                  if (iVar2 == 0) {
                                                    uVar5 = 0;
                                                    a_00 = (BIGNUM *)0x0;
                                                    a = (BIGNUM *)0x0;
                                                    local_78 = 0;
                                                    r = (RSA *)0x0;
                                                    local_80 = (BIGNUM *)0x0;
                                                    uVar1 = 0;
                                                  }
                                                  else {
                                                    local_78 = EVP_KEYMGMT_fetch(param_1[2],&_LC9,0)
                                                    ;
                                                    iVar2 = test_ptr("test/keymgmt_internal_test.c",
                                                                     0xde,
                                                  "km2 = EVP_KEYMGMT_fetch(fixture->ctx2, \"RSA\", NULL)"
                                                  ,local_78);
                                                  if (iVar2 == 0) {
                                                    uVar5 = 0;
                                                    a_00 = (BIGNUM *)0x0;
                                                    a = (BIGNUM *)0x0;
                                                    local_80 = (BIGNUM *)0x0;
                                                    r = (RSA *)0x0;
                                                    uVar1 = 0;
                                                  }
                                                  else {
                                                    uVar5 = EVP_KEYMGMT_fetch(*param_1,"RSA-PSS",0);
                                                    iVar2 = test_ptr("test/keymgmt_internal_test.c",
                                                                     0xdf,
                                                  "km3 = EVP_KEYMGMT_fetch(fixture->ctx1, \"RSA-PSS\", NULL)"
                                                  ,uVar5);
                                                  if ((iVar2 == 0) ||
                                                     (iVar2 = test_ptr_ne(
                                                  "test/keymgmt_internal_test.c",0xe0,&_LC39,&_LC38,
                                                  local_60,local_78), iVar2 == 0)) {
LAB_00100be6:
                                                    a_00 = (BIGNUM *)0x0;
                                                    a = (BIGNUM *)0x0;
                                                    r = (RSA *)0x0;
                                                    local_80 = (BIGNUM *)0x0;
                                                    uVar1 = 0;
                                                  }
                                                  else {
                                                    pEVar7 = (EVP_PKEY *)0x0;
                                                    do {
                                                      local_68 = uVar5;
                                                      uVar6 = evp_pkey_export_to_provider
                                                                        (pkey,0,&local_68,0);
                                                      iVar2 = test_ptr_null(
                                                  "test/keymgmt_internal_test.c",0xe7,
                                                  "provkey2 = evp_pkey_export_to_provider(pk, NULL, &km, NULL)"
                                                  ,uVar6);
                                                  if (iVar2 == 0) goto LAB_00100be6;
                                                  uVar6 = evp_pkey_export_to_provider
                                                                    (pkey,0,&local_60,0);
                                                  iVar2 = test_ptr("test/keymgmt_internal_test.c",
                                                                   0xec,
                                                  "provkey = evp_pkey_export_to_provider(pk, NULL, &km1, NULL)"
                                                  ,uVar6);
                                                  if (iVar2 == 0) {
                                                    a_00 = (BIGNUM *)0x0;
                                                    a = (BIGNUM *)0x0;
                                                    r = (RSA *)0x0;
                                                    local_80 = (BIGNUM *)0x0;
                                                    uVar1 = 0;
                                                    goto LAB_0010030d;
                                                  }
                                                  iVar2 = evp_keymgmt_export(local_78,uVar6,3,
                                                                             export_cb,&keydata_0);
                                                  iVar2 = test_true("test/keymgmt_internal_test.c",
                                                                    0xee,
                                                  "evp_keymgmt_export(km2, provkey, OSSL_KEYMGMT_SELECT_KEYPAIR, &export_cb, keydata)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 == 0) goto LAB_00100be6;
                                                  iVar2 = 0;
                                                  lVar8 = 0;
                                                  do {
                                                    iVar3 = test_int_eq(
                                                  "test/keymgmt_internal_test.c",0xf9,"expected[i]",
                                                  "keydata[i]",(&expected_1)[lVar8 * 2],
                                                  (&keydata_0)[lVar8 * 2]);
                                                  if (iVar3 == 0) {
                                                    test_info("test/keymgmt_internal_test.c",0xfc,
                                                              "i = %zu",lVar8);
                                                  }
                                                  else {
                                                    iVar2 = iVar2 + 1;
                                                  }
                                                  lVar8 = lVar8 + 1;
                                                  } while (lVar8 != 0xc);
                                                  if ((iVar2 != 0xc) || (pEVar7 != (EVP_PKEY *)0x0))
                                                  {
                                                    uVar1 = (uint)(iVar2 == 0xc);
                                                    a_00 = (BIGNUM *)0x0;
                                                    a = (BIGNUM *)0x0;
                                                    local_80 = (BIGNUM *)0x0;
                                                    r = (RSA *)0x0;
                                                    goto LAB_0010030d;
                                                  }
                                                  pEVar7 = (EVP_PKEY *)EVP_PKEY_dup(pkey);
                                                  iVar2 = test_ptr("test/keymgmt_internal_test.c",
                                                                   0x106,"dup_pk = EVP_PKEY_dup(pk)"
                                                                  );
                                                  if (iVar2 == 0) {
                                                    a_00 = (BIGNUM *)0x0;
                                                    a = (BIGNUM *)0x0;
                                                    r = (RSA *)0x0;
                                                    local_80 = (BIGNUM *)0x0;
                                                    uVar1 = 1;
                                                    goto LAB_0010030d;
                                                  }
                                                  uVar4 = EVP_PKEY_eq(pkey,pEVar7);
                                                  iVar2 = test_int_eq("test/keymgmt_internal_test.c"
                                                                      ,0x109,
                                                  "EVP_PKEY_eq(pk, dup_pk)",&_LC47,uVar4,1);
                                                  EVP_PKEY_free(pkey);
                                                  pkey = pEVar7;
                                                  } while (iVar2 != 0);
                                                  a = (BIGNUM *)0x0;
                                                  local_80 = (BIGNUM *)0x0;
                                                  a_00 = (BIGNUM *)0x0;
                                                  r = (RSA *)0x0;
                                                  uVar1 = 0;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_0010030d;
                                                }
                                              }
                                              uVar5 = 0;
                                              a_00 = (BIGNUM *)0x0;
                                              a = (BIGNUM *)0x0;
                                              local_78 = 0;
                                              local_80 = (BIGNUM *)0x0;
                                              goto LAB_0010030d;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  uVar5 = 0;
                                  local_78 = 0;
                                  uVar1 = 0;
                                  a = (BIGNUM *)0x0;
                                  local_80 = (BIGNUM *)0x0;
                                  a_00 = (BIGNUM *)0x0;
                                  pkey = (EVP_PKEY *)0x0;
                                  goto LAB_0010030d;
                                }
                              }
                              goto LAB_00100758;
                            }
                          }
                        }
                      }
                    }
LAB_0010076e:
                    local_78 = 0;
                    uVar5 = 0;
                    pkey = (EVP_PKEY *)0x0;
                    goto LAB_0010030d;
                  }
                }
              }
            }
          }
LAB_00100758:
          local_78 = 0;
          uVar5 = 0;
          pkey = (EVP_PKEY *)0x0;
          uVar1 = 0;
          goto LAB_0010030d;
        }
      }
      local_78 = 0;
      uVar5 = 0;
      local_80 = (BIGNUM *)0x0;
      pkey = (EVP_PKEY *)0x0;
      goto LAB_0010030d;
    }
  }
  local_78 = 0;
  uVar5 = 0;
  a_00 = (BIGNUM *)0x0;
  local_80 = (BIGNUM *)0x0;
  pkey = (EVP_PKEY *)0x0;
LAB_0010030d:
  RSA_free(r);
  BN_free(a);
  BN_free(a_00);
  BN_free(local_80);
  EVP_PKEY_free(pkey);
  EVP_KEYMGMT_free(local_60);
  EVP_KEYMGMT_free(local_78);
  EVP_KEYMGMT_free(uVar5);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



uint get_ulong_via_BN(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  BIGNUM *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (BIGNUM *)0x0;
  iVar1 = OSSL_PARAM_get_BN(param_1,&local_28);
  uVar2 = test_true("test/keymgmt_internal_test.c",0x5e,"OSSL_PARAM_get_BN(p, &n)",iVar1 != 0);
  if (uVar2 != 0) {
    uVar3 = BN_bn2nativepad(local_28,param_2,8);
    iVar1 = test_int_ge("test/keymgmt_internal_test.c",0x5f,
                        "BN_bn2nativepad(n, (unsigned char *)goal, sizeof(*goal))",&_LC50,uVar3,0);
    uVar2 = (uint)(iVar1 != 0);
  }
  BN_free(local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool export_cb(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    return false;
  }
  uVar2 = OSSL_PARAM_locate_const(param_1,&_LC52);
  iVar1 = test_ptr("test/keymgmt_internal_test.c",0x6d,
                   "p = OSSL_PARAM_locate_const(params, OSSL_PKEY_PARAM_RSA_N)",uVar2);
  if (iVar1 != 0) {
    iVar1 = get_ulong_via_BN(uVar2,param_2);
    iVar1 = test_true("test/keymgmt_internal_test.c",0x6e,"get_ulong_via_BN(p, &keydata[N])",
                      iVar1 != 0);
    if (iVar1 != 0) {
      uVar2 = OSSL_PARAM_locate_const(param_1,&_LC55);
      iVar1 = test_ptr("test/keymgmt_internal_test.c",0x6f,
                       "p = OSSL_PARAM_locate_const(params, OSSL_PKEY_PARAM_RSA_E)",uVar2);
      if (iVar1 != 0) {
        iVar1 = get_ulong_via_BN(uVar2,param_2 + 8);
        iVar1 = test_true("test/keymgmt_internal_test.c",0x70,"get_ulong_via_BN(p, &keydata[E])",
                          iVar1 != 0);
        if (iVar1 != 0) {
          uVar2 = OSSL_PARAM_locate_const(param_1,&_LC58);
          iVar1 = test_ptr("test/keymgmt_internal_test.c",0x71,
                           "p = OSSL_PARAM_locate_const(params, OSSL_PKEY_PARAM_RSA_D)",uVar2);
          if (iVar1 != 0) {
            iVar1 = get_ulong_via_BN(uVar2,param_2 + 0x10);
            iVar1 = test_true("test/keymgmt_internal_test.c",0x72,"get_ulong_via_BN(p, &keydata[D])"
                              ,iVar1 != 0);
            if (iVar1 != 0) {
              uVar2 = OSSL_PARAM_locate_const(param_1,"rsa-factor1");
              iVar1 = test_ptr("test/keymgmt_internal_test.c",0x75,
                               "p = OSSL_PARAM_locate_const(params, OSSL_PKEY_PARAM_RSA_FACTOR1)",
                               uVar2);
              if (iVar1 != 0) {
                iVar1 = get_ulong_via_BN(uVar2,param_2 + 0x18);
                iVar1 = test_true("test/keymgmt_internal_test.c",0x76,
                                  "get_ulong_via_BN(p, &keydata[P])",iVar1 != 0);
                if (iVar1 != 0) {
                  uVar2 = OSSL_PARAM_locate_const(param_1,"rsa-factor2");
                  iVar1 = test_ptr("test/keymgmt_internal_test.c",0x77,
                                   "p = OSSL_PARAM_locate_const(params, OSSL_PKEY_PARAM_RSA_FACTOR2)"
                                   ,uVar2);
                  if (iVar1 != 0) {
                    iVar1 = get_ulong_via_BN(uVar2,param_2 + 0x20);
                    iVar1 = test_true("test/keymgmt_internal_test.c",0x78,
                                      "get_ulong_via_BN(p, &keydata[Q])",iVar1 != 0);
                    if (iVar1 != 0) {
                      uVar2 = OSSL_PARAM_locate_const(param_1,"rsa-factor3");
                      iVar1 = test_ptr("test/keymgmt_internal_test.c",0x79,
                                       "p = OSSL_PARAM_locate_const(params, OSSL_PKEY_PARAM_RSA_FACTOR3)"
                                       ,uVar2);
                      if (iVar1 != 0) {
                        iVar1 = get_ulong_via_BN(uVar2,param_2 + 0x28);
                        iVar1 = test_true("test/keymgmt_internal_test.c",0x7a,
                                          "get_ulong_via_BN(p, &keydata[F3])",iVar1 != 0);
                        if (iVar1 != 0) {
                          uVar2 = OSSL_PARAM_locate_const(param_1,"rsa-exponent1");
                          iVar1 = test_ptr("test/keymgmt_internal_test.c",0x7d,
                                           "p = OSSL_PARAM_locate_const(params, OSSL_PKEY_PARAM_RSA_EXPONENT1)"
                                           ,uVar2);
                          if (iVar1 != 0) {
                            iVar1 = get_ulong_via_BN(uVar2,param_2 + 0x30);
                            iVar1 = test_true("test/keymgmt_internal_test.c",0x7e,
                                              "get_ulong_via_BN(p, &keydata[DP])",iVar1 != 0);
                            if (iVar1 != 0) {
                              uVar2 = OSSL_PARAM_locate_const(param_1,"rsa-exponent2");
                              iVar1 = test_ptr("test/keymgmt_internal_test.c",0x7f,
                                               "p = OSSL_PARAM_locate_const(params, OSSL_PKEY_PARAM_RSA_EXPONENT2)"
                                               ,uVar2);
                              if (iVar1 != 0) {
                                iVar1 = get_ulong_via_BN(uVar2,param_2 + 0x38);
                                iVar1 = test_true("test/keymgmt_internal_test.c",0x80,
                                                  "get_ulong_via_BN(p, &keydata[DQ])",iVar1 != 0);
                                if (iVar1 != 0) {
                                  uVar2 = OSSL_PARAM_locate_const(param_1,"rsa-exponent3");
                                  iVar1 = test_ptr("test/keymgmt_internal_test.c",0x81,
                                                                                                      
                                                  "p = OSSL_PARAM_locate_const(params, OSSL_PKEY_PARAM_RSA_EXPONENT3)"
                                                  ,uVar2);
                                  if (iVar1 != 0) {
                                    iVar1 = get_ulong_via_BN(uVar2,param_2 + 0x40);
                                    iVar1 = test_true("test/keymgmt_internal_test.c",0x82,
                                                      "get_ulong_via_BN(p, &keydata[E3])",iVar1 != 0
                                                     );
                                    if (iVar1 != 0) {
                                      uVar2 = OSSL_PARAM_locate_const(param_1,"rsa-coefficient1");
                                      iVar1 = test_ptr("test/keymgmt_internal_test.c",0x85,
                                                                                                              
                                                  "p = OSSL_PARAM_locate_const(params, OSSL_PKEY_PARAM_RSA_COEFFICIENT1)"
                                                  ,uVar2);
                                      if (iVar1 != 0) {
                                        iVar1 = get_ulong_via_BN(uVar2,param_2 + 0x48);
                                        iVar1 = test_true("test/keymgmt_internal_test.c",0x86,
                                                          "get_ulong_via_BN(p, &keydata[QINV])",
                                                          iVar1 != 0);
                                        if (iVar1 != 0) {
                                          uVar2 = OSSL_PARAM_locate_const
                                                            (param_1,"rsa-coefficient2");
                                          iVar1 = test_ptr("test/keymgmt_internal_test.c",0x87,
                                                                                                                      
                                                  "p = OSSL_PARAM_locate_const(params, OSSL_PKEY_PARAM_RSA_COEFFICIENT2)"
                                                  ,uVar2);
                                          if (iVar1 != 0) {
                                            iVar1 = get_ulong_via_BN(uVar2,param_2 + 0x50);
                                            iVar1 = test_true("test/keymgmt_internal_test.c",0x88,
                                                              "get_ulong_via_BN(p, &keydata[C2])",
                                                              iVar1 != 0);
                                            return iVar1 != 0;
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
  return false;
}



undefined4 test_pass_key(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x20,"test/keymgmt_internal_test.c",0x37);
  iVar1 = test_ptr("test/keymgmt_internal_test.c",0x37,"fixture = OPENSSL_zalloc(sizeof(*fixture))",
                   ptr);
  if (iVar1 == 0) {
    if (ptr == (undefined8 *)0x0) {
      return 0;
    }
  }
  else {
    uVar3 = OSSL_LIB_CTX_new();
    *ptr = uVar3;
    iVar1 = test_ptr("test/keymgmt_internal_test.c",0x38,"fixture->ctx1 = OSSL_LIB_CTX_new()",uVar3)
    ;
    if (iVar1 != 0) {
      uVar3 = OSSL_PROVIDER_load(*ptr,"default");
      ptr[1] = uVar3;
      iVar1 = test_ptr("test/keymgmt_internal_test.c",0x39,
                       "fixture->prov1 = OSSL_PROVIDER_load(fixture->ctx1, \"default\")",uVar3);
      if (iVar1 != 0) {
        uVar3 = OSSL_LIB_CTX_new();
        ptr[2] = uVar3;
        iVar1 = test_ptr("test/keymgmt_internal_test.c",0x3b,"fixture->ctx2 = OSSL_LIB_CTX_new()",
                         uVar3);
        if (iVar1 != 0) {
          uVar3 = OSSL_PROVIDER_load(ptr[2],"default");
          ptr[3] = uVar3;
          iVar1 = test_ptr("test/keymgmt_internal_test.c",0x3c,
                           "fixture->prov2 = OSSL_PROVIDER_load(fixture->ctx2, \"default\")",uVar3);
          if (iVar1 != 0) {
            uVar2 = test_pass_rsa(ptr);
            OSSL_PROVIDER_unload(ptr[1]);
            OSSL_PROVIDER_unload(ptr[3]);
            OSSL_LIB_CTX_free(*ptr);
            OSSL_LIB_CTX_free(ptr[2]);
            CRYPTO_free(ptr);
            return uVar2;
          }
        }
      }
    }
  }
  OSSL_PROVIDER_unload(ptr[1]);
  OSSL_PROVIDER_unload(ptr[3]);
  OSSL_LIB_CTX_free(*ptr);
  OSSL_LIB_CTX_free(ptr[2]);
  CRYPTO_free(ptr);
  return 0;
}



undefined8 setup_tests(void)

{
  undefined8 uVar1;
  
  cert_filename = test_get_argument(0);
  uVar1 = test_ptr("test/keymgmt_internal_test.c",0x164,"cert_filename = test_get_argument(0)",
                   cert_filename);
  if ((int)uVar1 != 0) {
    add_all_tests("test_pass_key",test_pass_key,1,1);
    add_all_tests("test_evp_pkey_export_to_provider",0x100000,3,1);
    uVar1 = 1;
  }
  return uVar1;
}



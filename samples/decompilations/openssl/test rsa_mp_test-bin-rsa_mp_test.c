
bool test_rsa_mp(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  RSA *rsa;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  long in_FS_OFFSET;
  bool bVar7;
  uchar auStack_248 [256];
  uchar local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  rsa = RSA_new();
  iVar1 = test_ptr("test/rsa_mp_test.c",0x10b,&_LC0,rsa);
  if (iVar1 != 0) {
    pBVar4 = BN_bin2bn(d,0x100,(BIGNUM *)0x0);
    pBVar5 = BN_bin2bn("\x01",3,(BIGNUM *)0x0);
    pBVar6 = BN_bin2bn(n,0x100,(BIGNUM *)0x0);
    uVar2 = RSA_set0_key(rsa,pBVar6,pBVar5,pBVar4);
    iVar1 = test_int_eq("test/rsa_mp_test.c",0x8d,
                        "RSA_set0_key(key, BN_bin2bn(n, sizeof(n) - 1, NULL), BN_bin2bn(e, sizeof(e) - 1, NULL), BN_bin2bn(d, sizeof(d) - 1, NULL))"
                        ,&_LC2,uVar2,1);
    if (iVar1 != 0) {
      iVar1 = RSA_size(rsa);
    }
    iVar1 = test_int_eq("test/rsa_mp_test.c",0x10e,"(clen = key2048_key(key))",&_LC4,iVar1,0x100);
    if (iVar1 != 0) {
      uVar2 = (**(code **)(param_set_1 + (long)param_1 * 8))(rsa);
      iVar1 = test_int_eq("test/rsa_mp_test.c",0x10f,"(clen = param_set[i](key))",&_LC4,uVar2,0x100)
      ;
      if (iVar1 != 0) {
        iVar1 = RSA_check_key_ex(rsa,0);
        iVar1 = test_true("test/rsa_mp_test.c",0x112,"RSA_check_key_ex(key, NULL)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = RSA_public_encrypt(8,ptext_ex_0,local_148,rsa,1);
          iVar3 = test_int_eq("test/rsa_mp_test.c",0x117,&_LC9,&_LC8,iVar1,uVar2);
          if (iVar3 != 0) {
            iVar1 = RSA_private_decrypt(iVar1,local_148,auStack_248,rsa,1);
            iVar1 = test_mem_eq("test/rsa_mp_test.c",0x11b,"ptext","ptext_ex",auStack_248,
                                (long)iVar1,ptext_ex_0,8);
            bVar7 = iVar1 != 0;
            goto LAB_00100057;
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_00100057:
  RSA_free(rsa);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int key2048p3_v2(RSA *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  BIGNUM *pBVar7;
  
  iVar1 = RSA_size(param_1);
  uVar4 = OPENSSL_sk_new_null();
  iVar2 = test_ptr("test/rsa_mp_test.c",0xce,"primes = sk_BIGNUM_new_null()",uVar4);
  if (iVar2 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = OPENSSL_sk_new_null();
    uVar6 = 0;
    iVar2 = test_ptr("test/rsa_mp_test.c",0xcf,"exps = sk_BIGNUM_new_null()",uVar5);
    if (iVar2 != 0) {
      uVar6 = OPENSSL_sk_new_null();
      iVar2 = test_ptr("test/rsa_mp_test.c",0xd0,"coeffs = sk_BIGNUM_new_null()",uVar6);
      if (iVar2 != 0) {
        pBVar7 = BN_bin2bn(p,0x56,(BIGNUM *)0x0);
        iVar2 = test_ptr("test/rsa_mp_test.c",0xd3,"num = BN_bin2bn(p, sizeof(p) - 1, NULL)",pBVar7)
        ;
        if (iVar2 != 0) {
          uVar3 = OPENSSL_sk_push(uVar4,pBVar7);
          iVar2 = test_int_ne("test/rsa_mp_test.c",0xd4,"sk_BIGNUM_push(primes, num)",&_LC16,uVar3,0
                             );
          if (iVar2 != 0) {
            pBVar7 = BN_bin2bn(q,0x56,(BIGNUM *)0x0);
            iVar2 = test_ptr("test/rsa_mp_test.c",0xd5,"num = BN_bin2bn(q, sizeof(q) - 1, NULL)",
                             pBVar7);
            if (iVar2 != 0) {
              uVar3 = OPENSSL_sk_push(uVar4,pBVar7);
              iVar2 = test_int_ne("test/rsa_mp_test.c",0xd6,"sk_BIGNUM_push(primes, num)",&_LC16,
                                  uVar3,0);
              if (iVar2 != 0) {
                pBVar7 = BN_bin2bn(ex_prime,0x56,(BIGNUM *)0x0);
                iVar2 = test_ptr("test/rsa_mp_test.c",0xd7,
                                 "num = BN_bin2bn(ex_prime, sizeof(ex_prime) - 1, NULL)",pBVar7);
                if (iVar2 != 0) {
                  uVar3 = OPENSSL_sk_push(uVar4,pBVar7);
                  iVar2 = test_int_ne("test/rsa_mp_test.c",0xd8,"sk_BIGNUM_push(primes, num)",&_LC16
                                      ,uVar3,0);
                  if (iVar2 != 0) {
                    pBVar7 = BN_bin2bn(dmp1,0x56,(BIGNUM *)0x0);
                    iVar2 = test_ptr("test/rsa_mp_test.c",0xdb,
                                     "num = BN_bin2bn(dmp1, sizeof(dmp1) - 1, NULL)",pBVar7);
                    if (iVar2 != 0) {
                      uVar3 = OPENSSL_sk_push(uVar5,pBVar7);
                      iVar2 = test_int_ne("test/rsa_mp_test.c",0xdc,"sk_BIGNUM_push(exps, num)",
                                          &_LC16,uVar3,0);
                      if (iVar2 != 0) {
                        pBVar7 = BN_bin2bn(dmq1,0x56,(BIGNUM *)0x0);
                        iVar2 = test_ptr("test/rsa_mp_test.c",0xdd,
                                         "num = BN_bin2bn(dmq1, sizeof(dmq1) - 1, NULL)",pBVar7);
                        if (iVar2 != 0) {
                          uVar3 = OPENSSL_sk_push(uVar5,pBVar7);
                          iVar2 = test_int_ne("test/rsa_mp_test.c",0xde,"sk_BIGNUM_push(exps, num)",
                                              &_LC16,uVar3,0);
                          if (iVar2 != 0) {
                            pBVar7 = BN_bin2bn(ex_exponent,0x56,(BIGNUM *)0x0);
                            iVar2 = test_ptr("test/rsa_mp_test.c",0xdf,
                                             "num = BN_bin2bn(ex_exponent, sizeof(ex_exponent) - 1, NULL)"
                                             ,pBVar7);
                            if (iVar2 != 0) {
                              uVar3 = OPENSSL_sk_push(uVar5,pBVar7);
                              iVar2 = test_int_ne("test/rsa_mp_test.c",0xe0,
                                                  "sk_BIGNUM_push(exps, num)",&_LC16,uVar3,0);
                              if (iVar2 != 0) {
                                pBVar7 = BN_bin2bn(iqmp,0x56,(BIGNUM *)0x0);
                                iVar2 = test_ptr("test/rsa_mp_test.c",0xe3,
                                                 "num = BN_bin2bn(iqmp, sizeof(iqmp) - 1, NULL)",
                                                 pBVar7);
                                if (iVar2 != 0) {
                                  uVar3 = OPENSSL_sk_push(uVar6,pBVar7);
                                  iVar2 = test_int_ne("test/rsa_mp_test.c",0xe4,
                                                      "sk_BIGNUM_push(coeffs, num)",&_LC16,uVar3,0);
                                  if (iVar2 != 0) {
                                    pBVar7 = BN_bin2bn(ex_coefficient,0x56,(BIGNUM *)0x0);
                                    iVar2 = test_ptr("test/rsa_mp_test.c",0xe5,
                                                                                                          
                                                  "num = BN_bin2bn(ex_coefficient, sizeof(ex_coefficient) - 1, NULL)"
                                                  ,pBVar7);
                                    if (iVar2 != 0) {
                                      uVar3 = OPENSSL_sk_push(uVar6,pBVar7);
                                      iVar2 = test_int_ne("test/rsa_mp_test.c",0xe6,
                                                          "sk_BIGNUM_push(coeffs, num)",&_LC16,uVar3
                                                          ,0);
                                      if (iVar2 != 0) {
                                        iVar2 = ossl_rsa_set0_all_params(param_1,uVar4,uVar5,uVar6);
                                        iVar2 = test_true("test/rsa_mp_test.c",0xe9,
                                                                                                                    
                                                  "ossl_rsa_set0_all_params(key, primes, exps, coeffs)"
                                                  ,iVar2 != 0);
                                        if (iVar2 != 0) goto LAB_001002cd;
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
  OPENSSL_sk_pop_free(uVar4,BN_free);
  OPENSSL_sk_pop_free(uVar5,BN_free);
  iVar1 = 0;
  OPENSSL_sk_pop_free(uVar6,BN_free);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
LAB_001002cd:
  OPENSSL_sk_free(uVar4);
  OPENSSL_sk_free(uVar5);
  OPENSSL_sk_free(uVar6);
  return iVar1;
}



ulong key2048p3_v1(RSA *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  ulong uVar8;
  undefined8 *ptr;
  undefined8 *ptr_00;
  undefined8 *ptr_01;
  
  uVar2 = RSA_size(param_1);
  pBVar5 = BN_bin2bn(q,0x56,(BIGNUM *)0x0);
  pBVar6 = BN_bin2bn(p,0x56,(BIGNUM *)0x0);
  uVar3 = RSA_set0_factors(param_1,pBVar6,pBVar5);
  iVar4 = test_int_eq("test/rsa_mp_test.c",0x9c,
                      "RSA_set0_factors(key, BN_bin2bn(p, sizeof(p) - 1, NULL), BN_bin2bn(q, sizeof(q) - 1, NULL))"
                      ,&_LC2,uVar3,1);
  if (iVar4 == 0) {
    ptr_01 = (undefined8 *)0x0;
    ptr_00 = (undefined8 *)0x0;
    ptr = (undefined8 *)0x0;
    uVar2 = 0;
    goto LAB_0010078f;
  }
  pBVar5 = BN_bin2bn(iqmp,0x56,(BIGNUM *)0x0);
  pBVar6 = BN_bin2bn(dmq1,0x56,(BIGNUM *)0x0);
  pBVar7 = BN_bin2bn(dmp1,0x56,(BIGNUM *)0x0);
  uVar3 = RSA_set0_crt_params(param_1,pBVar7,pBVar6,pBVar5);
  uVar8 = test_int_eq("test/rsa_mp_test.c",0xa1,
                      "RSA_set0_crt_params(key, BN_bin2bn(dmp1, sizeof(dmp1) - 1, NULL), BN_bin2bn(dmq1, sizeof(dmq1) - 1, NULL), BN_bin2bn(iqmp, sizeof(iqmp) - 1, NULL))"
                      ,&_LC2,uVar3,1);
  if ((int)uVar8 == 0) {
    return uVar8;
  }
  ptr = (undefined8 *)CRYPTO_zalloc(8,"test/rsa_mp_test.c",0xa8);
  ptr_00 = (undefined8 *)CRYPTO_zalloc(8,"test/rsa_mp_test.c",0xa9);
  ptr_01 = (undefined8 *)CRYPTO_zalloc(8,"test/rsa_mp_test.c",0xaa);
  iVar4 = test_ptr("test/rsa_mp_test.c",0xab,&_LC30,ptr);
  if (((iVar4 == 0) || (iVar4 = test_ptr("test/rsa_mp_test.c",0xab,&_LC31,ptr_00), iVar4 == 0)) ||
     (iVar4 = test_ptr("test/rsa_mp_test.c",0xab,"coeffs",ptr_01), iVar4 == 0)) {
    if (ptr != (undefined8 *)0x0) {
      BN_free((BIGNUM *)*ptr);
    }
    if (ptr_00 != (undefined8 *)0x0) goto LAB_001008c5;
LAB_001008cd:
    if (ptr_01 == (undefined8 *)0x0) {
      uVar2 = 0;
      goto LAB_0010078f;
    }
  }
  else {
    pBVar5 = BN_bin2bn(ex_prime,0x56,(BIGNUM *)0x0);
    *ptr = pBVar5;
    pBVar5 = BN_bin2bn(ex_exponent,0x56,(BIGNUM *)0x0);
    *ptr_00 = pBVar5;
    pBVar5 = BN_bin2bn(ex_coefficient,0x56,(BIGNUM *)0x0);
    uVar1 = *ptr;
    *ptr_01 = pBVar5;
    iVar4 = test_ptr("test/rsa_mp_test.c",0xb1,"pris[0]",uVar1);
    if (((iVar4 != 0) && (iVar4 = test_ptr("test/rsa_mp_test.c",0xb1,"exps[0]",*ptr_00), iVar4 != 0)
        ) && (iVar4 = test_ptr("test/rsa_mp_test.c",0xb1,"coeffs[0]",*ptr_01), iVar4 != 0)) {
      iVar4 = RSA_set0_multi_prime_params(param_1,ptr,ptr_00,ptr_01,1);
      iVar4 = test_true("test/rsa_mp_test.c",0xb4,
                        "RSA_set0_multi_prime_params(key, pris, exps, coeffs, NUM_EXTRA_PRIMES)",
                        iVar4 != 0);
      if (iVar4 != 0) goto LAB_0010078f;
      BN_free((BIGNUM *)*ptr);
LAB_001008c5:
      BN_free((BIGNUM *)*ptr_00);
      goto LAB_001008cd;
    }
    BN_free((BIGNUM *)*ptr);
    BN_free((BIGNUM *)*ptr_00);
  }
  BN_free((BIGNUM *)*ptr_01);
  uVar2 = 0;
LAB_0010078f:
  CRYPTO_free(ptr);
  CRYPTO_free(ptr_00);
  CRYPTO_free(ptr_01);
  return (ulong)uVar2;
}



uint test_rsa_mp_gen_bad_input(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  RSA *r;
  BIGNUM *a;
  
  a = (BIGNUM *)0x0;
  r = RSA_new();
  uVar1 = test_ptr("test/rsa_mp_test.c",0x12a,"rsa = RSA_new()",r);
  if (uVar1 != 0) {
    a = BN_new();
    iVar2 = test_ptr("test/rsa_mp_test.c",0x12d,"ebn = BN_new()",a);
    if (iVar2 != 0) {
      iVar2 = BN_set_word(a,0x10001);
      iVar2 = test_true("test/rsa_mp_test.c",0x12f,"BN_set_word(ebn, 65537)",iVar2 != 0);
      if (iVar2 != 0) {
        uVar3 = RSA_generate_multi_prime_key(r,0x400,2,0,0);
        iVar2 = test_int_eq("test/rsa_mp_test.c",0x133,
                            "RSA_generate_multi_prime_key(rsa, 1024, 2, NULL, NULL)",&_LC16,uVar3,0)
        ;
        if (iVar2 != 0) {
          uVar3 = RSA_generate_multi_prime_key(r,500,2,a,0);
          iVar2 = test_int_eq("test/rsa_mp_test.c",0x137,
                              "RSA_generate_multi_prime_key(rsa, 500, 2, ebn, NULL)",&_LC16,uVar3,0)
          ;
          if (iVar2 != 0) {
            uVar3 = RSA_generate_multi_prime_key(r,0x400,1,a,0);
            iVar2 = test_int_eq("test/rsa_mp_test.c",0x13b,
                                "RSA_generate_multi_prime_key(rsa, 1024, 1, ebn, NULL)",&_LC16,uVar3
                                ,0);
            uVar1 = (uint)(iVar2 != 0);
            goto LAB_00100a6d;
          }
        }
      }
    }
    uVar1 = 0;
  }
LAB_00100a6d:
  BN_free(a);
  RSA_free(r);
  return uVar1;
}



undefined8 setup_tests(void)

{
  add_test("test_rsa_mp_gen_bad_input",test_rsa_mp_gen_bad_input);
  add_all_tests("test_rsa_mp",0x100000,2,1);
  return 1;
}



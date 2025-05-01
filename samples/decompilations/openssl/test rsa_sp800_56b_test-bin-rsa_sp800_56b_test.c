
bool test_sp80056b_keygen(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  RSA *r;
  bool bVar3;
  
  uVar1 = *(undefined4 *)((long)&keygen_size + (long)param_1 * 4);
  r = RSA_new();
  iVar2 = test_ptr("test/rsa_sp800_56b_test.c",0x1ed,"key = RSA_new()",r);
  if (iVar2 != 0) {
    iVar2 = ossl_rsa_sp800_56b_generate_key(r,uVar1,0,0);
    iVar2 = test_true("test/rsa_sp800_56b_test.c",0x1ee,
                      "ossl_rsa_sp800_56b_generate_key(key, sz, NULL, NULL)",iVar2 != 0);
    if (iVar2 != 0) {
      iVar2 = ossl_rsa_sp800_56b_check_public(r);
      iVar2 = test_true("test/rsa_sp800_56b_test.c",0x1ef,"ossl_rsa_sp800_56b_check_public(key)",
                        iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = ossl_rsa_sp800_56b_check_private(r);
        iVar2 = test_true("test/rsa_sp800_56b_test.c",0x1f0,"ossl_rsa_sp800_56b_check_private(key)",
                          iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = ossl_rsa_sp800_56b_check_keypair(r,0,0xffffffff,uVar1);
          iVar2 = test_true("test/rsa_sp800_56b_test.c",0x1f1,
                            "ossl_rsa_sp800_56b_check_keypair(key, NULL, -1, sz)",iVar2 != 0);
          bVar3 = iVar2 != 0;
          goto LAB_00100042;
        }
      }
    }
  }
  bVar3 = false;
LAB_00100042:
  RSA_free(r);
  return bVar3;
}



uint test_pq_diff(void)

{
  uint uVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  
  a_01 = (BIGNUM *)0x0;
  a_00 = (BIGNUM *)0x0;
  a = BN_new();
  uVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x187,"tmp = BN_new()",a);
  if (uVar1 != 0) {
    a_00 = BN_new();
    uVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x188,"p = BN_new()",a_00);
    if (uVar1 != 0) {
      a_01 = BN_new();
      iVar2 = test_ptr("test/rsa_sp800_56b_test.c",0x189,"q = BN_new()",a_01);
      if (iVar2 != 0) {
        iVar2 = BN_set_word(a_00,1);
        iVar2 = test_true("test/rsa_sp800_56b_test.c",0x18b,"BN_set_word(p, 1)",iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = BN_set_word(a_01,3);
          iVar2 = test_true("test/rsa_sp800_56b_test.c",0x18c,"BN_set_word(q, 1+2)",iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = ossl_rsa_check_pminusq_diff(a,a_00,a_01,0xca);
            iVar2 = test_false("test/rsa_sp800_56b_test.c",0x18d,
                               "ossl_rsa_check_pminusq_diff(tmp, p, q, 202)",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = BN_set_word(a_01,4);
              iVar2 = test_true("test/rsa_sp800_56b_test.c",399,"BN_set_word(q, 1+3)",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = ossl_rsa_check_pminusq_diff(a,a_00,a_01,0xca);
                iVar2 = test_true("test/rsa_sp800_56b_test.c",400,
                                  "ossl_rsa_check_pminusq_diff(tmp, p, q, 202)",iVar2 != 0);
                if (iVar2 != 0) {
                  iVar2 = BN_set_word(a_00,4);
                  iVar2 = test_true("test/rsa_sp800_56b_test.c",0x191,"BN_set_word(p, 1+3)",
                                    iVar2 != 0);
                  if (iVar2 != 0) {
                    iVar2 = BN_set_word(a_01,1);
                    iVar2 = test_true("test/rsa_sp800_56b_test.c",0x192,"BN_set_word(q, 1)",
                                      iVar2 != 0);
                    if (iVar2 != 0) {
                      iVar2 = ossl_rsa_check_pminusq_diff(a,a_00,a_01,0xca);
                      iVar2 = test_true("test/rsa_sp800_56b_test.c",0x193,
                                        "ossl_rsa_check_pminusq_diff(tmp, p, q, 202)",iVar2 != 0);
                      uVar1 = (uint)(iVar2 != 0);
                      goto LAB_0010015e;
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
LAB_0010015e:
  BN_free(a_00);
  BN_free(a_01);
  BN_free(a);
  return uVar1;
}



bool test_invalid_keypair(void)

{
  int iVar1;
  RSA *r;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *ret_01;
  BIGNUM *pBVar2;
  bool bVar3;
  BIGNUM *local_48;
  
  r = RSA_new();
  iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x1a1,"key = RSA_new()",r);
  if (iVar1 == 0) {
    local_48 = (BIGNUM *)0x0;
    ret = (BIGNUM *)0x0;
    ctx = (BN_CTX *)0x0;
  }
  else {
    ctx = BN_CTX_new();
    ret = (BIGNUM *)0x0;
    iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x1a2,"ctx = BN_CTX_new()",ctx);
    local_48 = (BIGNUM *)0x0;
    if (iVar1 != 0) {
      iVar1 = ossl_rsa_sp800_56b_check_keypair(r,0,0xffffffff,0x800);
      iVar1 = test_false("test/rsa_sp800_56b_test.c",0x1a4,
                         "ossl_rsa_sp800_56b_check_keypair(key, NULL, -1, 2048)",iVar1 != 0);
      if (iVar1 != 0) {
        ret = BN_new();
        if (ret != (BIGNUM *)0x0) {
          BN_bin2bn(cav_p,0x80,ret);
        }
        iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x1a6,"p = bn_load_new(cav_p, sizeof(cav_p))",
                         ret);
        local_48 = (BIGNUM *)0x0;
        if (iVar1 != 0) {
          local_48 = BN_new();
          if (local_48 != (BIGNUM *)0x0) {
            BN_bin2bn(cav_q,0x80,local_48);
          }
          iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x1a7,"q = bn_load_new(cav_q, sizeof(cav_q))"
                           ,local_48);
          if (iVar1 != 0) {
            iVar1 = RSA_set0_factors(r,ret,local_48);
            iVar1 = test_true("test/rsa_sp800_56b_test.c",0x1a8,"RSA_set0_factors(key, p, q)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              ret_00 = BN_new();
              if (ret_00 != (BIGNUM *)0x0) {
                BN_bin2bn("\x01",3,ret_00);
              }
              ret_01 = (BIGNUM *)0x0;
              iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x1af,
                               "e = bn_load_new(cav_e, sizeof(cav_e))",ret_00);
              pBVar2 = (BIGNUM *)0x0;
              if (iVar1 != 0) {
                ret_01 = BN_new();
                if (ret_01 != (BIGNUM *)0x0) {
                  BN_bin2bn(cav_n,0x100,ret_01);
                }
                iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x1b0,
                                 "n = bn_load_new(cav_n, sizeof(cav_n))",ret_01);
                pBVar2 = (BIGNUM *)0x0;
                if (iVar1 != 0) {
                  pBVar2 = BN_new();
                  if (pBVar2 != (BIGNUM *)0x0) {
                    BN_bin2bn(cav_d,0x100,pBVar2);
                  }
                  iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x1b1,
                                   "d = bn_load_new(cav_d, sizeof(cav_d))",pBVar2);
                  if (iVar1 != 0) {
                    iVar1 = RSA_set0_key(r,ret_01,ret_00,pBVar2);
                    iVar1 = test_true("test/rsa_sp800_56b_test.c",0x1b2,"RSA_set0_key(key, n, e, d)"
                                      ,iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = ossl_rsa_sp800_56b_check_keypair(r,0,100,0x800);
                      iVar1 = test_false("test/rsa_sp800_56b_test.c",0x1ba,
                                         "ossl_rsa_sp800_56b_check_keypair(key, NULL, 100, 2048)",
                                         iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = ossl_rsa_sp800_56b_check_keypair(r,0,0x70,0x400);
                        iVar1 = test_false("test/rsa_sp800_56b_test.c",0x1bb,
                                           "ossl_rsa_sp800_56b_check_keypair(key, NULL, 112, 1024)",
                                           iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = ossl_rsa_sp800_56b_check_keypair(r,0,0x80,0x800);
                          iVar1 = test_false("test/rsa_sp800_56b_test.c",0x1bc,
                                             "ossl_rsa_sp800_56b_check_keypair(key, NULL, 128, 2048)"
                                             ,iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = ossl_rsa_sp800_56b_check_keypair(r,0,0x8c,0xc00);
                            iVar1 = test_false("test/rsa_sp800_56b_test.c",0x1bd,
                                               "ossl_rsa_sp800_56b_check_keypair(key, NULL, 140, 3072)"
                                               ,iVar1 != 0);
                            if (iVar1 != 0) {
                              pBVar2 = BN_value_one();
                              iVar1 = ossl_rsa_sp800_56b_check_keypair(r,pBVar2,0xffffffff,0x800);
                              iVar1 = test_false("test/rsa_sp800_56b_test.c",0x1bf,
                                                 "ossl_rsa_sp800_56b_check_keypair(key, BN_value_one(), -1, 2048)"
                                                 ,iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = BN_add_word(ret_00,1);
                                iVar1 = test_true("test/rsa_sp800_56b_test.c",0x1c2,
                                                  "BN_add_word(e, 1)",iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = ossl_rsa_sp800_56b_check_keypair(r,0,0xffffffff,0x800);
                                  iVar1 = test_false("test/rsa_sp800_56b_test.c",0x1c3,
                                                                                                          
                                                  "ossl_rsa_sp800_56b_check_keypair(key, NULL, -1, 2048)"
                                                  ,iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = BN_sub_word(ret_00,1);
                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",0x1c4,
                                                      "BN_sub_word(e, 1)",iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = ossl_rsa_sp800_56b_check_keypair(r,0,0xffffffff,0xc00)
                                      ;
                                      iVar1 = test_false("test/rsa_sp800_56b_test.c",0x1c7,
                                                                                                                  
                                                  "ossl_rsa_sp800_56b_check_keypair(key, NULL, -1, 3072)"
                                                  ,iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = ossl_rsa_sp800_56b_check_keypair
                                                          (r,ret_00,0x70,0x800);
                                        iVar1 = test_true("test/rsa_sp800_56b_test.c",0x1c8,
                                                                                                                    
                                                  "ossl_rsa_sp800_56b_check_keypair(key, e, 112, 2048)"
                                                  ,iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = BN_add_word(ret_01,1);
                                          iVar1 = test_true("test/rsa_sp800_56b_test.c",0x1ca,
                                                            "BN_add_word(n, 1)",iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = ossl_rsa_sp800_56b_check_keypair
                                                              (r,0,0xffffffff,0x800);
                                            iVar1 = test_false("test/rsa_sp800_56b_test.c",0x1cb,
                                                                                                                              
                                                  "ossl_rsa_sp800_56b_check_keypair(key, NULL, -1, 2048)"
                                                  ,iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = BN_sub_word(ret_01,1);
                                              iVar1 = test_true("test/rsa_sp800_56b_test.c",0x1cc,
                                                                "BN_sub_word(n, 1)",iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = BN_lshift1(ret_01,ret_01);
                                                iVar1 = test_true("test/rsa_sp800_56b_test.c",0x1ce,
                                                                  "BN_lshift1(n, n)",iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = ossl_rsa_sp800_56b_check_keypair
                                                                    (r,0,0xffffffff,0x801);
                                                  iVar1 = test_false("test/rsa_sp800_56b_test.c",
                                                                     0x1cf,
                                                  "ossl_rsa_sp800_56b_check_keypair(key, NULL, -1, 2049)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_rshift1(ret_01,ret_01);
                                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                      0x1d0,"BN_rshift1(n, n)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = BN_sub_word(ret,2);
                                                      iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                        0x1d2,"BN_sub_word(p, 2)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = BN_mul(ret_01,ret,local_48,ctx);
                                                        iVar1 = test_true(
                                                  "test/rsa_sp800_56b_test.c",0x1d3,
                                                  "BN_mul(n, p, q, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_rsa_sp800_56b_check_keypair
                                                                      (r,0,0xffffffff,0x800);
                                                    iVar1 = test_false("test/rsa_sp800_56b_test.c",
                                                                       0x1d4,
                                                  "ossl_rsa_sp800_56b_check_keypair(key, NULL, -1, 2048)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_add_word(ret,2);
                                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                      0x1d5,"BN_add_word(p, 2)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = BN_mul(ret_01,ret,local_48,ctx);
                                                      iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                        0x1d6,"BN_mul(n, p, q, ctx)"
                                                                        ,iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = BN_sub_word(local_48,2);
                                                        iVar1 = test_true(
                                                  "test/rsa_sp800_56b_test.c",0x1d8,
                                                  "BN_sub_word(q, 2)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_mul(ret_01,ret,local_48,ctx);
                                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                      0x1d9,"BN_mul(n, p, q, ctx)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = ossl_rsa_sp800_56b_check_keypair
                                                                        (r,0,0xffffffff,0x800);
                                                      iVar1 = test_false("test/rsa_sp800_56b_test.c"
                                                                         ,0x1da,
                                                  "ossl_rsa_sp800_56b_check_keypair(key, NULL, -1, 2048)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_add_word(local_48,2);
                                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                      0x1db,"BN_add_word(q, 2)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = BN_mul(ret_01,ret,local_48,ctx);
                                                      iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                        0x1dc,"BN_mul(n, p, q, ctx)"
                                                                        ,iVar1 != 0);
                                                      bVar3 = iVar1 != 0;
                                                      goto LAB_001003cd;
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
                            }
                          }
                        }
                      }
                      bVar3 = false;
                      goto LAB_001003cd;
                    }
                  }
                }
              }
              bVar3 = false;
              BN_free(ret_00);
              BN_free(ret_01);
              BN_free(pBVar2);
              goto LAB_001003cd;
            }
          }
        }
      }
    }
  }
  bVar3 = false;
  BN_free(ret);
  BN_free(local_48);
LAB_001003cd:
  RSA_free(r);
  BN_CTX_free(ctx);
  return bVar3;
}



bool test_check_public_key(void)

{
  int iVar1;
  RSA *r;
  BIGNUM *ret;
  BIGNUM *ret_00;
  bool bVar2;
  
  r = RSA_new();
  iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x21e,"key = RSA_new()",r);
  if (iVar1 == 0) {
LAB_00100bc6:
    ret = (BIGNUM *)0x0;
    ret_00 = (BIGNUM *)0x0;
LAB_00100bcc:
    BN_free(ret);
    BN_free(ret_00);
  }
  else {
    iVar1 = ossl_rsa_sp800_56b_check_public(r);
    iVar1 = test_false("test/rsa_sp800_56b_test.c",0x220,"ossl_rsa_sp800_56b_check_public(key)",
                       iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100bc6;
    ret = BN_new();
    if (ret != (BIGNUM *)0x0) {
      BN_bin2bn("\x01",3,ret);
    }
    ret_00 = (BIGNUM *)0x0;
    iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x222,"e = bn_load_new(cav_e, sizeof(cav_e))",ret);
    if (iVar1 == 0) goto LAB_00100bcc;
    ret_00 = BN_new();
    if (ret_00 != (BIGNUM *)0x0) {
      BN_bin2bn(cav_n,0x100,ret_00);
    }
    iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x223,"n = bn_load_new(cav_n, sizeof(cav_n))",
                     ret_00);
    if (iVar1 == 0) goto LAB_00100bcc;
    iVar1 = RSA_set0_key(r,ret_00,ret,0);
    iVar1 = test_true("test/rsa_sp800_56b_test.c",0x224,"RSA_set0_key(key, n, e, NULL)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100bcc;
    iVar1 = ossl_rsa_sp800_56b_check_public(r);
    iVar1 = test_true("test/rsa_sp800_56b_test.c",0x22b,"ossl_rsa_sp800_56b_check_public(key)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_add_word(ret_00,1);
      iVar1 = test_true("test/rsa_sp800_56b_test.c",0x22d,"BN_add_word(n, 1)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = ossl_rsa_sp800_56b_check_public(r);
        iVar1 = test_false("test/rsa_sp800_56b_test.c",0x22e,"ossl_rsa_sp800_56b_check_public(key)",
                           iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = BN_sub_word(ret_00,1);
          iVar1 = test_true("test/rsa_sp800_56b_test.c",0x22f,"BN_sub_word(n, 1)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = BN_lshift1(ret_00,ret_00);
            iVar1 = test_true("test/rsa_sp800_56b_test.c",0x231,"BN_lshift1(n, n)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = ossl_rsa_sp800_56b_check_public(r);
              iVar1 = test_false("test/rsa_sp800_56b_test.c",0x232,
                                 "ossl_rsa_sp800_56b_check_public(key)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = BN_rshift1(ret_00,ret_00);
                iVar1 = test_true("test/rsa_sp800_56b_test.c",0x233,"BN_rshift1(n, n)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = BN_add_word(ret,1);
                  iVar1 = test_true("test/rsa_sp800_56b_test.c",0x235,"BN_add_word(e, 1)",iVar1 != 0
                                   );
                  if (iVar1 != 0) {
                    iVar1 = ossl_rsa_sp800_56b_check_public(r);
                    iVar1 = test_false("test/rsa_sp800_56b_test.c",0x236,
                                       "ossl_rsa_sp800_56b_check_public(key)",iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = BN_sub_word(ret,1);
                      iVar1 = test_true("test/rsa_sp800_56b_test.c",0x237,"BN_sub_word(e, 1)",
                                        iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = BN_add_word(ret_00,2);
                        iVar1 = test_true("test/rsa_sp800_56b_test.c",0x239,"BN_add_word(n, 2)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = ossl_rsa_sp800_56b_check_public(r);
                          iVar1 = test_false("test/rsa_sp800_56b_test.c",0x23a,
                                             "ossl_rsa_sp800_56b_check_public(key)",iVar1 != 0);
                          bVar2 = iVar1 != 0;
                          goto LAB_00100bde;
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
  bVar2 = false;
LAB_00100bde:
  RSA_free(r);
  return bVar2;
}



bool test_check_private_key(void)

{
  int iVar1;
  RSA *r;
  BIGNUM *pBVar2;
  BIGNUM *ret;
  BIGNUM *ret_00;
  bool bVar3;
  
  r = RSA_new();
  iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x1fd,"key = RSA_new()",r);
  if (iVar1 == 0) {
LAB_00100f2c:
    ret_00 = (BIGNUM *)0x0;
    ret = (BIGNUM *)0x0;
    pBVar2 = (BIGNUM *)0x0;
LAB_00100f35:
    BN_free(pBVar2);
    BN_free(ret_00);
    BN_free(ret);
  }
  else {
    iVar1 = ossl_rsa_sp800_56b_check_private(r);
    iVar1 = test_false("test/rsa_sp800_56b_test.c",0x1ff,"ossl_rsa_sp800_56b_check_private(key)",
                       iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100f2c;
    pBVar2 = BN_new();
    if (pBVar2 != (BIGNUM *)0x0) {
      BN_bin2bn(cav_n,0x100,pBVar2);
    }
    ret_00 = (BIGNUM *)0x0;
    ret = (BIGNUM *)0x0;
    iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x201,"n = bn_load_new(cav_n, sizeof(cav_n))",
                     pBVar2);
    if (iVar1 == 0) goto LAB_00100f35;
    ret = BN_new();
    if (ret != (BIGNUM *)0x0) {
      BN_bin2bn(cav_d,0x100,ret);
    }
    ret_00 = (BIGNUM *)0x0;
    iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x202,"d = bn_load_new(cav_d, sizeof(cav_d))",ret);
    if (iVar1 == 0) goto LAB_00100f35;
    ret_00 = BN_new();
    if (ret_00 != (BIGNUM *)0x0) {
      BN_bin2bn("\x01",3,ret_00);
    }
    iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x203,"e = bn_load_new(cav_e, sizeof(cav_e))",
                     ret_00);
    if (iVar1 == 0) goto LAB_00100f35;
    iVar1 = RSA_set0_key(r,pBVar2,ret_00,ret);
    iVar1 = test_true("test/rsa_sp800_56b_test.c",0x204,"RSA_set0_key(key, n, e, d)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100f35;
    iVar1 = ossl_rsa_sp800_56b_check_private(r);
    iVar1 = test_true("test/rsa_sp800_56b_test.c",0x20c,"ossl_rsa_sp800_56b_check_private(key)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_set_word(ret,0);
      iVar1 = test_true("test/rsa_sp800_56b_test.c",0x20e,"BN_set_word(d, 0)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = ossl_rsa_sp800_56b_check_private(r);
        iVar1 = test_false("test/rsa_sp800_56b_test.c",0x20f,"ossl_rsa_sp800_56b_check_private(key)"
                           ,iVar1 != 0);
        if (iVar1 != 0) {
          pBVar2 = BN_copy(ret,pBVar2);
          iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x211,"BN_copy(d, n)",pBVar2);
          if (iVar1 != 0) {
            iVar1 = ossl_rsa_sp800_56b_check_private(r);
            iVar1 = test_false("test/rsa_sp800_56b_test.c",0x212,
                               "ossl_rsa_sp800_56b_check_private(key)",iVar1 != 0);
            bVar3 = iVar1 != 0;
            goto LAB_00100f4f;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00100f4f:
  RSA_free(r);
  return bVar3;
}



undefined4 test_derive_params_from_pq_fail(int param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  RSA *r;
  BN_CTX *c;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  
  r = RSA_new();
  iVar2 = test_ptr("test/rsa_sp800_56b_test.c",0x16b,"key = RSA_new()",r);
  if (iVar2 == 0) {
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    c = (BN_CTX *)0x0;
  }
  else {
    c = BN_CTX_new();
    iVar2 = test_ptr("test/rsa_sp800_56b_test.c",0x16c,"ctx = BN_CTX_new()",c);
    if (iVar2 == 0) {
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      a = (BIGNUM *)0x0;
    }
    else {
      a = BN_new();
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      iVar2 = test_ptr("test/rsa_sp800_56b_test.c",0x16d,"p = BN_new()",a);
      if (iVar2 != 0) {
        a_00 = BN_new();
        iVar2 = test_ptr("test/rsa_sp800_56b_test.c",0x16e,"q = BN_new()",a_00);
        if (iVar2 != 0) {
          a_01 = BN_new();
          iVar2 = test_ptr("test/rsa_sp800_56b_test.c",0x16f,"e = BN_new()",a_01);
          if (iVar2 != 0) {
            lVar1 = (long)param_1 * 0xc;
            iVar2 = BN_set_word(a,(long)*(int *)(derive_from_pq_tests + lVar1));
            iVar2 = test_true("test/rsa_sp800_56b_test.c",0x170,
                              "BN_set_word(p, derive_from_pq_tests[tst].p)",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = BN_set_word(a_00,(long)*(int *)(derive_from_pq_tests + lVar1 + 4));
              iVar2 = test_true("test/rsa_sp800_56b_test.c",0x171,
                                "BN_set_word(q, derive_from_pq_tests[tst].q)",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = BN_set_word(a_01,(long)*(int *)(derive_from_pq_tests +
                                                       (long)param_1 * 0xc + 8));
                iVar2 = test_true("test/rsa_sp800_56b_test.c",0x172,
                                  "BN_set_word(e, derive_from_pq_tests[tst].e)",iVar2 != 0);
                if (iVar2 != 0) {
                  iVar2 = RSA_set0_factors(r,a,a_00);
                  iVar2 = test_true("test/rsa_sp800_56b_test.c",0x173,"RSA_set0_factors(key, p, q)",
                                    iVar2 != 0);
                  if (iVar2 != 0) {
                    uVar3 = ossl_rsa_sp800_56b_derive_params_from_pq(r,8,a_01,c);
                    uVar3 = test_int_le("test/rsa_sp800_56b_test.c",0x17a,
                                        "ossl_rsa_sp800_56b_derive_params_from_pq(key, 8, e, ctx)",
                                        &_LC51,uVar3,0);
                    goto LAB_001011cd;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 0;
  BN_free(a);
  BN_free(a_00);
LAB_001011cd:
  BN_free(a_01);
  RSA_free(r);
  BN_CTX_free(c);
  return uVar3;
}



uint test_check_crt_components(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  RSA *r;
  BN_CTX *c;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  
  r = RSA_new();
  iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x121,"key = RSA_new()",r);
  if (iVar1 == 0) {
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    c = (BN_CTX *)0x0;
  }
  else {
    c = BN_CTX_new();
    iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x122,"ctx = BN_CTX_new()",c);
    if (iVar1 == 0) {
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      a = (BIGNUM *)0x0;
    }
    else {
      a = BN_new();
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x123,"p = BN_new()",a);
      if (iVar1 != 0) {
        a_00 = BN_new();
        iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x124,"q = BN_new()",a_00);
        if (iVar1 != 0) {
          a_01 = BN_new();
          iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x125,"e = BN_new()",a_01);
          if (iVar1 != 0) {
            iVar1 = BN_set_word(a,0xf);
            iVar1 = test_true("test/rsa_sp800_56b_test.c",0x126,"BN_set_word(p, P)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = BN_set_word(a_00,0x11);
              iVar1 = test_true("test/rsa_sp800_56b_test.c",0x127,"BN_set_word(q, Q)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = BN_set_word(a_01,5);
                iVar1 = test_true("test/rsa_sp800_56b_test.c",0x128,"BN_set_word(e, E)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = RSA_set0_factors(r,a,a_00);
                  iVar1 = test_true("test/rsa_sp800_56b_test.c",0x129,"RSA_set0_factors(key, p, q)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    uVar2 = ossl_rsa_sp800_56b_derive_params_from_pq(r,8,a_01,c);
                    iVar1 = test_int_eq("test/rsa_sp800_56b_test.c",0x130,
                                        "ossl_rsa_sp800_56b_derive_params_from_pq(key, 8, e, ctx)",
                                        &_LC56,uVar2,1);
                    if (iVar1 != 0) {
                      uVar3 = test_BN_eq_word("test/rsa_sp800_56b_test.c",0x131,"key->n",&_LC57,r->e
                                              ,0xff);
                      if (uVar3 == 0) goto LAB_0010144a;
                      iVar1 = test_BN_eq_word("test/rsa_sp800_56b_test.c",0x132,"key->dmp1",&_LC59,
                                              r->dmq1,3);
                      if (iVar1 != 0) {
                        iVar1 = test_BN_eq_word("test/rsa_sp800_56b_test.c",0x133,"key->dmq1",&_LC61
                                                ,r->iqmp,0xd);
                        if (iVar1 != 0) {
                          iVar1 = test_BN_eq_word("test/rsa_sp800_56b_test.c",0x134,"key->iqmp",
                                                  &_LC63,(r->ex_data).sk,8);
                          if (iVar1 != 0) {
                            iVar1 = ossl_rsa_check_crt_components(r,c);
                            iVar1 = test_true("test/rsa_sp800_56b_test.c",0x135,
                                              "ossl_rsa_check_crt_components(key, ctx)",iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = BN_set_word(r->dmq1,1);
                              iVar1 = test_true("test/rsa_sp800_56b_test.c",0x137,
                                                "BN_set_word(key->dmp1, 1)",iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = ossl_rsa_check_crt_components(r,c);
                                iVar1 = test_false("test/rsa_sp800_56b_test.c",0x138,
                                                   "ossl_rsa_check_crt_components(key, ctx)",
                                                   iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = BN_set_word(r->dmq1,0xe);
                                  iVar1 = test_true("test/rsa_sp800_56b_test.c",0x139,
                                                    "BN_set_word(key->dmp1, P-1)",iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = ossl_rsa_check_crt_components(r,c);
                                    iVar1 = test_false("test/rsa_sp800_56b_test.c",0x13a,
                                                       "ossl_rsa_check_crt_components(key, ctx)",
                                                       iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = BN_set_word(r->dmq1,3);
                                      iVar1 = test_true("test/rsa_sp800_56b_test.c",0x13b,
                                                        "BN_set_word(key->dmp1, DP)",iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = BN_set_word(r->iqmp,1);
                                        iVar1 = test_true("test/rsa_sp800_56b_test.c",0x13d,
                                                          "BN_set_word(key->dmq1, 1)",iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = ossl_rsa_check_crt_components(r,c);
                                          iVar1 = test_false("test/rsa_sp800_56b_test.c",0x13e,
                                                                                                                          
                                                  "ossl_rsa_check_crt_components(key, ctx)",
                                                  iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = BN_set_word(r->iqmp,0x10);
                                            iVar1 = test_true("test/rsa_sp800_56b_test.c",0x13f,
                                                              "BN_set_word(key->dmq1, Q-1)",
                                                              iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = ossl_rsa_check_crt_components(r,c);
                                              iVar1 = test_false("test/rsa_sp800_56b_test.c",0x140,
                                                                                                                                  
                                                  "ossl_rsa_check_crt_components(key, ctx)",
                                                  iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = BN_set_word(r->iqmp,0xd);
                                                iVar1 = test_true("test/rsa_sp800_56b_test.c",0x141,
                                                                  "BN_set_word(key->dmq1, DQ)",
                                                                  iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = BN_set_word((BIGNUM *)(r->ex_data).sk,1);
                                                  iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                    0x143,
                                                  "BN_set_word(key->iqmp, 1)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_rsa_check_crt_components(r,c);
                                                    iVar1 = test_false("test/rsa_sp800_56b_test.c",
                                                                       0x144,
                                                  "ossl_rsa_check_crt_components(key, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_set_word((BIGNUM *)(r->ex_data).sk,
                                                                        0xf);
                                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                      0x145,
                                                  "BN_set_word(key->iqmp, P)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_rsa_check_crt_components(r,c);
                                                    iVar1 = test_false("test/rsa_sp800_56b_test.c",
                                                                       0x146,
                                                  "ossl_rsa_check_crt_components(key, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_set_word((BIGNUM *)(r->ex_data).sk,8)
                                                    ;
                                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                      0x147,
                                                  "BN_set_word(key->iqmp, QINV)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_set_word(r->dmq1,4);
                                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                      0x149,
                                                  "BN_set_word(key->dmp1, DP+1)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_rsa_check_crt_components(r,c);
                                                    iVar1 = test_false("test/rsa_sp800_56b_test.c",
                                                                       0x14a,
                                                  "ossl_rsa_check_crt_components(key, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_set_word(r->dmq1,3);
                                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                      0x14b,
                                                  "BN_set_word(key->dmp1, DP)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_set_word(r->iqmp,0xc);
                                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                      0x14d,
                                                  "BN_set_word(key->dmq1, DQ-1)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_rsa_check_crt_components(r,c);
                                                    iVar1 = test_false("test/rsa_sp800_56b_test.c",
                                                                       0x14e,
                                                  "ossl_rsa_check_crt_components(key, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_set_word(r->iqmp,0xd);
                                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                      0x14f,
                                                  "BN_set_word(key->dmq1, DQ)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_set_word((BIGNUM *)(r->ex_data).sk,9)
                                                    ;
                                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                      0x151,
                                                  "BN_set_word(key->iqmp, QINV+1)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_rsa_check_crt_components(r,c);
                                                    iVar1 = test_false("test/rsa_sp800_56b_test.c",
                                                                       0x152,
                                                  "ossl_rsa_check_crt_components(key, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_set_word((BIGNUM *)(r->ex_data).sk,8)
                                                    ;
                                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                      0x153,
                                                  "BN_set_word(key->iqmp, QINV)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_rsa_check_crt_components(r,c);
                                                    iVar1 = test_true("test/rsa_sp800_56b_test.c",
                                                                      0x155,
                                                  "ossl_rsa_check_crt_components(key, ctx)",
                                                  iVar1 != 0);
                                                  uVar3 = (uint)(iVar1 != 0);
                                                  goto LAB_0010144a;
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
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    uVar3 = 0;
                    goto LAB_0010144a;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 0;
  BN_free(a);
  BN_free(a_00);
LAB_0010144a:
  BN_free(a_01);
  RSA_free(r);
  BN_CTX_free(c);
  return uVar3;
}



bool test_check_private_exponent(void)

{
  int iVar1;
  RSA *r;
  BN_CTX *c;
  BIGNUM *pBVar2;
  BIGNUM *pBVar3;
  BIGNUM *a;
  bool bVar4;
  
  r = RSA_new();
  iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0xe4,"key = RSA_new()",r);
  if (iVar1 == 0) {
    pBVar3 = (BIGNUM *)0x0;
    pBVar2 = (BIGNUM *)0x0;
    c = (BN_CTX *)0x0;
  }
  else {
    c = BN_CTX_new();
    pBVar3 = (BIGNUM *)0x0;
    pBVar2 = (BIGNUM *)0x0;
    iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0xe5,"ctx = BN_CTX_new()",c);
    if (iVar1 != 0) {
      pBVar2 = BN_new();
      iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0xe6,"p = BN_new()",pBVar2);
      if (iVar1 != 0) {
        pBVar3 = BN_new();
        iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0xe7,"q = BN_new()",pBVar3);
        if (iVar1 != 0) {
          iVar1 = BN_set_word(pBVar2,0xf);
          iVar1 = test_true("test/rsa_sp800_56b_test.c",0xe9,"BN_set_word(p, 15)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = BN_set_word(pBVar3,0x11);
            iVar1 = test_true("test/rsa_sp800_56b_test.c",0xea,"BN_set_word(q, 17)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = RSA_set0_factors(r,pBVar2,pBVar3);
              iVar1 = test_true("test/rsa_sp800_56b_test.c",0xeb,"RSA_set0_factors(key, p, q)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                pBVar2 = BN_new();
                iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0xf2,"e = BN_new()",pBVar2);
                if (iVar1 == 0) {
                  a = (BIGNUM *)0x0;
                  pBVar3 = (BIGNUM *)0x0;
                }
                else {
                  pBVar3 = BN_new();
                  a = (BIGNUM *)0x0;
                  iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0xf3,"d = BN_new()",pBVar3);
                  if (iVar1 != 0) {
                    a = BN_new();
                    iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0xf4,"n = BN_new()",a);
                    if (iVar1 != 0) {
                      iVar1 = BN_set_word(pBVar2,5);
                      iVar1 = test_true("test/rsa_sp800_56b_test.c",0xf5,"BN_set_word(e, 5)",
                                        iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = BN_set_word(pBVar3,0x9d);
                        iVar1 = test_true("test/rsa_sp800_56b_test.c",0xf6,"BN_set_word(d, 157)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = BN_set_word(a,0xff);
                          iVar1 = test_true("test/rsa_sp800_56b_test.c",0xf7,"BN_set_word(n, 15*17)"
                                            ,iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = RSA_set0_key(r,a,pBVar2,pBVar3);
                            iVar1 = test_true("test/rsa_sp800_56b_test.c",0xf8,
                                              "RSA_set0_key(key, n, e, d)",iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = ossl_rsa_check_private_exponent(r,8,c);
                              iVar1 = test_false("test/rsa_sp800_56b_test.c",0x100,
                                                 "ossl_rsa_check_private_exponent(key, 8, ctx)",
                                                 iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = BN_set_word(pBVar3,0x2d);
                                iVar1 = test_true("test/rsa_sp800_56b_test.c",0x101,
                                                  "BN_set_word(d, 45)",iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = ossl_rsa_check_private_exponent(r,8,c);
                                  iVar1 = test_true("test/rsa_sp800_56b_test.c",0x103,
                                                    "ossl_rsa_check_private_exponent(key, 8, ctx)",
                                                    iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = ossl_rsa_check_private_exponent(r,0x10,c);
                                    iVar1 = test_false("test/rsa_sp800_56b_test.c",0x105,
                                                                                                              
                                                  "ossl_rsa_check_private_exponent(key, 16, ctx)",
                                                  iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = BN_set_word(pBVar3,0x10);
                                      iVar1 = test_true("test/rsa_sp800_56b_test.c",0x107,
                                                        "BN_set_word(d, 16)",iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = ossl_rsa_check_private_exponent(r,8,c);
                                        iVar1 = test_false("test/rsa_sp800_56b_test.c",0x108,
                                                                                                                      
                                                  "ossl_rsa_check_private_exponent(key, 8, ctx)",
                                                  iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = BN_set_word(pBVar3,0x2e);
                                          iVar1 = test_true("test/rsa_sp800_56b_test.c",0x10a,
                                                            "BN_set_word(d, 46)",iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = ossl_rsa_check_private_exponent(r,8,c);
                                            iVar1 = test_false("test/rsa_sp800_56b_test.c",0x10b,
                                                                                                                              
                                                  "ossl_rsa_check_private_exponent(key, 8, ctx)",
                                                  iVar1 != 0);
                                            bVar4 = iVar1 != 0;
                                            goto LAB_00101bf7;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              bVar4 = false;
                              goto LAB_00101bf7;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                bVar4 = false;
                BN_free(pBVar2);
                BN_free(pBVar3);
                BN_free(a);
                goto LAB_00101bf7;
              }
            }
          }
        }
      }
    }
  }
  bVar4 = false;
  BN_free(pBVar2);
  BN_free(pBVar3);
LAB_00101bf7:
  RSA_free(r);
  BN_CTX_free(c);
  return bVar4;
}



uint test_check_prime_factor(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *ret_01;
  BIGNUM *a_00;
  BN_CTX *c;
  
  a = BN_new();
  iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0xc1,"p = BN_new()",a);
  if (iVar1 == 0) {
    ret_01 = (BIGNUM *)0x0;
    ret_00 = (BIGNUM *)0x0;
    ret = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    uVar2 = 0;
    c = (BN_CTX *)0x0;
  }
  else {
    ret = BN_new();
    if (ret != (BIGNUM *)0x0) {
      BN_bin2bn("\vPO3s",5,ret);
    }
    iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0xc2,"bn_p1 = bn_load_new(p1, sizeof(p1))",ret);
    if (iVar1 == 0) {
      ret_01 = (BIGNUM *)0x0;
      ret_00 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      uVar2 = 0;
      c = (BN_CTX *)0x0;
    }
    else {
      ret_00 = BN_new();
      if (ret_00 != (BIGNUM *)0x0) {
        BN_bin2bn("\vPO3u\vPO3s",5,ret_00);
      }
      iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0xc3,"bn_p2 = bn_load_new(p2, sizeof(p2))",ret_00
                      );
      if (iVar1 == 0) {
        ret_01 = (BIGNUM *)0x0;
        a_00 = (BIGNUM *)0x0;
        uVar2 = 0;
        c = (BN_CTX *)0x0;
      }
      else {
        ret_01 = BN_new();
        if (ret_01 != (BIGNUM *)0x0) {
          BN_bin2bn("\x0fP",5,ret_01);
        }
        a_00 = (BIGNUM *)0x0;
        uVar2 = test_ptr("test/rsa_sp800_56b_test.c",0xc4,"bn_p3 = bn_load_new(p3, sizeof(p3))",
                         ret_01);
        c = (BN_CTX *)0x0;
        if (uVar2 != 0) {
          a_00 = BN_new();
          uVar2 = test_ptr("test/rsa_sp800_56b_test.c",0xc5,"e = BN_new()",a_00);
          c = (BN_CTX *)0x0;
          if (uVar2 != 0) {
            c = BN_CTX_new();
            iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0xc6,"ctx = BN_CTX_new()",c);
            if (iVar1 != 0) {
              iVar1 = BN_set_word(a_00,1);
              iVar1 = test_true("test/rsa_sp800_56b_test.c",200,"BN_set_word(e, 0x1)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = ossl_rsa_check_prime_factor(ret,a_00,0x48,c);
                iVar1 = test_false("test/rsa_sp800_56b_test.c",0xc9,
                                   "ossl_rsa_check_prime_factor(bn_p1, e, 72, ctx)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = ossl_rsa_check_prime_factor(ret_00,a_00,0x48,c);
                  iVar1 = test_true("test/rsa_sp800_56b_test.c",0xcb,
                                    "ossl_rsa_check_prime_factor(bn_p2, e, 72, ctx)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = BN_set_word(a_00,2);
                    iVar1 = test_true("test/rsa_sp800_56b_test.c",0xcd,"BN_set_word(e, 0x2)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = ossl_rsa_check_prime_factor(a,a_00,0x48,c);
                      iVar1 = test_false("test/rsa_sp800_56b_test.c",0xce,
                                         "ossl_rsa_check_prime_factor(p, e, 72, ctx)",iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = BN_set_word(a_00,1);
                        iVar1 = test_true("test/rsa_sp800_56b_test.c",0xd0,"BN_set_word(e, 0x1)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = ossl_rsa_check_prime_factor(ret_01,a_00,0x48,c);
                          iVar1 = test_false("test/rsa_sp800_56b_test.c",0xd1,
                                             "ossl_rsa_check_prime_factor(bn_p3, e, 72, ctx)",
                                             iVar1 != 0);
                          uVar2 = (uint)(iVar1 != 0);
                          goto LAB_0010205a;
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
  }
LAB_0010205a:
  BN_free(ret_01);
  BN_free(ret_00);
  BN_free(ret);
  BN_free(a_00);
  BN_free(a);
  BN_CTX_free(c);
  return uVar2;
}



uint test_check_prime_factor_range(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *ret_01;
  BIGNUM *ret_02;
  BN_CTX *c;
  
  a = BN_new();
  iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x97,"p = BN_new()",a);
  if (iVar1 == 0) {
    ret_02 = (BIGNUM *)0x0;
    ret_01 = (BIGNUM *)0x0;
    ret_00 = (BIGNUM *)0x0;
    ret = (BIGNUM *)0x0;
    c = (BN_CTX *)0x0;
    uVar2 = 0;
  }
  else {
    ret = BN_new();
    if (ret != (BIGNUM *)0x0) {
      BN_bin2bn("\vPO3?\x0fP",5,ret);
    }
    iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x98,"bn_p1 = bn_load_new(p1, sizeof(p1))",ret);
    if (iVar1 == 0) {
      ret_02 = (BIGNUM *)0x0;
      ret_01 = (BIGNUM *)0x0;
      ret_00 = (BIGNUM *)0x0;
      c = (BN_CTX *)0x0;
      uVar2 = 0;
    }
    else {
      ret_00 = BN_new();
      if (ret_00 != (BIGNUM *)0x0) {
        BN_bin2bn("\x10",5,ret_00);
      }
      iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x99,"bn_p2 = bn_load_new(p2, sizeof(p2))",ret_00
                      );
      if (iVar1 == 0) {
        ret_02 = (BIGNUM *)0x0;
        ret_01 = (BIGNUM *)0x0;
        c = (BN_CTX *)0x0;
        uVar2 = 0;
      }
      else {
        ret_01 = BN_new();
        if (ret_01 != (BIGNUM *)0x0) {
          BN_bin2bn("\vPO3@\x10",5,ret_01);
        }
        c = (BN_CTX *)0x0;
        uVar2 = test_ptr("test/rsa_sp800_56b_test.c",0x9a,"bn_p3 = bn_load_new(p3, sizeof(p3))",
                         ret_01);
        ret_02 = (BIGNUM *)0x0;
        if (uVar2 != 0) {
          ret_02 = BN_new();
          if (ret_02 != (BIGNUM *)0x0) {
            BN_bin2bn((uchar *)&p4_0,5,ret_02);
          }
          c = (BN_CTX *)0x0;
          uVar2 = test_ptr("test/rsa_sp800_56b_test.c",0x9b,"bn_p4 = bn_load_new(p4, sizeof(p4))",
                           ret_02);
          if (uVar2 != 0) {
            c = BN_CTX_new();
            iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x9c,"ctx = BN_CTX_new()",c);
            if (iVar1 != 0) {
              iVar1 = BN_set_word(a,10);
              iVar1 = test_true("test/rsa_sp800_56b_test.c",0x9d,"BN_set_word(p, 0xA)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = ossl_rsa_check_prime_factor_range(a,8,c);
                iVar1 = test_false("test/rsa_sp800_56b_test.c",0x9e,
                                   "ossl_rsa_check_prime_factor_range(p, 8, ctx)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = BN_set_word(a,0x10);
                  iVar1 = test_true("test/rsa_sp800_56b_test.c",0x9f,"BN_set_word(p, 0x10)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = ossl_rsa_check_prime_factor_range(a,8,c);
                    iVar1 = test_false("test/rsa_sp800_56b_test.c",0xa0,
                                       "ossl_rsa_check_prime_factor_range(p, 8, ctx)",iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = BN_set_word(a,0xb);
                      iVar1 = test_true("test/rsa_sp800_56b_test.c",0xa1,"BN_set_word(p, 0xB)",
                                        iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = ossl_rsa_check_prime_factor_range(a,8,c);
                        iVar1 = test_false("test/rsa_sp800_56b_test.c",0xa2,
                                           "ossl_rsa_check_prime_factor_range(p, 8, ctx)",iVar1 != 0
                                          );
                        if (iVar1 != 0) {
                          iVar1 = BN_set_word(a,0xc);
                          iVar1 = test_true("test/rsa_sp800_56b_test.c",0xa3,"BN_set_word(p, 0xC)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = ossl_rsa_check_prime_factor_range(a,8,c);
                            iVar1 = test_true("test/rsa_sp800_56b_test.c",0xa4,
                                              "ossl_rsa_check_prime_factor_range(p, 8, ctx)",
                                              iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = BN_set_word(a,0xf);
                              iVar1 = test_true("test/rsa_sp800_56b_test.c",0xa5,
                                                "BN_set_word(p, 0xF)",iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = ossl_rsa_check_prime_factor_range(a,8,c);
                                iVar1 = test_true("test/rsa_sp800_56b_test.c",0xa6,
                                                  "ossl_rsa_check_prime_factor_range(p, 8, ctx)",
                                                  iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = ossl_rsa_check_prime_factor_range(ret,0x48,c);
                                  iVar1 = test_false("test/rsa_sp800_56b_test.c",0xa7,
                                                                                                          
                                                  "ossl_rsa_check_prime_factor_range(bn_p1, 72, ctx)"
                                                  ,iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = ossl_rsa_check_prime_factor_range(ret_00,0x48,c);
                                    iVar1 = test_false("test/rsa_sp800_56b_test.c",0xa8,
                                                                                                              
                                                  "ossl_rsa_check_prime_factor_range(bn_p2, 72, ctx)"
                                                  ,iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = ossl_rsa_check_prime_factor_range(ret_01,0x48,c);
                                      iVar1 = test_true("test/rsa_sp800_56b_test.c",0xa9,
                                                                                                                
                                                  "ossl_rsa_check_prime_factor_range(bn_p3, 72, ctx)"
                                                  ,iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = ossl_rsa_check_prime_factor_range(ret_02,0x48,c);
                                        iVar1 = test_true("test/rsa_sp800_56b_test.c",0xaa,
                                                                                                                    
                                                  "ossl_rsa_check_prime_factor_range(bn_p4, 72, ctx)"
                                                  ,iVar1 != 0);
                                        uVar2 = (uint)(iVar1 != 0);
                                        goto LAB_001023da;
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
            uVar2 = 0;
          }
        }
      }
    }
  }
LAB_001023da:
  BN_free(ret_02);
  BN_free(ret_01);
  BN_free(ret_00);
  BN_free(ret);
  BN_free(a);
  BN_CTX_free(c);
  return uVar2;
}



bool test_check_public_exponent(void)

{
  int iVar1;
  BIGNUM *a;
  BIGNUM *pBVar2;
  bool bVar3;
  
  a = BN_new();
  iVar1 = test_ptr("test/rsa_sp800_56b_test.c",0x71,"e = BN_new()",a);
  if (iVar1 != 0) {
    iVar1 = BN_set_word(a,1);
    iVar1 = test_true("test/rsa_sp800_56b_test.c",0x73,"BN_set_word(e, 1)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ossl_rsa_check_public_exponent(a);
      iVar1 = test_false("test/rsa_sp800_56b_test.c",0x74,"ossl_rsa_check_public_exponent(e)",
                         iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = BN_set_word(a,0x10000);
        iVar1 = test_true("test/rsa_sp800_56b_test.c",0x76,"BN_set_word(e, 65536)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = ossl_rsa_check_public_exponent(a);
          iVar1 = test_false("test/rsa_sp800_56b_test.c",0x77,"ossl_rsa_check_public_exponent(e)",
                             iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = BN_set_word(a,3);
            iVar1 = test_true("test/rsa_sp800_56b_test.c",0x79,"BN_set_word(e, 3)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = ossl_rsa_check_public_exponent(a);
              iVar1 = test_true("test/rsa_sp800_56b_test.c",0x7a,"ossl_rsa_check_public_exponent(e)"
                                ,iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = BN_set_word(a,0x11);
                iVar1 = test_true("test/rsa_sp800_56b_test.c",0x7b,"BN_set_word(e, 17)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = ossl_rsa_check_public_exponent(a);
                  iVar1 = test_true("test/rsa_sp800_56b_test.c",0x7c,
                                    "ossl_rsa_check_public_exponent(e)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = BN_set_word(a,0x10001);
                    iVar1 = test_true("test/rsa_sp800_56b_test.c",0x7d,"BN_set_word(e, 65537)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = ossl_rsa_check_public_exponent(a);
                      iVar1 = test_true("test/rsa_sp800_56b_test.c",0x7e,
                                        "ossl_rsa_check_public_exponent(e)",iVar1 != 0);
                      if (iVar1 != 0) {
                        pBVar2 = BN_value_one();
                        iVar1 = BN_lshift(a,pBVar2,0x100);
                        iVar1 = test_true("test/rsa_sp800_56b_test.c",0x80,
                                          "BN_lshift(e, BN_value_one(), 256)",iVar1 != 0);
                        if (iVar1 != 0) {
                          pBVar2 = BN_value_one();
                          iVar1 = BN_add(a,a,pBVar2);
                          iVar1 = test_true("test/rsa_sp800_56b_test.c",0x81,
                                            "BN_add(e, e, BN_value_one())",iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = ossl_rsa_check_public_exponent(a);
                            iVar1 = test_true("test/rsa_sp800_56b_test.c",0x82,
                                              "ossl_rsa_check_public_exponent(e)",iVar1 != 0);
                            bVar3 = iVar1 != 0;
                            goto LAB_001028d4;
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
  bVar3 = false;
LAB_001028d4:
  BN_free(a);
  return bVar3;
}



undefined8 setup_tests(void)

{
  add_test("test_check_public_exponent",test_check_public_exponent);
  add_test("test_check_prime_factor_range",test_check_prime_factor_range);
  add_test("test_check_prime_factor",test_check_prime_factor);
  add_test("test_check_private_exponent",test_check_private_exponent);
  add_test("test_check_crt_components",test_check_crt_components);
  add_all_tests("test_derive_params_from_pq_fail",test_derive_params_from_pq_fail,2,1);
  add_test("test_check_private_key",test_check_private_key);
  add_test("test_check_public_key",test_check_public_key);
  add_test("test_invalid_keypair",test_invalid_keypair);
  add_test("test_pq_diff",test_pq_diff);
  add_all_tests("test_sp80056b_keygen",0x100000,2,1);
  return 1;
}



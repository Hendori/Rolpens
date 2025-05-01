
uint x9_62_tests(int param_1)

{
  int n;
  char *str;
  char *str_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  EVP_MD_CTX *ctx;
  void *d;
  EVP_MD *type;
  EC_KEY *key;
  undefined8 uVar6;
  ulong uVar7;
  void *ptr;
  ECDSA_SIG *sig;
  long in_FS_OFFSET;
  uint local_d4;
  void *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  size_t local_c0;
  BIGNUM *local_b8;
  BIGNUM *local_b0;
  BIGNUM *local_a8;
  BIGNUM *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = (void *)0x0;
  local_d4 = 0;
  local_c0 = 0;
  lVar4 = (long)param_1 * 0x38;
  local_b8 = (BIGNUM *)0x0;
  iVar2 = *(int *)(ecdsa_cavs_kats + lVar4 + 4);
  str = *(char **)(ecdsa_cavs_kats + lVar4 + 0x28);
  local_b0 = (BIGNUM *)0x0;
  local_a8 = (BIGNUM *)0x0;
  n = *(int *)(ecdsa_cavs_kats + lVar4);
  str_00 = *(char **)(ecdsa_cavs_kats + lVar4 + 0x30);
  local_a0 = (BIGNUM *)0x0;
  local_98 = 0;
  local_90 = 0;
  uVar6 = *(undefined8 *)(ecdsa_cavs_kats + lVar4 + 8);
  numbers._8_8_ = *(undefined8 *)(ecdsa_cavs_kats + lVar4 + 0x20);
  numbers._0_8_ = *(undefined8 *)(ecdsa_cavs_kats + lVar4 + 0x10);
  pcVar5 = OBJ_nid2sn(n);
  test_info("test/ecdsatest.c",0x61,"ECDSA KATs for curve %s",pcVar5);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  iVar1 = test_ptr("test/ecdsatest.c",0x68,"mctx = EVP_MD_CTX_new()",ctx);
  if (iVar1 == 0) {
    sig = (ECDSA_SIG *)0x0;
    key = (EC_KEY *)0x0;
    d = (void *)0x0;
    ptr = (void *)0x0;
    uVar3 = 0;
    goto LAB_0010012b;
  }
  d = (void *)OPENSSL_hexstr2buf(uVar6,&local_c0);
  iVar1 = test_ptr("test/ecdsatest.c",0x6a,"message = OPENSSL_hexstr2buf(tbs, &msg_len)",d);
  if (iVar1 == 0) {
LAB_001001fb:
    sig = (ECDSA_SIG *)0x0;
    key = (EC_KEY *)0x0;
    ptr = (void *)0x0;
    uVar3 = 0;
  }
  else {
    pcVar5 = OBJ_nid2sn(iVar2);
    type = EVP_get_digestbyname(pcVar5);
    iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
    uVar3 = test_true("test/ecdsatest.c",0x6b,
                      "EVP_DigestInit_ex(mctx, EVP_get_digestbynid(md_nid), NULL)",iVar2 != 0);
    if (uVar3 != 0) {
      iVar2 = EVP_DigestUpdate(ctx,d,local_c0);
      uVar3 = test_true("test/ecdsatest.c",0x6c,"EVP_DigestUpdate(mctx, message, msg_len)",
                        iVar2 != 0);
      if (uVar3 != 0) {
        iVar2 = EVP_DigestFinal_ex(ctx,local_88,&local_d4);
        iVar2 = test_true("test/ecdsatest.c",0x6d,"EVP_DigestFinal_ex(mctx, digest, &dgst_len)",
                          iVar2 != 0);
        if (iVar2 != 0) {
          key = EC_KEY_new_by_curve_name(n);
          iVar2 = test_ptr("test/ecdsatest.c",0x6f,"key = EC_KEY_new_by_curve_name(nid)",key);
          if (iVar2 != 0) {
            local_b8 = BN_new();
            iVar2 = test_ptr("test/ecdsatest.c",0x71,"r = BN_new()",local_b8);
            if (iVar2 != 0) {
              local_b0 = BN_new();
              iVar2 = test_ptr("test/ecdsatest.c",0x72,"s = BN_new()",local_b0);
              if (iVar2 != 0) {
                iVar2 = BN_hex2bn(&local_b8,str);
                iVar2 = test_true("test/ecdsatest.c",0x73,"BN_hex2bn(&r, r_in)",iVar2 != 0);
                if (iVar2 != 0) {
                  iVar2 = BN_hex2bn(&local_b0,str_00);
                  iVar2 = test_true("test/ecdsatest.c",0x74,"BN_hex2bn(&s, s_in)",iVar2 != 0);
                  if (iVar2 != 0) {
                    uVar6 = RAND_get0_private(0);
                    fake_rand_set_callback(uVar6,fbytes);
                    iVar2 = EC_KEY_generate_key(key);
                    uVar3 = test_true("test/ecdsatest.c",0x79,"EC_KEY_generate_key(key)",iVar2 != 0)
                    ;
                    if (uVar3 != 0) {
                      uVar7 = EC_KEY_key2buf(key,4,&local_d0,0);
                      uVar3 = test_true("test/ecdsatest.c",0x7a,
                                        "p_len = EC_KEY_key2buf(key, POINT_CONVERSION_UNCOMPRESSED, &pbuf, NULL)"
                                        ,uVar7 != 0);
                      if (uVar3 != 0) {
                        ptr = (void *)OPENSSL_hexstr2buf(*(undefined8 *)
                                                          (ecdsa_cavs_kats +
                                                          (long)param_1 * 0x38 + 0x18),&local_c8);
                        iVar2 = test_ptr("test/ecdsatest.c",0x7c,
                                         "qbuf = OPENSSL_hexstr2buf(ecdsa_cavs_kats[n].Q, &q_len)",
                                         ptr);
                        if (iVar2 != 0) {
                          sig = (ECDSA_SIG *)0x0;
                          uVar3 = test_int_eq("test/ecdsatest.c",0x7d,"q_len","p_len",local_c8,
                                              uVar7 & 0xffffffff);
                          if (uVar3 == 0) goto LAB_0010012b;
                          iVar2 = test_mem_eq("test/ecdsatest.c",0x7e,&_LC18,&_LC17,ptr,
                                              CONCAT44(uStack_c4,local_c8));
                          if (iVar2 != 0) {
                            uVar6 = RAND_get0_private(0);
                            fake_rand_set_callback(uVar6);
                            iVar2 = ECDSA_sign_setup(key,(BN_CTX *)0x0,&local_a8,&local_a0);
                            uVar3 = test_true("test/ecdsatest.c",0x83,
                                              "ECDSA_sign_setup(key, NULL, &kinv, &rp)",iVar2 != 0);
                            if (uVar3 != 0) {
                              sig = ECDSA_do_sign_ex(local_88,local_d4,local_a8,local_a0,key);
                              uVar3 = test_ptr("test/ecdsatest.c",0x84,
                                               "signature = ECDSA_do_sign_ex(digest, dgst_len, kinv, rp, key)"
                                               ,sig);
                              if (uVar3 != 0) {
                                iVar2 = ECDSA_do_verify(local_88,local_d4,sig,key);
                                uVar3 = test_int_eq("test/ecdsatest.c",0x87,
                                                                                                        
                                                  "ECDSA_do_verify(digest, dgst_len, signature, key)"
                                                  ,&_LC21,iVar2,1);
                                if (uVar3 != 0) {
                                  ECDSA_SIG_get0(sig,&local_98,&local_90);
                                  uVar3 = test_BN_eq("test/ecdsatest.c",0x8c,"sig_r",&_LC23,local_98
                                                     ,local_b8);
                                  if (uVar3 != 0) {
                                    iVar2 = test_BN_eq("test/ecdsatest.c",0x8d,"sig_s",&_LC25,
                                                       local_90,local_b0);
                                    uVar3 = (uint)(iVar2 != 0);
                                  }
                                }
                              }
                            }
                            goto LAB_0010012b;
                          }
                        }
                        sig = (ECDSA_SIG *)0x0;
                        uVar3 = 0;
                        goto LAB_0010012b;
                      }
                    }
                    sig = (ECDSA_SIG *)0x0;
                    ptr = (void *)0x0;
                    goto LAB_0010012b;
                  }
                }
              }
            }
          }
          sig = (ECDSA_SIG *)0x0;
          ptr = (void *)0x0;
          uVar3 = 0;
          goto LAB_0010012b;
        }
        goto LAB_001001fb;
      }
    }
    sig = (ECDSA_SIG *)0x0;
    key = (EC_KEY *)0x0;
    ptr = (void *)0x0;
  }
LAB_0010012b:
  CRYPTO_free(d);
  CRYPTO_free(local_d0);
  CRYPTO_free(ptr);
  EC_KEY_free(key);
  ECDSA_SIG_free(sig);
  BN_free(local_b8);
  BN_free(local_b0);
  EVP_MD_CTX_free(ctx);
  BN_clear_free(local_a8);
  BN_clear_free(local_a0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 fbytes(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (BIGNUM *)0x0;
  fake_rand_set_callback(param_4,0);
  local_38 = BN_new();
  iVar1 = test_ptr("test/ecdsatest.c",0x2c,"tmp = BN_new()",local_38);
  if (iVar1 != 0) {
    iVar1 = test_int_lt("test/ecdsatest.c",0x2d,"fbytes_counter","OSSL_NELEM(numbers)",
                        fbytes_counter_1,2);
    if (iVar1 != 0) {
      iVar1 = BN_hex2bn(&local_38,*(char **)(numbers + (long)(int)fbytes_counter_1 * 8));
      iVar1 = test_true("test/ecdsatest.c",0x2e,"BN_hex2bn(&tmp, numbers[fbytes_counter])",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar2 = BN_num_bits(local_38);
        iVar1 = iVar2 + 0xe;
        if (-1 < iVar2 + 7) {
          iVar1 = iVar2 + 7;
        }
        iVar1 = test_int_le("test/ecdsatest.c",0x30,"BN_num_bytes(tmp)",&_LC31,iVar1 >> 3,param_2);
        if (iVar1 != 0) {
          uVar3 = BN_bn2binpad(local_38,param_1,param_2);
          iVar1 = test_int_gt("test/ecdsatest.c",0x31,"BN_bn2binpad(tmp, buf, num)",&_LC33,uVar3,0);
          if (iVar1 != 0) {
            uVar4 = 1;
            fbytes_counter_1 = fbytes_counter_1 + 1 & 1;
            goto LAB_00100673;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_00100673:
  BN_free(local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_ecdsa_sig_NULL(void)

{
  int iVar1;
  EC_KEY *key;
  uchar *sig;
  long in_FS_OFFSET;
  bool bVar2;
  uint local_e0;
  uint local_dc;
  BIGNUM *local_d8;
  BIGNUM *local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (BIGNUM *)0x0;
  local_d0 = (BIGNUM *)0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  key = EC_KEY_new_by_curve_name(0x19f);
  iVar1 = test_ptr("test/ecdsatest.c",0x168,"eckey = EC_KEY_new_by_curve_name(NID_X9_62_prime256v1)"
                   ,key);
  if (iVar1 != 0) {
    iVar1 = EC_KEY_generate_key(key);
    iVar1 = test_int_eq("test/ecdsatest.c",0x169,"EC_KEY_generate_key(eckey)",&_LC21,iVar1,1);
    if (iVar1 != 0) {
      iVar1 = ECDSA_sign(0,local_c8,0x80,(uchar *)0x0,&local_e0,key);
      iVar1 = test_int_eq("test/ecdsatest.c",0x16a,
                          "ECDSA_sign(0, dgst, sizeof(dgst), NULL, &siglen0, eckey)",&_LC21,iVar1,1)
      ;
      if (iVar1 != 0) {
        iVar1 = test_int_gt("test/ecdsatest.c",0x16c,"siglen0",&_LC33,local_e0,0);
        if (iVar1 != 0) {
          sig = (uchar *)CRYPTO_malloc(local_e0,"test/ecdsatest.c",0x16d);
          iVar1 = test_ptr("test/ecdsatest.c",0x16d,"sig = OPENSSL_malloc(siglen0)",sig);
          if (iVar1 != 0) {
            iVar1 = ECDSA_sign(0,local_c8,0x80,sig,&local_dc,key);
            iVar1 = test_int_eq("test/ecdsatest.c",0x16e,
                                "ECDSA_sign(0, dgst, sizeof(dgst), sig, &siglen, eckey)",&_LC21,
                                iVar1,1);
            if (iVar1 != 0) {
              iVar1 = test_int_gt("test/ecdsatest.c",0x170,"siglen",&_LC33,local_dc,0);
              if (iVar1 != 0) {
                iVar1 = test_int_le("test/ecdsatest.c",0x171,"siglen","siglen0",local_dc,local_e0);
                if (iVar1 != 0) {
                  iVar1 = ECDSA_verify(0,local_c8,0x80,sig,local_dc,key);
                  iVar1 = test_int_eq("test/ecdsatest.c",0x172,
                                      "ECDSA_verify(0, dgst, sizeof(dgst), sig, siglen, eckey)",
                                      &_LC21,iVar1,1);
                  if (iVar1 != 0) {
                    iVar1 = ECDSA_sign_setup(key,(BN_CTX *)0x0,&local_d8,&local_d0);
                    iVar1 = test_int_eq("test/ecdsatest.c",0x174,
                                        "ECDSA_sign_setup(eckey, NULL, &kinv, &rp)",&_LC21,iVar1,1);
                    if (iVar1 != 0) {
                      iVar1 = ECDSA_sign_ex(0,local_c8,0x80,(uchar *)0x0,&local_dc,local_d8,local_d0
                                            ,key);
                      iVar1 = test_int_eq("test/ecdsatest.c",0x175,
                                          "ECDSA_sign_ex(0, dgst, sizeof(dgst), NULL, &siglen, kinv, rp, eckey)"
                                          ,&_LC21,iVar1,1);
                      if (iVar1 != 0) {
                        iVar1 = test_int_gt("test/ecdsatest.c",0x177,"siglen",&_LC33,local_dc,0);
                        if (iVar1 != 0) {
                          iVar1 = test_int_le("test/ecdsatest.c",0x178,"siglen","siglen0",local_dc,
                                              local_e0);
                          if (iVar1 != 0) {
                            iVar1 = ECDSA_sign_ex(0,local_c8,0x80,sig,&local_e0,local_d8,local_d0,
                                                  key);
                            iVar1 = test_int_eq("test/ecdsatest.c",0x179,
                                                "ECDSA_sign_ex(0, dgst, sizeof(dgst), sig, &siglen0, kinv, rp, eckey)"
                                                ,&_LC21,iVar1,1);
                            if (iVar1 != 0) {
                              iVar1 = test_int_eq("test/ecdsatest.c",0x17b,"siglen","siglen0",
                                                  local_dc,local_e0);
                              if (iVar1 != 0) {
                                iVar1 = ECDSA_verify(0,local_c8,0x80,sig,local_dc,key);
                                iVar1 = test_int_eq("test/ecdsatest.c",0x17c,
                                                                                                        
                                                  "ECDSA_verify(0, dgst, sizeof(dgst), sig, siglen, eckey)"
                                                  ,&_LC21,iVar1,1);
                                bVar2 = iVar1 != 0;
                                goto LAB_00100844;
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
          goto LAB_00100844;
        }
      }
    }
  }
  bVar2 = false;
  sig = (uchar *)0x0;
LAB_00100844:
  EC_KEY_free(key);
  CRYPTO_free(sig);
  BN_free(local_d8);
  BN_free(local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong set_sm2_id_isra_0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = EVP_MD_CTX_get_pkey_ctx();
  uVar4 = test_ptr("test/ecdsatest.c",0xb6,"pctx = EVP_MD_CTX_get_pkey_ctx(mctx)",uVar3);
  if ((int)uVar4 != 0) {
    uVar1 = EVP_PKEY_CTX_set1_id(uVar3,sm2_id_0,10);
    iVar2 = test_int_gt("test/ecdsatest.c",0xb7,"EVP_PKEY_CTX_set1_id(pctx, sm2_id, sizeof(sm2_id))"
                        ,&_LC33,uVar1,0);
    uVar4 = (ulong)(iVar2 != 0);
  }
  return uVar4;
}



uint test_builtin(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  EVP_MD_CTX *ctx;
  EC_KEY *key;
  EVP_PKEY *pkey;
  EC_KEY *key_00;
  EVP_PKEY *pkey_00;
  void *ptr;
  byte bVar7;
  undefined *puVar8;
  long in_FS_OFFSET;
  EVP_PKEY *local_100;
  ulong local_d0;
  byte local_c8;
  byte local_c7;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)((long)param_1 * 0x10 + curves);
  if (iVar3 - 0x2edU < 2) {
    pcVar6 = OBJ_nid2sn(iVar3);
    test_info("test/ecdsatest.c",0xcb,"skipped: ECDSA unsupported for curve %s",pcVar6);
LAB_00100e7f:
    uVar5 = 1;
    goto LAB_00100ded;
  }
  if (iVar3 == 0x494) {
    if (param_2 == 0x198) {
      pcVar6 = OBJ_nid2sn(0x494);
      test_info("test/ecdsatest.c",0xd4,"skipped: EC key type unsupported for curve %s",pcVar6);
      goto LAB_00100e7f;
    }
  }
  else if (param_2 == 0x494) {
    pcVar6 = OBJ_nid2sn(iVar3);
    test_info("test/ecdsatest.c",0xd8,"skipped: SM2 key type unsupported for curve %s",pcVar6);
    goto LAB_00100e7f;
  }
  puVar8 = &_LC49;
  if (param_2 == 0x198) {
    puVar8 = &_LC48;
  }
  pcVar6 = OBJ_nid2sn(iVar3);
  test_info("test/ecdsatest.c",0xdd,"testing ECDSA for curve %s as %s key type",pcVar6,puVar8);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  iVar2 = test_ptr("test/ecdsatest.c",0xe0,"mctx = EVP_MD_CTX_new()",ctx);
  if (iVar2 == 0) {
LAB_00100da6:
    uVar5 = 0;
    pkey_00 = (EVP_PKEY *)0x0;
    pkey = (EVP_PKEY *)0x0;
    ptr = (void *)0x0;
    local_100 = (EVP_PKEY *)0x0;
  }
  else {
    iVar2 = RAND_bytes(&local_c8,0x80);
    iVar2 = test_int_gt("test/ecdsatest.c",0xe2,"RAND_bytes(tbs, sizeof(tbs))",&_LC33,iVar2,0);
    if (iVar2 == 0) goto LAB_00100da6;
    key = EC_KEY_new_by_curve_name(iVar3);
    iVar2 = test_ptr("test/ecdsatest.c",0xe4,"eckey = EC_KEY_new_by_curve_name(nid)",key);
    if (iVar2 == 0) goto LAB_00100da6;
    iVar2 = EC_KEY_generate_key(key);
    iVar2 = test_true("test/ecdsatest.c",0xe5,"EC_KEY_generate_key(eckey)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100da6;
    pkey = EVP_PKEY_new();
    iVar2 = test_ptr("test/ecdsatest.c",0xe6,"pkey = EVP_PKEY_new()",pkey);
    if (iVar2 == 0) {
LAB_00101028:
      local_100 = (EVP_PKEY *)0x0;
      uVar5 = 0;
      pkey_00 = (EVP_PKEY *)0x0;
      ptr = (void *)0x0;
    }
    else {
      iVar2 = EVP_PKEY_assign(pkey,0x198,key);
      iVar2 = test_true("test/ecdsatest.c",0xe7,"EVP_PKEY_assign_EC_KEY(pkey, eckey)",iVar2 != 0);
      if (iVar2 == 0) goto LAB_00101028;
      key_00 = EC_KEY_new_by_curve_name(iVar3);
      iVar3 = test_ptr("test/ecdsatest.c",0xe9,"eckey_neg = EC_KEY_new_by_curve_name(nid)",key_00);
      if (iVar3 == 0) goto LAB_00101028;
      iVar3 = EC_KEY_generate_key(key_00);
      iVar3 = test_true("test/ecdsatest.c",0xea,"EC_KEY_generate_key(eckey_neg)",iVar3 != 0);
      if (iVar3 == 0) goto LAB_00101028;
      local_100 = EVP_PKEY_new();
      iVar3 = test_ptr("test/ecdsatest.c",0xeb,"pkey_neg = EVP_PKEY_new()",local_100);
      if (iVar3 == 0) {
LAB_00100fe6:
        uVar5 = 0;
        pkey_00 = (EVP_PKEY *)0x0;
        ptr = (void *)0x0;
      }
      else {
        iVar3 = EVP_PKEY_assign(local_100,0x198,(void *)0x0);
        iVar3 = test_false("test/ecdsatest.c",0xec,"EVP_PKEY_assign_EC_KEY(pkey_neg, NULL)",
                           iVar3 != 0);
        if (iVar3 == 0) {
          pkey_00 = (EVP_PKEY *)0x0;
          ptr = (void *)0x0;
          uVar5 = 0;
          goto LAB_00100dbb;
        }
        iVar3 = EVP_PKEY_assign(local_100,0x198,key_00);
        iVar3 = test_true("test/ecdsatest.c",0xed,"EVP_PKEY_assign_EC_KEY(pkey_neg, eckey_neg)",
                          iVar3 != 0);
        if (iVar3 == 0) goto LAB_00100fe6;
        pkey_00 = (EVP_PKEY *)EVP_PKEY_dup(pkey);
        iVar3 = test_ptr("test/ecdsatest.c",0xf0,"dup_pk = EVP_PKEY_dup(pkey)",pkey_00);
        if (iVar3 == 0) {
LAB_001010e2:
          uVar5 = 0;
          ptr = (void *)0x0;
        }
        else {
          ptr = (void *)0x0;
          uVar4 = EVP_PKEY_eq(pkey,pkey_00);
          uVar5 = test_int_eq("test/ecdsatest.c",0xf1,"EVP_PKEY_eq(pkey, dup_pk)",&_LC21,uVar4,1);
          if (uVar5 != 0) {
            iVar3 = ECDSA_size(key);
            iVar2 = test_int_ge("test/ecdsatest.c",0xf6,&_LC65,&_LC33,iVar3,0);
            if (iVar2 == 0) goto LAB_001010e2;
            local_d0 = (ulong)iVar3;
            ptr = CRYPTO_malloc(iVar3,"test/ecdsatest.c",0xf7);
            iVar3 = test_ptr("test/ecdsatest.c",0xf7,"sig = OPENSSL_malloc(sig_len = (size_t)temp)")
            ;
            if (iVar3 != 0) {
              iVar3 = EVP_DigestSignInit(ctx,(EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,pkey);
              iVar3 = test_true("test/ecdsatest.c",0xf9,
                                "EVP_DigestSignInit(mctx, NULL, NULL, NULL, pkey)",iVar3 != 0);
              if ((iVar3 != 0) &&
                 ((param_2 != 0x494 || (iVar3 = set_sm2_id_isra_0(ctx), iVar3 != 0)))) {
                iVar3 = EVP_DigestSign(ctx,ptr,&local_d0,&local_c8,0x80);
                iVar3 = test_true("test/ecdsatest.c",0xfb,
                                  "EVP_DigestSign(mctx, sig, &sig_len, tbs, sizeof(tbs))",iVar3 != 0
                                 );
                if (iVar3 != 0) {
                  iVar3 = ECDSA_size(key);
                  iVar3 = test_int_le("test/ecdsatest.c",0xfc,"sig_len","ECDSA_size(eckey)",
                                      local_d0 & 0xffffffff,iVar3);
                  if (iVar3 != 0) {
                    EVP_MD_CTX_reset(ctx);
                    iVar3 = test_true("test/ecdsatest.c",0xfd,"EVP_MD_CTX_reset(mctx)");
                    if (iVar3 != 0) {
                      iVar3 = EVP_DigestVerifyInit
                                        (ctx,(EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,
                                         local_100);
                      iVar3 = test_true("test/ecdsatest.c",0xff,
                                        "EVP_DigestVerifyInit(mctx, NULL, NULL, NULL, pkey_neg)",
                                        iVar3 != 0);
                      if ((iVar3 != 0) &&
                         ((param_2 != 0x494 || (iVar3 = set_sm2_id_isra_0(ctx), iVar3 != 0)))) {
                        uVar4 = EVP_DigestVerify(ctx,ptr,local_d0,&local_c8,0x80);
                        iVar3 = test_int_eq("test/ecdsatest.c",0x101,
                                            "EVP_DigestVerify(mctx, sig, sig_len, tbs, sizeof(tbs))"
                                            ,&_LC33,uVar4,0);
                        if (iVar3 != 0) {
                          EVP_MD_CTX_reset(ctx);
                          iVar3 = test_true("test/ecdsatest.c",0x102,"EVP_MD_CTX_reset(mctx)");
                          if (iVar3 != 0) {
                            iVar3 = EVP_DigestVerifyInit
                                              (ctx,(EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,
                                               pkey);
                            iVar3 = test_true("test/ecdsatest.c",0x104,
                                              "EVP_DigestVerifyInit(mctx, NULL, NULL, NULL, pkey)",
                                              iVar3 != 0);
                            if ((iVar3 != 0) &&
                               ((param_2 != 0x494 || (iVar3 = set_sm2_id_isra_0(ctx), iVar3 != 0))))
                            {
                              uVar4 = EVP_DigestVerify(ctx,ptr,local_d0 - 1,&local_c8,0x80);
                              iVar3 = test_int_eq("test/ecdsatest.c",0x106,
                                                  "EVP_DigestVerify(mctx, sig, sig_len - 1, tbs, sizeof(tbs))"
                                                  ,&_LC75,uVar4,0xffffffff);
                              if (iVar3 != 0) {
                                EVP_MD_CTX_reset(ctx);
                                iVar3 = test_true("test/ecdsatest.c",0x107,"EVP_MD_CTX_reset(mctx)")
                                ;
                                if (iVar3 != 0) {
                                  iVar3 = EVP_DigestVerifyInit
                                                    (ctx,(EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,
                                                     (ENGINE *)0x0,pkey);
                                  iVar3 = test_true("test/ecdsatest.c",0x109,
                                                                                                        
                                                  "EVP_DigestVerifyInit(mctx, NULL, NULL, NULL, pkey)"
                                                  ,iVar3 != 0);
                                  if ((iVar3 != 0) &&
                                     ((param_2 != 0x494 ||
                                      (iVar3 = set_sm2_id_isra_0(ctx), iVar3 != 0)))) {
                                    uVar4 = EVP_DigestVerify(ctx,ptr,local_d0,&local_c8,0x80);
                                    iVar3 = test_int_eq("test/ecdsatest.c",0x10b,
                                                                                                                
                                                  "EVP_DigestVerify(mctx, sig, sig_len, tbs, sizeof(tbs))"
                                                  ,&_LC21,uVar4,1);
                                    if (iVar3 != 0) {
                                      EVP_MD_CTX_reset(ctx);
                                      iVar3 = test_true("test/ecdsatest.c",0x10c,
                                                        "EVP_MD_CTX_reset(mctx)");
                                      if (iVar3 != 0) {
                                        local_c8 = local_c8 ^ 1;
                                        iVar3 = EVP_DigestVerifyInit
                                                          (ctx,(EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,
                                                           (ENGINE *)0x0,pkey);
                                        iVar3 = test_true("test/ecdsatest.c",0x111,
                                                                                                                    
                                                  "EVP_DigestVerifyInit(mctx, NULL, NULL, NULL, pkey)"
                                                  ,iVar3 != 0);
                                        if ((iVar3 != 0) &&
                                           ((param_2 != 0x494 ||
                                            (iVar3 = set_sm2_id_isra_0(ctx), iVar3 != 0)))) {
                                          uVar4 = EVP_DigestVerify(ctx,ptr,local_d0,&local_c8,0x80);
                                          iVar3 = test_int_eq("test/ecdsatest.c",0x113,
                                                                                                                            
                                                  "EVP_DigestVerify(mctx, sig, sig_len, tbs, sizeof(tbs))"
                                                  ,&_LC33,uVar4,0);
                                          if (iVar3 != 0) {
                                            EVP_MD_CTX_reset(ctx);
                                            iVar3 = test_true("test/ecdsatest.c",0x114,
                                                              "EVP_MD_CTX_reset(mctx)");
                                            if (iVar3 != 0) {
                                              local_c8 = local_c8 ^ 1;
                                              iVar3 = EVP_DigestVerifyInit
                                                                (ctx,(EVP_PKEY_CTX **)0x0,
                                                                 (EVP_MD *)0x0,(ENGINE *)0x0,pkey);
                                              iVar3 = test_true("test/ecdsatest.c",0x118,
                                                                                                                                
                                                  "EVP_DigestVerifyInit(mctx, NULL, NULL, NULL, pkey)"
                                                  ,iVar3 != 0);
                                              if ((iVar3 != 0) &&
                                                 ((param_2 != 0x494 ||
                                                  (iVar3 = set_sm2_id_isra_0(ctx), iVar3 != 0)))) {
                                                uVar4 = EVP_DigestVerify(ctx,ptr,local_d0,&local_c8,
                                                                         0x80);
                                                iVar3 = test_int_eq("test/ecdsatest.c",0x11a,
                                                                                                                                        
                                                  "EVP_DigestVerify(mctx, sig, sig_len, tbs, sizeof(tbs))"
                                                  ,&_LC21,uVar4,1);
                                                if (iVar3 != 0) {
                                                  iVar3 = EVP_MD_CTX_reset(ctx);
                                                  iVar3 = test_true("test/ecdsatest.c",0x11b,
                                                                    "EVP_MD_CTX_reset(mctx)",
                                                                    iVar3 != 0);
                                                  if (iVar3 != 0) {
                                                    bVar7 = 1;
                                                    if (local_c7 != 0) {
                                                      bVar7 = local_c7;
                                                    }
                                                    pbVar1 = (byte *)((long)ptr +
                                                                     (ulong)local_c8 % local_d0);
                                                    *pbVar1 = *pbVar1 ^ bVar7;
                                                    iVar3 = EVP_DigestVerifyInit
                                                                      (ctx,(EVP_PKEY_CTX **)0x0,
                                                                       (EVP_MD *)0x0,(ENGINE *)0x0,
                                                                       pkey);
                                                    iVar3 = test_true("test/ecdsatest.c",0x13b,
                                                                                                                                            
                                                  "EVP_DigestVerifyInit(mctx, NULL, NULL, NULL, pkey)"
                                                  ,iVar3 != 0);
                                                  if ((iVar3 != 0) &&
                                                     ((param_2 != 0x494 ||
                                                      (iVar3 = set_sm2_id_isra_0(ctx), iVar3 != 0)))
                                                     ) {
                                                    uVar4 = EVP_DigestVerify(ctx,ptr,local_d0,
                                                                             &local_c8,0x80);
                                                    iVar3 = test_int_ne("test/ecdsatest.c",0x13d,
                                                                                                                                                
                                                  "EVP_DigestVerify(mctx, sig, sig_len, tbs, sizeof(tbs))"
                                                  ,&_LC21,uVar4,1);
                                                  if (iVar3 != 0) {
                                                    iVar3 = EVP_MD_CTX_reset(ctx);
                                                    iVar3 = test_true("test/ecdsatest.c",0x13e,
                                                                      "EVP_MD_CTX_reset(mctx)",
                                                                      iVar3 != 0);
                                                    if (iVar3 != 0) {
                                                      *pbVar1 = *pbVar1 ^ bVar7;
                                                      iVar3 = EVP_DigestVerifyInit
                                                                        (ctx,(EVP_PKEY_CTX **)0x0,
                                                                         (EVP_MD *)0x0,(ENGINE *)0x0
                                                                         ,pkey);
                                                      iVar3 = test_true("test/ecdsatest.c",0x142,
                                                                                                                                                
                                                  "EVP_DigestVerifyInit(mctx, NULL, NULL, NULL, pkey)"
                                                  ,iVar3 != 0);
                                                  if ((iVar3 != 0) &&
                                                     ((param_2 != 0x494 ||
                                                      (iVar3 = set_sm2_id_isra_0(ctx), iVar3 != 0)))
                                                     ) {
                                                    uVar4 = EVP_DigestVerify(ctx,ptr,local_d0,
                                                                             &local_c8,0x80);
                                                    iVar3 = test_int_eq("test/ecdsatest.c",0x144,
                                                                                                                                                
                                                  "EVP_DigestVerify(mctx, sig, sig_len, tbs, sizeof(tbs))"
                                                  ,&_LC21,uVar4,1);
                                                  if (iVar3 != 0) {
                                                    iVar3 = EVP_MD_CTX_reset(ctx);
                                                    iVar3 = test_true("test/ecdsatest.c",0x145,
                                                                      "EVP_MD_CTX_reset(mctx)",
                                                                      iVar3 != 0);
                                                    uVar5 = (uint)(iVar3 != 0);
                                                    goto LAB_00100dbb;
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
            uVar5 = 0;
          }
        }
      }
    }
  }
LAB_00100dbb:
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(local_100);
  EVP_PKEY_free(pkey_00);
  EVP_MD_CTX_free(ctx);
  CRYPTO_free(ptr);
LAB_00100ded:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_builtin_as_sm2(undefined8 param_1)

{
  test_builtin(param_1,0x494);
  return;
}



void test_builtin_as_ec(undefined8 param_1)

{
  test_builtin(param_1,0x198);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 setup_tests(void)

{
  int iVar1;
  size_t sVar2;
  
  fake_rand = fake_rand_start();
  if (fake_rand != 0) {
    _crv_len = EC_get_builtin_curves((EC_builtin_curve *)0x0,0);
    curves = (EC_builtin_curve *)CRYPTO_malloc((int)(_crv_len << 4),"test/ecdsatest.c",0x192);
    iVar1 = test_ptr("test/ecdsatest.c",0x192,"curves = OPENSSL_malloc(sizeof(*curves) * crv_len)",
                     curves);
    if (iVar1 != 0) {
      sVar2 = EC_get_builtin_curves(curves,_crv_len);
      iVar1 = test_true("test/ecdsatest.c",0x193,"EC_get_builtin_curves(curves, crv_len)",sVar2 != 0
                       );
      if (iVar1 != 0) {
        add_all_tests("test_builtin_as_ec",test_builtin_as_ec,_crv_len & 0xffffffff,1);
        add_test("test_ecdsa_sig_NULL",test_ecdsa_sig_NULL);
        add_all_tests("test_builtin_as_sm2",test_builtin_as_sm2,_crv_len & 0xffffffff,1);
        add_all_tests("x9_62_tests",0x100000,0x2d4,1);
        return 1;
      }
    }
    fake_rand_finish(fake_rand);
  }
  return 0;
}



void cleanup_tests(void)

{
  fake_rand_finish(fake_rand);
  CRYPTO_free(curves);
  return;
}



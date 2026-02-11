
undefined8 cb(void)

{
  return 1;
}



bool dh_set_dh_nid_test(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  
  ctx = EVP_PKEY_CTX_new_id(0x1c,(ENGINE *)0x0);
  iVar1 = test_ptr("test/dhtest.c",0x313,"paramgen_ctx",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_paramgen_init(ctx);
    iVar1 = test_int_eq("test/dhtest.c",0x315,"EVP_PKEY_paramgen_init(paramgen_ctx)",&_LC2,iVar1,1);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_CTX_set_dh_nid(ctx,0x466);
      iVar1 = test_int_eq("test/dhtest.c",0x318,
                          "EVP_PKEY_CTX_set_dh_nid(paramgen_ctx, NID_ffdhe2048)",&_LC2,uVar2,1);
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_CTX_set_dh_nid(ctx,0x2cc);
        iVar1 = test_int_eq("test/dhtest.c",0x31b,
                            "EVP_PKEY_CTX_set_dh_nid(paramgen_ctx, NID_secp521r1)",&_LC5,uVar2,0);
        EVP_PKEY_CTX_free(ctx);
        return iVar1 != 0;
      }
    }
  }
  EVP_PKEY_CTX_free(ctx);
  return false;
}



bool dh_rfc5114_fix_nid_test(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  
  ctx = EVP_PKEY_CTX_new_id(0x398,(ENGINE *)0x0);
  iVar1 = test_ptr("test/dhtest.c",0x2fb,"paramgen_ctx",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_paramgen_init(ctx);
    iVar1 = test_int_eq("test/dhtest.c",0x2fd,"EVP_PKEY_paramgen_init(paramgen_ctx)",&_LC2,iVar1,1);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_CTX_set_dhx_rfc5114(ctx,3);
      iVar1 = test_int_eq("test/dhtest.c",0x300,"EVP_PKEY_CTX_set_dhx_rfc5114(paramgen_ctx, 3)",
                          &_LC2,uVar2,1);
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_CTX_set_dhx_rfc5114(ctx,99);
        iVar1 = test_int_eq("test/dhtest.c",0x303,"EVP_PKEY_CTX_set_dhx_rfc5114(paramgen_ctx, 99)",
                            &_LC5,uVar2,0);
        EVP_PKEY_CTX_free(ctx);
        return iVar1 != 0;
      }
    }
  }
  EVP_PKEY_CTX_free(ctx);
  return false;
}



bool dh_load_pkcs3_namedgroup_privlen_test(void)

{
  int iVar1;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_2c;
  undefined1 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0;
  local_28 = dh_pub_der;
  pkey = (EVP_PKEY *)d2i_PUBKEY_ex(0,&local_28,0x22c,0,0);
  iVar1 = test_ptr("test/dhtest.c",0x39e,
                   "pkey = d2i_PUBKEY_ex(NULL, &p, sizeof(dh_pub_der), NULL, NULL)",pkey);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_get_int_param(pkey,"priv_len",&local_2c);
    iVar1 = test_true("test/dhtest.c",0x3a0,
                      "EVP_PKEY_get_int_param(pkey, OSSL_PKEY_PARAM_DH_PRIV_LEN, &privlen)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = test_int_eq("test/dhtest.c",0x3a2,"privlen",&_LC12,local_2c,0x400);
      bVar2 = iVar1 != 0;
      goto LAB_0010027b;
    }
  }
  bVar2 = false;
LAB_0010027b:
  EVP_PKEY_free(pkey);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint dh_get_nid(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  DH *dh;
  DH *dh_00;
  BIGNUM *pBVar4;
  BIGNUM *a;
  undefined8 uVar5;
  BIGNUM *a_00;
  long in_FS_OFFSET;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dh = (DH *)DH_new_by_nid(0x466);
  dh_00 = DH_new();
  iVar1 = test_ptr("test/dhtest.c",0x32c,&_LC14,dh);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/dhtest.c",0x32d,&_LC15,dh_00);
    if (iVar1 != 0) {
      DH_get0_pqg(dh,&local_58,&local_50,&local_48);
      iVar1 = test_ptr("test/dhtest.c",0x332,&_LC16,local_58);
      if (iVar1 != 0) {
        iVar1 = test_ptr("test/dhtest.c",0x333,&_LC17,local_50);
        if (iVar1 != 0) {
          iVar1 = test_ptr("test/dhtest.c",0x334,&_LC18,local_48);
          if (iVar1 != 0) {
            pBVar4 = BN_dup(local_58);
            uVar2 = test_ptr("test/dhtest.c",0x335,"pcpy = BN_dup(p)",pBVar4);
            if (uVar2 == 0) {
LAB_001004d0:
              a_00 = (BIGNUM *)0x0;
              a = (BIGNUM *)0x0;
              goto LAB_00100375;
            }
            a = BN_dup(local_48);
            iVar1 = test_ptr("test/dhtest.c",0x336,"gcpy = BN_dup(g)",a);
            if (iVar1 != 0) {
              iVar1 = DH_set0_pqg(dh_00,pBVar4,0,a);
              iVar1 = test_true("test/dhtest.c",0x339,"DH_set0_pqg(dh2, pcpy, NULL, gcpy)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                uVar5 = DH_get0_q(dh_00);
                iVar1 = test_ptr("test/dhtest.c",0x33d,"DH_get0_q(dh2)",uVar5);
                if (iVar1 != 0) {
                  uVar3 = DH_get_nid(dh_00);
                  iVar1 = test_int_eq("test/dhtest.c",0x341,"DH_get_nid(dh2)","NID_ffdhe2048",uVar3,
                                      0x466);
                  if (iVar1 != 0) {
                    pBVar4 = BN_value_one();
                    a = BN_dup(pBVar4);
                    iVar1 = test_ptr("test/dhtest.c",0x345,"gcpy = BN_dup(BN_value_one())",a);
                    if (iVar1 != 0) {
                      iVar1 = DH_set0_pqg(dh_00,0,0,a);
                      iVar1 = test_true("test/dhtest.c",0x347,"DH_set0_pqg(dh2, NULL, NULL, gcpy)",
                                        iVar1 != 0);
                      if (iVar1 != 0) {
                        uVar3 = DH_get_nid(dh_00);
                        iVar1 = test_int_eq("test/dhtest.c",0x34a,"DH_get_nid(dh2)","NID_undef",
                                            uVar3,0);
                        if (iVar1 != 0) {
                          pBVar4 = BN_dup(local_58);
                          uVar2 = test_ptr("test/dhtest.c",0x34e,"pcpy = BN_dup(p)",pBVar4);
                          if (uVar2 != 0) {
                            a = (BIGNUM *)0x0;
                            a_00 = BN_dup(local_50);
                            uVar2 = test_ptr("test/dhtest.c",0x34f,"qcpy = BN_dup(q)",a_00);
                            if (uVar2 != 0) {
                              a = BN_dup(local_48);
                              iVar1 = test_ptr("test/dhtest.c",0x350,"gcpy = BN_dup(g)",a);
                              if (iVar1 != 0) {
                                iVar1 = BN_add_word(a_00,2);
                                iVar1 = test_int_eq("test/dhtest.c",0x351,"BN_add_word(qcpy, 2)",
                                                    &_LC2,iVar1,1);
                                if (iVar1 != 0) {
                                  iVar1 = DH_set0_pqg(dh_00,pBVar4,a_00,a);
                                  uVar2 = test_true("test/dhtest.c",0x352,
                                                    "DH_set0_pqg(dh2, pcpy, qcpy, gcpy)",iVar1 != 0)
                                  ;
                                  if (uVar2 != 0) {
                                    uVar3 = DH_get_nid(dh_00);
                                    iVar1 = test_int_eq("test/dhtest.c",0x355,"DH_get_nid(dh2)",
                                                        "NID_undef",uVar3,0);
                                    uVar2 = (uint)(iVar1 != 0);
                                    a_00 = (BIGNUM *)0x0;
                                    a = (BIGNUM *)0x0;
                                    pBVar4 = (BIGNUM *)0x0;
                                  }
                                  goto LAB_00100375;
                                }
                              }
                              uVar2 = 0;
                            }
                            goto LAB_00100375;
                          }
                          goto LAB_001004d0;
                        }
                        goto LAB_00100369;
                      }
                    }
                    a_00 = (BIGNUM *)0x0;
                    pBVar4 = (BIGNUM *)0x0;
                    uVar2 = 0;
                    goto LAB_00100375;
                  }
                }
                goto LAB_00100369;
              }
            }
            a_00 = (BIGNUM *)0x0;
            uVar2 = 0;
            goto LAB_00100375;
          }
        }
      }
    }
  }
LAB_00100369:
  a_00 = (BIGNUM *)0x0;
  a = (BIGNUM *)0x0;
  pBVar4 = (BIGNUM *)0x0;
  uVar2 = 0;
LAB_00100375:
  BN_free(pBVar4);
  BN_free(a_00);
  BN_free(a);
  DH_free(dh_00);
  DH_free(dh);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool dh_test_prime_groups(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  DH *dh;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(undefined4 *)(prime_groups + (long)param_1 * 4);
  dh = (DH *)DH_new_by_nid(uVar3);
  iVar1 = test_ptr("test/dhtest.c",0x2e1,"dh = DH_new_by_nid(prime_groups[index])",dh);
  if (iVar1 != 0) {
    DH_get0_pqg(dh,&local_38,&local_30,&local_28);
    iVar1 = test_ptr("test/dhtest.c",0x2e4,&_LC16,local_38);
    if (iVar1 != 0) {
      iVar1 = test_ptr("test/dhtest.c",0x2e4,&_LC17,local_30);
      if (iVar1 != 0) {
        iVar1 = test_ptr("test/dhtest.c",0x2e4,&_LC18,local_28);
        if (iVar1 != 0) {
          uVar2 = DH_get_nid(dh);
          iVar1 = test_int_eq("test/dhtest.c",0x2e7,"DH_get_nid(dh)","prime_groups[index]",uVar2,
                              uVar3);
          if (iVar1 != 0) {
            uVar3 = DH_get_length(dh);
            iVar1 = test_int_eq("test/dhtest.c",0x2eb,"(int)DH_get_length(dh)",&_LC5,uVar3,0);
            bVar4 = iVar1 != 0;
            goto LAB_001007c9;
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_001007c9:
  DH_free(dh);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint rfc7919_test(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  DH *dh;
  DH *dh_00;
  uchar *key;
  uchar *key_00;
  long in_FS_OFFSET;
  uint local_54;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  dh = (DH *)DH_new_by_nid(0x466);
  iVar1 = test_ptr("test/dhtest.c",0x29f,"a = DH_new_by_nid(NID_ffdhe2048)",dh);
  if (iVar1 != 0) {
    iVar1 = DH_check(dh,(int *)&local_54);
    if (iVar1 != 0) {
      iVar1 = test_false("test/dhtest.c",0x2a4,"i & DH_CHECK_P_NOT_PRIME",local_54 & 1);
      if (iVar1 != 0) {
        iVar1 = test_false("test/dhtest.c",0x2a5,"i & DH_CHECK_P_NOT_SAFE_PRIME",local_54 >> 1 & 1);
        if (iVar1 != 0) {
          iVar1 = test_false("test/dhtest.c",0x2a6,"i & DH_UNABLE_TO_CHECK_GENERATOR",
                             local_54 >> 2 & 1);
          if (iVar1 != 0) {
            iVar1 = test_false("test/dhtest.c",0x2a7,"i & DH_NOT_SUITABLE_GENERATOR",
                               local_54 >> 3 & 1);
            if (iVar1 != 0) {
              iVar1 = test_false("test/dhtest.c",0x2a8,&_LC40,local_54 != 0);
              if (iVar1 != 0) {
                iVar1 = DH_generate_key(dh);
                if (iVar1 != 0) {
                  DH_get0_key(dh,&local_50,0);
                  dh_00 = (DH *)DH_new_by_nid(0x466);
                  uVar2 = test_ptr("test/dhtest.c",0x2b0,"b = DH_new_by_nid(NID_ffdhe2048)",dh_00);
                  if (uVar2 != 0) {
                    uVar2 = DH_generate_key(dh_00);
                    if (uVar2 != 0) {
                      DH_get0_key(dh_00,&local_48,0);
                      iVar1 = DH_size(dh);
                      uVar2 = test_int_gt("test/dhtest.c",0x2b8,&_LC42,&_LC5,iVar1,0);
                      if (uVar2 != 0) {
                        key_00 = (uchar *)0x0;
                        key = (uchar *)CRYPTO_malloc(iVar1,"test/dhtest.c",0x2b8);
                        uVar2 = test_ptr("test/dhtest.c",0x2b8,"abuf = OPENSSL_malloc(alen)",key);
                        if (uVar2 != 0) {
                          iVar1 = DH_compute_key(key,local_48,dh);
                          uVar2 = test_true("test/dhtest.c",0x2b9,
                                            "(aout = DH_compute_key(abuf, bpub_key, a)) != -1",
                                            iVar1 != -1);
                          if (uVar2 != 0) {
                            iVar3 = DH_size(dh_00);
                            uVar2 = test_int_gt("test/dhtest.c",0x2bd,&_LC45,&_LC5,iVar3,0);
                            if (uVar2 != 0) {
                              key_00 = (uchar *)CRYPTO_malloc(iVar3,"test/dhtest.c",0x2bd);
                              uVar2 = test_ptr("test/dhtest.c",0x2bd,"bbuf = OPENSSL_malloc(blen)",
                                               key_00);
                              if (uVar2 != 0) {
                                iVar3 = DH_compute_key(key_00,local_50,dh_00);
                                uVar2 = test_true("test/dhtest.c",0x2be,
                                                  "(bout = DH_compute_key(bbuf, apub_key, b)) != -1"
                                                  ,iVar3 != -1);
                                if (uVar2 != 0) {
                                  uVar2 = test_true("test/dhtest.c",0x2c1,"aout >= 20",0x13 < iVar1)
                                  ;
                                  if (uVar2 != 0) {
                                    iVar1 = test_mem_eq("test/dhtest.c",0x2c2,&_LC50,&_LC49,key,
                                                        (long)iVar1,key_00,(long)iVar3);
                                    uVar2 = (uint)(iVar1 != 0);
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LAB_0010093f;
                      }
                    }
                  }
                  key_00 = (uchar *)0x0;
                  key = (uchar *)0x0;
                  goto LAB_0010093f;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
  key_00 = (uchar *)0x0;
  key = (uchar *)0x0;
  dh_00 = (DH *)0x0;
LAB_0010093f:
  CRYPTO_free(key);
  CRYPTO_free(key_00);
  DH_free(dh);
  DH_free(dh_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 rfc5114_test(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  DH *dh;
  BIGNUM *a;
  BIGNUM *a_00;
  uchar *key;
  undefined8 uVar4;
  undefined **ppuVar5;
  long in_FS_OFFSET;
  DH *local_68;
  int local_5c;
  uchar *local_50;
  BIGNUM *local_48;
  long local_40;
  
  ppuVar5 = &rfctd;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = 0;
  do {
    dh = (DH *)(*(code *)*ppuVar5)();
    iVar1 = test_ptr("test/dhtest.c",0x250,"dhA = td->get_param()",dh);
    local_5c = local_5c + 1;
    if (iVar1 == 0) {
      local_50 = (uchar *)0x0;
      a_00 = (BIGNUM *)0x0;
      a = (BIGNUM *)0x0;
      key = (uchar *)0x0;
      local_68 = (DH *)0x0;
LAB_0010114c:
      DH_free(dh);
      DH_free(local_68);
      BN_free(a_00);
      BN_free(a);
      CRYPTO_free(key);
      CRYPTO_free(local_50);
      test_error("test/dhtest.c",0x28a,"Initialisation error RFC5114 set %d\n",local_5c);
      uVar4 = 0;
      goto LAB_001010b6;
    }
    local_68 = (DH *)(*(code *)*ppuVar5)();
    iVar1 = test_ptr("test/dhtest.c",0x251,"dhB = td->get_param()",local_68);
    if (iVar1 == 0) {
      local_50 = (uchar *)0x0;
      a_00 = (BIGNUM *)0x0;
      a = (BIGNUM *)0x0;
      key = (uchar *)0x0;
      goto LAB_0010114c;
    }
    a = BN_bin2bn(ppuVar5[1],*(int *)(ppuVar5 + 2),(BIGNUM *)0x0);
    iVar1 = test_ptr("test/dhtest.c",0x254,"priv_key = BN_bin2bn(td->xA, td->xA_len, NULL)",a);
    if (iVar1 == 0) {
      local_50 = (uchar *)0x0;
      a_00 = (BIGNUM *)0x0;
      key = (uchar *)0x0;
      goto LAB_0010114c;
    }
    a_00 = BN_bin2bn(ppuVar5[3],*(int *)(ppuVar5 + 4),(BIGNUM *)0x0);
    iVar1 = test_ptr("test/dhtest.c",0x255,"pub_key = BN_bin2bn(td->yA, td->yA_len, NULL)",a_00);
    if (iVar1 == 0) {
LAB_00101140:
      local_50 = (uchar *)0x0;
      key = (uchar *)0x0;
      goto LAB_0010114c;
    }
    iVar1 = DH_set0_key(dh,a_00,a);
    iVar1 = test_true("test/dhtest.c",0x256,"DH_set0_key(dhA, pub_key, priv_key)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00101140;
    a = BN_bin2bn(ppuVar5[5],*(int *)(ppuVar5 + 6),(BIGNUM *)0x0);
    iVar1 = test_ptr("test/dhtest.c",0x259,"priv_key = BN_bin2bn(td->xB, td->xB_len, NULL)",a);
    if (iVar1 == 0) goto LAB_00101140;
    a_00 = BN_bin2bn(ppuVar5[7],*(int *)(ppuVar5 + 8),(BIGNUM *)0x0);
    iVar1 = test_ptr("test/dhtest.c",0x25a,"pub_key = BN_bin2bn(td->yB, td->yB_len, NULL)",a_00);
    if (iVar1 == 0) goto LAB_00101140;
    iVar1 = DH_set0_key(local_68,a_00,a);
    iVar1 = test_true("test/dhtest.c",0x25b,"DH_set0_key(dhB, pub_key, priv_key)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00101140;
    iVar1 = DH_size(dh);
    iVar2 = test_int_gt("test/dhtest.c",0x25f,"szA = DH_size(dhA)",&_LC5,iVar1,0);
    if (iVar2 == 0) {
LAB_001010e0:
      local_50 = (uchar *)0x0;
      key = (uchar *)0x0;
LAB_001010ec:
      DH_free(dh);
      DH_free(local_68);
      CRYPTO_free(key);
      CRYPTO_free(local_50);
      test_error("test/dhtest.c",0x292,"Test failed RFC5114 set %d\n",local_5c);
      uVar4 = 0;
      goto LAB_001010b6;
    }
    iVar2 = DH_size(local_68);
    iVar3 = test_int_gt("test/dhtest.c",0x260,"szB = DH_size(dhB)",&_LC5,iVar2,0);
    if (iVar3 == 0) goto LAB_001010e0;
    iVar3 = test_size_t_eq("test/dhtest.c",0x261,"td->Z_len","(size_t)szA",ppuVar5[10],(long)iVar1);
    if (iVar3 == 0) goto LAB_001010e0;
    iVar3 = test_size_t_eq("test/dhtest.c",0x262,"td->Z_len","(size_t)szB",ppuVar5[10],(long)iVar2);
    if (iVar3 == 0) goto LAB_001010e0;
    key = (uchar *)CRYPTO_malloc(iVar1,"test/dhtest.c",0x265);
    iVar1 = test_ptr("test/dhtest.c",0x265,"Z1 = OPENSSL_malloc((size_t)szA)",key);
    if (iVar1 == 0) {
      local_50 = (uchar *)0x0;
      a_00 = (BIGNUM *)0x0;
      a = (BIGNUM *)0x0;
      goto LAB_0010114c;
    }
    local_50 = (uchar *)CRYPTO_malloc(iVar2,"test/dhtest.c",0x266);
    iVar1 = test_ptr("test/dhtest.c",0x266,"Z2 = OPENSSL_malloc((size_t)szB)",local_50);
    if (iVar1 == 0) {
LAB_00101220:
      a_00 = (BIGNUM *)0x0;
      a = (BIGNUM *)0x0;
      goto LAB_0010114c;
    }
    DH_get0_key(local_68,&local_48,0);
    iVar1 = DH_compute_key(key,local_48,dh);
    iVar1 = test_int_ne("test/dhtest.c",0x26d,"DH_compute_key(Z1, pub_key_tmp, dhA)",&_LC66,iVar1,
                        0xffffffff);
    if (iVar1 == 0) goto LAB_00101220;
    DH_get0_key(dh,&local_48,0);
    iVar1 = DH_compute_key(local_50,local_48,local_68);
    iVar1 = test_int_ne("test/dhtest.c",0x271,"DH_compute_key(Z2, pub_key_tmp, dhB)",&_LC66,iVar1,
                        0xffffffff);
    if (iVar1 == 0) goto LAB_00101220;
    iVar1 = test_mem_eq("test/dhtest.c",0x274,&_LC70,"td->Z",key,ppuVar5[10],ppuVar5[9],ppuVar5[10])
    ;
    if (iVar1 == 0) goto LAB_001010ec;
    iVar1 = test_mem_eq("test/dhtest.c",0x275,&_LC71,"td->Z",local_50,ppuVar5[10],ppuVar5[9],
                        ppuVar5[10]);
    if (iVar1 == 0) goto LAB_001010ec;
    ppuVar5 = ppuVar5 + 0xb;
    DH_free(dh);
    DH_free(local_68);
    CRYPTO_free(key);
    CRYPTO_free(local_50);
  } while (local_5c != 3);
  uVar4 = 1;
LAB_001010b6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint dh_computekey_range_test(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  BIGNUM *pBVar5;
  BIGNUM *a;
  BIGNUM *a_00;
  DH *dh;
  void *ptr;
  BIGNUM *a_01;
  BIGNUM *local_48;
  
  pBVar5 = BN_dup((BIGNUM *)&ossl_bignum_ffdhe2048_p);
  iVar1 = test_ptr("test/dhtest.c",0x10d,"p = BN_dup(&ossl_bignum_ffdhe2048_p)",pBVar5);
  if (iVar1 == 0) {
    ptr = (void *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    local_48 = (BIGNUM *)0x0;
    dh = (DH *)0x0;
    uVar2 = 0;
  }
  else {
    a = BN_dup((BIGNUM *)&ossl_bignum_ffdhe2048_q);
    iVar1 = test_ptr("test/dhtest.c",0x10e,"q = BN_dup(&ossl_bignum_ffdhe2048_q)",a);
    if (iVar1 == 0) {
      ptr = (void *)0x0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      dh = (DH *)0x0;
      local_48 = (BIGNUM *)0x0;
      uVar2 = 0;
    }
    else {
      a_00 = BN_dup((BIGNUM *)&ossl_bignum_const_2);
      iVar1 = test_ptr("test/dhtest.c",0x10f,"g = BN_dup(&ossl_bignum_const_2)",a_00);
      if (iVar1 == 0) {
        local_48 = (BIGNUM *)0x0;
        ptr = (void *)0x0;
        a_01 = (BIGNUM *)0x0;
        dh = (DH *)0x0;
        uVar2 = 0;
      }
      else {
        dh = DH_new();
        uVar2 = test_ptr("test/dhtest.c",0x110,"dh = DH_new()",dh);
        if (uVar2 != 0) {
          iVar1 = DH_set0_pqg(dh,pBVar5,a,a_00);
          uVar2 = test_true("test/dhtest.c",0x111,"DH_set0_pqg(dh, p, q, g)",iVar1 != 0);
          if (uVar2 != 0) {
            iVar1 = DH_size(dh);
            uVar2 = test_int_gt("test/dhtest.c",0x115,"sz = DH_size(dh)",&_LC5,iVar1,0);
            ptr = (void *)0x0;
            if (uVar2 != 0) {
              ptr = CRYPTO_malloc(iVar1,"test/dhtest.c",0x116);
              uVar2 = test_ptr("test/dhtest.c",0x116,"buf = OPENSSL_malloc(sz)",ptr);
              if (uVar2 != 0) {
                a_01 = BN_new();
                iVar3 = test_ptr("test/dhtest.c",0x117,"pub = BN_new()",a_01);
                if (iVar3 == 0) {
                  local_48 = (BIGNUM *)0x0;
                  a_00 = (BIGNUM *)0x0;
                  a = (BIGNUM *)0x0;
                  pBVar5 = (BIGNUM *)0x0;
                  uVar2 = 0;
                }
                else {
                  local_48 = BN_new();
                  uVar2 = test_ptr("test/dhtest.c",0x118,"priv = BN_new()",local_48);
                  if (uVar2 != 0) {
                    iVar3 = BN_set_word(local_48,1);
                    uVar2 = test_true("test/dhtest.c",0x11b,"BN_set_word(priv, 1)",iVar3 != 0);
                    if (uVar2 != 0) {
                      iVar3 = DH_set0_key(dh,0,local_48);
                      uVar2 = test_true("test/dhtest.c",0x11c,"DH_set0_key(dh, NULL, priv)",
                                        iVar3 != 0);
                      if (uVar2 != 0) {
                        BN_set_word(a_01,1);
                        iVar3 = test_true("test/dhtest.c",0x11f,"BN_set_word(pub, 1)");
                        if (iVar3 != 0) {
                          uVar4 = ossl_dh_compute_key(ptr,a_01,dh);
                          iVar3 = test_int_le("test/dhtest.c",0x125,
                                              "ossl_dh_compute_key(buf, pub, dh)",&_LC5,uVar4,0);
                          if (iVar3 != 0) {
                            pBVar5 = (BIGNUM *)DH_get0_p(dh);
                            BN_copy(a_01,pBVar5);
                            iVar3 = test_ptr("test/dhtest.c",0x128,"BN_copy(pub, DH_get0_p(dh))");
                            if (iVar3 != 0) {
                              uVar4 = ossl_dh_compute_key(ptr,a_01,dh);
                              iVar3 = test_int_le("test/dhtest.c",0x129,
                                                  "ossl_dh_compute_key(buf, pub, dh)",&_LC5,uVar4,0)
                              ;
                              if (iVar3 != 0) {
                                BN_sub_word(a_01,1);
                                iVar3 = test_true("test/dhtest.c",300,"BN_sub_word(pub, 1)");
                                if (iVar3 != 0) {
                                  uVar4 = ossl_dh_compute_key(ptr,a_01,dh);
                                  iVar3 = test_int_le("test/dhtest.c",0x12d,
                                                      "ossl_dh_compute_key(buf, pub, dh)",&_LC5,
                                                      uVar4,0);
                                  if (iVar3 != 0) {
                                    BN_sub_word(a_01,1);
                                    iVar3 = test_true("test/dhtest.c",0x130,"BN_sub_word(pub, 1)");
                                    if (iVar3 != 0) {
                                      uVar4 = ossl_dh_compute_key(ptr,a_01,dh);
                                      iVar1 = test_int_eq("test/dhtest.c",0x131,
                                                          "ossl_dh_compute_key(buf, pub, dh)",&_LC89
                                                          ,uVar4,iVar1);
                                      a_00 = (BIGNUM *)0x0;
                                      a = (BIGNUM *)0x0;
                                      local_48 = (BIGNUM *)0x0;
                                      uVar2 = (uint)(iVar1 != 0);
                                      pBVar5 = (BIGNUM *)0x0;
                                      goto LAB_0010128a;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        a_00 = (BIGNUM *)0x0;
                        a = (BIGNUM *)0x0;
                        pBVar5 = (BIGNUM *)0x0;
                        local_48 = (BIGNUM *)0x0;
                        uVar2 = 0;
                        goto LAB_0010128a;
                      }
                    }
                  }
                  a_00 = (BIGNUM *)0x0;
                  a = (BIGNUM *)0x0;
                  pBVar5 = (BIGNUM *)0x0;
                }
                goto LAB_0010128a;
              }
            }
            local_48 = (BIGNUM *)0x0;
            a_01 = (BIGNUM *)0x0;
            a_00 = (BIGNUM *)0x0;
            pBVar5 = (BIGNUM *)0x0;
            a = (BIGNUM *)0x0;
            goto LAB_0010128a;
          }
        }
        local_48 = (BIGNUM *)0x0;
        ptr = (void *)0x0;
        a_01 = (BIGNUM *)0x0;
      }
    }
  }
LAB_0010128a:
  CRYPTO_free(ptr);
  BN_free(local_48);
  BN_free(a_01);
  BN_free(a_00);
  BN_free(a);
  BN_free(pBVar5);
  DH_free(dh);
  return uVar2;
}



uint dh_test(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  DH *dh;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  BIGNUM *a;
  undefined8 uVar9;
  uchar *key;
  uchar *key_00;
  long in_FS_OFFSET;
  uchar *local_d0;
  DH *local_c8;
  DH *local_c0;
  DH *local_b8;
  BN_GENCB *local_b0;
  uint local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (BIGNUM *)0x0;
  local_60 = (BIGNUM *)0x0;
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  dh = DH_new();
  iVar1 = test_ptr("test/dhtest.c",0x39,"dh = DH_new()",dh);
  if (iVar1 == 0) {
    a = (BIGNUM *)0x0;
    pBVar8 = (BIGNUM *)0x0;
    pBVar7 = (BIGNUM *)0x0;
    pBVar6 = (BIGNUM *)0x0;
LAB_001017c6:
    BN_free(pBVar6);
    BN_free(pBVar7);
    BN_free(pBVar8);
LAB_001017de:
    BN_free(a);
  }
  else {
    pBVar6 = BN_new();
    iVar1 = test_ptr("test/dhtest.c",0x3a,"p = BN_new()",pBVar6);
    if (iVar1 == 0) {
      a = (BIGNUM *)0x0;
      pBVar8 = (BIGNUM *)0x0;
      pBVar7 = (BIGNUM *)0x0;
      goto LAB_001017c6;
    }
    pBVar7 = BN_new();
    iVar1 = test_ptr("test/dhtest.c",0x3b,"q = BN_new()",pBVar7);
    if (iVar1 == 0) {
      a = (BIGNUM *)0x0;
      pBVar8 = (BIGNUM *)0x0;
      goto LAB_001017c6;
    }
    pBVar8 = BN_new();
    a = (BIGNUM *)0x0;
    iVar1 = test_ptr("test/dhtest.c",0x3c,"g = BN_new()",pBVar8);
    if (iVar1 == 0) goto LAB_001017c6;
    a = BN_new();
    iVar1 = test_ptr("test/dhtest.c",0x3d,"priv_key = BN_new()",a);
    if (iVar1 == 0) goto LAB_001017c6;
    iVar1 = BN_set_word(pBVar6,0xfef);
    iVar1 = test_true("test/dhtest.c",0x45,"BN_set_word(p, 4079L)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_001017c6;
    iVar1 = BN_set_word(pBVar7,0x7f7);
    iVar1 = test_true("test/dhtest.c",0x46,"BN_set_word(q, 2039L)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_001017c6;
    iVar1 = BN_set_word(pBVar8,3);
    iVar1 = test_true("test/dhtest.c",0x47,"BN_set_word(g, 3L)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_001017c6;
    iVar1 = DH_set0_pqg(dh,pBVar6,pBVar7,pBVar8);
    iVar1 = test_true("test/dhtest.c",0x48,"DH_set0_pqg(dh, p, q, g)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_001017c6;
    iVar1 = DH_check(dh,(int *)&local_94);
    iVar1 = test_true("test/dhtest.c",0x4c,"DH_check(dh, &i)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_001017de;
    local_94 = local_94 ^ 0x80;
    iVar1 = test_false("test/dhtest.c",0x4f,"i & DH_CHECK_P_NOT_PRIME",local_94 & 1);
    if (iVar1 == 0) goto LAB_001017de;
    iVar1 = test_false("test/dhtest.c",0x50,"i & DH_CHECK_P_NOT_SAFE_PRIME",local_94 >> 1 & 1);
    if (iVar1 == 0) goto LAB_001017de;
    iVar1 = test_false("test/dhtest.c",0x51,"i & DH_UNABLE_TO_CHECK_GENERATOR",local_94 >> 2 & 1);
    if (iVar1 == 0) goto LAB_001017de;
    iVar1 = test_false("test/dhtest.c",0x52,"i & DH_NOT_SUITABLE_GENERATOR",local_94 >> 3 & 1);
    if (iVar1 == 0) goto LAB_001017de;
    iVar1 = test_false("test/dhtest.c",0x53,"i & DH_CHECK_Q_NOT_PRIME",local_94 >> 4 & 1);
    if (iVar1 == 0) goto LAB_001017de;
    iVar1 = test_false("test/dhtest.c",0x54,"i & DH_CHECK_INVALID_Q_VALUE",local_94 >> 5 & 1);
    if (iVar1 == 0) goto LAB_001017de;
    iVar1 = test_false("test/dhtest.c",0x55,"i & DH_CHECK_INVALID_J_VALUE",local_94 >> 6 & 1);
    if (iVar1 == 0) goto LAB_001017de;
    iVar1 = test_false("test/dhtest.c",0x56,"i & DH_MODULUS_TOO_SMALL",local_94 >> 7 & 1);
    if (iVar1 == 0) goto LAB_001017de;
    iVar1 = test_false("test/dhtest.c",0x57,"i & DH_MODULUS_TOO_LARGE",local_94 >> 8 & 1);
    if (iVar1 == 0) goto LAB_001017de;
    iVar1 = test_false("test/dhtest.c",0x58,&_LC40,local_94 != 0);
    if (iVar1 == 0) goto LAB_001017de;
    DH_get0_pqg(dh,&local_90,&local_88,&local_80);
    iVar1 = test_ptr_eq("test/dhtest.c",0x5d,&_LC103,&_LC16,local_90,pBVar6);
    if (iVar1 == 0) goto LAB_001017de;
    iVar1 = test_ptr_eq("test/dhtest.c",0x5e,&_LC104,&_LC17,local_88,pBVar7);
    if (iVar1 == 0) goto LAB_001017de;
    iVar1 = test_ptr_eq("test/dhtest.c",0x5f,&_LC105,&_LC18,local_80,pBVar8);
    if (iVar1 == 0) goto LAB_001017de;
    uVar9 = DH_get0_p(dh);
    iVar1 = test_ptr_eq("test/dhtest.c",99,"DH_get0_p(dh)",&_LC103,uVar9,local_90);
    if (iVar1 == 0) goto LAB_001017de;
    uVar9 = DH_get0_q(dh);
    iVar1 = test_ptr_eq("test/dhtest.c",100,"DH_get0_q(dh)",&_LC104,uVar9,local_88);
    if (iVar1 == 0) goto LAB_001017de;
    uVar9 = DH_get0_g(dh);
    iVar1 = test_ptr_eq("test/dhtest.c",0x65,"DH_get0_g(dh)",&_LC105,uVar9,local_80);
    if (iVar1 == 0) goto LAB_001017de;
    iVar1 = BN_set_word(a,0x4d2);
    iVar1 = test_true("test/dhtest.c",0x69,"BN_set_word(priv_key, 1234L)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_001017de;
    iVar1 = DH_set0_key(dh,0,a);
    iVar1 = test_true("test/dhtest.c",0x6a,"DH_set0_key(dh, NULL, priv_key)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_001017de;
    DH_get0_key(dh,&local_78,&local_70);
    iVar1 = test_ptr_eq("test/dhtest.c",0x6f,"pub_key2",&_LC111,local_78,0);
    if (iVar1 != 0) {
      iVar1 = test_ptr_eq("test/dhtest.c",0x70,"priv_key2","priv_key",local_70,a);
      if (iVar1 != 0) {
        uVar9 = DH_get0_pub_key(dh);
        iVar1 = test_ptr_eq("test/dhtest.c",0x74,"DH_get0_pub_key(dh)","pub_key2",uVar9,local_78);
        if (iVar1 != 0) {
          DH_get0_priv_key(dh);
          iVar1 = test_ptr_eq("test/dhtest.c",0x75,"DH_get0_priv_key(dh)","priv_key2");
          if (iVar1 != 0) {
            iVar1 = DH_generate_key(dh);
            iVar1 = test_false("test/dhtest.c",0x79,"DH_generate_key(dh)",iVar1 != 0);
            if (iVar1 != 0) {
              ERR_clear_error();
              pBVar8 = BN_copy(pBVar7,pBVar6);
              iVar1 = test_ptr("test/dhtest.c",0x7f,"BN_copy(q, p)",pBVar8);
              if (iVar1 != 0) {
                pBVar8 = BN_value_one();
                iVar1 = BN_add(pBVar7,pBVar7,pBVar8);
                iVar1 = test_true("test/dhtest.c",0x7f,"BN_add(q, q, BN_value_one())",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = DH_check(dh,(int *)&local_94);
                  iVar1 = test_true("test/dhtest.c",0x82,"DH_check(dh, &i)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = test_true("test/dhtest.c",0x84,"i & DH_CHECK_INVALID_Q_VALUE",
                                      local_94 >> 5 & 1);
                    if (iVar1 != 0) {
                      iVar1 = test_false("test/dhtest.c",0x85,"i & DH_CHECK_Q_NOT_PRIME",
                                         local_94 >> 4 & 1);
                      if (iVar1 != 0) {
                        iVar1 = BN_set_word(pBVar6,1);
                        iVar1 = test_true("test/dhtest.c",0x89,"BN_set_word(p, 1)",iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = BN_lshift(pBVar6,pBVar6,0x8000);
                          iVar1 = test_true("test/dhtest.c",0x8a,
                                            "BN_lshift(p, p, OPENSSL_DH_CHECK_MAX_MODULUS_BITS)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = DH_check(dh,(int *)&local_94);
                            iVar1 = test_false("test/dhtest.c",0x90,"DH_check(dh, &i)",iVar1 != 0);
                            if (iVar1 != 0) {
                              ERR_clear_error();
                              local_b0 = (BN_GENCB *)BN_GENCB_new();
                              iVar1 = test_ptr("test/dhtest.c",0x9b,"_cb = BN_GENCB_new()",local_b0)
                              ;
                              if (iVar1 == 0) {
                                key_00 = (uchar *)0x0;
                                key = (uchar *)0x0;
                                local_d0 = (uchar *)0x0;
                                pBVar8 = (BIGNUM *)0x0;
                                pBVar7 = (BIGNUM *)0x0;
                                pBVar6 = (BIGNUM *)0x0;
                                local_c8 = (DH *)0x0;
                                local_c0 = (DH *)0x0;
                                local_b8 = (DH *)0x0;
                                uVar2 = 0;
                                goto LAB_00101822;
                              }
                              BN_GENCB_set(local_b0,0x100000,0);
                              local_b8 = DH_new();
                              iVar1 = test_ptr("test/dhtest.c",0x9e,"a = DH_new()");
                              if (iVar1 == 0) {
LAB_00102138:
                                uVar2 = 0;
                              }
                              else {
                                DH_generate_parameters_ex(local_b8,0x200,5,local_b0);
                                iVar1 = test_true("test/dhtest.c",0x9f,
                                                  "DH_generate_parameters_ex(a, 512, DH_GENERATOR_5, _cb)"
                                                 );
                                if (iVar1 == 0) goto LAB_00102138;
                                DH_check(local_b8,(int *)&local_94);
                                uVar2 = test_true("test/dhtest.c",0xa4,"DH_check(a, &i)");
                                if (uVar2 != 0) {
                                  iVar1 = test_false("test/dhtest.c",0xa6,"i & DH_CHECK_P_NOT_PRIME"
                                                    );
                                  if (iVar1 != 0) {
                                    iVar1 = test_false("test/dhtest.c",0xa7,
                                                       "i & DH_CHECK_P_NOT_SAFE_PRIME");
                                    if (iVar1 != 0) {
                                      iVar1 = test_false("test/dhtest.c",0xa8,
                                                         "i & DH_UNABLE_TO_CHECK_GENERATOR");
                                      if (iVar1 != 0) {
                                        iVar1 = test_false("test/dhtest.c",0xa9,
                                                           "i & DH_NOT_SUITABLE_GENERATOR");
                                        if (iVar1 != 0) {
                                          iVar1 = test_false("test/dhtest.c",0xaa,
                                                             "i & DH_CHECK_Q_NOT_PRIME");
                                          if (iVar1 != 0) {
                                            iVar1 = test_false("test/dhtest.c",0xab,
                                                               "i & DH_CHECK_INVALID_Q_VALUE");
                                            if (iVar1 != 0) {
                                              iVar1 = test_false("test/dhtest.c",0xac,
                                                                 "i & DH_CHECK_INVALID_J_VALUE");
                                              if (iVar1 != 0) {
                                                iVar1 = test_false("test/dhtest.c",0xad,
                                                                   "i & DH_MODULUS_TOO_SMALL");
                                                if (iVar1 != 0) {
                                                  iVar1 = test_false("test/dhtest.c",0xae,
                                                                     "i & DH_MODULUS_TOO_LARGE");
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_false("test/dhtest.c",0xaf,&_LC40);
                                                    if (iVar1 != 0) {
                                                      DH_get0_pqg(local_b8,&local_68,0,&local_60);
                                                      local_c0 = DH_new();
                                                      uVar2 = test_ptr("test/dhtest.c",0xb5,
                                                                       "b = DH_new()",local_c0);
                                                      if (uVar2 == 0) {
LAB_001026c8:
                                                        key_00 = (uchar *)0x0;
                                                        key = (uchar *)0x0;
                                                        local_d0 = (uchar *)0x0;
                                                        pBVar8 = (BIGNUM *)0x0;
                                                        pBVar7 = (BIGNUM *)0x0;
                                                        pBVar6 = (BIGNUM *)0x0;
                                                        local_c8 = (DH *)0x0;
                                                      }
                                                      else {
                                                        pBVar6 = BN_dup(local_68);
                                                        iVar1 = test_ptr("test/dhtest.c",0xb8,
                                                                         "bp = BN_dup(ap)",pBVar6);
                                                        if (iVar1 == 0) {
                                                          key_00 = (uchar *)0x0;
                                                          key = (uchar *)0x0;
                                                          local_d0 = (uchar *)0x0;
                                                          pBVar7 = (BIGNUM *)0x0;
                                                          pBVar8 = (BIGNUM *)0x0;
                                                          local_c8 = (DH *)0x0;
                                                          uVar2 = 0;
                                                          goto LAB_00101822;
                                                        }
                                                        pBVar7 = BN_dup(local_60);
                                                        uVar2 = test_ptr("test/dhtest.c",0xb9,
                                                                         "bg = BN_dup(ag)",pBVar7);
                                                        if (uVar2 != 0) {
                                                          iVar1 = DH_set0_pqg(local_c0,pBVar6,0,
                                                                              pBVar7);
                                                          uVar2 = test_true("test/dhtest.c",0xba,
                                                                                                                                                        
                                                  "DH_set0_pqg(b, bp, NULL, bg)",iVar1 != 0);
                                                  if (uVar2 != 0) {
                                                    uVar2 = DH_generate_key(local_b8);
                                                    if (uVar2 != 0) {
                                                      DH_get0_key(local_b8,&local_58,0);
                                                      uVar2 = DH_generate_key(local_c0);
                                                      if (uVar2 != 0) {
                                                        DH_get0_key(local_c0,&local_50,&local_48);
                                                        local_c8 = DHparams_dup(local_c0);
                                                        iVar1 = test_ptr("test/dhtest.c",0xcb,
                                                                         "c = DHparams_dup(b)",
                                                                         local_c8);
                                                        if (iVar1 == 0) {
                                                          key_00 = (uchar *)0x0;
                                                          key = (uchar *)0x0;
                                                          pBVar8 = (BIGNUM *)0x0;
                                                          local_d0 = (uchar *)0x0;
                                                          pBVar7 = (BIGNUM *)0x0;
                                                          pBVar6 = (BIGNUM *)0x0;
                                                          uVar2 = 0;
                                                          goto LAB_00101822;
                                                        }
                                                        pBVar8 = BN_dup(local_48);
                                                        uVar2 = test_ptr("test/dhtest.c",0xcc,
                                                                                                                                                  
                                                  "cpriv_key = BN_dup(bpriv_key)");
                                                  if (uVar2 != 0) {
                                                    DH_set0_key(local_c8,0,pBVar8);
                                                    uVar2 = test_true("test/dhtest.c",0xcd,
                                                                                                                                            
                                                  "DH_set0_key(c, NULL, cpriv_key)");
                                                  if (uVar2 != 0) {
                                                    iVar1 = DH_size(local_b8);
                                                    key = (uchar *)CRYPTO_malloc(iVar1,
                                                  "test/dhtest.c",0xd2);
                                                  uVar2 = test_ptr("test/dhtest.c",0xd2,
                                                                   "abuf = OPENSSL_malloc(alen)",key
                                                                  );
                                                  if (uVar2 != 0) {
                                                    iVar1 = DH_compute_key(key,local_50,local_b8);
                                                    uVar2 = test_true("test/dhtest.c",0xd3,
                                                                                                                                            
                                                  "(aout = DH_compute_key(abuf, bpub_key, a)) != -1"
                                                  ,iVar1 != -1);
                                                  if (uVar2 != 0) {
                                                    iVar3 = DH_size(local_c0);
                                                    local_d0 = (uchar *)CRYPTO_malloc(iVar3,
                                                  "test/dhtest.c",0xd7);
                                                  uVar2 = test_ptr("test/dhtest.c",0xd7,
                                                                   "bbuf = OPENSSL_malloc(blen)",
                                                                   local_d0);
                                                  if (uVar2 != 0) {
                                                    iVar3 = DH_compute_key(local_d0,local_58,
                                                                           local_c0);
                                                    uVar2 = test_true("test/dhtest.c",0xd8,
                                                                                                                                            
                                                  "(bout = DH_compute_key(bbuf, apub_key, b)) != -1"
                                                  ,iVar3 != -1);
                                                  if (uVar2 != 0) {
                                                    iVar4 = DH_size(local_c8);
                                                    key_00 = (uchar *)CRYPTO_malloc(iVar4,
                                                  "test/dhtest.c",0xdc);
                                                  iVar4 = test_ptr("test/dhtest.c",0xdc,
                                                                   "cbuf = OPENSSL_malloc(clen)",
                                                                   key_00);
                                                  if (iVar4 != 0) {
                                                    iVar4 = DH_compute_key(key_00,local_58,local_c8)
                                                    ;
                                                    iVar5 = test_true("test/dhtest.c",0xdd,
                                                                                                                                            
                                                  "(cout = DH_compute_key(cbuf, apub_key, c)) != -1"
                                                  ,iVar4 != -1);
                                                  if (iVar5 == 0) {
                                                    pBVar8 = (BIGNUM *)0x0;
                                                    pBVar7 = (BIGNUM *)0x0;
                                                    pBVar6 = (BIGNUM *)0x0;
                                                    uVar2 = 0;
                                                    goto LAB_00101822;
                                                  }
                                                  iVar5 = test_true("test/dhtest.c",0xe0,
                                                                    "aout >= 20",0x13 < iVar1);
                                                  if (iVar5 != 0) {
                                                    iVar3 = test_mem_eq("test/dhtest.c",0xe1,&_LC50,
                                                                        &_LC49,key,(long)iVar1,
                                                                        local_d0,(long)iVar3);
                                                    if (iVar3 != 0) {
                                                      iVar1 = test_mem_eq("test/dhtest.c",0xe2,
                                                                          &_LC50,&_LC135,key,
                                                                          (long)iVar1,key_00,
                                                                          (long)iVar4);
                                                      pBVar8 = (BIGNUM *)0x0;
                                                      pBVar7 = (BIGNUM *)0x0;
                                                      pBVar6 = (BIGNUM *)0x0;
                                                      uVar2 = (uint)(iVar1 != 0);
                                                      goto LAB_00101822;
                                                    }
                                                  }
                                                  }
                                                  uVar2 = 0;
                                                  pBVar8 = (BIGNUM *)0x0;
                                                  pBVar7 = (BIGNUM *)0x0;
                                                  pBVar6 = (BIGNUM *)0x0;
                                                  goto LAB_00101822;
                                                  }
                                                  }
                                                  key_00 = (uchar *)0x0;
                                                  pBVar8 = (BIGNUM *)0x0;
                                                  pBVar7 = (BIGNUM *)0x0;
                                                  pBVar6 = (BIGNUM *)0x0;
                                                  goto LAB_00101822;
                                                  }
                                                  }
                                                  key_00 = (uchar *)0x0;
                                                  pBVar8 = (BIGNUM *)0x0;
                                                  pBVar7 = (BIGNUM *)0x0;
                                                  local_d0 = (uchar *)0x0;
                                                  pBVar6 = (BIGNUM *)0x0;
                                                  goto LAB_00101822;
                                                  }
                                                  }
                                                  key_00 = (uchar *)0x0;
                                                  key = (uchar *)0x0;
                                                  pBVar7 = (BIGNUM *)0x0;
                                                  local_d0 = (uchar *)0x0;
                                                  pBVar6 = (BIGNUM *)0x0;
                                                  goto LAB_00101822;
                                                  }
                                                  }
                                                  goto LAB_001026c8;
                                                  }
                                                  }
                                                  key_00 = (uchar *)0x0;
                                                  key = (uchar *)0x0;
                                                  local_d0 = (uchar *)0x0;
                                                  pBVar8 = (BIGNUM *)0x0;
                                                  local_c8 = (DH *)0x0;
                                                  }
                                                  goto LAB_00101822;
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
                                  goto LAB_00102138;
                                }
                              }
                              key_00 = (uchar *)0x0;
                              key = (uchar *)0x0;
                              local_d0 = (uchar *)0x0;
                              pBVar8 = (BIGNUM *)0x0;
                              pBVar7 = (BIGNUM *)0x0;
                              pBVar6 = (BIGNUM *)0x0;
                              local_c8 = (DH *)0x0;
                              local_c0 = (DH *)0x0;
                              goto LAB_00101822;
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
  local_d0 = (uchar *)0x0;
  uVar2 = 0;
  key_00 = (uchar *)0x0;
  pBVar8 = (BIGNUM *)0x0;
  local_c8 = (DH *)0x0;
  key = (uchar *)0x0;
  pBVar7 = (BIGNUM *)0x0;
  pBVar6 = (BIGNUM *)0x0;
  local_c0 = (DH *)0x0;
  local_b8 = (DH *)0x0;
  local_b0 = (BN_GENCB *)0x0;
LAB_00101822:
  CRYPTO_free(key);
  CRYPTO_free(local_d0);
  CRYPTO_free(key_00);
  DH_free(local_c0);
  DH_free(local_b8);
  DH_free(local_c8);
  BN_free(pBVar6);
  BN_free(pBVar7);
  BN_free(pBVar8);
  BN_GENCB_free(local_b0);
  DH_free(dh);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("dh_test",dh_test);
  add_test("dh_computekey_range_test",dh_computekey_range_test);
  add_test("rfc5114_test",rfc5114_test);
  add_test("rfc7919_test",rfc7919_test);
  add_all_tests("dh_test_prime_groups",dh_test_prime_groups,9,1);
  add_test("dh_get_nid",dh_get_nid);
  add_test("dh_load_pkcs3_namedgroup_privlen_test",dh_load_pkcs3_namedgroup_privlen_test);
  add_test("dh_rfc5114_fix_nid_test",dh_rfc5114_fix_nid_test);
  add_test("dh_set_dh_nid_test",dh_set_dh_nid_test);
  return 1;
}



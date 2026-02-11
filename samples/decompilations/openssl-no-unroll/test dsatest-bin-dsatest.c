
uint test_dsa_default_paramgen_validate(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  long in_FS_OFFSET;
  EVP_PKEY *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC0,0);
  iVar1 = test_ptr("test/dsatest.c",0x13a,
                   "gen_ctx = EVP_PKEY_CTX_new_from_name(NULL, \"DSA\", NULL)",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_paramgen_init(ctx);
    iVar1 = test_int_gt("test/dsatest.c",0x13b,"EVP_PKEY_paramgen_init(gen_ctx)",&_LC3,iVar1,0);
    if (iVar1 != 0) {
      if (param_1 != 0) {
        iVar1 = EVP_PKEY_CTX_set_dsa_paramgen_bits(ctx,0x200);
        iVar1 = test_true("test/dsatest.c",0x13d,"EVP_PKEY_CTX_set_dsa_paramgen_bits(gen_ctx, 512)",
                          iVar1 != 0);
        if (iVar1 == 0) goto LAB_0010005f;
      }
      uVar2 = EVP_PKEY_generate(ctx,&local_38);
      iVar1 = test_int_gt("test/dsatest.c",0x13e,"EVP_PKEY_generate(gen_ctx, &params)",&_LC3,uVar2,0
                         );
      if (iVar1 != 0) {
        ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,local_38,0);
        uVar3 = test_ptr("test/dsatest.c",0x13f,
                         "check_ctx = EVP_PKEY_CTX_new_from_pkey(NULL, params, NULL)",ctx_00);
        if (uVar3 != 0) {
          uVar2 = EVP_PKEY_param_check(ctx_00);
          iVar1 = test_int_gt("test/dsatest.c",0x140,"EVP_PKEY_param_check(check_ctx)",&_LC3,uVar2,0
                             );
          uVar3 = (uint)(iVar1 != 0);
        }
        goto LAB_00100064;
      }
    }
  }
LAB_0010005f:
  uVar3 = 0;
  ctx_00 = (EVP_PKEY_CTX *)0x0;
LAB_00100064:
  EVP_PKEY_free(local_38);
  EVP_PKEY_CTX_free(ctx_00);
  EVP_PKEY_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_dsa_sig_neg_param(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *b;
  BIGNUM *b_00;
  BIGNUM *b_01;
  BIGNUM *a;
  BIGNUM *a_00;
  DSA *dsa;
  long in_FS_OFFSET;
  uint local_90;
  uchar local_89;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_89 = '\0';
  b = BN_bin2bn(out_p,0x40,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/dsatest.c",0x1bb,"p = BN_bin2bn(out_p, sizeof(out_p), NULL)",b);
  if (iVar1 == 0) {
    a = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    b_01 = (BIGNUM *)0x0;
    b_00 = (BIGNUM *)0x0;
    dsa = (DSA *)0x0;
  }
  else {
    b_00 = BN_bin2bn(out_q,0x14,(BIGNUM *)0x0);
    iVar1 = test_ptr("test/dsatest.c",0x1bc,"q = BN_bin2bn(out_q, sizeof(out_q), NULL)",b_00);
    if (iVar1 == 0) {
      a = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      b_01 = (BIGNUM *)0x0;
      dsa = (DSA *)0x0;
    }
    else {
      b_01 = BN_bin2bn(out_g,0x40,(BIGNUM *)0x0);
      iVar1 = test_ptr("test/dsatest.c",0x1bd,"g = BN_bin2bn(out_g, sizeof(out_g), NULL)",b_01);
      if (iVar1 == 0) {
        a = (BIGNUM *)0x0;
        a_00 = (BIGNUM *)0x0;
        dsa = (DSA *)0x0;
      }
      else {
        a = BN_bin2bn(out_pub_11,0x40,(BIGNUM *)0x0);
        iVar1 = test_ptr("test/dsatest.c",0x1be,"pub = BN_bin2bn(out_pub, sizeof(out_pub), NULL)",a)
        ;
        if (iVar1 == 0) {
          a_00 = (BIGNUM *)0x0;
          dsa = (DSA *)0x0;
        }
        else {
          a_00 = BN_bin2bn(out_priv_10,0x14,(BIGNUM *)0x0);
          iVar1 = test_ptr("test/dsatest.c",0x1bf,
                           "priv = BN_bin2bn(out_priv, sizeof(out_priv), NULL)",a_00);
          dsa = (DSA *)0x0;
          if (iVar1 != 0) {
            dsa = DSA_new();
            iVar1 = test_ptr("test/dsatest.c",0x1c0,"dsa = DSA_new()",dsa);
            if (iVar1 != 0) {
              iVar1 = DSA_set0_pqg(dsa,b,b_00,b_01);
              iVar1 = test_true("test/dsatest.c",0x1c3,"DSA_set0_pqg(dsa, p, q, g)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = DSA_set0_key(dsa,a,a_00);
                uVar2 = test_true("test/dsatest.c",0x1c7,"DSA_set0_key(dsa, pub, priv)",iVar1 != 0);
                if (uVar2 != 0) {
                  BN_set_negative(b,1);
                  iVar1 = DSA_sign(0,&local_89,1,local_88,&local_90,dsa);
                  iVar1 = test_false("test/dsatest.c",0x1cc,
                                     "DSA_sign(0, msg, sizeof(msg), signature, &signature_len, dsa)"
                                     ,iVar1 != 0);
                  if (iVar1 != 0) {
                    BN_set_negative(b,0);
                    BN_set_negative(b_00,1);
                    iVar1 = DSA_sign(0,&local_89,1,local_88,&local_90,dsa);
                    iVar1 = test_false("test/dsatest.c",0x1d1,
                                       "DSA_sign(0, msg, sizeof(msg), signature, &signature_len, dsa)"
                                       ,iVar1 != 0);
                    if (iVar1 != 0) {
                      BN_set_negative(b_00,0);
                      BN_set_negative(b_01,1);
                      iVar1 = DSA_sign(0,&local_89,1,local_88,&local_90,dsa);
                      iVar1 = test_false("test/dsatest.c",0x1d6,
                                         "DSA_sign(0, msg, sizeof(msg), signature, &signature_len, dsa)"
                                         ,iVar1 != 0);
                      if (iVar1 != 0) {
                        BN_set_negative(b,1);
                        BN_set_negative(b_00,1);
                        BN_set_negative(b_01,1);
                        iVar1 = DSA_sign(0,&local_89,1,local_88,&local_90,dsa);
                        iVar1 = test_false("test/dsatest.c",0x1dc,
                                           "DSA_sign(0, msg, sizeof(msg), signature, &signature_len, dsa)"
                                           ,iVar1 != 0);
                        uVar2 = (uint)(iVar1 != 0);
                        a = (BIGNUM *)0x0;
                        a_00 = (BIGNUM *)0x0;
                        goto LAB_001005c8;
                      }
                    }
                  }
                  a = (BIGNUM *)0x0;
                  a_00 = (BIGNUM *)0x0;
                  uVar2 = 0;
                }
LAB_001005c8:
                BN_free(a);
                BN_free(a_00);
                goto LAB_0010025c;
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
  BN_free(a);
  BN_free(a_00);
  BN_free(b_01);
  BN_free(b_00);
  BN_free(b);
LAB_0010025c:
  DSA_free(dsa);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_dsa_sig_infinite_loop(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  BIGNUM *a_03;
  BIGNUM *a_04;
  long in_FS_OFFSET;
  DSA *local_b8;
  BIGNUM *local_b0;
  BIGNUM *local_a8;
  uint local_94;
  uint local_90;
  uchar local_89;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_89 = '\0';
  a = BN_bin2bn(out_p,0x40,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/dsatest.c",0x162,"p = BN_bin2bn(out_p, sizeof(out_p), NULL)",a);
  if (iVar1 == 0) {
    local_b8 = (DSA *)0x0;
    a_04 = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    local_b0 = (BIGNUM *)0x0;
    a_03 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    local_a8 = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_0010069e;
  }
  a_00 = BN_bin2bn(out_q,0x14,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/dsatest.c",0x163,"q = BN_bin2bn(out_q, sizeof(out_q), NULL)",a_00);
  if (iVar1 == 0) {
    a_04 = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    a_03 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    local_b0 = (BIGNUM *)0x0;
    local_a8 = (BIGNUM *)0x0;
    local_b8 = (DSA *)0x0;
    uVar2 = 0;
    goto LAB_0010069e;
  }
  a_01 = BN_bin2bn(out_g,0x40,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/dsatest.c",0x164,"g = BN_bin2bn(out_g, sizeof(out_g), NULL)",a_01);
  if (iVar1 == 0) {
    local_b0 = (BIGNUM *)0x0;
    a_04 = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    a_03 = (BIGNUM *)0x0;
    local_a8 = (BIGNUM *)0x0;
    local_b8 = (DSA *)0x0;
    uVar2 = 0;
    goto LAB_0010069e;
  }
  a_02 = BN_bin2bn(out_pub_9,0x40,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/dsatest.c",0x165,"pub = BN_bin2bn(out_pub, sizeof(out_pub), NULL)",a_02);
  if (iVar1 == 0) {
    local_b0 = (BIGNUM *)0x0;
    a_04 = (BIGNUM *)0x0;
    a_03 = (BIGNUM *)0x0;
    local_a8 = (BIGNUM *)0x0;
    local_b8 = (DSA *)0x0;
    uVar2 = 0;
    goto LAB_0010069e;
  }
  a_03 = BN_bin2bn(out_priv_8,0x14,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/dsatest.c",0x166,"priv = BN_bin2bn(out_priv, sizeof(out_priv), NULL)",a_03)
  ;
  if (iVar1 == 0) {
    local_b0 = (BIGNUM *)0x0;
    a_04 = (BIGNUM *)0x0;
    local_a8 = (BIGNUM *)0x0;
    local_b8 = (DSA *)0x0;
    uVar2 = 0;
    goto LAB_0010069e;
  }
  local_a8 = BN_dup(a_03);
  iVar1 = test_ptr("test/dsatest.c",0x167,"priv2 = BN_dup(priv)",local_a8);
  if (iVar1 == 0) {
    local_b0 = (BIGNUM *)0x0;
    a_04 = (BIGNUM *)0x0;
    local_b8 = (DSA *)0x0;
    uVar2 = 0;
    goto LAB_0010069e;
  }
  a_04 = BN_new();
  uVar2 = test_ptr("test/dsatest.c",0x168,"badq = BN_new()",a_04);
  if (uVar2 != 0) {
    iVar1 = BN_set_word(a_04,1);
    uVar2 = test_true("test/dsatest.c",0x169,"BN_set_word(badq, 1)",iVar1 != 0);
    if (uVar2 != 0) {
      local_b0 = BN_new();
      uVar2 = test_ptr("test/dsatest.c",0x16a,"badpriv = BN_new()",local_b0);
      local_b8 = (DSA *)0x0;
      if (uVar2 == 0) goto LAB_0010069e;
      iVar1 = BN_set_word(local_b0,0);
      uVar2 = test_true("test/dsatest.c",0x16b,"BN_set_word(badpriv, 0)",iVar1 != 0);
      if (uVar2 == 0) goto LAB_0010069e;
      local_b8 = DSA_new();
      uVar2 = test_ptr("test/dsatest.c",0x16c,"dsa = DSA_new()",local_b8);
      if (uVar2 == 0) goto LAB_0010069e;
      iVar1 = DSA_set0_pqg(local_b8,a,a_00,a_01);
      uVar2 = test_true("test/dsatest.c",0x16f,"DSA_set0_pqg(dsa, p, q, g)",iVar1 != 0);
      if (uVar2 == 0) goto LAB_0010069e;
      iVar1 = DSA_set0_key(local_b8,a_02,a_03);
      uVar2 = test_true("test/dsatest.c",0x173,"DSA_set0_key(dsa, pub, priv)",iVar1 != 0);
      if (uVar2 == 0) {
LAB_00100d1c:
        a_01 = (BIGNUM *)0x0;
        a_00 = (BIGNUM *)0x0;
        a = (BIGNUM *)0x0;
      }
      else {
        iVar1 = DSA_size(local_b8);
        iVar1 = test_int_le("test/dsatest.c",0x177,"DSA_size(dsa)","sizeof(signature)",iVar1,0x40);
        if (iVar1 != 0) {
          iVar1 = DSA_sign(0,&local_89,1,(uchar *)0x0,&local_94,local_b8);
          iVar1 = test_true("test/dsatest.c",0x17b,
                            "DSA_sign(0, msg, sizeof(msg), NULL, &signature_len0, dsa)",iVar1 != 0);
          if (iVar1 != 0) {
            uVar2 = test_int_gt("test/dsatest.c",0x17c,"signature_len0",&_LC3,local_94,0);
            if (uVar2 == 0) {
LAB_00100d16:
              a_02 = (BIGNUM *)0x0;
              a_03 = (BIGNUM *)0x0;
              goto LAB_00100d1c;
            }
            iVar1 = DSA_sign(0,&local_89,1,local_88,&local_90,local_b8);
            iVar1 = test_true("test/dsatest.c",0x17f,
                              "DSA_sign(0, msg, sizeof(msg), signature, &signature_len, dsa)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = test_int_gt("test/dsatest.c",0x180,"signature_len",&_LC3,local_90,0);
              if (iVar1 != 0) {
                iVar1 = test_int_le("test/dsatest.c",0x181,"signature_len","signature_len0",local_90
                                    ,local_94);
                if (iVar1 != 0) {
                  iVar1 = DSA_set0_key(local_b8,0,local_b0);
                  iVar1 = test_true("test/dsatest.c",0x185,"DSA_set0_key(dsa, NULL, badpriv)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = DSA_sign(0,&local_89,1,local_88,&local_90,local_b8);
                    iVar1 = test_false("test/dsatest.c",0x188,
                                       "DSA_sign(0, msg, sizeof(msg), signature, &signature_len, dsa)"
                                       ,iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = DSA_set0_key(local_b8,0,local_a8);
                      iVar1 = test_true("test/dsatest.c",0x18c,"DSA_set0_key(dsa, NULL, priv2)",
                                        iVar1 != 0);
                      if (iVar1 != 0) {
                        DSA_set0_pqg(local_b8,0,a_04,0);
                        iVar1 = test_true("test/dsatest.c",399,"DSA_set0_pqg(dsa, NULL, badq, NULL)"
                                         );
                        if (iVar1 == 0) {
                          uVar2 = 0;
                        }
                        else {
                          iVar1 = DSA_sign(0,&local_89,1,local_88,&local_90,local_b8);
                          iVar1 = test_false("test/dsatest.c",0x192,
                                             "DSA_sign(0, msg, sizeof(msg), signature, &signature_len, dsa)"
                                             ,iVar1 != 0);
                          a_04 = (BIGNUM *)0x0;
                          uVar2 = (uint)(iVar1 != 0);
                        }
                        local_b0 = (BIGNUM *)0x0;
                        local_a8 = (BIGNUM *)0x0;
                        goto LAB_00100d16;
                      }
                    }
                    local_b0 = (BIGNUM *)0x0;
                  }
                }
              }
            }
          }
        }
        a_02 = (BIGNUM *)0x0;
        a_03 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        a_00 = (BIGNUM *)0x0;
        a = (BIGNUM *)0x0;
        uVar2 = 0;
      }
      goto LAB_0010069e;
    }
  }
  local_b0 = (BIGNUM *)0x0;
  local_b8 = (DSA *)0x0;
LAB_0010069e:
  BN_free(a_04);
  BN_free(local_b0);
  BN_free(a_02);
  BN_free(a_03);
  BN_free(local_a8);
  BN_free(a_01);
  BN_free(a_00);
  BN_free(a);
  DSA_free(local_b8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint dsa_keygen_test(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar4;
  EVP_PKEY_CTX *ctx_00;
  long in_FS_OFFSET;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  EVP_PKEY *local_b8;
  EVP_PKEY *local_b0;
  BIGNUM *local_a8;
  BIGNUM *local_a0;
  BIGNUM *local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c4 = 0;
  local_b8 = (EVP_PKEY *)0x0;
  local_b0 = (EVP_PKEY *)0x0;
  local_a8 = (BIGNUM *)0x0;
  local_a0 = (BIGNUM *)0x0;
  local_98 = (BIGNUM *)0x0;
  local_c0 = 0;
  local_bc = 0;
  local_90 = 0;
  a = BN_bin2bn(expected_p_7,0x100,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/dsatest.c",0xf4,"p_in = BN_bin2bn(expected_p, sizeof(expected_p), NULL)",a)
  ;
  if (iVar1 == 0) {
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    uVar2 = 0;
  }
  else {
    a_00 = BN_bin2bn(expected_q_6,0x1c,(BIGNUM *)0x0);
    iVar1 = test_ptr("test/dsatest.c",0xf5,"q_in = BN_bin2bn(expected_q, sizeof(expected_q), NULL)",
                     a_00);
    if (iVar1 == 0) {
      a_01 = (BIGNUM *)0x0;
      ctx_00 = (EVP_PKEY_CTX *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      uVar2 = 0;
    }
    else {
      a_01 = BN_bin2bn(expected_g_5,0x100,(BIGNUM *)0x0);
      iVar1 = test_ptr("test/dsatest.c",0xf6,
                       "g_in = BN_bin2bn(expected_g, sizeof(expected_g), NULL)",a_01);
      if (iVar1 == 0) {
        ctx_00 = (EVP_PKEY_CTX *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        uVar2 = 0;
      }
      else {
        ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC0,0);
        iVar1 = test_ptr("test/dsatest.c",0xf8,
                         "pg_ctx = EVP_PKEY_CTX_new_from_name(NULL, \"DSA\", NULL)",ctx);
        if (iVar1 != 0) {
          ctx_00 = (EVP_PKEY_CTX *)0x0;
          iVar1 = EVP_PKEY_paramgen_init(ctx);
          uVar2 = test_int_gt("test/dsatest.c",0xf9,"EVP_PKEY_paramgen_init(pg_ctx)",&_LC3,iVar1,0);
          if (uVar2 == 0) goto LAB_00100dfd;
          uVar4 = EVP_PKEY_CTX_gettable_params(ctx);
          iVar1 = test_ptr("test/dsatest.c",0xfa,"EVP_PKEY_CTX_gettable_params(pg_ctx)",uVar4);
          if (iVar1 != 0) {
            uVar4 = EVP_PKEY_CTX_settable_params(ctx);
            iVar1 = test_ptr("test/dsatest.c",0xfb,
                             "settables = EVP_PKEY_CTX_settable_params(pg_ctx)",uVar4);
            if (iVar1 != 0) {
              uVar4 = OSSL_PARAM_locate_const(uVar4,"pbits");
              iVar1 = test_ptr("test/dsatest.c",0xfc,
                               "OSSL_PARAM_locate_const(settables, OSSL_PKEY_PARAM_FFC_PBITS)",uVar4
                              );
              if (iVar1 != 0) {
                iVar1 = EVP_PKEY_CTX_set_dsa_paramgen_type(ctx,"fips186_4");
                iVar1 = test_true("test/dsatest.c",0xfe,
                                  "EVP_PKEY_CTX_set_dsa_paramgen_type(pg_ctx, \"fips186_4\")",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = EVP_PKEY_CTX_set_dsa_paramgen_bits(ctx,0x800);
                  iVar1 = test_true("test/dsatest.c",0xff,
                                    "EVP_PKEY_CTX_set_dsa_paramgen_bits(pg_ctx, 2048)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = EVP_PKEY_CTX_set_dsa_paramgen_q_bits(ctx,0xe0);
                    iVar1 = test_true("test/dsatest.c",0x100,
                                      "EVP_PKEY_CTX_set_dsa_paramgen_q_bits(pg_ctx, 224)",iVar1 != 0
                                     );
                    if (iVar1 != 0) {
                      iVar1 = EVP_PKEY_CTX_set_dsa_paramgen_seed(ctx,seed_data_4,0x1c);
                      iVar1 = test_true("test/dsatest.c",0x101,
                                        "EVP_PKEY_CTX_set_dsa_paramgen_seed(pg_ctx, seed_data, sizeof(seed_data))"
                                        ,iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = EVP_PKEY_CTX_set_dsa_paramgen_md_props(ctx,"SHA256",&_LC45);
                        iVar1 = test_true("test/dsatest.c",0x103,
                                          "EVP_PKEY_CTX_set_dsa_paramgen_md_props(pg_ctx, \"SHA256\", \"\")"
                                          ,iVar1 != 0);
                        if (iVar1 != 0) {
                          uVar3 = EVP_PKEY_generate(ctx,&local_b8);
                          iVar1 = test_int_gt("test/dsatest.c",0x105,
                                              "EVP_PKEY_generate(pg_ctx, &param_key)",&_LC3,uVar3,0)
                          ;
                          if (iVar1 != 0) {
                            ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,local_b8,0);
                            iVar1 = test_ptr("test/dsatest.c",0x106,
                                             "kg_ctx = EVP_PKEY_CTX_new_from_pkey(NULL, param_key, NULL)"
                                             ,ctx_00);
                            if (iVar1 != 0) {
                              iVar1 = EVP_PKEY_keygen_init(ctx_00);
                              iVar1 = test_int_gt("test/dsatest.c",0x107,
                                                  "EVP_PKEY_keygen_init(kg_ctx)",&_LC3,iVar1,0);
                              if (iVar1 != 0) {
                                uVar3 = EVP_PKEY_generate(ctx_00,&local_b0);
                                iVar1 = test_int_gt("test/dsatest.c",0x108,
                                                    "EVP_PKEY_generate(kg_ctx, &key)",&_LC3,uVar3,0)
                                ;
                                if (iVar1 != 0) {
                                  iVar1 = EVP_PKEY_get_bn_param(local_b0,&_LC52,&local_a8);
                                  iVar1 = test_true("test/dsatest.c",0x10b,
                                                                                                        
                                                  "EVP_PKEY_get_bn_param(key, OSSL_PKEY_PARAM_FFC_P, &p_out)"
                                                  ,iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = test_BN_eq("test/dsatest.c",0x10c,&_LC55,"p_out",a,
                                                       local_a8);
                                    if (iVar1 != 0) {
                                      iVar1 = EVP_PKEY_get_bn_param(local_b0,&_LC56,&local_a0);
                                      iVar1 = test_true("test/dsatest.c",0x10d,
                                                                                                                
                                                  "EVP_PKEY_get_bn_param(key, OSSL_PKEY_PARAM_FFC_Q, &q_out)"
                                                  ,iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = test_BN_eq("test/dsatest.c",0x10e,&_LC59,"q_out",
                                                           a_00,local_a0);
                                        if (iVar1 != 0) {
                                          iVar1 = EVP_PKEY_get_bn_param(local_b0,&_LC60,&local_98);
                                          iVar1 = test_true("test/dsatest.c",0x10f,
                                                                                                                        
                                                  "EVP_PKEY_get_bn_param(key, OSSL_PKEY_PARAM_FFC_G, &g_out)"
                                                  ,iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = test_BN_eq("test/dsatest.c",0x110,&_LC63,"g_out"
                                                               ,a_01,local_98);
                                            if (iVar1 != 0) {
                                              iVar1 = EVP_PKEY_get_octet_string_param
                                                                (local_b0,&_LC64,local_88,0x20,
                                                                 &local_90);
                                              iVar1 = test_true("test/dsatest.c",0x111,
                                                                                                                                
                                                  "EVP_PKEY_get_octet_string_param( key, OSSL_PKEY_PARAM_FFC_SEED, seed_out, sizeof(seed_out), &len)"
                                                  ,iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = test_mem_eq("test/dsatest.c",0x114,
                                                                    "seed_out","seed_data",local_88,
                                                                    local_90,seed_data_4);
                                                if (iVar1 != 0) {
                                                  iVar1 = EVP_PKEY_get_int_param
                                                                    (local_b0,"gindex",&local_c4,
                                                                     0x1c);
                                                  iVar1 = test_true("test/dsatest.c",0x115,
                                                                                                                                        
                                                  "EVP_PKEY_get_int_param(key, OSSL_PKEY_PARAM_FFC_GINDEX, &gindex_out)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_int_eq("test/dsatest.c",0x117,
                                                                        "gindex_out",&_LC70,local_c4
                                                                        ,0xffffffff);
                                                    if (iVar1 != 0) {
                                                      iVar1 = EVP_PKEY_get_int_param
                                                                        (local_b0,"hindex",&local_bc
                                                                        );
                                                      iVar1 = test_true("test/dsatest.c",0x118,
                                                                                                                                                
                                                  "EVP_PKEY_get_int_param(key, OSSL_PKEY_PARAM_FFC_H, &hcount_out)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_int_eq("test/dsatest.c",0x11a,
                                                                        "hcount_out","expected_h",
                                                                        local_bc,2);
                                                    if (iVar1 != 0) {
                                                      iVar1 = EVP_PKEY_get_int_param
                                                                        (local_b0,"pcounter",
                                                                         &local_c0);
                                                      iVar1 = test_true("test/dsatest.c",0x11b,
                                                                                                                                                
                                                  "EVP_PKEY_get_int_param(key, OSSL_PKEY_PARAM_FFC_PCOUNTER, &pcount_out)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_int_eq("test/dsatest.c",0x11e,
                                                                        "pcount_out","expected_c",
                                                                        local_c0,0x524);
                                                    if (iVar1 != 0) {
                                                      iVar1 = EVP_PKEY_get_utf8_string_param
                                                                        (local_b0,"group",local_68,
                                                                         0x20,&local_90);
                                                      iVar1 = test_false("test/dsatest.c",0x11f,
                                                                                                                                                  
                                                  "EVP_PKEY_get_utf8_string_param(key, OSSL_PKEY_PARAM_GROUP_NAME, group_out, sizeof(group_out), &len)"
                                                  ,iVar1 != 0);
                                                  uVar2 = (uint)(iVar1 != 0);
                                                  goto LAB_00100dfd;
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
                            uVar2 = 0;
                            goto LAB_00100dfd;
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
        ctx_00 = (EVP_PKEY_CTX *)0x0;
        uVar2 = 0;
      }
    }
  }
LAB_00100dfd:
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(local_a8);
  BN_free(local_a0);
  BN_free(local_98);
  EVP_PKEY_free(local_b8);
  EVP_PKEY_free(local_b0);
  EVP_PKEY_CTX_free(ctx_00);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint dsa_test(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  BN_GENCB *cb;
  DSA *dsa;
  long in_FS_OFFSET;
  int local_270;
  uint local_26c;
  undefined4 local_268 [2];
  BIGNUM *local_260;
  BIGNUM *local_258;
  BIGNUM *local_250;
  uchar local_248 [256];
  uchar local_148 [264];
  long local_40;
  
  dsa = (DSA *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_260 = (BIGNUM *)0x0;
  local_258 = (BIGNUM *)0x0;
  local_250 = (BIGNUM *)0x0;
  cb = (BN_GENCB *)BN_GENCB_new();
  uVar1 = test_ptr("test/dsatest.c",0x52,"cb = BN_GENCB_new()",cb);
  if (uVar1 != 0) {
    BN_GENCB_set(cb,dsa_cb,0);
    dsa = DSA_new();
    iVar2 = test_ptr("test/dsatest.c",0x56,"dsa = DSA_new()",dsa);
    if (iVar2 != 0) {
      iVar2 = DSA_generate_parameters_ex(dsa,0x200,seed_3,0x14,&local_270,(ulong *)local_268,cb);
      iVar2 = test_true("test/dsatest.c",0x57,
                        "DSA_generate_parameters_ex(dsa, 512, seed, 20, &counter, &h, cb)",
                        iVar2 != 0);
      if (iVar2 != 0) {
        uVar1 = test_int_eq("test/dsatest.c",0x5b,"counter",&_LC84,local_270,0x69);
        if (uVar1 == 0) goto LAB_00101582;
        iVar2 = test_int_eq("test/dsatest.c",0x5d,&_LC87,&_LC86,local_268[0],2);
        if (iVar2 != 0) {
          DSA_get0_pqg(dsa,&local_260,&local_258,&local_250);
          iVar2 = BN_bn2bin(local_258,local_248);
          iVar3 = test_int_eq("test/dsatest.c",99,&_LC89,&_LC88,iVar2,0x14);
          if (iVar3 != 0) {
            iVar2 = test_mem_eq("test/dsatest.c",99,&_LC91,"out_q",local_248,(long)iVar2,out_q,
                                (long)iVar2);
            if (iVar2 != 0) {
              iVar2 = BN_bn2bin(local_260,local_248);
              iVar3 = test_int_eq("test/dsatest.c",0x68,&_LC89,&_LC88,iVar2,0x40);
              if (iVar3 != 0) {
                iVar2 = test_mem_eq("test/dsatest.c",0x68,&_LC91,"out_p",local_248,(long)iVar2,out_p
                                    ,(long)iVar2);
                if (iVar2 != 0) {
                  iVar2 = BN_bn2bin(local_250,local_248);
                  iVar3 = test_int_eq("test/dsatest.c",0x6d,&_LC89,&_LC88,iVar2,0x40);
                  if (iVar3 != 0) {
                    iVar2 = test_mem_eq("test/dsatest.c",0x6d,&_LC91,"out_g",local_248,(long)iVar2,
                                        out_g,(long)iVar2);
                    if (iVar2 != 0) {
                      iVar2 = DSA_generate_key(dsa);
                      iVar2 = test_true("test/dsatest.c",0x70,"DSA_generate_key(dsa)",iVar2 != 0);
                      if (iVar2 != 0) {
                        iVar2 = DSA_sign(0,(uchar *)"12345678901234567890",0x14,local_148,&local_26c
                                         ,dsa);
                        iVar2 = test_true("test/dsatest.c",0x72,
                                          "DSA_sign(0, str1, 20, sig, &siglen, dsa)",iVar2 != 0);
                        if (iVar2 != 0) {
                          iVar2 = DSA_verify(0,(uchar *)"12345678901234567890",0x14,local_148,
                                             local_26c,dsa);
                          iVar2 = test_int_gt("test/dsatest.c",0x74,
                                              "DSA_verify(0, str1, 20, sig, siglen, dsa)",&_LC3,
                                              iVar2,0);
                          uVar1 = (uint)(iVar2 != 0);
                          goto LAB_00101582;
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
    uVar1 = 0;
  }
LAB_00101582:
  DSA_free(dsa);
  BN_GENCB_free(cb);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 dsa_cb(int param_1)

{
  if (param_1 == 0) {
    num_1 = num_1 + 1;
    if ((ok_0 == 0) && (1 < num_1)) {
      test_error("test/dsatest.c",0x86,"dsa_cb error");
      return 0;
    }
  }
  else if (param_1 == 2) {
    ok_0 = ok_0 + 1;
  }
  return 1;
}



undefined8 setup_tests(void)

{
  add_test("dsa_test",dsa_test);
  add_test("dsa_keygen_test",dsa_keygen_test);
  add_test("test_dsa_sig_infinite_loop",test_dsa_sig_infinite_loop);
  add_test("test_dsa_sig_neg_param",test_dsa_sig_neg_param);
  add_all_tests("test_dsa_default_paramgen_validate",0x100000,2,1);
  return 1;
}




bool slh_dsa_keygen_invalid_test(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  EVP_PKEY *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
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
  local_120 = (EVP_PKEY *)0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(lib_ctx,"SLH-DSA-SHA2-128s",0);
  iVar1 = test_ptr("test/slh_dsa_test.c",0x248,
                   "ctx = EVP_PKEY_CTX_new_from_name(lib_ctx, tst->name, NULL)",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_keygen_init(ctx);
    iVar1 = test_int_eq("test/slh_dsa_test.c",0x249,"EVP_PKEY_keygen_init(ctx)",&_LC3,iVar1,1);
    if (iVar1 != 0) {
      OSSL_PARAM_construct_octet_string(&local_158,&_LC5,local_c8,0x61);
      local_f8 = local_138;
      local_118 = local_158;
      uStack_110 = uStack_150;
      local_108 = local_148;
      uStack_100 = uStack_140;
      OSSL_PARAM_construct_end(&local_158);
      local_d0 = local_138;
      local_f0 = local_158;
      uStack_e8 = uStack_150;
      local_e0 = local_148;
      uStack_d8 = uStack_140;
      uVar2 = EVP_PKEY_CTX_set_params(ctx,&local_118);
      iVar1 = test_int_eq("test/slh_dsa_test.c",0x250,"EVP_PKEY_CTX_set_params(ctx, params)",&_LC6,
                          uVar2,0);
      if (iVar1 != 0) {
        OSSL_PARAM_construct_octet_string(&local_158,&_LC5,local_c8,0x2f);
        local_f8 = local_138;
        local_118 = local_158;
        uStack_110 = uStack_150;
        local_108 = local_148;
        uStack_100 = uStack_140;
        OSSL_PARAM_construct_end(&local_158);
        local_f0 = local_158;
        uStack_e8 = uStack_150;
        local_d0 = local_138;
        local_e0 = local_148;
        uStack_d8 = uStack_140;
        uVar2 = EVP_PKEY_CTX_set_params(ctx,&local_118);
        iVar1 = test_int_eq("test/slh_dsa_test.c",600,"EVP_PKEY_CTX_set_params(ctx, params)",&_LC3,
                            uVar2,1);
        if (iVar1 != 0) {
          uVar2 = EVP_PKEY_generate(ctx,&local_120);
          iVar1 = test_int_eq("test/slh_dsa_test.c",0x259,"EVP_PKEY_generate(ctx, &pkey)",&_LC6,
                              uVar2,0);
          if (iVar1 != 0) {
            OSSL_PARAM_construct_octet_string(&local_158,&_LC5,local_c8,0x31);
            local_f8 = local_138;
            local_118 = local_158;
            uStack_110 = uStack_150;
            local_108 = local_148;
            uStack_100 = uStack_140;
            OSSL_PARAM_construct_end(&local_158);
            local_f0 = local_158;
            uStack_e8 = uStack_150;
            local_d0 = local_138;
            local_e0 = local_148;
            uStack_d8 = uStack_140;
            uVar2 = EVP_PKEY_CTX_set_params(ctx,&local_118);
            iVar1 = test_int_eq("test/slh_dsa_test.c",0x260,"EVP_PKEY_CTX_set_params(ctx, params)",
                                &_LC3,uVar2,1);
            if (iVar1 != 0) {
              uVar2 = EVP_PKEY_generate(ctx,&local_120);
              iVar1 = test_int_eq("test/slh_dsa_test.c",0x261,"EVP_PKEY_generate(ctx, &pkey)",&_LC6,
                                  uVar2,0);
              bVar3 = iVar1 != 0;
              goto LAB_001000b1;
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_001000b1:
  EVP_PKEY_free(local_120);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 do_gen_key(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78 [5];
  undefined8 local_50 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = local_78;
  local_80 = 0;
  if (param_3 != 0) {
    puVar3 = local_50;
    OSSL_PARAM_construct_octet_string(&local_b8,&_LC5,param_2,param_3);
  }
  OSSL_PARAM_construct_end(&local_b8);
  *puVar3 = local_b8;
  puVar3[1] = uStack_b0;
  puVar3[2] = local_a8;
  puVar3[3] = uStack_a0;
  puVar3[4] = local_98;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(lib_ctx,param_1,0);
  iVar1 = test_ptr("test/slh_dsa_test.c",0x136,
                   "ctx = EVP_PKEY_CTX_new_from_name(lib_ctx, alg, NULL)",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_keygen_init(ctx);
    iVar1 = test_int_eq("test/slh_dsa_test.c",0x137,"EVP_PKEY_keygen_init(ctx)",&_LC3,iVar1,1);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_CTX_set_params(ctx,local_78);
      iVar1 = test_int_eq("test/slh_dsa_test.c",0x138,"EVP_PKEY_CTX_set_params(ctx, params)",&_LC3,
                          uVar2,1);
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_generate(ctx,&local_80);
        iVar1 = test_int_eq("test/slh_dsa_test.c",0x139,"EVP_PKEY_generate(ctx, &pkey)",&_LC3,uVar2,
                            1);
        if (iVar1 != 0) goto LAB_0010041d;
      }
    }
  }
  local_80 = 0;
LAB_0010041d:
  EVP_PKEY_CTX_free(ctx);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_80;
}



uint slh_dsa_digest_sign_verify_test(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  EVP_PKEY *pkey;
  undefined8 uVar4;
  void *ptr;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long local_c0;
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
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  pkey = (EVP_PKEY *)do_gen_key("SLH-DSA-SHA2-128s",0,0);
  iVar1 = test_ptr("test/slh_dsa_test.c",0x215,"key = do_gen_key(alg, NULL, 0)",pkey);
  if (iVar1 == 0) {
    uVar3 = 0;
    uVar4 = 0;
    ptr = (void *)0x0;
    goto LAB_001005af;
  }
  OSSL_PARAM_construct_octet_string(&local_f8,"context-string",context_1,0x11);
  local_98 = local_d8;
  local_b8 = local_f8;
  uStack_b0 = uStack_f0;
  local_a8 = local_e8;
  uStack_a0 = uStack_e0;
  OSSL_PARAM_construct_end(&local_f8);
  local_90 = local_f8;
  uStack_88 = uStack_f0;
  local_70 = local_d8;
  local_80 = local_e8;
  uStack_78 = uStack_e0;
  uVar4 = EVP_MD_CTX_new();
  iVar1 = test_ptr("test/slh_dsa_test.c",0x21c,"mctx = EVP_MD_CTX_new()",uVar4);
  if (iVar1 != 0) {
    uVar2 = EVP_DigestSignInit_ex(uVar4,0,"SHA256",lib_ctx,"?fips=true",pkey,&local_b8);
    uVar3 = test_int_eq("test/slh_dsa_test.c",0x21d,
                        "EVP_DigestSignInit_ex(mctx, NULL, \"SHA256\", lib_ctx, \"?fips=true\", key, params)"
                        ,&_LC6,uVar2,0);
    ptr = (void *)0x0;
    if (uVar3 == 0) goto LAB_001005af;
    uVar2 = EVP_DigestSignInit_ex(uVar4,0,0,lib_ctx,"?fips=true",pkey,&local_b8);
    uVar3 = test_int_eq("test/slh_dsa_test.c",0x220,
                        "EVP_DigestSignInit_ex(mctx, NULL, NULL, lib_ctx, \"?fips=true\", key, params)"
                        ,&_LC3,uVar2,1);
    if (uVar3 == 0) goto LAB_001005af;
    uVar2 = EVP_DigestSign(uVar4,0,&local_c0,msg_0,0xc);
    iVar1 = test_int_eq("test/slh_dsa_test.c",0x223,
                        "EVP_DigestSign(mctx, NULL, &sig_len, msg, msg_len)",&_LC3,uVar2,1);
    if (iVar1 != 0) {
      ptr = (void *)CRYPTO_zalloc(local_c0,"test/slh_dsa_test.c",0x224);
      iVar1 = test_ptr("test/slh_dsa_test.c",0x224,"sig = OPENSSL_zalloc(sig_len)",ptr);
      if (iVar1 != 0) {
        local_c0 = local_c0 + -1;
        uVar2 = EVP_DigestSign(uVar4,ptr,&local_c0,msg_0,0xc);
        uVar5 = 0x100824;
        iVar1 = test_int_eq("test/slh_dsa_test.c",0x227,
                            "EVP_DigestSign(mctx, sig, &sig_len, msg, msg_len)",&_LC6,uVar2,0);
        if (iVar1 != 0) {
          local_c0 = local_c0 + 1;
          uVar2 = EVP_DigestSignInit_ex(uVar4,0,0,lib_ctx,"?fips=true",pkey,&local_b8);
          uVar3 = test_int_eq("test/slh_dsa_test.c",0x22a,
                              "EVP_DigestSignInit_ex(mctx, NULL, NULL, lib_ctx, \"?fips=true\", key, params)"
                              ,&_LC3,uVar2,1);
          if (uVar3 == 0) goto LAB_001005af;
          uVar2 = EVP_DigestSign(uVar4,ptr,&local_c0,msg_0,0xc,uVar5);
          iVar1 = test_int_eq("test/slh_dsa_test.c",0x22c,
                              "EVP_DigestSign(mctx, sig, &sig_len, msg, msg_len)",&_LC3,uVar2,1);
          if (iVar1 != 0) {
            uVar2 = EVP_DigestVerifyInit_ex(uVar4,0,"SHA256",lib_ctx,"?fips=true",pkey,&local_b8);
            uVar5 = test_int_eq("test/slh_dsa_test.c",0x22d,
                                "EVP_DigestVerifyInit_ex(mctx, NULL, \"SHA256\", lib_ctx, \"?fips=true\", key, params)"
                                ,&_LC6,uVar2,0);
            if ((int)uVar5 != 0) {
              uVar2 = EVP_DigestVerifyInit_ex(uVar4,0,0,lib_ctx,"?fips=true",pkey,&local_b8,uVar5);
              iVar1 = test_int_eq("test/slh_dsa_test.c",0x230,
                                  "EVP_DigestVerifyInit_ex(mctx, NULL, NULL, lib_ctx, \"?fips=true\", key, params)"
                                  ,&_LC3,uVar2,1);
              if (iVar1 != 0) {
                uVar2 = EVP_DigestVerify(uVar4,ptr,local_c0,msg_0,0xc);
                iVar1 = test_int_eq("test/slh_dsa_test.c",0x233,
                                    "EVP_DigestVerify(mctx, sig, sig_len, msg, msg_len)",&_LC3,uVar2
                                    ,1);
                uVar3 = (uint)(iVar1 != 0);
                goto LAB_001005af;
              }
            }
          }
        }
      }
      uVar3 = 0;
      goto LAB_001005af;
    }
  }
  ptr = (void *)0x0;
  uVar3 = 0;
LAB_001005af:
  EVP_PKEY_free(pkey);
  EVP_MD_CTX_free(uVar4);
  CRYPTO_free(ptr);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool slh_dsa_keygen_test(int param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  EVP_PKEY *pkey;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [64];
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_124 = 0;
  lVar1 = (long)param_1 * 0x18;
  local_120 = 0;
  uVar2 = *(ulong *)(slh_dsa_keygen_testdata + lVar1 + 0x10);
  lVar3 = *(long *)(slh_dsa_keygen_testdata + lVar1 + 8);
  local_11c = 0;
  uVar5 = uVar2 >> 2;
  pkey = (EVP_PKEY *)
         do_gen_key(*(undefined8 *)(slh_dsa_keygen_testdata + lVar1),lVar3,uVar2 - uVar5);
  iVar4 = test_ptr("test/slh_dsa_test.c",0x14b,
                   "pkey = do_gen_key(tst->name, tst->priv, key_len - n)",pkey);
  if (iVar4 != 0) {
    iVar4 = EVP_PKEY_get_octet_string_param(pkey,&_LC24,local_c8,0x80,&local_118);
    iVar4 = test_true("test/slh_dsa_test.c",0x14e,
                      "EVP_PKEY_get_octet_string_param(pkey, OSSL_PKEY_PARAM_PRIV_KEY, priv, sizeof(priv), &priv_len)"
                      ,iVar4 != 0);
    if (iVar4 != 0) {
      iVar4 = EVP_PKEY_get_octet_string_param(pkey,&_LC26,local_108,0x40,&local_110);
      iVar4 = test_true("test/slh_dsa_test.c",0x151,
                        "EVP_PKEY_get_octet_string_param(pkey, OSSL_PKEY_PARAM_PUB_KEY, pub, sizeof(pub), &pub_len)"
                        ,iVar4 != 0);
      if (iVar4 != 0) {
        iVar4 = EVP_PKEY_get_int_param(pkey,&_LC28,&local_124);
        iVar4 = test_true("test/slh_dsa_test.c",0x154,
                          "EVP_PKEY_get_int_param(pkey, OSSL_PKEY_PARAM_BITS, &bits)",iVar4 != 0);
        if (iVar4 != 0) {
          iVar4 = test_int_eq("test/slh_dsa_test.c",0x155,&_LC28,"8 * 2 * n",local_124,
                              (int)uVar5 << 4);
          if (iVar4 != 0) {
            iVar4 = EVP_PKEY_get_int_param(pkey,"security-bits",&local_120);
            iVar4 = test_true("test/slh_dsa_test.c",0x156,
                              "EVP_PKEY_get_int_param(pkey, OSSL_PKEY_PARAM_SECURITY_BITS, &sec_bits)"
                              ,iVar4 != 0);
            if (iVar4 != 0) {
              iVar4 = test_int_eq("test/slh_dsa_test.c",0x158,"sec_bits","8 * n",local_120,
                                  (int)uVar5 * 8);
              if (iVar4 != 0) {
                iVar4 = EVP_PKEY_get_int_param(pkey,"max-size",&local_11c);
                iVar4 = test_true("test/slh_dsa_test.c",0x159,
                                  "EVP_PKEY_get_int_param(pkey, OSSL_PKEY_PARAM_MAX_SIZE, &sig_len)"
                                  ,iVar4 != 0);
                if (iVar4 != 0) {
                  iVar4 = test_int_ge("test/slh_dsa_test.c",0x15b,"sig_len",&_LC37,local_11c,0x1eb0)
                  ;
                  if (iVar4 != 0) {
                    iVar4 = test_int_le("test/slh_dsa_test.c",0x15c,"sig_len","49856",local_11c,
                                        0xc2c0);
                    if (iVar4 != 0) {
                      iVar4 = test_size_t_eq("test/slh_dsa_test.c",0x15f,"priv_len","key_len",
                                             local_118,uVar2);
                      if (iVar4 != 0) {
                        iVar4 = test_size_t_eq("test/slh_dsa_test.c",0x160,"pub_len","key_len / 2",
                                               local_110,uVar2 >> 1);
                        if (iVar4 != 0) {
                          iVar4 = test_mem_eq("test/slh_dsa_test.c",0x162,&_LC26,"tst->priv + 2 * n"
                                              ,local_108,local_110,lVar3 + uVar5 * 2,uVar5 * 2);
                          bVar6 = iVar4 != 0;
                          goto LAB_00100a69;
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
  bVar6 = false;
LAB_00100a69:
  EVP_PKEY_free(pkey);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



EVP_PKEY *
slh_dsa_key_from_data(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  undefined *puVar3;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  EVP_PKEY *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  puVar3 = &_LC26;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (EVP_PKEY *)0x0;
  if (param_4 == 0) {
    puVar3 = &_LC24;
  }
  OSSL_PARAM_construct_octet_string(&local_b8,puVar3,param_2,param_3);
  local_58 = local_98;
  local_78 = local_b8;
  uStack_70 = uStack_b0;
  local_68 = local_a8;
  uStack_60 = uStack_a0;
  OSSL_PARAM_construct_end(&local_b8);
  local_50 = local_b8;
  uStack_48 = uStack_b0;
  local_30 = local_98;
  local_40 = local_a8;
  uStack_38 = uStack_a0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(lib_ctx,param_1,0);
  iVar1 = test_ptr("test/slh_dsa_test.c",0x2c,"ctx = EVP_PKEY_CTX_new_from_name(lib_ctx, alg, NULL)"
                   ,ctx);
  if (iVar1 != 0) {
    uVar2 = EVP_PKEY_fromdata_init(ctx);
    iVar1 = test_int_eq("test/slh_dsa_test.c",0x2d,"EVP_PKEY_fromdata_init(ctx)",&_LC3,uVar2,1);
    if ((iVar1 != 0) &&
       (iVar1 = EVP_PKEY_fromdata(ctx,&local_80,0x87 - (uint)(param_4 != 0),&local_78), iVar1 == 1))
    goto LAB_00100e3e;
  }
  EVP_PKEY_free(local_80);
  local_80 = (EVP_PKEY *)0x0;
LAB_00100e3e:
  EVP_PKEY_CTX_free(ctx);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_80;
}



uint slh_dsa_sign_verify_test(int param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  size_t siglen;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  EVP_PKEY_CTX *pEVar10;
  EVP_PKEY_CTX *ctx;
  uchar *sig;
  EVP_PKEY *pkey;
  long lVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long in_FS_OFFSET;
  byte bVar15;
  undefined8 local_1e0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  EVP_PKEY *local_178;
  size_t local_170;
  ulong local_168;
  undefined8 local_160;
  undefined4 local_158 [10];
  undefined4 local_130 [10];
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
  undefined8 local_90 [5];
  undefined1 local_68 [40];
  long local_40;
  
  bVar15 = 0;
  lVar14 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_178 = (EVP_PKEY *)0x0;
  local_170 = 0;
  puVar12 = &local_b8;
  local_168 = 0;
  local_160 = 0x20;
  local_184 = 0;
  local_180 = 1;
  OSSL_PARAM_construct_int(&local_1b8,"deterministic",&local_180);
  local_e8 = local_198;
  local_108 = local_1b8;
  uStack_100 = uStack_1b0;
  local_f8 = local_1a8;
  uStack_f0 = uStack_1a0;
  OSSL_PARAM_construct_int(&local_1b8,"message-encoding",&local_184);
  local_c0 = local_198;
  local_e0 = local_1b8;
  uStack_d8 = uStack_1b0;
  local_d0 = local_1a8;
  uStack_c8 = uStack_1a0;
  if (*(long *)(&DAT_001052a8 + lVar14 * 0x58) != 0) {
    puVar12 = local_90;
    OSSL_PARAM_construct_octet_string
              (&local_1b8,"test-entropy",*(long *)(&DAT_001052a8 + lVar14 * 0x58),
               *(undefined8 *)(&DAT_001052b0 + lVar14 * 0x58));
    local_98 = local_198;
    local_b8 = local_1b8;
    uStack_b0 = uStack_1b0;
    local_a8 = local_1a8;
    uStack_a0 = uStack_1a0;
  }
  OSSL_PARAM_construct_end(&local_1b8);
  *puVar12 = local_1b8;
  puVar12[1] = uStack_1b0;
  puVar12[2] = local_1a8;
  puVar12[3] = uStack_1a0;
  puVar12[4] = local_198;
  uVar9 = (&DAT_00105268)[lVar14 * 0xb];
  puVar1 = (&slh_dsa_sig_testdata)[lVar14 * 0xb];
  uVar2 = *(undefined8 *)(&DAT_00105270 + lVar14 * 0x16);
  uVar3 = *(undefined8 *)(&DAT_00105280 + lVar14 * 0x58);
  puVar4 = (&PTR_slh_dsa_sha2_128s_0_priv_00105278)[lVar14 * 0xb];
  uVar8 = OSSL_PARAM_BLD_new();
  iVar5 = test_ptr("test/slh_dsa_test.c",0x41,"bld = OSSL_PARAM_BLD_new()",uVar8);
  if (iVar5 == 0) {
LAB_00101075:
    uVar9 = 0;
    pEVar10 = (EVP_PKEY_CTX *)0x0;
LAB_0010107a:
    OSSL_PARAM_free(uVar9);
    ctx = (EVP_PKEY_CTX *)0x0;
    OSSL_PARAM_BLD_free(uVar8);
    sig = (uchar *)0x0;
    EVP_PKEY_CTX_free(pEVar10);
    uVar9 = 0;
  }
  else {
    iVar5 = OSSL_PARAM_BLD_push_octet_string(uVar8,&_LC24,puVar4,uVar3);
    iVar5 = test_true("test/slh_dsa_test.c",0x42,
                      "OSSL_PARAM_BLD_push_octet_string(bld, OSSL_PKEY_PARAM_PRIV_KEY, priv, priv_len) > 0"
                      ,0 < iVar5);
    if (iVar5 == 0) goto LAB_00101075;
    iVar5 = OSSL_PARAM_BLD_push_octet_string(uVar8,&_LC26,uVar9,uVar2);
    iVar5 = test_true("test/slh_dsa_test.c",0x45,
                      "OSSL_PARAM_BLD_push_octet_string(bld, pub_name, pub, pub_len) > 0",0 < iVar5)
    ;
    if (iVar5 == 0) goto LAB_00101075;
    pEVar10 = (EVP_PKEY_CTX *)0x0;
    uVar9 = OSSL_PARAM_BLD_to_param(uVar8);
    iVar5 = test_ptr("test/slh_dsa_test.c",0x48,"params = OSSL_PARAM_BLD_to_param(bld)",uVar9);
    if (iVar5 == 0) goto LAB_0010107a;
    pEVar10 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(lib_ctx,puVar1,0);
    iVar5 = test_ptr("test/slh_dsa_test.c",0x49,
                     "ctx = EVP_PKEY_CTX_new_from_name(lib_ctx, name, NULL)",pEVar10);
    if (iVar5 == 0) goto LAB_0010107a;
    uVar6 = EVP_PKEY_fromdata_init(pEVar10);
    iVar5 = test_int_eq("test/slh_dsa_test.c",0x4a,"EVP_PKEY_fromdata_init(ctx)",&_LC3,uVar6,1);
    if (iVar5 == 0) goto LAB_0010107a;
    uVar6 = EVP_PKEY_fromdata(pEVar10,&local_178,0x87,uVar9);
    iVar5 = test_int_eq("test/slh_dsa_test.c",0x4b,
                        "EVP_PKEY_fromdata(ctx, pkey, EVP_PKEY_KEYPAIR, params)",&_LC3,uVar6,1);
    OSSL_PARAM_free(uVar9);
    OSSL_PARAM_BLD_free(uVar8);
    EVP_PKEY_CTX_free(pEVar10);
    if (iVar5 == 0) {
      sig = (uchar *)0x0;
      uVar9 = 0;
      ctx = (EVP_PKEY_CTX *)0x0;
      uVar7 = 0;
      goto LAB_0010109c;
    }
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(lib_ctx,local_178,0);
    iVar5 = test_ptr("test/slh_dsa_test.c",0x10c,
                     "sctx = EVP_PKEY_CTX_new_from_pkey(lib_ctx, pkey, NULL)",ctx);
    if (iVar5 == 0) {
      sig = (uchar *)0x0;
      uVar9 = 0;
      uVar7 = 0;
      goto LAB_0010109c;
    }
    sig = (uchar *)0x0;
    uVar9 = EVP_SIGNATURE_fetch(lib_ctx,(&slh_dsa_sig_testdata)[lVar14 * 0xb],0);
    uVar7 = test_ptr("test/slh_dsa_test.c",0x10e,
                     "sig_alg = EVP_SIGNATURE_fetch(lib_ctx, td->alg, NULL)",uVar9);
    if (uVar7 == 0) goto LAB_0010109c;
    uVar6 = EVP_PKEY_sign_message_init(ctx,uVar9,&local_108);
    iVar5 = test_int_eq("test/slh_dsa_test.c",0x110,
                        "EVP_PKEY_sign_message_init(sctx, sig_alg, params)",&_LC3,uVar6,1);
    if (iVar5 == 0) goto LAB_00101332;
    sig = (uchar *)0x0;
    iVar5 = EVP_PKEY_sign(ctx,(uchar *)0x0,&local_170,
                          (&PTR_slh_dsa_sha2_128s_0_msg_00105288)[lVar14 * 0xb],
                          *(size_t *)(&DAT_00105290 + lVar14 * 0x58));
    uVar7 = test_int_eq("test/slh_dsa_test.c",0x111,
                        "EVP_PKEY_sign(sctx, NULL, &psig_len, td->msg, td->msg_len)",&_LC3,iVar5,1);
    if (uVar7 == 0) goto LAB_0010109c;
    iVar5 = EVP_PKEY_get_size_t_param(local_178,"max-size",&local_168);
    iVar5 = test_true("test/slh_dsa_test.c",0x113,
                      "EVP_PKEY_get_size_t_param(pkey, OSSL_PKEY_PARAM_MAX_SIZE, &sig_len2)",
                      iVar5 != 0);
    if (iVar5 == 0) {
LAB_00101332:
      sig = (uchar *)0x0;
      uVar7 = 0;
      goto LAB_0010109c;
    }
    iVar5 = test_int_eq("test/slh_dsa_test.c",0x115,"sig_len2","psig_len",local_168 & 0xffffffff,
                        local_170 & 0xffffffff);
    if (iVar5 == 0) goto LAB_00101332;
    sig = (uchar *)CRYPTO_zalloc(local_170,"test/slh_dsa_test.c",0x116);
    uVar7 = test_ptr("test/slh_dsa_test.c",0x116,"psig = OPENSSL_zalloc(psig_len)",sig);
    if (uVar7 == 0) goto LAB_0010109c;
    iVar5 = EVP_PKEY_sign(ctx,sig,&local_170,(&PTR_slh_dsa_sha2_128s_0_msg_00105288)[lVar14 * 0xb],
                          *(size_t *)(&DAT_00105290 + lVar14 * 0x58));
    iVar5 = test_int_eq("test/slh_dsa_test.c",0x117,
                        "EVP_PKEY_sign(sctx, psig, &psig_len, td->msg, td->msg_len)",&_LC3,iVar5,1);
    if (iVar5 != 0) {
      uVar6 = EVP_Q_digest(lib_ctx,"SHA256",0,sig,local_170,local_68,&local_160);
      iVar5 = test_int_eq("test/slh_dsa_test.c",0x11a,
                          "EVP_Q_digest(lib_ctx, \"SHA256\", NULL, psig, psig_len, digest, &digest_len)"
                          ,&_LC3,uVar6,1);
      if (iVar5 != 0) {
        iVar5 = test_mem_eq("test/slh_dsa_test.c",0x11d,"digest","td->sig_digest",local_68,local_160
                            ,(&PTR_slh_dsa_sha2_128s_0_sig_digest_00105298)[lVar14 * 0xb],
                            *(undefined8 *)(&DAT_001052a0 + lVar14 * 0x58));
        siglen = local_170;
        if (iVar5 != 0) {
          local_17c = 0;
          OSSL_PARAM_construct_int(&local_1b8,"message-encoding",&local_17c);
          puVar12 = &local_1b8;
          puVar13 = local_158;
          for (lVar11 = 10; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar13 = *(undefined4 *)puVar12;
            puVar12 = (undefined8 *)((long)puVar12 + (ulong)bVar15 * -8 + 4);
            puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
          }
          OSSL_PARAM_construct_end(&local_1b8);
          puVar12 = &local_1b8;
          puVar13 = local_130;
          for (lVar11 = 10; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar13 = *(undefined4 *)puVar12;
            puVar12 = (undefined8 *)((long)puVar12 + (ulong)bVar15 * -8 + 4);
            puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
          }
          pkey = (EVP_PKEY *)
                 slh_dsa_key_from_data
                           ((&slh_dsa_sig_testdata)[lVar14 * 0xb],(&DAT_00105268)[lVar14 * 0xb],
                            *(undefined8 *)(&DAT_00105270 + lVar14 * 0x16),1);
          iVar5 = test_ptr("test/slh_dsa_test.c",0xdc,
                           "key = slh_dsa_key_from_data(td->alg, td->pub, td->pub_len, 1)",pkey);
          if (iVar5 != 0) {
            pEVar10 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(lib_ctx,pkey,0);
            uVar7 = test_ptr("test/slh_dsa_test.c",0xde,
                             "vctx = EVP_PKEY_CTX_new_from_pkey(lib_ctx, key, NULL)",pEVar10);
            local_1e0 = 0;
            if (uVar7 != 0) {
              local_1e0 = EVP_SIGNATURE_fetch(lib_ctx,(&slh_dsa_sig_testdata)[lVar14 * 0xb],0);
              iVar5 = test_ptr("test/slh_dsa_test.c",0xe0,
                               "sig_alg = EVP_SIGNATURE_fetch(lib_ctx, td->alg, NULL)",local_1e0);
              if (iVar5 != 0) {
                uVar6 = EVP_PKEY_verify_message_init(pEVar10,local_1e0,local_158);
                iVar5 = test_int_eq("test/slh_dsa_test.c",0xe2,
                                    "EVP_PKEY_verify_message_init(vctx, sig_alg, params)",&_LC3,
                                    uVar6,1);
                if (iVar5 != 0) {
                  iVar5 = EVP_PKEY_verify(pEVar10,sig,siglen,
                                          (&PTR_slh_dsa_sha2_128s_0_msg_00105288)[lVar14 * 0xb],
                                          *(size_t *)(&DAT_00105290 + lVar14 * 0x58));
                  iVar5 = test_int_eq("test/slh_dsa_test.c",0xe3,
                                      "EVP_PKEY_verify(vctx, sig, sig_len, td->msg, td->msg_len)",
                                      &_LC3,iVar5,1);
                  uVar7 = (uint)(iVar5 != 0);
                  goto LAB_001016bd;
                }
              }
              uVar7 = 0;
            }
LAB_001016bd:
            EVP_SIGNATURE_free(local_1e0);
            EVP_PKEY_free(pkey);
            EVP_PKEY_CTX_free(pEVar10);
            goto LAB_0010109c;
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_0010109c:
  EVP_SIGNATURE_free(uVar9);
  EVP_PKEY_free(local_178);
  EVP_PKEY_CTX_free(ctx);
  CRYPTO_free(sig);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint slh_dsa_deterministic_usage_test(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  EVP_PKEY *pkey;
  BIO_METHOD *pBVar4;
  BIO *a;
  BIO *a_00;
  undefined8 uVar5;
  undefined8 uVar6;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  uchar *local_130;
  EVP_PKEY_CTX *local_128;
  EVP_PKEY_CTX *local_120;
  undefined8 local_118;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_bc;
  EVP_PKEY *local_b8;
  EVP_PKEY *local_b0;
  size_t local_a8;
  size_t local_a0;
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
  uchar local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_bc = 1;
  local_b8 = (EVP_PKEY *)0x0;
  local_b0 = (EVP_PKEY *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  builtin_memcpy(local_44,"\x01\x02\x03\x04",4);
  pkey = (EVP_PKEY *)do_gen_key("SLH-DSA-SHA2-128s",slh_dsa_sha2_128s_0_keygen_priv,0x30);
  iVar1 = test_ptr("test/slh_dsa_test.c",0x1c4,
                   "gkey = do_gen_key(tst->name, tst->priv, key_len + n)",pkey);
  if (iVar1 == 0) {
    local_130 = (uchar *)0x0;
    uVar2 = 0;
    ctx = (EVP_PKEY_CTX *)0x0;
    a_00 = (BIO *)0x0;
    local_118 = 0;
    a = (BIO *)0x0;
    uVar5 = 0;
    local_120 = (EVP_PKEY_CTX *)0x0;
    local_128 = (EVP_PKEY_CTX *)0x0;
  }
  else {
    pBVar4 = BIO_s_mem();
    a = BIO_new(pBVar4);
    iVar1 = test_ptr("test/slh_dsa_test.c",0x1c8,"pub_bio = BIO_new(BIO_s_mem())",a);
    if (iVar1 == 0) {
      local_130 = (uchar *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      a_00 = (BIO *)0x0;
      uVar5 = 0;
      local_118 = 0;
      local_120 = (EVP_PKEY_CTX *)0x0;
      local_128 = (EVP_PKEY_CTX *)0x0;
      uVar2 = 0;
    }
    else {
      pBVar4 = BIO_s_mem();
      a_00 = BIO_new(pBVar4);
      iVar1 = test_ptr("test/slh_dsa_test.c",0x1c9,"priv_bio = BIO_new(BIO_s_mem())",a_00);
      if (iVar1 == 0) {
        local_130 = (uchar *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        uVar5 = 0;
        local_118 = 0;
        local_120 = (EVP_PKEY_CTX *)0x0;
        local_128 = (EVP_PKEY_CTX *)0x0;
        uVar2 = 0;
      }
      else {
        uVar5 = EVP_CIPHER_fetch(lib_ctx,"AES-256-CBC",0);
        iVar1 = test_ptr("test/slh_dsa_test.c",0x1ca,
                         "cipher = EVP_CIPHER_fetch(lib_ctx, \"AES-256-CBC\", NULL)",uVar5);
        if (iVar1 != 0) {
          iVar1 = PEM_write_bio_PUBKEY_ex(a,pkey,lib_ctx,0);
          iVar1 = test_true("test/slh_dsa_test.c",0x1cb,
                            "PEM_write_bio_PUBKEY_ex(pub_bio, gkey, lib_ctx, NULL)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = PEM_write_bio_PrivateKey_ex(a_00,pkey,uVar5,0,0,0,"Password",lib_ctx,0);
            uVar2 = test_true("test/slh_dsa_test.c",0x1cc,
                              "PEM_write_bio_PrivateKey_ex(priv_bio, gkey, cipher, NULL, 0, NULL, (void *)pass, lib_ctx, NULL)"
                              ,iVar1 != 0);
            if (uVar2 != 0) {
              OSSL_PARAM_construct_int(&local_f8,"deterministic",&local_bc);
              local_98 = local_f8;
              uStack_90 = uStack_f0;
              local_88 = local_e8;
              uStack_80 = uStack_e0;
              local_78 = local_d8;
              OSSL_PARAM_construct_end(&local_f8);
              local_70 = local_f8;
              uStack_68 = uStack_f0;
              local_60 = local_e8;
              uStack_58 = uStack_e0;
              local_50 = local_d8;
              uVar6 = PEM_read_bio_PrivateKey_ex(a_00,&local_b0,0,"Password",lib_ctx,0);
              uVar2 = test_ptr("test/slh_dsa_test.c",0x1d5,
                               "PEM_read_bio_PrivateKey_ex(priv_bio, &priv, NULL, pass, lib_ctx, NULL)"
                               ,uVar6);
              if (uVar2 != 0) {
                local_128 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(lib_ctx,local_b0,0);
                iVar1 = test_ptr("test/slh_dsa_test.c",0x1d6,
                                 "sctx = EVP_PKEY_CTX_new_from_pkey(lib_ctx, priv, NULL)",local_128)
                ;
                if (iVar1 == 0) {
                  local_130 = (uchar *)0x0;
                  ctx = (EVP_PKEY_CTX *)0x0;
                  local_118 = 0;
                  local_120 = (EVP_PKEY_CTX *)0x0;
                  uVar2 = 0;
                  goto LAB_00101892;
                }
                local_118 = EVP_SIGNATURE_fetch(lib_ctx,"SLH-DSA-SHA2-128s",0);
                iVar1 = test_ptr("test/slh_dsa_test.c",0x1d8,
                                 "sig_alg = EVP_SIGNATURE_fetch(lib_ctx, tst->name, NULL)",local_118
                                );
                if (iVar1 != 0) {
                  uVar3 = EVP_PKEY_sign_message_init(local_128,local_118,&local_98);
                  iVar1 = test_int_eq("test/slh_dsa_test.c",0x1d9,
                                      "EVP_PKEY_sign_message_init(sctx, sig_alg, params)",&_LC3,
                                      uVar3,1);
                  if (iVar1 != 0) {
                    local_120 = EVP_PKEY_CTX_dup(local_128);
                    uVar2 = test_ptr("test/slh_dsa_test.c",0x1dc,"dupctx = EVP_PKEY_CTX_dup(sctx)",
                                     local_120);
                    if (uVar2 != 0) {
                      iVar1 = EVP_PKEY_sign(local_128,(uchar *)0x0,&local_a8,local_44,4);
                      uVar2 = test_int_eq("test/slh_dsa_test.c",0x1e0,
                                          "EVP_PKEY_sign(sctx, NULL, &sig_len, msg, msg_len)",&_LC3,
                                          iVar1,1);
                      if (uVar2 != 0) {
                        local_a0 = local_a8;
                        local_130 = (uchar *)CRYPTO_zalloc(local_a8 * 2,"test/slh_dsa_test.c",0x1e3)
                        ;
                        iVar1 = test_ptr("test/slh_dsa_test.c",0x1e3,
                                         "sig = OPENSSL_zalloc(sig_len * 2)",local_130);
                        if (iVar1 != 0) {
                          ctx = (EVP_PKEY_CTX *)0x0;
                          iVar1 = EVP_PKEY_sign(local_128,local_130,&local_a0,local_44,4);
                          uVar2 = test_int_eq("test/slh_dsa_test.c",0x1e4,
                                              "EVP_PKEY_sign(sctx, sig, &len, msg, msg_len)",&_LC3,
                                              iVar1,1);
                          if (uVar2 == 0) goto LAB_00101892;
                          iVar1 = test_size_t_eq("test/slh_dsa_test.c",0x1e5,"sig_len",&_LC86,
                                                 local_a8,local_a0);
                          if (iVar1 != 0) {
                            iVar1 = EVP_PKEY_sign(local_120,local_130 + local_a8,&local_a0,local_44,
                                                  4);
                            iVar1 = test_int_eq("test/slh_dsa_test.c",0x1e6,
                                                "EVP_PKEY_sign(dupctx, sig + sig_len, &len, msg, msg_len)"
                                                ,&_LC3,iVar1,1);
                            if (iVar1 != 0) {
                              iVar1 = test_size_t_eq("test/slh_dsa_test.c",0x1e8,"sig_len",&_LC86,
                                                     local_a8,local_a0);
                              if (iVar1 != 0) {
                                uVar6 = PEM_read_bio_PUBKEY_ex(a,&local_b8,0,0,lib_ctx,0);
                                iVar1 = test_ptr("test/slh_dsa_test.c",0x1eb,
                                                 "PEM_read_bio_PUBKEY_ex(pub_bio, &pub, NULL, NULL, lib_ctx, NULL)"
                                                 ,uVar6);
                                if (iVar1 != 0) {
                                  ctx = (EVP_PKEY_CTX *)
                                        EVP_PKEY_CTX_new_from_pkey(lib_ctx,local_b8,0);
                                  uVar2 = test_ptr("test/slh_dsa_test.c",0x1ec,
                                                                                                      
                                                  "vctx = EVP_PKEY_CTX_new_from_pkey(lib_ctx, pub, NULL)"
                                                  ,ctx);
                                  if (uVar2 != 0) {
                                    EVP_PKEY_CTX_free(local_120);
                                    uVar3 = EVP_PKEY_verify_message_init(ctx,local_118,0);
                                    uVar2 = test_int_eq("test/slh_dsa_test.c",0x1f1,
                                                                                                                
                                                  "EVP_PKEY_verify_message_init(vctx, sig_alg, NULL)"
                                                  ,&_LC3,uVar3,1);
                                    if (uVar2 != 0) {
                                      local_120 = EVP_PKEY_CTX_dup(ctx);
                                      uVar2 = test_ptr("test/slh_dsa_test.c",0x1f2,
                                                       "dupctx = EVP_PKEY_CTX_dup(vctx)",local_120);
                                      if (uVar2 != 0) {
                                        iVar1 = EVP_PKEY_verify(ctx,local_130,local_a8,local_44,4);
                                        uVar2 = test_int_eq("test/slh_dsa_test.c",499,
                                                                                                                        
                                                  "EVP_PKEY_verify(vctx, sig, sig_len, msg, msg_len)"
                                                  ,&_LC3,iVar1,1);
                                        if (uVar2 != 0) {
                                          iVar1 = EVP_PKEY_verify(local_120,local_130 + local_a8,
                                                                  local_a8,local_44,4);
                                          iVar1 = test_int_eq("test/slh_dsa_test.c",500,
                                                                                                                            
                                                  "EVP_PKEY_verify(dupctx, sig + sig_len, sig_len, msg, msg_len)"
                                                  ,&_LC3,iVar1,1);
                                          uVar2 = (uint)(iVar1 != 0);
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_00101892;
                                }
                              }
                            }
                          }
                        }
                        ctx = (EVP_PKEY_CTX *)0x0;
                        uVar2 = 0;
                        goto LAB_00101892;
                      }
                    }
                    ctx = (EVP_PKEY_CTX *)0x0;
                    local_130 = (uchar *)0x0;
                    goto LAB_00101892;
                  }
                }
                ctx = (EVP_PKEY_CTX *)0x0;
                uVar2 = 0;
                local_130 = (uchar *)0x0;
                local_120 = (EVP_PKEY_CTX *)0x0;
                goto LAB_00101892;
              }
            }
            local_130 = (uchar *)0x0;
            ctx = (EVP_PKEY_CTX *)0x0;
            local_118 = 0;
            local_120 = (EVP_PKEY_CTX *)0x0;
            local_128 = (EVP_PKEY_CTX *)0x0;
            goto LAB_00101892;
          }
        }
        local_130 = (uchar *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        uVar2 = 0;
        local_118 = 0;
        local_120 = (EVP_PKEY_CTX *)0x0;
        local_128 = (EVP_PKEY_CTX *)0x0;
      }
    }
  }
LAB_00101892:
  EVP_CIPHER_free(uVar5);
  EVP_SIGNATURE_free(local_118);
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(local_b8);
  EVP_PKEY_free(local_b0);
  EVP_PKEY_CTX_free((EVP_PKEY_CTX *)0x0);
  EVP_PKEY_CTX_free(local_128);
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_CTX_free(local_120);
  BIO_free(a);
  BIO_free(a_00);
  CRYPTO_free(local_130);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong slh_dsa_key_validate_failure_test(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  EVP_PKEY *pkey;
  ulong uVar4;
  EVP_PKEY_CTX *ctx;
  
  pkey = (EVP_PKEY *)
         slh_dsa_key_from_data("SLH-DSA-SHA2-128f",slh_dsa_sha2_128s_0_keygen_priv,0x40,0);
  uVar4 = test_ptr("test/slh_dsa_test.c",0xba,
                   "key = slh_dsa_key_from_data(\"SLH-DSA-SHA2-128f\", slh_dsa_sha2_128s_0_keygen_priv, sizeof(slh_dsa_sha2_128s_0_keygen_priv), 0)"
                   ,pkey);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(lib_ctx,pkey,0);
  uVar1 = test_ptr("test/slh_dsa_test.c",0xbe,
                   "vctx = EVP_PKEY_CTX_new_from_pkey(lib_ctx, key, NULL)",ctx);
  if (uVar1 != 0) {
    uVar2 = EVP_PKEY_pairwise_check(ctx);
    iVar3 = test_int_eq("test/slh_dsa_test.c",0xc0,"EVP_PKEY_pairwise_check(vctx)",&_LC6,uVar2,0);
    uVar1 = (uint)(iVar3 != 0);
  }
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(pkey);
  return (ulong)uVar1;
}



uint slh_dsa_usage_test(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  EVP_PKEY_CTX *ctx;
  BIO_METHOD *pBVar4;
  BIO *a;
  BIO *a_00;
  undefined8 uVar5;
  undefined8 uVar6;
  EVP_PKEY_CTX *ctx_00;
  long in_FS_OFFSET;
  uchar *local_a8;
  EVP_PKEY_CTX *local_a0;
  undefined8 local_98;
  EVP_PKEY *local_70;
  EVP_PKEY *local_68;
  EVP_PKEY *local_60;
  size_t local_58;
  uchar local_4c [12];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_memcpy(local_4c + 8,"rld",4);
  local_70 = (EVP_PKEY *)0x0;
  local_68 = (EVP_PKEY *)0x0;
  local_60 = (EVP_PKEY *)0x0;
  local_58 = 0;
  builtin_memcpy(local_4c,"Hello Wo",8);
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(lib_ctx,"SLH-DSA-SHA2-128s",0);
  iVar1 = test_ptr("test/slh_dsa_test.c",0x179,
                   "gctx = EVP_PKEY_CTX_new_from_name(lib_ctx, \"SLH-DSA-SHA2-128s\", NULL)",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_keygen_init(ctx);
    iVar1 = test_int_eq("test/slh_dsa_test.c",0x17a,"EVP_PKEY_keygen_init(gctx)",&_LC3,iVar1,1);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_keygen(ctx,&local_70);
      iVar1 = test_int_eq("test/slh_dsa_test.c",0x17b,"EVP_PKEY_keygen(gctx, &gkey)",&_LC3,iVar1,1);
      if (iVar1 != 0) {
        pBVar4 = BIO_s_mem();
        a = BIO_new(pBVar4);
        iVar1 = test_ptr("test/slh_dsa_test.c",0x17f,"pub_bio = BIO_new(BIO_s_mem())",a);
        if (iVar1 == 0) {
          local_a8 = (uchar *)0x0;
          ctx_00 = (EVP_PKEY_CTX *)0x0;
          a_00 = (BIO *)0x0;
          uVar5 = 0;
          local_98 = 0;
          local_a0 = (EVP_PKEY_CTX *)0x0;
          uVar2 = 0;
        }
        else {
          pBVar4 = BIO_s_mem();
          a_00 = BIO_new(pBVar4);
          iVar1 = test_ptr("test/slh_dsa_test.c",0x180,"priv_bio = BIO_new(BIO_s_mem())",a_00);
          if (iVar1 == 0) {
            local_a8 = (uchar *)0x0;
            ctx_00 = (EVP_PKEY_CTX *)0x0;
            uVar5 = 0;
            local_98 = 0;
            local_a0 = (EVP_PKEY_CTX *)0x0;
            uVar2 = 0;
          }
          else {
            uVar5 = EVP_CIPHER_fetch(lib_ctx,"AES-256-CBC",0);
            iVar1 = test_ptr("test/slh_dsa_test.c",0x181,
                             "cipher = EVP_CIPHER_fetch(lib_ctx, \"AES-256-CBC\", NULL)",uVar5);
            if (iVar1 != 0) {
              iVar1 = PEM_write_bio_PUBKEY_ex(a,local_70,lib_ctx,0);
              iVar1 = test_true("test/slh_dsa_test.c",0x182,
                                "PEM_write_bio_PUBKEY_ex(pub_bio, gkey, lib_ctx, NULL)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = PEM_write_bio_PrivateKey_ex(a_00,local_70,uVar5,0,0,0,"Password",lib_ctx,0);
                uVar2 = test_true("test/slh_dsa_test.c",0x183,
                                  "PEM_write_bio_PrivateKey_ex(priv_bio, gkey, cipher, NULL, 0, NULL, (void *)pass, lib_ctx, NULL)"
                                  ,iVar1 != 0);
                if (uVar2 != 0) {
                  uVar6 = PEM_read_bio_PrivateKey_ex(a_00,&local_60,0,"Password",lib_ctx,0);
                  uVar2 = test_ptr("test/slh_dsa_test.c",0x189,
                                   "PEM_read_bio_PrivateKey_ex(priv_bio, &priv, NULL, pass, lib_ctx, NULL)"
                                   ,uVar6);
                  if (uVar2 != 0) {
                    local_a0 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(lib_ctx,local_60,0);
                    iVar1 = test_ptr("test/slh_dsa_test.c",0x18a,
                                     "sctx = EVP_PKEY_CTX_new_from_pkey(lib_ctx, priv, NULL)",
                                     local_a0);
                    if (iVar1 == 0) {
                      ctx_00 = (EVP_PKEY_CTX *)0x0;
                      local_a8 = (uchar *)0x0;
                      local_98 = 0;
                      uVar2 = 0;
                    }
                    else {
                      local_98 = EVP_SIGNATURE_fetch(lib_ctx,"SLH-DSA-SHA2-128s",0);
                      iVar1 = test_ptr("test/slh_dsa_test.c",0x18b,
                                       "sig_alg = EVP_SIGNATURE_fetch(lib_ctx, \"SLH-DSA-SHA2-128s\", NULL)"
                                      );
                      if (iVar1 != 0) {
                        uVar3 = EVP_PKEY_sign_message_init(local_a0,local_98,0);
                        iVar1 = test_int_eq("test/slh_dsa_test.c",0x18c,
                                            "EVP_PKEY_sign_message_init(sctx, sig_alg, NULL)",&_LC3,
                                            uVar3,1);
                        if (iVar1 != 0) {
                          iVar1 = EVP_PKEY_sign(local_a0,(uchar *)0x0,&local_58,local_4c,0xb);
                          iVar1 = test_int_eq("test/slh_dsa_test.c",399,
                                              "EVP_PKEY_sign(sctx, NULL, &sig_len, msg, msg_len)",
                                              &_LC3,iVar1,1);
                          if (iVar1 == 0) {
                            ctx_00 = (EVP_PKEY_CTX *)0x0;
                            local_a8 = (uchar *)0x0;
                            uVar2 = 0;
                          }
                          else {
                            ctx_00 = (EVP_PKEY_CTX *)0x0;
                            local_a8 = (uchar *)CRYPTO_malloc((int)local_58,"test/slh_dsa_test.c",
                                                              400);
                            uVar2 = test_ptr("test/slh_dsa_test.c",400,
                                             "sig = OPENSSL_malloc(sig_len)",local_a8);
                            if (uVar2 != 0) {
                              iVar1 = EVP_PKEY_sign(local_a0,local_a8,&local_58,local_4c,0xb);
                              iVar1 = test_int_eq("test/slh_dsa_test.c",0x191,
                                                  "EVP_PKEY_sign(sctx, sig, &sig_len, msg, msg_len)"
                                                  ,&_LC3,iVar1,1);
                              if (iVar1 != 0) {
                                iVar1 = EVP_PKEY_pairwise_check(local_a0);
                                iVar1 = test_true("test/slh_dsa_test.c",0x193,
                                                  "EVP_PKEY_pairwise_check(sctx)",iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = EVP_PKEY_public_check(local_a0);
                                  iVar1 = test_true("test/slh_dsa_test.c",0x194,
                                                    "EVP_PKEY_public_check(sctx)",iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = EVP_PKEY_private_check(local_a0);
                                    iVar1 = test_true("test/slh_dsa_test.c",0x195,
                                                      "EVP_PKEY_private_check(sctx)",iVar1 != 0);
                                    if (iVar1 != 0) {
                                      uVar6 = PEM_read_bio_PUBKEY_ex(a,&local_68,0,0,lib_ctx,0);
                                      iVar1 = test_ptr("test/slh_dsa_test.c",0x198,
                                                                                                              
                                                  "PEM_read_bio_PUBKEY_ex(pub_bio, &pub, NULL, NULL, lib_ctx, NULL)"
                                                  ,uVar6);
                                      if (iVar1 != 0) {
                                        ctx_00 = (EVP_PKEY_CTX *)
                                                 EVP_PKEY_CTX_new_from_pkey(lib_ctx,local_68,0);
                                        uVar2 = test_ptr("test/slh_dsa_test.c",0x199,
                                                                                                                  
                                                  "vctx = EVP_PKEY_CTX_new_from_pkey(lib_ctx, pub, NULL)"
                                                  ,ctx_00);
                                        if (uVar2 != 0) {
                                          uVar3 = EVP_PKEY_verify_message_init(ctx_00,local_98,0);
                                          uVar2 = test_int_eq("test/slh_dsa_test.c",0x19c,
                                                                                                                            
                                                  "EVP_PKEY_verify_message_init(vctx, sig_alg, NULL)"
                                                  ,&_LC3,uVar3,1);
                                          if (uVar2 != 0) {
                                            iVar1 = EVP_PKEY_verify(ctx_00,local_a8,local_58,
                                                                    local_4c,0xb);
                                            iVar1 = test_int_eq("test/slh_dsa_test.c",0x19d,
                                                                                                                                
                                                  "EVP_PKEY_verify(vctx, sig, sig_len, msg, msg_len)"
                                                  ,&_LC3,iVar1,1);
                                            uVar2 = (uint)(iVar1 != 0);
                                          }
                                        }
                                        goto LAB_001022a7;
                                      }
                                    }
                                  }
                                }
                              }
                              ctx_00 = (EVP_PKEY_CTX *)0x0;
                              uVar2 = 0;
                            }
                          }
                          goto LAB_001022a7;
                        }
                      }
                      ctx_00 = (EVP_PKEY_CTX *)0x0;
                      uVar2 = 0;
                      local_a8 = (uchar *)0x0;
                    }
                    goto LAB_001022a7;
                  }
                }
                local_a8 = (uchar *)0x0;
                ctx_00 = (EVP_PKEY_CTX *)0x0;
                local_98 = 0;
                local_a0 = (EVP_PKEY_CTX *)0x0;
                goto LAB_001022a7;
              }
            }
            local_a8 = (uchar *)0x0;
            ctx_00 = (EVP_PKEY_CTX *)0x0;
            uVar2 = 0;
            local_98 = 0;
            local_a0 = (EVP_PKEY_CTX *)0x0;
          }
        }
        goto LAB_001022a7;
      }
    }
  }
  ctx_00 = (EVP_PKEY_CTX *)0x0;
  a_00 = (BIO *)0x0;
  a = (BIO *)0x0;
  uVar5 = 0;
  local_a8 = (uchar *)0x0;
  uVar2 = 0;
  local_98 = 0;
  local_a0 = (EVP_PKEY_CTX *)0x0;
LAB_001022a7:
  EVP_CIPHER_free(uVar5);
  EVP_SIGNATURE_free(local_98);
  EVP_PKEY_free(local_70);
  EVP_PKEY_free(local_68);
  EVP_PKEY_free(local_60);
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_CTX_free(local_a0);
  EVP_PKEY_CTX_free(ctx_00);
  BIO_free(a);
  BIO_free(a_00);
  CRYPTO_free(local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool slh_dsa_key_validate_test(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  bool bVar3;
  
  pkey = (EVP_PKEY *)slh_dsa_key_from_data(slh_dsa_sig_testdata,DAT_00105268,_DAT_00105270,1);
  iVar1 = test_ptr("test/slh_dsa_test.c",0x9f,
                   "key = slh_dsa_key_from_data(td->alg, td->pub, td->pub_len, 1)",pkey);
  if (iVar1 == 0) {
    return false;
  }
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(lib_ctx,pkey,0);
  iVar1 = test_ptr("test/slh_dsa_test.c",0xa1,
                   "vctx = EVP_PKEY_CTX_new_from_pkey(lib_ctx, key, NULL)",ctx);
  if (iVar1 != 0) {
    uVar2 = EVP_PKEY_public_check(ctx);
    iVar1 = test_int_eq("test/slh_dsa_test.c",0xa3,"EVP_PKEY_public_check(vctx)",&_LC3,uVar2,1);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_private_check(ctx);
      iVar1 = test_int_eq("test/slh_dsa_test.c",0xa5,"EVP_PKEY_private_check(vctx)",&_LC6,uVar2,0);
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_pairwise_check(ctx);
        iVar1 = test_int_eq("test/slh_dsa_test.c",0xa7,"EVP_PKEY_pairwise_check(vctx)",&_LC6,uVar2,0
                           );
        bVar3 = iVar1 != 0;
        goto LAB_00102a39;
      }
    }
  }
  bVar3 = false;
LAB_00102a39:
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(pkey);
  return bVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 slh_dsa_key_eq_test(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  EVP_PKEY *pEVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  puVar8 = &local_58;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_40 = 0;
  uVar3 = slh_dsa_key_from_data(slh_dsa_sig_testdata,DAT_00105268,_DAT_00105270,1);
  local_58 = uVar3;
  iVar1 = test_ptr("test/slh_dsa_test.c",0x7f,
                   "key[0] = slh_dsa_key_from_data(td1->alg, td1->pub, td1->pub_len, 1)",uVar3);
  if (iVar1 != 0) {
    uVar4 = slh_dsa_key_from_data(slh_dsa_sig_testdata,DAT_00105268,_DAT_00105270,1);
    local_50._0_8_ = uVar4;
    iVar1 = test_ptr("test/slh_dsa_test.c",0x80,
                     "key[1] = slh_dsa_key_from_data(td1->alg, td1->pub, td1->pub_len, 1)",uVar4);
    if (iVar1 != 0) {
      uVar5 = slh_dsa_key_from_data(PTR_s_SLH_DSA_SHA2_192f_001052b8,DAT_001052c0,DAT_001052c8,1);
      local_50._8_8_ = uVar5;
      iVar1 = test_ptr("test/slh_dsa_test.c",0x81,
                       "key[2] = slh_dsa_key_from_data(td2->alg, td2->pub, td2->pub_len, 1)",uVar5);
      if (iVar1 != 0) {
        uVar6 = EVP_PKEY_dup(uVar3);
        local_40 = uVar6;
        iVar1 = test_ptr("test/slh_dsa_test.c",0x82,"key[3] = EVP_PKEY_dup(key[0])",uVar6);
        if (iVar1 != 0) {
          uVar2 = EVP_PKEY_eq(uVar3,uVar4);
          iVar1 = test_int_eq("test/slh_dsa_test.c",0x85,"EVP_PKEY_eq(key[0], key[1])",&_LC3,uVar2,1
                             );
          if (iVar1 != 0) {
            uVar2 = EVP_PKEY_eq(uVar3,uVar5);
            iVar1 = test_int_ne("test/slh_dsa_test.c",0x86,"EVP_PKEY_eq(key[0], key[2])",&_LC3,uVar2
                                ,1);
            if (iVar1 != 0) {
              uVar2 = EVP_PKEY_eq(uVar3,uVar6);
              iVar1 = test_int_eq("test/slh_dsa_test.c",0x87,"EVP_PKEY_eq(key[0], key[3])",&_LC3,
                                  uVar2,1);
              if (iVar1 != 0) {
                pEVar7 = (EVP_PKEY *)EVP_PKEY_Q_keygen(lib_ctx,0,&_LC117,"P-256");
                iVar1 = test_ptr("test/slh_dsa_test.c",0x8b,
                                 "eckey = EVP_PKEY_Q_keygen(lib_ctx, NULL, \"EC\", \"P-256\")",
                                 pEVar7);
                if (iVar1 != 0) {
                  uVar2 = EVP_PKEY_eq(uVar3,pEVar7);
                  uVar2 = test_int_ne("test/slh_dsa_test.c",0x8d,"EVP_PKEY_eq(key[0], eckey)",&_LC3,
                                      uVar2,1);
                  EVP_PKEY_free(pEVar7);
                  goto LAB_00102b4d;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_00102b4d:
  do {
    pEVar7 = (EVP_PKEY *)*puVar8;
    puVar8 = puVar8 + 1;
    EVP_PKEY_free(pEVar7);
  } while (puVar8 != &local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 slh_dsa_bad_pub_len_test(void)

{
  long lVar1;
  int iVar2;
  EVP_PKEY *pkey;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_68 [72];
  long local_20;
  
  pkey = (EVP_PKEY *)0x0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = test_size_t_le("test/slh_dsa_test.c",0x5f,"td->pub_len","sizeof(pubdata)",
                         CONCAT44(uRam0000000000105274,DAT_00105270),0x41);
  if (iVar2 != 0) {
    OPENSSL_cleanse(auStack_68,0x41);
    lVar1 = CONCAT44(uRam0000000000105274,DAT_00105270);
    __memcpy_chk(auStack_68,DAT_00105268,lVar1,0x41);
    pkey = (EVP_PKEY *)slh_dsa_key_from_data(slh_dsa_sig_testdata,auStack_68,lVar1 + -1,1);
    iVar2 = test_ptr_null("test/slh_dsa_test.c",0x65,
                          "pkey = slh_dsa_key_from_data(td->alg, pubdata, td->pub_len - 1, 1)",pkey)
    ;
    if (iVar2 != 0) {
      pkey = (EVP_PKEY *)
             slh_dsa_key_from_data
                       (slh_dsa_sig_testdata,auStack_68,
                        CONCAT44(uRam0000000000105274,DAT_00105270) + 1,1);
      uVar3 = 1;
      iVar2 = test_ptr_null("test/slh_dsa_test.c",0x67,
                            "pkey = slh_dsa_key_from_data(td->alg, pubdata, td->pub_len + 1, 1)",
                            pkey);
      if (iVar2 != 0) goto LAB_00102dd9;
    }
  }
  uVar3 = 0;
  test_note("Incorrectly accepted public key of length %u (expected %u)",0,DAT_00105270);
LAB_00102dd9:
  EVP_PKEY_free(pkey);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined1 * test_get_options(void)

{
  return options_2;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        iVar1 = test_get_libctx(&lib_ctx,&null_prov,uVar2,&lib_prov,0);
        if (iVar1 == 0) {
          return 0;
        }
        add_test("slh_dsa_bad_pub_len_test",slh_dsa_bad_pub_len_test);
        add_test("slh_dsa_key_validate_test",slh_dsa_key_validate_test);
        add_test("slh_dsa_key_validate_failure_test",slh_dsa_key_validate_failure_test);
        add_test("slh_dsa_key_eq_test",slh_dsa_key_eq_test);
        add_test("slh_dsa_usage_test",slh_dsa_usage_test);
        add_test("slh_dsa_deterministic_usage_test",slh_dsa_deterministic_usage_test);
        add_all_tests("slh_dsa_sign_verify_test",slh_dsa_sign_verify_test,6,1);
        add_all_tests("slh_dsa_keygen_test",slh_dsa_keygen_test,0xc,1);
        add_test("slh_dsa_digest_sign_verify_test",slh_dsa_digest_sign_verify_test);
        add_test("slh_dsa_keygen_invalid_test",0x100000);
        return 1;
      }
      if (iVar1 != 1) break;
      uVar2 = opt_arg();
      iVar1 = opt_next();
    }
  } while (iVar1 - 500U < 6);
  return 0;
}



void cleanup_tests(void)

{
  OSSL_PROVIDER_unload(null_prov);
  OSSL_PROVIDER_unload(lib_prov);
  OSSL_LIB_CTX_free(lib_ctx);
  return;
}



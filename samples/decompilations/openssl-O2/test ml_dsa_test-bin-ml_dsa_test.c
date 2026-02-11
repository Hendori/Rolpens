
bool ml_dsa_create_keypair
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
               undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90 [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    puVar3 = &local_b8;
  }
  else {
    puVar3 = local_90;
    OSSL_PARAM_construct_octet_string(&local_e8,&_LC0);
    local_98 = local_c8;
    local_b8 = local_e8;
    uStack_b0 = uStack_e0;
    local_a8 = local_d8;
    uStack_a0 = uStack_d0;
  }
  bVar5 = param_3 != 0;
  puVar4 = puVar3;
  if (param_5 != 0) {
    puVar4 = puVar3 + 5;
    bVar5 = bVar5 | 2;
    OSSL_PARAM_construct_octet_string(&local_e8,&_LC1,param_5,param_6);
    *puVar3 = local_e8;
    puVar3[1] = uStack_e0;
    puVar3[2] = local_d8;
    puVar3[3] = uStack_d0;
    puVar3[4] = local_c8;
  }
  OSSL_PARAM_construct_end(&local_e8);
  *puVar4 = local_e8;
  puVar4[1] = uStack_e0;
  puVar4[2] = local_d8;
  puVar4[3] = uStack_d0;
  puVar4[4] = local_c8;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(lib_ctx,param_2,0);
  iVar1 = test_ptr("test/ml_dsa_test.c",0x49,"ctx = EVP_PKEY_CTX_new_from_name(lib_ctx, name, NULL)"
                   ,ctx);
  if (iVar1 != 0) {
    uVar2 = EVP_PKEY_fromdata_init(ctx);
    iVar1 = test_int_eq("test/ml_dsa_test.c",0x4a,"EVP_PKEY_fromdata_init(ctx)",&_LC4,uVar2,1);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_fromdata(ctx,param_1,bVar5,&local_b8);
      iVar1 = test_int_eq("test/ml_dsa_test.c",0x4b,
                          "EVP_PKEY_fromdata(ctx, pkey, selection, params)","expected",uVar2,param_7
                         );
      bVar6 = iVar1 != 0;
      goto LAB_00100123;
    }
  }
  bVar6 = false;
LAB_00100123:
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ml_dsa_priv_pub_bad_t0_test(void)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  byte bVar7;
  EVP_PKEY *local_38;
  long local_30;
  
  bVar7 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (EVP_PKEY *)0x0;
  ptr = (undefined8 *)CRYPTO_memdup(ml_dsa_65_0_sig_gen_priv,0xfc0,"test/ml_dsa_test.c",0x202);
  iVar1 = test_ptr("test/ml_dsa_test.c",0x204,&_LC0,ptr);
  if (iVar1 != 0) {
    *ptr = DAT_00104900;
    lVar2 = (long)ptr - (long)((ulong)(ptr + 1) & 0xfffffffffffffff8);
    ptr[0x1f7] = DAT_001058b8;
    puVar4 = (undefined8 *)((long)&DAT_00104900 - lVar2);
    puVar5 = (undefined8 *)((ulong)(ptr + 1) & 0xfffffffffffffff8);
    for (uVar3 = (ulong)((int)lVar2 + 0xfc0U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (ulong)bVar7 * -2 + 1;
      puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
    }
    *(undefined1 *)(ptr + 0xc0) = 0xbe;
    iVar1 = ml_dsa_create_keypair(&local_38,"ML-DSA-65",ptr,0xfc0,0,0,0);
    iVar1 = test_true("test/ml_dsa_test.c",0x20c,
                      "ml_dsa_create_keypair(&key, td->alg, priv, td->priv_len, NULL, 0, 0)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      *(byte *)(ptr + 0xc0) = *(byte *)(ptr + 0xc0) ^ 1;
      iVar1 = ml_dsa_create_keypair(&local_38,"ML-DSA-65",ptr,0xfc0,0,0,1);
      iVar1 = test_true("test/ml_dsa_test.c",0x211,
                        "ml_dsa_create_keypair(&key, td->alg, priv, td->priv_len, NULL, 0, 1)",
                        iVar1 != 0);
      bVar6 = iVar1 != 0;
      goto LAB_00100267;
    }
  }
  bVar6 = false;
LAB_00100267:
  CRYPTO_free(ptr);
  EVP_PKEY_free(local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool from_data_invalid_public_test(void)

{
  int iVar1;
  byte *ptr;
  long in_FS_OFFSET;
  bool bVar2;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (EVP_PKEY *)0x0;
  ptr = (byte *)CRYPTO_memdup(ml_dsa_65_0_keygen_pub,0x7a0,"test/ml_dsa_test.c",0x108);
  iVar1 = test_ptr("test/ml_dsa_test.c",0x108,"pub = OPENSSL_memdup(tst->pub, tst->pub_len)",ptr);
  if (iVar1 != 0) {
    *ptr = *ptr ^ 1;
    iVar1 = ml_dsa_create_keypair
                      (&local_48,"ML-DSA-65",ml_dsa_65_0_keygen_priv,0xfc0,ml_dsa_65_0_keygen_pub,
                       0x7a0,1);
    iVar1 = test_true("test/ml_dsa_test.c",0x10c,
                      "ml_dsa_create_keypair(&pkey, tst->name, tst->priv, tst->priv_len, tst->pub, tst->pub_len, 1)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ml_dsa_create_keypair(&local_48,"ML-DSA-65",ml_dsa_65_0_keygen_priv,0xfc0,ptr,0x7a0,0)
      ;
      iVar1 = test_true("test/ml_dsa_test.c",0x10e,
                        "ml_dsa_create_keypair(&pkey, tst->name, tst->priv, tst->priv_len, pub, tst->pub_len, 0)"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = ml_dsa_create_keypair
                          (&local_48,"ML-DSA-65",ml_dsa_65_0_keygen_priv,0xfc0,
                           ml_dsa_65_0_keygen_pub,0x79f,0);
        iVar1 = test_true("test/ml_dsa_test.c",0x110,
                          "ml_dsa_create_keypair(&pkey, tst->name, tst->priv, tst->priv_len, tst->pub, tst->pub_len - 1, 0)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = ml_dsa_create_keypair
                            (&local_48,"ML-DSA-65",ml_dsa_65_0_keygen_priv,0xfc0,
                             ml_dsa_65_0_keygen_pub,0x7a1,0);
          iVar1 = test_true("test/ml_dsa_test.c",0x112,
                            "ml_dsa_create_keypair(&pkey, tst->name, tst->priv, tst->priv_len, tst->pub, tst->pub_len + 1, 0)"
                            ,iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = ml_dsa_create_keypair
                              (&local_48,"ML-DSA-65",ml_dsa_65_0_keygen_priv,0xfbf,
                               ml_dsa_65_0_keygen_pub,0x7a0,0);
            iVar1 = test_true("test/ml_dsa_test.c",0x114,
                              "ml_dsa_create_keypair(&pkey, tst->name, tst->priv, tst->priv_len - 1, tst->pub, tst->pub_len, 0)"
                              ,iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = ml_dsa_create_keypair
                                (&local_48,"ML-DSA-65",ml_dsa_65_0_keygen_priv,0xfc1,
                                 ml_dsa_65_0_keygen_pub,0x7a0,0);
              iVar1 = test_true("test/ml_dsa_test.c",0x116,
                                "ml_dsa_create_keypair(&pkey, tst->name, tst->priv, tst->priv_len + 1, tst->pub, tst->pub_len, 0)"
                                ,iVar1 != 0);
              bVar2 = iVar1 != 0;
              goto LAB_0010040e;
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_0010040e:
  CRYPTO_free(ptr);
  EVP_PKEY_free(local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
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
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_98 [5];
  undefined8 local_70 [10];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = local_98;
  local_a0 = 0;
  if (param_3 != 0) {
    puVar3 = local_70;
    OSSL_PARAM_construct_octet_string(&local_d8,&_LC19,param_2,param_3);
  }
  OSSL_PARAM_construct_utf8_string(&local_d8,"properties","?fips=yes",0);
  *puVar3 = local_d8;
  puVar3[1] = uStack_d0;
  puVar3[2] = local_c8;
  puVar3[3] = uStack_c0;
  puVar3[4] = local_b8;
  OSSL_PARAM_construct_end(&local_d8);
  puVar3[5] = local_d8;
  puVar3[6] = uStack_d0;
  puVar3[7] = local_c8;
  puVar3[8] = uStack_c0;
  puVar3[9] = local_b8;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(lib_ctx,param_1,0);
  iVar1 = test_ptr("test/ml_dsa_test.c",0x2a,"ctx = EVP_PKEY_CTX_new_from_name(lib_ctx, alg, NULL)",
                   ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_keygen_init(ctx);
    iVar1 = test_int_eq("test/ml_dsa_test.c",0x2b,"EVP_PKEY_keygen_init(ctx)",&_LC4,iVar1,1);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_CTX_set_params(ctx,local_98);
      iVar1 = test_int_eq("test/ml_dsa_test.c",0x2c,"EVP_PKEY_CTX_set_params(ctx, params)",&_LC4,
                          uVar2,1);
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_generate(ctx,&local_a0);
        iVar1 = test_int_eq("test/ml_dsa_test.c",0x2d,"EVP_PKEY_generate(ctx, &pkey)",&_LC4,uVar2,1)
        ;
        if (iVar1 != 0) goto LAB_001006f5;
      }
    }
  }
  local_a0 = 0;
LAB_001006f5:
  EVP_PKEY_CTX_free(ctx);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_a0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ml_dsa_digest_sign_verify_test(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  EVP_PKEY *pkey;
  undefined8 uVar4;
  void *ptr;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined8 uVar6;
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
  undefined8 local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  pkey = (EVP_PKEY *)do_gen_key("ML-DSA-44",0,0);
  iVar1 = test_ptr("test/ml_dsa_test.c",0x1cc,"key = do_gen_key(alg, NULL, 0)",pkey);
  if (iVar1 == 0) {
    uVar3 = 0;
    uVar4 = 0;
    ptr = (void *)0x0;
    goto LAB_0010088f;
  }
  puVar5 = &local_90;
  OSSL_PARAM_construct_int(&local_f8,"message-encoding",&DAT_0010d360);
  local_b8 = local_f8;
  uStack_b0 = uStack_f0;
  local_98 = local_d8;
  local_a8 = local_e8;
  uStack_a0 = uStack_e0;
  if (_DAT_0010d350 != 0) {
    puVar5 = local_68;
    OSSL_PARAM_construct_octet_string(&local_f8,"context-string",_DAT_0010d350,_DAT_0010d358);
    local_70 = local_d8;
    local_90 = local_f8;
    uStack_88 = uStack_f0;
    local_80 = local_e8;
    uStack_78 = uStack_e0;
  }
  OSSL_PARAM_construct_end(&local_f8);
  *puVar5 = local_f8;
  puVar5[1] = uStack_f0;
  puVar5[2] = local_e8;
  puVar5[3] = uStack_e0;
  puVar5[4] = local_d8;
  uVar4 = EVP_MD_CTX_new();
  iVar1 = test_ptr("test/ml_dsa_test.c",0x1d6,"mctx = EVP_MD_CTX_new()",uVar4);
  if (iVar1 != 0) {
    uVar2 = EVP_DigestSignInit_ex(uVar4,0,"SHA256",lib_ctx,"?fips=true",pkey,&local_b8);
    uVar3 = test_int_eq("test/ml_dsa_test.c",0x1d7,
                        "EVP_DigestSignInit_ex(mctx, NULL, \"SHA256\", lib_ctx, \"?fips=true\", key, params)"
                        ,&_LC33,uVar2,0);
    ptr = (void *)0x0;
    if (uVar3 == 0) goto LAB_0010088f;
    uVar2 = EVP_DigestSignInit_ex(uVar4,0,0,lib_ctx,"?fips=true",pkey,&local_b8);
    uVar3 = test_int_eq("test/ml_dsa_test.c",0x1da,
                        "EVP_DigestSignInit_ex(mctx, NULL, NULL, lib_ctx, \"?fips=true\", key, params)"
                        ,&_LC4,uVar2,1);
    if ((uVar3 == 0) || (uVar3 = 1, ptr = (void *)0x0, _DAT_0010d364 == 0)) goto LAB_0010088f;
    uVar2 = EVP_DigestSign(uVar4,0,&local_c0,sig_params,DAT_0010d348);
    iVar1 = test_int_eq("test/ml_dsa_test.c",0x1e1,
                        "EVP_DigestSign(mctx, NULL, &sig_len, sp->msg, sp->msg_len)",&_LC4,uVar2,1);
    if (iVar1 != 0) {
      ptr = (void *)CRYPTO_zalloc(local_c0,"test/ml_dsa_test.c",0x1e2);
      iVar1 = test_ptr("test/ml_dsa_test.c",0x1e2,"sig = OPENSSL_zalloc(sig_len)",ptr);
      if (iVar1 != 0) {
        local_c0 = local_c0 + -1;
        uVar2 = EVP_DigestSign(uVar4,ptr,&local_c0,sig_params,DAT_0010d348);
        uVar6 = 0x100b69;
        iVar1 = test_int_eq("test/ml_dsa_test.c",0x1e5,
                            "EVP_DigestSign(mctx, sig, &sig_len, sp->msg, sp->msg_len)",&_LC33,uVar2
                            ,0);
        if (iVar1 != 0) {
          local_c0 = local_c0 + 1;
          uVar2 = EVP_DigestSignInit_ex(uVar4,0,0,lib_ctx,"?fips=true",pkey,&local_b8);
          uVar3 = test_int_eq("test/ml_dsa_test.c",0x1e8,
                              "EVP_DigestSignInit_ex(mctx, NULL, NULL, lib_ctx, \"?fips=true\", key, params)"
                              ,&_LC4,uVar2,1);
          if (uVar3 == 0) goto LAB_0010088f;
          uVar2 = EVP_DigestSign(uVar4,ptr,&local_c0,sig_params,DAT_0010d348,uVar6);
          iVar1 = test_int_eq("test/ml_dsa_test.c",0x1ea,
                              "EVP_DigestSign(mctx, sig, &sig_len, sp->msg, sp->msg_len)",&_LC4,
                              uVar2,1);
          if (iVar1 != 0) {
            uVar2 = EVP_DigestVerifyInit_ex(uVar4,0,"SHA256",lib_ctx,"?fips=true",pkey,&local_b8);
            uVar6 = test_int_eq("test/ml_dsa_test.c",0x1ec,
                                "EVP_DigestVerifyInit_ex(mctx, NULL, \"SHA256\", lib_ctx, \"?fips=true\", key, params)"
                                ,&_LC33,uVar2,0);
            if ((int)uVar6 != 0) {
              uVar2 = EVP_DigestVerifyInit_ex(uVar4,0,0,lib_ctx,"?fips=true",pkey,&local_b8,uVar6);
              iVar1 = test_int_eq("test/ml_dsa_test.c",0x1ef,
                                  "EVP_DigestVerifyInit_ex(mctx, NULL, NULL, lib_ctx, \"?fips=true\", key, params)"
                                  ,&_LC4,uVar2,1);
              if (iVar1 != 0) {
                uVar2 = EVP_DigestVerify(uVar4,ptr,local_c0,sig_params,DAT_0010d348);
                iVar1 = test_int_eq("test/ml_dsa_test.c",0x1f2,
                                    "EVP_DigestVerify(mctx, sig, sig_len, sp->msg, sp->msg_len)",
                                    &_LC4,uVar2,1);
                uVar3 = (uint)(iVar1 != 0);
                goto LAB_0010088f;
              }
            }
          }
        }
      }
      uVar3 = 0;
      goto LAB_0010088f;
    }
  }
  uVar3 = 0;
  ptr = (void *)0x0;
LAB_0010088f:
  EVP_PKEY_free(pkey);
  EVP_MD_CTX_free(uVar4);
  CRYPTO_free(ptr);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool from_data_bad_input_test(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a4;
  EVP_PKEY *local_a0;
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
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a4 = 0;
  local_a0 = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(lib_ctx,"ML-DSA-44",0);
  iVar1 = test_ptr("test/ml_dsa_test.c",0x129,
                   "ctx = EVP_PKEY_CTX_new_from_name(lib_ctx, \"ML-DSA-44\", NULL)",ctx);
  if (iVar1 != 0) {
    uVar2 = EVP_PKEY_fromdata_init(ctx);
    iVar1 = test_int_eq("test/ml_dsa_test.c",0x12a,"EVP_PKEY_fromdata_init(ctx)",&_LC4,uVar2,1);
    if (iVar1 != 0) {
      uVar3 = EVP_PKEY_fromdata_settable(ctx,3);
      iVar1 = test_ptr("test/ml_dsa_test.c",299,
                       "EVP_PKEY_fromdata_settable(ctx, OSSL_KEYMGMT_SELECT_KEYPAIR)",uVar3);
      if (iVar1 != 0) {
        uVar3 = EVP_PKEY_fromdata_settable(ctx,0);
        iVar1 = test_ptr_null("test/ml_dsa_test.c",300,"EVP_PKEY_fromdata_settable(ctx, 0)",uVar3);
        if (iVar1 != 0) {
          OSSL_PARAM_construct_uint32(&local_d8,&_LC0,&local_a4);
          local_78 = local_b8;
          local_98 = local_d8;
          uStack_90 = uStack_d0;
          local_88 = local_c8;
          uStack_80 = uStack_c0;
          OSSL_PARAM_construct_end(&local_d8);
          local_50 = local_b8;
          local_70 = local_d8;
          uStack_68 = uStack_d0;
          local_60 = local_c8;
          uStack_58 = uStack_c0;
          uVar2 = EVP_PKEY_fromdata(ctx,&local_a0,1,&local_98);
          iVar1 = test_int_ne("test/ml_dsa_test.c",0x131,
                              "EVP_PKEY_fromdata(ctx, &pkey, OSSL_KEYMGMT_SELECT_PRIVATE_KEY, params)"
                              ,&_LC4,uVar2,1);
          if (iVar1 != 0) {
            OSSL_PARAM_construct_uint32(&local_d8,&_LC1,&local_a4);
            local_98 = local_d8;
            uStack_90 = uStack_d0;
            local_88 = local_c8;
            uStack_80 = uStack_c0;
            local_78 = local_b8;
            OSSL_PARAM_construct_end(&local_d8);
            local_50 = local_b8;
            local_70 = local_d8;
            uStack_68 = uStack_d0;
            local_60 = local_c8;
            uStack_58 = uStack_c0;
            uVar2 = EVP_PKEY_fromdata(ctx,&local_a0,2,&local_98);
            iVar1 = test_int_ne("test/ml_dsa_test.c",0x136,
                                "EVP_PKEY_fromdata(ctx, &pkey, OSSL_KEYMGMT_SELECT_PUBLIC_KEY, params)"
                                ,&_LC4,uVar2,1);
            bVar4 = iVar1 != 0;
            goto LAB_00100d85;
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_00100d85:
  EVP_PKEY_free(local_a0);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint do_ml_dsa_sign_verify(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  EVP_PKEY *pkey;
  long lVar6;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar7;
  uchar *sig;
  long lVar8;
  undefined8 *puVar9;
  EVP_PKEY_CTX *ctx_00;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  size_t local_c0;
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
  undefined8 local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  pkey = (EVP_PKEY *)do_gen_key(param_1,0,0);
  iVar2 = test_ptr("test/ml_dsa_test.c",0x18d,"key = do_gen_key(alg, NULL, 0)",pkey);
  if (iVar2 == 0) {
    sig = (uchar *)0x0;
    uVar7 = 0;
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    uVar4 = 0;
  }
  else {
    lVar6 = (long)param_2;
    lVar8 = lVar6 * 0x28;
    puVar9 = &local_90;
    OSSL_PARAM_construct_int(&local_f8,"message-encoding",&DAT_0010d360 + lVar8);
    local_b8 = local_f8;
    uStack_b0 = uStack_f0;
    local_98 = local_d8;
    local_a8 = local_e8;
    uStack_a0 = uStack_e0;
    if (*(long *)(&DAT_0010d350 + lVar8) != 0) {
      puVar9 = local_68;
      OSSL_PARAM_construct_octet_string
                (&local_f8,"context-string",*(long *)(&DAT_0010d350 + lVar8),
                 *(undefined8 *)(&DAT_0010d358 + lVar8));
      local_70 = local_d8;
      local_90 = local_f8;
      uStack_88 = uStack_f0;
      local_80 = local_e8;
      uStack_78 = uStack_e0;
    }
    OSSL_PARAM_construct_end(&local_f8);
    *puVar9 = local_f8;
    puVar9[1] = uStack_f0;
    puVar9[2] = local_e8;
    puVar9[3] = uStack_e0;
    puVar9[4] = local_d8;
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(lib_ctx,pkey,0);
    iVar2 = test_ptr("test/ml_dsa_test.c",0x197,
                     "sctx = EVP_PKEY_CTX_new_from_pkey(lib_ctx, key, NULL)",ctx);
    if (iVar2 == 0) {
      sig = (uchar *)0x0;
      uVar7 = 0;
      ctx_00 = (EVP_PKEY_CTX *)0x0;
      uVar4 = 0;
    }
    else {
      uVar7 = EVP_SIGNATURE_fetch(lib_ctx,param_1,0);
      iVar2 = test_ptr("test/ml_dsa_test.c",0x198,
                       "sig_alg = EVP_SIGNATURE_fetch(lib_ctx, alg, NULL)",uVar7);
      if (iVar2 != 0) {
        ppuVar1 = &sig_params + lVar6 * 5;
        uVar5 = *(undefined4 *)(&DAT_0010d364 + lVar6 * 0x28);
        uVar3 = EVP_PKEY_sign_message_init(ctx,uVar7,&local_b8);
        iVar2 = test_int_eq("test/ml_dsa_test.c",0x199,
                            "EVP_PKEY_sign_message_init(sctx, sig_alg, params)","sp->expected",uVar3
                            ,uVar5);
        if (iVar2 == 0) {
          sig = (uchar *)0x0;
          ctx_00 = (EVP_PKEY_CTX *)0x0;
          uVar4 = 0;
          goto LAB_0010101d;
        }
        if (*(int *)(&DAT_0010d364 + lVar6 * 0x28) == 0) {
          sig = (uchar *)0x0;
          ctx_00 = (EVP_PKEY_CTX *)0x0;
          uVar4 = 1;
          goto LAB_0010101d;
        }
        iVar2 = EVP_PKEY_sign(ctx,(uchar *)0x0,&local_c0,*ppuVar1,(&DAT_0010d348)[lVar6 * 5]);
        iVar2 = test_int_eq("test/ml_dsa_test.c",0x19f,
                            "EVP_PKEY_sign(sctx, NULL, &sig_len, sp->msg, sp->msg_len)",&_LC4,iVar2,
                            1);
        if (iVar2 != 0) {
          sig = (uchar *)CRYPTO_zalloc(local_c0,"test/ml_dsa_test.c",0x1a0);
          iVar2 = test_ptr("test/ml_dsa_test.c",0x1a0,"sig = OPENSSL_zalloc(sig_len)",sig);
          if (iVar2 != 0) {
            local_c0 = local_c0 - 1;
            iVar2 = EVP_PKEY_sign(ctx,sig,&local_c0,*ppuVar1,(&DAT_0010d348)[lVar6 * 5]);
            iVar2 = test_int_eq("test/ml_dsa_test.c",0x1a3,
                                "EVP_PKEY_sign(sctx, sig, &sig_len, sp->msg, sp->msg_len)",&_LC33,
                                iVar2,0);
            if (iVar2 != 0) {
              local_c0 = local_c0 + 1;
              ctx_00 = (EVP_PKEY_CTX *)0x0;
              iVar2 = EVP_PKEY_sign(ctx,sig,&local_c0,*ppuVar1,(&DAT_0010d348)[lVar6 * 5]);
              uVar4 = test_int_eq("test/ml_dsa_test.c",0x1a6,
                                  "EVP_PKEY_sign(sctx, sig, &sig_len, sp->msg, sp->msg_len)",&_LC4,
                                  iVar2,1);
              if (uVar4 != 0) {
                ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(lib_ctx,pkey,0);
                uVar4 = test_ptr("test/ml_dsa_test.c",0x1a7,
                                 "vctx = EVP_PKEY_CTX_new_from_pkey(lib_ctx, key, NULL)",ctx_00);
                if (uVar4 != 0) {
                  uVar5 = EVP_PKEY_verify_message_init(ctx_00,uVar7,&local_b8);
                  uVar4 = test_int_eq("test/ml_dsa_test.c",0x1a8,
                                      "EVP_PKEY_verify_message_init(vctx, sig_alg, params)",&_LC4,
                                      uVar5,1);
                  if (uVar4 != 0) {
                    iVar2 = EVP_PKEY_verify(ctx_00,sig,local_c0,(&sig_params)[lVar6 * 5],
                                            (&DAT_0010d348)[lVar6 * 5]);
                    iVar2 = test_int_eq("test/ml_dsa_test.c",0x1a9,
                                        "EVP_PKEY_verify(vctx, sig, sig_len, sp->msg, sp->msg_len)",
                                        &_LC4,iVar2,1);
                    uVar4 = (uint)(iVar2 != 0);
                  }
                }
              }
              goto LAB_0010101d;
            }
          }
          ctx_00 = (EVP_PKEY_CTX *)0x0;
          uVar4 = 0;
          goto LAB_0010101d;
        }
      }
      sig = (uchar *)0x0;
      ctx_00 = (EVP_PKEY_CTX *)0x0;
      uVar4 = 0;
    }
  }
LAB_0010101d:
  EVP_PKEY_free(pkey);
  EVP_SIGNATURE_free(uVar7);
  CRYPTO_free(sig);
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_CTX_free(ctx_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ml_dsa_87_sign_verify_test(undefined4 param_1)

{
  do_ml_dsa_sign_verify("ML-DSA-87",param_1);
  return;
}



void ml_dsa_65_sign_verify_test(undefined4 param_1)

{
  do_ml_dsa_sign_verify("ML-DSA-65",param_1);
  return;
}



void ml_dsa_44_sign_verify_test(undefined4 param_1)

{
  do_ml_dsa_sign_verify("ML-DSA-44",param_1);
  return;
}



uint ml_dsa_sigver_test(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a4;
  EVP_PKEY *local_a0;
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
  long local_40;
  
  lVar6 = (long)param_1 * 0x40;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (EVP_PKEY *)0x0;
  local_a4 = 0;
  OSSL_PARAM_construct_int(&local_d8,"message-encoding",&local_a4);
  local_78 = local_b8;
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  local_88 = local_c8;
  uStack_80 = uStack_c0;
  OSSL_PARAM_construct_end(&local_d8);
  local_50 = local_b8;
  local_70 = local_d8;
  uStack_68 = uStack_d0;
  local_60 = local_c8;
  uStack_58 = uStack_c0;
  uVar1 = *(undefined8 *)(ml_dsa_sigver_testdata + lVar6);
  iVar2 = ml_dsa_create_keypair
                    (&local_a0,uVar1,0,0,*(undefined8 *)(ml_dsa_sigver_testdata + lVar6 + 8),
                     *(undefined8 *)(ml_dsa_sigver_testdata + lVar6 + 0x10),1);
  iVar2 = test_true("test/ml_dsa_test.c",0xb9,
                    "ml_dsa_create_keypair(&pkey, td->alg, NULL, 0, td->pub, td->pub_len, 1)",
                    iVar2 != 0);
  if (iVar2 == 0) {
    uVar3 = 0;
    uVar5 = 0;
    ctx = (EVP_PKEY_CTX *)0x0;
  }
  else {
    uVar5 = 0;
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(lib_ctx,local_a0,0,0x101525);
    uVar3 = test_ptr("test/ml_dsa_test.c",0xbd,
                     "vctx = EVP_PKEY_CTX_new_from_pkey(lib_ctx, pkey, NULL)",ctx);
    if (uVar3 != 0) {
      uVar5 = EVP_SIGNATURE_fetch(lib_ctx,uVar1,0);
      iVar2 = test_ptr("test/ml_dsa_test.c",0xbf,
                       "sig_alg = EVP_SIGNATURE_fetch(lib_ctx, td->alg, NULL)",uVar5);
      if (iVar2 != 0) {
        uVar4 = EVP_PKEY_verify_message_init(ctx,uVar5,&local_98);
        iVar2 = test_int_eq("test/ml_dsa_test.c",0xc1,
                            "EVP_PKEY_verify_message_init(vctx, sig_alg, params)",&_LC4,uVar4,1);
        if (iVar2 != 0) {
          uVar4 = *(undefined4 *)(ml_dsa_sigver_testdata + lVar6 + 0x38);
          iVar2 = EVP_PKEY_verify(ctx,*(uchar **)(ml_dsa_sigver_testdata + lVar6 + 0x28),
                                  *(size_t *)(ml_dsa_sigver_testdata + lVar6 + 0x30),
                                  *(uchar **)(ml_dsa_sigver_testdata + lVar6 + 0x18),
                                  *(size_t *)(ml_dsa_sigver_testdata + lVar6 + 0x20));
          iVar2 = test_int_eq("test/ml_dsa_test.c",0xc2,
                              "EVP_PKEY_verify(vctx, td->sig, td->sig_len, td->msg, td->msg_len)",
                              "td->expected",iVar2,uVar4);
          uVar3 = (uint)(iVar2 != 0);
          goto LAB_0010159f;
        }
      }
      uVar3 = 0;
    }
  }
LAB_0010159f:
  EVP_SIGNATURE_free(uVar5);
  EVP_PKEY_free(local_a0);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ml_dsa_keygen_drbg_test(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  ulong uVar3;
  EVP_PKEY *pkey_00;
  EVP_PKEY *pkey_01;
  void *ptr;
  ulong uVar4;
  void *ptr_00;
  long in_FS_OFFSET;
  EVP_PKEY *local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (EVP_PKEY *)0x0;
  local_48 = 0;
  pkey = (EVP_PKEY *)do_gen_key("ML-DSA-44",0,0);
  uVar3 = test_ptr("test/ml_dsa_test.c",0x147,"pkey = do_gen_key(\"ML-DSA-44\", NULL, 0)",pkey);
  if ((int)uVar3 == 0) {
    ptr_00 = (void *)0x0;
    ptr = (void *)0x0;
    pkey_01 = (EVP_PKEY *)0x0;
    pkey_00 = (EVP_PKEY *)0x0;
    goto LAB_00101758;
  }
  pkey_00 = (EVP_PKEY *)do_gen_key("ML-DSA-44",0,0);
  uVar3 = test_ptr("test/ml_dsa_test.c",0x148,"pkey2 = do_gen_key(\"ML-DSA-44\", NULL, 0)",pkey_00);
  if ((int)uVar3 == 0) {
    ptr_00 = (void *)0x0;
    ptr = (void *)0x0;
    pkey_01 = (EVP_PKEY *)0x0;
    goto LAB_00101758;
  }
  pkey_01 = (EVP_PKEY *)do_gen_key("ML-DSA-65",0,0);
  iVar1 = test_ptr("test/ml_dsa_test.c",0x149,"pkey3 = do_gen_key(\"ML-DSA-65\", NULL, 0)",pkey_01);
  if (iVar1 == 0) {
LAB_00101820:
    ptr_00 = (void *)0x0;
    ptr = (void *)0x0;
    uVar3 = 0;
  }
  else {
    uVar2 = EVP_PKEY_eq(pkey,pkey_00);
    uVar3 = test_int_eq("test/ml_dsa_test.c",0x14a,"EVP_PKEY_eq(pkey, pkey2)",&_LC33,uVar2,0);
    if ((int)uVar3 != 0) {
      uVar2 = EVP_PKEY_eq(pkey,pkey_01);
      uVar3 = test_int_eq("test/ml_dsa_test.c",0x14b,"EVP_PKEY_eq(pkey, pkey3)",&_LC66,uVar2,
                          0xffffffff);
      if ((int)uVar3 != 0) {
        uVar2 = EVP_PKEY_get_raw_private_key(pkey,0,&local_48);
        iVar1 = test_int_eq("test/ml_dsa_test.c",0x14c,
                            "EVP_PKEY_get_raw_private_key(pkey, NULL, &len)",&_LC4,uVar2,1);
        if (iVar1 != 0) {
          iVar1 = test_int_gt("test/ml_dsa_test.c",0x14d,&_LC69,&_LC33,local_48 & 0xffffffff,0);
          if (iVar1 != 0) {
            ptr = CRYPTO_malloc((int)local_48,"test/ml_dsa_test.c",0x14e);
            iVar1 = test_ptr("test/ml_dsa_test.c",0x14e,"priv = OPENSSL_malloc(len)",ptr);
            if (iVar1 != 0) {
              uVar2 = EVP_PKEY_get_raw_private_key(pkey,ptr,&local_48);
              uVar3 = test_int_eq("test/ml_dsa_test.c",0x14f,
                                  "EVP_PKEY_get_raw_private_key(pkey, priv, &len)",&_LC4,uVar2,1);
              ptr_00 = (void *)0x0;
              if ((int)uVar3 == 0) goto LAB_00101758;
              uVar2 = EVP_PKEY_get_raw_public_key(pkey,0,&local_48);
              iVar1 = test_int_eq("test/ml_dsa_test.c",0x150,
                                  "EVP_PKEY_get_raw_public_key(pkey, NULL, &len)",&_LC4,uVar2,1);
              if (iVar1 != 0) {
                iVar1 = test_int_gt("test/ml_dsa_test.c",0x151,&_LC69,&_LC33,local_48 & 0xffffffff,0
                                   );
                if (iVar1 != 0) {
                  ptr_00 = CRYPTO_malloc((int)local_48,"test/ml_dsa_test.c",0x152);
                  uVar3 = test_ptr("test/ml_dsa_test.c",0x152,"pub = OPENSSL_malloc(len)",ptr_00);
                  if ((int)uVar3 != 0) {
                    uVar2 = EVP_PKEY_get_raw_public_key(pkey,ptr_00,&local_48);
                    uVar4 = test_int_eq("test/ml_dsa_test.c",0x153,
                                        "EVP_PKEY_get_raw_public_key(pkey, pub, &len)",&_LC4,uVar2,1
                                       );
                    uVar3 = uVar4;
                    if ((int)uVar4 != 0) {
                      iVar1 = ml_dsa_create_keypair(&local_50,"ML-DSA-44",0,0,ptr_00,local_48);
                      uVar3 = test_true("test/ml_dsa_test.c",0x155,
                                        "ml_dsa_create_keypair(&pkey_pub, \"ML-DSA-44\", NULL, 0, pub, len, 1)"
                                        ,iVar1 != 0);
                      if ((int)uVar3 != 0) {
                        uVar2 = EVP_PKEY_eq(local_50,pkey,1,uVar4);
                        iVar1 = test_int_eq("test/ml_dsa_test.c",0x158,"EVP_PKEY_eq(pkey_pub, pkey)"
                                            ,&_LC4,uVar2,1);
                        uVar3 = (ulong)(iVar1 != 0);
                      }
                    }
                  }
                  goto LAB_00101758;
                }
              }
            }
            ptr_00 = (void *)0x0;
            uVar3 = 0;
            goto LAB_00101758;
          }
        }
        goto LAB_00101820;
      }
    }
    ptr_00 = (void *)0x0;
    ptr = (void *)0x0;
  }
LAB_00101758:
  CRYPTO_free(ptr_00);
  CRYPTO_free(ptr);
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(pkey_00);
  EVP_PKEY_free(pkey_01);
  EVP_PKEY_free(local_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ml_dsa_key_internal_test(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  ossl_ml_dsa_key_free(0);
  uVar3 = ossl_ml_dsa_key_new(0,0,0x5b1);
  uVar1 = test_ptr_null("test/ml_dsa_test.c",0xeb,
                        "key = ossl_ml_dsa_key_new(NULL, NULL, EVP_PKEY_ML_DSA_44)",uVar3);
  if (uVar1 != 0) {
    uVar3 = ossl_ml_dsa_key_new(lib_ctx,&_LC78,0);
    uVar1 = test_ptr_null("test/ml_dsa_test.c",0xed,
                          "key = ossl_ml_dsa_key_new(lib_ctx, \"\", NID_undef)",uVar3);
    if (uVar1 != 0) {
      uVar4 = ossl_ml_dsa_key_dup(0,3);
      uVar1 = test_ptr_null("test/ml_dsa_test.c",0xef,
                            "key1 = ossl_ml_dsa_key_dup(NULL, OSSL_KEYMGMT_SELECT_KEYPAIR)",uVar4);
      if (uVar1 != 0) {
        uVar3 = ossl_ml_dsa_key_new(lib_ctx,"?fips=yes",0x5b1);
        uVar1 = test_ptr("test/ml_dsa_test.c",0xf0,
                         "key = ossl_ml_dsa_key_new(lib_ctx, \"?fips=yes\", EVP_PKEY_ML_DSA_44)",
                         uVar3);
        if (uVar1 != 0) {
          uVar4 = ossl_ml_dsa_key_dup(uVar3,3);
          iVar2 = test_ptr("test/ml_dsa_test.c",0xf2,
                           "key1 = ossl_ml_dsa_key_dup(key, OSSL_KEYMGMT_SELECT_KEYPAIR)",uVar4);
          if (iVar2 != 0) {
            iVar2 = ossl_ml_dsa_key_pub_alloc(uVar4);
            uVar1 = test_true("test/ml_dsa_test.c",0xf3,"ossl_ml_dsa_key_pub_alloc(key1)",iVar2 != 0
                             );
            if (uVar1 == 0) goto LAB_00101b5b;
            iVar2 = ossl_ml_dsa_key_pub_alloc(uVar4);
            iVar2 = test_false("test/ml_dsa_test.c",0xf4,"ossl_ml_dsa_key_pub_alloc(key1)",
                               iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = ossl_ml_dsa_key_priv_alloc(uVar3);
              iVar2 = test_true("test/ml_dsa_test.c",0xf5,"ossl_ml_dsa_key_priv_alloc(key)",
                                iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = ossl_ml_dsa_key_priv_alloc(uVar3);
                iVar2 = test_false("test/ml_dsa_test.c",0xf6,"ossl_ml_dsa_key_priv_alloc(key)",
                                   iVar2 != 0);
                uVar1 = (uint)(iVar2 != 0);
                goto LAB_00101b5b;
              }
            }
          }
          uVar1 = 0;
        }
      }
    }
  }
LAB_00101b5b:
  ossl_ml_dsa_key_free(uVar4);
  ossl_ml_dsa_key_free(uVar3);
  return uVar1;
}



uint ml_dsa_key_dup_test(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  EVP_PKEY *pkey;
  EVP_PKEY *pkey_00;
  EVP_PKEY_CTX *ctx;
  
  pkey = (EVP_PKEY *)do_gen_key("ML-DSA-65",ml_dsa_65_0_keygen_seed,0x20);
  iVar1 = test_ptr("test/ml_dsa_test.c",0xd4,
                   "pkey = do_gen_key(tst->name, tst->seed, tst->seed_len)",pkey);
  if (iVar1 == 0) {
    uVar2 = 0;
    ctx = (EVP_PKEY_CTX *)0x0;
    pkey_00 = (EVP_PKEY *)0x0;
  }
  else {
    ctx = (EVP_PKEY_CTX *)0x0;
    pkey_00 = (EVP_PKEY *)EVP_PKEY_dup(pkey);
    uVar2 = test_ptr("test/ml_dsa_test.c",0xd5,"pkey_copy = EVP_PKEY_dup(pkey)",pkey_00);
    if (uVar2 != 0) {
      uVar3 = EVP_PKEY_eq(pkey,pkey_00);
      uVar2 = test_int_eq("test/ml_dsa_test.c",0xd6,"EVP_PKEY_eq(pkey, pkey_copy)",&_LC4,uVar3,1);
      if (uVar2 != 0) {
        ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(lib_ctx,pkey_00,0);
        uVar2 = test_ptr("test/ml_dsa_test.c",0xd7,
                         "ctx = EVP_PKEY_CTX_new_from_pkey(lib_ctx, pkey_copy, NULL)",ctx);
        if (uVar2 != 0) {
          uVar3 = EVP_PKEY_check(ctx);
          iVar1 = test_int_eq("test/ml_dsa_test.c",0xd8,"EVP_PKEY_check(ctx)",&_LC4,uVar3,1);
          uVar2 = (uint)(iVar1 != 0);
        }
      }
    }
  }
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(pkey_00);
  EVP_PKEY_CTX_free(ctx);
  return uVar2;
}



uint ml_dsa_siggen_test(int param_1)

{
  long lVar1;
  size_t tbslen;
  uchar *tbs;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  uchar *sig;
  long lVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  EVP_PKEY_CTX *local_190;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_130;
  undefined4 local_12c;
  EVP_PKEY *local_128;
  size_t local_120;
  ulong local_118;
  undefined8 local_110;
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
  
  lVar6 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_128 = (EVP_PKEY *)0x0;
  local_120 = 0;
  puVar7 = &local_b8;
  local_118 = 0;
  local_110 = 0x20;
  local_130 = 0;
  local_12c = 1;
  OSSL_PARAM_construct_int(&local_168,"deterministic",&local_12c);
  local_e8 = local_148;
  local_108 = local_168;
  uStack_100 = uStack_160;
  local_f8 = local_158;
  uStack_f0 = uStack_150;
  OSSL_PARAM_construct_int(&local_168,"message-encoding",&local_130);
  local_c0 = local_148;
  local_e0 = local_168;
  uStack_d8 = uStack_160;
  local_d0 = local_158;
  uStack_c8 = uStack_150;
  if (*(long *)(ml_dsa_siggen_testdata + lVar6 * 0x48 + 0x38) != 0) {
    puVar7 = local_90;
    OSSL_PARAM_construct_octet_string
              (&local_168,"test-entropy",*(long *)(ml_dsa_siggen_testdata + lVar6 * 0x48 + 0x38),
               *(undefined8 *)(ml_dsa_siggen_testdata + lVar6 * 0x48 + 0x40));
    local_98 = local_148;
    local_b8 = local_168;
    uStack_b0 = uStack_160;
    local_a8 = local_158;
    uStack_a0 = uStack_150;
  }
  OSSL_PARAM_construct_end(&local_168);
  *puVar7 = local_168;
  puVar7[1] = uStack_160;
  puVar7[2] = local_158;
  puVar7[3] = uStack_150;
  puVar7[4] = local_148;
  lVar1 = lVar6 * 0x48;
  uVar5 = *(undefined8 *)(ml_dsa_siggen_testdata + lVar1);
  iVar2 = ml_dsa_create_keypair
                    (&local_128,uVar5,*(undefined8 *)(ml_dsa_siggen_testdata + lVar1 + 8),
                     *(undefined8 *)(ml_dsa_siggen_testdata + lVar1 + 0x10),0,0);
  iVar2 = test_true("test/ml_dsa_test.c",0x92,
                    "ml_dsa_create_keypair(&pkey, td->alg, td->priv, td->priv_len, NULL, 0, 1)",
                    iVar2 != 0);
  if (iVar2 == 0) {
    local_190 = (EVP_PKEY_CTX *)0x0;
    sig = (uchar *)0x0;
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    local_190 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(lib_ctx,local_128,0);
    iVar2 = test_ptr("test/ml_dsa_test.c",0x94,
                     "sctx = EVP_PKEY_CTX_new_from_pkey(lib_ctx, pkey, NULL)",local_190);
    if (iVar2 == 0) {
      sig = (uchar *)0x0;
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      uVar5 = EVP_SIGNATURE_fetch(lib_ctx,uVar5,0);
      iVar2 = test_ptr("test/ml_dsa_test.c",0x95,
                       "sig_alg = EVP_SIGNATURE_fetch(lib_ctx, td->alg, NULL)",uVar5);
      if (iVar2 != 0) {
        sig = (uchar *)0x0;
        uVar3 = EVP_PKEY_sign_message_init(local_190,uVar5,&local_108);
        uVar4 = test_int_eq("test/ml_dsa_test.c",0x96,
                            "EVP_PKEY_sign_message_init(sctx, sig_alg, params)",&_LC4,uVar3,1);
        if (uVar4 == 0) goto LAB_0010203a;
        tbslen = *(size_t *)(ml_dsa_siggen_testdata + lVar1 + 0x20);
        tbs = *(uchar **)(ml_dsa_siggen_testdata + lVar1 + 0x18);
        iVar2 = EVP_PKEY_sign(local_190,(uchar *)0x0,&local_120,tbs,tbslen);
        uVar4 = test_int_eq("test/ml_dsa_test.c",0x97,
                            "EVP_PKEY_sign(sctx, NULL, &psig_len, td->msg, td->msg_len)",&_LC4,iVar2
                            ,1);
        if (uVar4 == 0) goto LAB_0010203a;
        iVar2 = EVP_PKEY_get_size_t_param(local_128,"max-size",&local_118);
        iVar2 = test_true("test/ml_dsa_test.c",0x99,
                          "EVP_PKEY_get_size_t_param(pkey, OSSL_PKEY_PARAM_MAX_SIZE, &sig_len2)",
                          iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = test_int_eq("test/ml_dsa_test.c",0x9b,"sig_len2","psig_len",local_118 & 0xffffffff
                              ,local_120 & 0xffffffff);
          if (iVar2 != 0) {
            sig = (uchar *)CRYPTO_zalloc(local_120,"test/ml_dsa_test.c",0x9c);
            uVar4 = test_ptr("test/ml_dsa_test.c",0x9c,"psig = OPENSSL_zalloc(psig_len)",sig);
            if (uVar4 != 0) {
              iVar2 = EVP_PKEY_sign(local_190,sig,&local_120,tbs,tbslen);
              uVar4 = test_int_eq("test/ml_dsa_test.c",0x9d,
                                  "EVP_PKEY_sign(sctx, psig, &psig_len, td->msg, td->msg_len)",&_LC4
                                  ,iVar2,1);
              if (uVar4 != 0) {
                uVar3 = EVP_Q_digest(lib_ctx,"SHA256",0,sig,local_120,local_68,&local_110);
                uVar4 = test_int_eq("test/ml_dsa_test.c",0x9f,
                                    "EVP_Q_digest(lib_ctx, \"SHA256\", NULL, psig, psig_len, digest, &digest_len)"
                                    ,&_LC4,uVar3,1);
                if (uVar4 != 0) {
                  iVar2 = test_mem_eq("test/ml_dsa_test.c",0xa1,"digest","td->sig_digest",local_68,
                                      local_110,
                                      *(undefined8 *)(ml_dsa_siggen_testdata + lVar6 * 0x48 + 0x28),
                                      *(undefined8 *)(ml_dsa_siggen_testdata + lVar6 * 0x48 + 0x30))
                  ;
                  uVar4 = (uint)(iVar2 != 0);
                }
              }
            }
            goto LAB_0010203a;
          }
        }
      }
      sig = (uchar *)0x0;
      uVar4 = 0;
    }
  }
LAB_0010203a:
  EVP_SIGNATURE_free(uVar5);
  EVP_PKEY_free(local_128);
  EVP_PKEY_CTX_free(local_190);
  CRYPTO_free(sig);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ml_dsa_keygen_test(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 uVar5;
  undefined4 local_208c;
  undefined4 local_2088;
  undefined4 local_2084;
  undefined8 local_2080;
  undefined8 local_2078;
  undefined8 local_2070;
  undefined1 local_2068 [32];
  undefined1 local_2048 [3072];
  undefined1 local_1448 [5128];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_208c = 0;
  local_2088 = 0;
  local_2084 = 0;
  lVar2 = (long)param_1 * 0x38;
  uVar5 = *(undefined8 *)(ml_dsa_keygen_testdata + lVar2 + 0x10);
  uVar1 = *(undefined8 *)(ml_dsa_keygen_testdata + lVar2 + 8);
  pkey = (EVP_PKEY *)do_gen_key(*(undefined8 *)(ml_dsa_keygen_testdata + lVar2),uVar1,uVar5);
  iVar3 = test_ptr("test/ml_dsa_test.c",0x5e,
                   "pkey = do_gen_key(tst->name, tst->seed, tst->seed_len)",pkey);
  if (iVar3 != 0) {
    iVar3 = EVP_PKEY_get_octet_string_param(pkey,&_LC19,local_2068,0x20,&local_2070);
    iVar3 = test_true("test/ml_dsa_test.c",0x5f,
                      "EVP_PKEY_get_octet_string_param(pkey, OSSL_PKEY_PARAM_ML_DSA_SEED, seed, sizeof(seed), &seed_len)"
                      ,iVar3 != 0);
    if (iVar3 != 0) {
      iVar3 = EVP_PKEY_get_octet_string_param(pkey,&_LC0,local_1448,0x1400,&local_2080);
      iVar3 = test_true("test/ml_dsa_test.c",0x61,
                        "EVP_PKEY_get_octet_string_param(pkey, OSSL_PKEY_PARAM_PRIV_KEY, priv, sizeof(priv), &priv_len)"
                        ,iVar3 != 0);
      if (iVar3 != 0) {
        iVar3 = EVP_PKEY_get_octet_string_param(pkey,&_LC1,local_2048,0xc00,&local_2078);
        iVar3 = test_true("test/ml_dsa_test.c",99,
                          "EVP_PKEY_get_octet_string_param(pkey, OSSL_PKEY_PARAM_PUB_KEY, pub, sizeof(pub), &pub_len)"
                          ,iVar3 != 0);
        if (iVar3 != 0) {
          iVar3 = test_mem_eq("test/ml_dsa_test.c",0x65,&_LC1,"tst->pub",local_2048,local_2078,
                              *(undefined8 *)(ml_dsa_keygen_testdata + lVar2 + 0x18),
                              *(undefined8 *)(ml_dsa_keygen_testdata + lVar2 + 0x20));
          if (iVar3 != 0) {
            iVar3 = test_mem_eq("test/ml_dsa_test.c",0x66,&_LC0,"tst->priv",local_1448,local_2080,
                                *(undefined8 *)(ml_dsa_keygen_testdata + lVar2 + 0x28),
                                *(undefined8 *)(ml_dsa_keygen_testdata + lVar2 + 0x30));
            if (iVar3 != 0) {
              iVar3 = test_mem_eq("test/ml_dsa_test.c",0x67,&_LC19,"tst->seed",local_2068,local_2070
                                  ,uVar1);
              if (iVar3 != 0) {
                iVar3 = EVP_PKEY_get_int_param(pkey,&_LC110,&local_208c,uVar5);
                iVar3 = test_true("test/ml_dsa_test.c",0x69,
                                  "EVP_PKEY_get_int_param(pkey, OSSL_PKEY_PARAM_BITS, &bits)",
                                  iVar3 != 0);
                if (iVar3 != 0) {
                  iVar3 = test_int_eq("test/ml_dsa_test.c",0x6a,&_LC110,"1952 * 8",local_208c,0x3d00
                                     );
                  if (iVar3 != 0) {
                    iVar3 = EVP_PKEY_get_int_param(pkey,"security-bits",&local_2088);
                    iVar3 = test_true("test/ml_dsa_test.c",0x6b,
                                      "EVP_PKEY_get_int_param(pkey, OSSL_PKEY_PARAM_SECURITY_BITS, &sec_bits)"
                                      ,iVar3 != 0);
                    if (iVar3 != 0) {
                      iVar3 = test_int_eq("test/ml_dsa_test.c",0x6d,"sec_bits",&_LC115,local_2088,
                                          0xc0);
                      if (iVar3 != 0) {
                        iVar3 = EVP_PKEY_get_int_param(pkey,"max-size",&local_2084);
                        iVar3 = test_true("test/ml_dsa_test.c",0x6e,
                                          "EVP_PKEY_get_int_param(pkey, OSSL_PKEY_PARAM_MAX_SIZE, &sig_len)"
                                          ,iVar3 != 0);
                        if (iVar3 != 0) {
                          iVar3 = test_int_ge("test/ml_dsa_test.c",0x70,"sig_len",&_LC118,local_2084
                                              ,0xced);
                          bVar4 = iVar3 != 0;
                          goto LAB_0010244b;
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
  bVar4 = false;
LAB_0010244b:
  EVP_PKEY_free(pkey);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return options_0;
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
        add_all_tests("ml_dsa_keygen_test",ml_dsa_keygen_test,2,1);
        add_all_tests("ml_dsa_siggen_test",ml_dsa_siggen_test,2,1);
        add_all_tests("ml_dsa_sigver_test",ml_dsa_sigver_test,1,1);
        add_test("ml_dsa_key_dup_test",ml_dsa_key_dup_test);
        add_test("ml_dsa_key_internal_test",ml_dsa_key_internal_test);
        add_test("ml_dsa_keygen_drbg_test",ml_dsa_keygen_drbg_test);
        add_all_tests("ml_dsa_44_sign_verify_test",ml_dsa_44_sign_verify_test,0xc,1);
        add_all_tests("ml_dsa_65_sign_verify_test",ml_dsa_65_sign_verify_test,0xc,1);
        add_all_tests("ml_dsa_87_sign_verify_test",ml_dsa_87_sign_verify_test,0xc,1);
        add_test("from_data_invalid_public_test",from_data_invalid_public_test);
        add_test("from_data_bad_input_test",from_data_bad_input_test);
        add_test("ml_dsa_digest_sign_verify_test",ml_dsa_digest_sign_verify_test);
        add_test("ml_dsa_priv_pub_bad_t0_test",ml_dsa_priv_pub_bad_t0_test);
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



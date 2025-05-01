
bool test_init_multiple(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = (&rctx)[param_1];
  uVar2 = EVP_PKEY_encapsulate_init(uVar1,0);
  iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x6d,"EVP_PKEY_encapsulate_init(ctx, NULL)",&_LC0
                      ,uVar2,1);
  if (iVar3 != 0) {
    uVar2 = EVP_PKEY_encapsulate_init(uVar1,0);
    iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x6e,"EVP_PKEY_encapsulate_init(ctx, NULL)",
                        &_LC0,uVar2,1);
    if (iVar3 != 0) {
      uVar2 = EVP_PKEY_decapsulate_init(uVar1,0);
      iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x6f,"EVP_PKEY_decapsulate_init(ctx, NULL)",
                          &_LC0,uVar2,1);
      if (iVar3 != 0) {
        uVar2 = EVP_PKEY_decapsulate_init(uVar1,0);
        iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x70,"EVP_PKEY_decapsulate_init(ctx, NULL)"
                            ,&_LC0,uVar2,1);
        return iVar3 != 0;
      }
    }
  }
  return false;
}



uint test_ed_curve_unsupported(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  
  ctx = (EVP_PKEY_CTX *)0x0;
  pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(libctx,0,"ED448");
  uVar1 = test_ptr("test/evp_pkey_dhkem_test.c",0x308,
                   "key = EVP_PKEY_Q_keygen(libctx, NULL, \"ED448\")",pkey);
  if (uVar1 != 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pkey,0);
    iVar2 = test_ptr("test/evp_pkey_dhkem_test.c",0x309,
                     "ctx = EVP_PKEY_CTX_new_from_pkey(libctx, key, NULL)",ctx);
    if (iVar2 != 0) {
      uVar3 = EVP_PKEY_encapsulate_init(ctx,0);
      iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x30a,"EVP_PKEY_encapsulate_init(ctx, NULL)",
                          &_LC7,uVar3,0xfffffffe);
      if (iVar2 != 0) {
        uVar3 = EVP_PKEY_decapsulate_init(ctx,0);
        iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x30b,
                            "EVP_PKEY_decapsulate_init(ctx, NULL)",&_LC7,uVar3,0xfffffffe);
        uVar1 = (uint)(iVar2 != 0);
        goto LAB_0010014f;
      }
    }
    uVar1 = 0;
  }
LAB_0010014f:
  EVP_PKEY_free(pkey);
  EVP_PKEY_CTX_free(ctx);
  return uVar1;
}



uint test_ec_curve_nonnist(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  
  ctx = (EVP_PKEY_CTX *)0x0;
  pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(libctx,0,&_LC9,"secp256k1");
  uVar1 = test_ptr("test/evp_pkey_dhkem_test.c",0x242,
                   "key = EVP_PKEY_Q_keygen(libctx, NULL, \"EC\", curve)",pkey);
  if (uVar1 != 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pkey,0);
    uVar1 = test_ptr("test/evp_pkey_dhkem_test.c",0x243,
                     "ctx = EVP_PKEY_CTX_new_from_pkey(libctx, key, NULL)",ctx);
    if (uVar1 != 0) {
      uVar2 = EVP_PKEY_encapsulate_init(ctx,0);
      uVar1 = test_int_eq("test/evp_pkey_dhkem_test.c",0x244,"EVP_PKEY_encapsulate_init(ctx, NULL)",
                          &_LC7,uVar2,0xfffffffe);
      if (uVar1 != 0) {
        uVar2 = EVP_PKEY_decapsulate_init(ctx,0);
        iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x245,
                            "EVP_PKEY_decapsulate_init(ctx, NULL)",&_LC7,uVar2,0xfffffffe);
        uVar1 = (uint)(iVar3 != 0);
      }
    }
  }
  EVP_PKEY_free(pkey);
  EVP_PKEY_CTX_free(ctx);
  return uVar1;
}



ulong test_ecx_auth_key_curve_mismatch(void)

{
  undefined4 uVar1;
  uint uVar2;
  EVP_PKEY *pkey;
  ulong uVar3;
  
  pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(libctx,0,&_LC11);
  uVar3 = test_ptr("test/evp_pkey_dhkem_test.c",0x2f8,
                   "auth = EVP_PKEY_Q_keygen(libctx, NULL, \"X448\")",pkey);
  if ((int)uVar3 != 0) {
    uVar1 = EVP_PKEY_auth_encapsulate_init(DAT_001042a8,pkey,opparam);
    uVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x2fb,
                        "EVP_PKEY_auth_encapsulate_init(rctx[TEST_KEYTYPE_X25519], auth, opparam)",
                        &_LC13,uVar1,0);
    EVP_PKEY_free(pkey);
    uVar3 = (ulong)uVar2;
  }
  return uVar3;
}



ulong test_ec_auth_key_curve_mismatch(void)

{
  undefined4 uVar1;
  uint uVar2;
  EVP_PKEY *pkey;
  ulong uVar3;
  
  pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(libctx,0,&_LC9,"P-521");
  uVar3 = test_ptr("test/evp_pkey_dhkem_test.c",0xfb,
                   "auth = EVP_PKEY_Q_keygen(libctx, NULL, \"EC\", \"P-521\")",pkey);
  if ((int)uVar3 != 0) {
    uVar1 = EVP_PKEY_auth_encapsulate_init(rctx,pkey,opparam);
    uVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0xfe,
                        "EVP_PKEY_auth_encapsulate_init(rctx[0], auth, opparam)",&_LC13,uVar1,0);
    EVP_PKEY_free(pkey);
    uVar3 = (ulong)uVar2;
  }
  return uVar3;
}



void test_auth_key_type_mismatch(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = EVP_PKEY_auth_encapsulate_init((&rctx)[param_1],(&rkey)[param_1 == 0],opparam);
  test_int_eq("test/evp_pkey_dhkem_test.c",0x109,
              "EVP_PKEY_auth_encapsulate_init(rctx[id1], rkey[id2], opparam)",&_LC13,uVar1,0);
  return;
}



bool test_ecx_dhkem_derivekey(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  EVP_PKEY *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 local_108 [64];
  undefined1 local_c8 [63];
  byte abStack_89 [73];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_170 = (EVP_PKEY *)0x0;
  local_168 = 0;
  local_160 = 0;
  lVar3 = (long)param_1 * 0x38;
  lVar1 = *(long *)(ecx_derivekey_data + lVar3 + 0x30);
  __memcpy_chk(abStack_89 + 1,*(undefined8 *)(ecx_derivekey_data + lVar3 + 0x28),lVar1,0x40);
  uVar2 = *(undefined8 *)(ecx_derivekey_data + lVar3);
  iVar5 = OPENSSL_strcasecmp(uVar2,"X25519");
  if (iVar5 == 0) {
    abStack_89[1] = abStack_89[1] & 0xf8;
    bVar4 = abStack_89[lVar1] & 0x7f | 0x40;
  }
  else {
    abStack_89[1] = abStack_89[1] & 0xfc;
    bVar4 = abStack_89[lVar1] | 0x80;
  }
  abStack_89[lVar1] = bVar4;
  lVar3 = (long)param_1 * 0x38;
  OSSL_PARAM_construct_octet_string
            (&local_1a8,"dhkem-ikm",*(undefined8 *)(ecx_derivekey_data + lVar3 + 8),
             *(undefined8 *)(ecx_derivekey_data + lVar3 + 0x10));
  local_138 = local_188;
  local_158 = local_1a8;
  uStack_150 = uStack_1a0;
  local_148 = local_198;
  uStack_140 = uStack_190;
  OSSL_PARAM_construct_end(&local_1a8);
  local_130 = local_1a8;
  uStack_128 = uStack_1a0;
  local_110 = local_188;
  local_120 = local_198;
  uStack_118 = uStack_190;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,uVar2,0);
  iVar5 = test_ptr("test/evp_pkey_dhkem_test.c",0x2e0,
                   "genctx = EVP_PKEY_CTX_new_from_name(libctx, t->curvename, NULL)",ctx);
  if (iVar5 != 0) {
    iVar5 = EVP_PKEY_keygen_init(ctx);
    iVar5 = test_int_eq("test/evp_pkey_dhkem_test.c",0x2e1,"EVP_PKEY_keygen_init(genctx)",&_LC0,
                        iVar5,1);
    if (iVar5 != 0) {
      uVar6 = EVP_PKEY_CTX_set_params(ctx,&local_158);
      iVar5 = test_int_eq("test/evp_pkey_dhkem_test.c",0x2e2,
                          "EVP_PKEY_CTX_set_params(genctx, params)",&_LC0,uVar6,1);
      if (iVar5 != 0) {
        iVar5 = EVP_PKEY_keygen(ctx,&local_170);
        iVar5 = test_int_eq("test/evp_pkey_dhkem_test.c",0x2e3,"EVP_PKEY_keygen(genctx, &pkey)",
                            &_LC0,iVar5,1);
        if (iVar5 != 0) {
          uVar6 = EVP_PKEY_get_octet_string_param
                            (local_170,"encoded-pub-key",local_108,0x40,&local_168);
          iVar5 = test_int_eq("test/evp_pkey_dhkem_test.c",0x2e4,
                              "EVP_PKEY_get_octet_string_param(pkey, OSSL_PKEY_PARAM_ENCODED_PUBLIC_KEY, pubkey, sizeof(pubkey), &pubkeylen)"
                              ,&_LC0,uVar6,1);
          if (iVar5 != 0) {
            uVar6 = EVP_PKEY_get_octet_string_param(local_170,&_LC27,local_c8,0x40,&local_160);
            iVar5 = test_int_eq("test/evp_pkey_dhkem_test.c",0x2e7,
                                "EVP_PKEY_get_octet_string_param(pkey, OSSL_PKEY_PARAM_PRIV_KEY, privkey, sizeof(privkey), &privkeylen)"
                                ,&_LC0,uVar6,1);
            if (iVar5 != 0) {
              iVar5 = test_mem_eq("test/evp_pkey_dhkem_test.c",0x2ea,"t->pub","pubkey",
                                  *(undefined8 *)(ecx_derivekey_data + lVar3 + 0x18),
                                  *(undefined8 *)(ecx_derivekey_data + lVar3 + 0x20),local_108,
                                  local_168);
              if (iVar5 != 0) {
                iVar5 = test_mem_eq("test/evp_pkey_dhkem_test.c",0x2eb,"masked_priv","privkey",
                                    abStack_89 + 1,lVar1,local_c8,local_160);
                bVar7 = iVar5 != 0;
                goto LAB_00100651;
              }
            }
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_00100651:
  EVP_PKEY_free(local_170);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_ikm_small(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined1 local_238 [16];
  undefined1 local_228 [256];
  undefined1 local_128 [264];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_238 = (undefined1  [16])0x0;
  local_2c8 = 0x100;
  uVar1 = (&rctx)[param_1];
  local_2c0 = 0x100;
  OSSL_PARAM_construct_utf8_string(&local_2f8,"operation","DHKEM",0);
  local_2b8 = local_2f8;
  uStack_2b0 = uStack_2f0;
  local_2a8 = local_2e8;
  uStack_2a0 = uStack_2e0;
  local_298 = local_2d8;
  OSSL_PARAM_construct_octet_string(&local_2f8,&_LC35,local_238,0x10);
  local_270 = local_2d8;
  local_290 = local_2f8;
  uStack_288 = uStack_2f0;
  local_280 = local_2e8;
  uStack_278 = uStack_2e0;
  OSSL_PARAM_construct_end(&local_2f8);
  local_268 = local_2f8;
  uStack_260 = uStack_2f0;
  local_248 = local_2d8;
  local_258 = local_2e8;
  uStack_250 = uStack_2e0;
  uVar2 = EVP_PKEY_encapsulate_init(uVar1,&local_2b8);
  uVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",200,"EVP_PKEY_encapsulate_init(ctx, params)",
                      &_LC0,uVar2,1);
  if ((int)uVar4 != 0) {
    uVar2 = EVP_PKEY_encapsulate(uVar1,local_128,&local_2c0,local_228,&local_2c8);
    iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0xc9,
                        "EVP_PKEY_encapsulate(ctx, enc, &enclen, secret, &secretlen)",&_LC13,uVar2,0
                       );
    uVar4 = (ulong)(iVar3 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool do_encap(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
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
  local_248 = (undefined1  [16])0x0;
  local_238 = (undefined1  [16])0x0;
  local_228 = (undefined1  [16])0x0;
  local_218 = (undefined1  [16])0x0;
  local_208 = (undefined1  [16])0x0;
  local_1f8 = (undefined1  [16])0x0;
  local_1e8 = (undefined1  [16])0x0;
  local_1d8 = (undefined1  [16])0x0;
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = (undefined1  [16])0x0;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_168 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  OSSL_PARAM_construct_utf8_string(&local_308,"operation","DHKEM",0);
  local_2c8 = local_308;
  uStack_2c0 = uStack_300;
  local_2b8 = local_2f8;
  uStack_2b0 = uStack_2f0;
  local_2a8 = local_2e8;
  OSSL_PARAM_construct_octet_string
            (&local_308,&_LC35,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  local_280 = local_2e8;
  local_2a0 = local_308;
  uStack_298 = uStack_300;
  local_290 = local_2f8;
  uStack_288 = uStack_2f0;
  OSSL_PARAM_construct_end(&local_308);
  local_278 = local_308;
  uStack_270 = uStack_300;
  local_258 = local_2e8;
  local_268 = local_2f8;
  uStack_260 = uStack_2f0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,param_2,0);
  iVar1 = test_ptr("test/dhkem_test.inc",0x29b,
                   "sctx = EVP_PKEY_CTX_new_from_pkey(libctx, rpub, NULL)",ctx);
  if (iVar1 != 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
      uVar2 = EVP_PKEY_encapsulate_init(ctx,&local_2c8);
      iVar1 = test_int_eq("test/dhkem_test.inc",0x29e,"EVP_PKEY_encapsulate_init(sctx, params)",
                          &_LC0,uVar2,1);
    }
    else {
      uVar2 = EVP_PKEY_auth_encapsulate_init(ctx,param_3,&local_2c8);
      iVar1 = test_int_eq("test/dhkem_test.inc",0x2a1,
                          "EVP_PKEY_auth_encapsulate_init(sctx, spriv, params)",&_LC0,uVar2,1);
    }
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_encapsulate(ctx,0,&local_2d0,0,&local_2d8);
      iVar1 = test_int_eq("test/dhkem_test.inc",0x2a4,
                          "EVP_PKEY_encapsulate(sctx, NULL, &enclen, NULL, &secretlen)",&_LC0,uVar2,
                          1);
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_encapsulate(ctx,local_148,&local_2d0,local_248,&local_2d8);
        iVar1 = test_int_eq("test/dhkem_test.inc",0x2a6,
                            "EVP_PKEY_encapsulate(sctx, enc, &enclen, secret, &secretlen)",&_LC0,
                            uVar2,1);
        if ((iVar1 != 0) &&
           (iVar1 = test_mem_eq("test/dhkem_test.inc",0x2a8,&_LC45,"t->expected_enc",local_148,
                                local_2d0,*(undefined8 *)(param_1 + 0x38),
                                *(undefined8 *)(param_1 + 0x40)), iVar1 != 0)) {
          iVar1 = test_mem_eq("test/dhkem_test.inc",0x2a9,"secret","t->expected_secret",local_248,
                              local_2d8,*(undefined8 *)(param_1 + 0x48),
                              *(undefined8 *)(param_1 + 0x50));
          bVar3 = iVar1 != 0;
          goto LAB_00100cc4;
        }
      }
    }
  }
  bVar3 = false;
LAB_00100cc4:
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong test_ec_invalid_decap_enc_buffer(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_230;
  undefined1 local_228;
  undefined7 uStack_227;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined1 local_128 [264];
  long local_20;
  
  uVar1 = rctx;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_1e8 = 0xc4;
  uStack_220 = _UNK_00106b58;
  local_230 = 0x100;
  local_218 = __LC51;
  uStack_210 = _UNK_00106b68;
  _local_228 = CONCAT71((int7)((ulong)__LC50 >> 8),0xff);
  local_208 = __LC52;
  uStack_200 = _UNK_00106b78;
  local_1f8 = __LC53;
  uStack_1f0 = _UNK_00106b88;
  uVar2 = EVP_PKEY_decapsulate_init(rctx,opparam);
  uVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0x2b9,"EVP_PKEY_decapsulate_init(ctx, opparam)",
                      &_LC0,uVar2,1);
  if ((int)uVar4 != 0) {
    uVar2 = EVP_PKEY_decapsulate(uVar1,local_128,&local_230,&local_228,0x41);
    iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x2ba,
                        "EVP_PKEY_decapsulate(ctx, secret, &secretlen, enc, t->expected_enclen)",
                        &_LC13,uVar2,0);
    uVar4 = (ulong)(iVar3 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_null_params(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = (&rctx)[param_1];
  uVar3 = EVP_PKEY_auth_encapsulate_init(uVar2,0,opparam);
  iVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0x14a,
                      "EVP_PKEY_auth_encapsulate_init(ctx, NULL, opparam)",&_LC13,uVar3,0);
  if (iVar4 != 0) {
    uVar3 = EVP_PKEY_auth_decapsulate_init(uVar2,0,opparam);
    iVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0x14b,
                        "EVP_PKEY_auth_decapsulate_init(ctx, NULL, opparam)",&_LC13,uVar3,0);
    if (iVar4 != 0) {
      uVar3 = EVP_PKEY_decapsulate_init(uVar2,opparam);
      iVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0x14d,
                          "EVP_PKEY_decapsulate_init(ctx, opparam)",&_LC0,uVar3,1);
      if (iVar4 != 0) {
        lVar1 = (long)param_1 * 0x78;
        uVar3 = EVP_PKEY_decapsulate
                          (uVar2,0,0,*(undefined8 *)(ec_encapdata + lVar1 + 0x38),
                           *(undefined8 *)(ec_encapdata + lVar1 + 0x40));
        iVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0x14e,
                            "EVP_PKEY_decapsulate(ctx, NULL, NULL, t->expected_enc, t->expected_enclen)"
                            ,&_LC13,uVar3,0);
        if (iVar4 != 0) {
          uVar3 = EVP_PKEY_encapsulate_init(uVar2,opparam);
          iVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0x152,
                              "EVP_PKEY_encapsulate_init(ctx, opparam)",&_LC0,uVar3,1);
          if (iVar4 != 0) {
            uVar3 = EVP_PKEY_encapsulate(uVar2,0,0,0,0);
            iVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0x153,
                                "EVP_PKEY_encapsulate(ctx, NULL, NULL, NULL, NULL)",&_LC13,uVar3,0);
            return iVar4 != 0;
          }
        }
      }
    }
  }
  return false;
}



undefined8 test_input_size_small(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_258;
  long local_250;
  undefined1 local_248 [256];
  undefined1 local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_258 = 0x100;
  local_250 = 0x100;
  uVar3 = (&rctx)[param_1];
  uVar1 = EVP_PKEY_encapsulate_init(uVar3,opparam);
  iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0xd7,"EVP_PKEY_encapsulate_init(ctx, opparam)",
                      &_LC0,uVar1,1);
  if (iVar2 != 0) {
    uVar1 = EVP_PKEY_encapsulate(uVar3,0,&local_250,0,&local_258);
    iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0xd8,
                        "EVP_PKEY_encapsulate(ctx, NULL, &enclen, NULL, &seclen)",&_LC0,uVar1,1);
    if (iVar2 != 0) {
      local_250 = local_250 + -1;
      uVar1 = EVP_PKEY_encapsulate(uVar3,local_148,&local_250,local_248,&local_258);
      iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0xde,
                          "EVP_PKEY_encapsulate(ctx, enc, &enclen, sec, &seclen)",&_LC13,uVar1,0);
      if (iVar2 != 0) {
        local_250 = local_250 + 1;
        local_258 = local_258 + -1;
        uVar1 = EVP_PKEY_encapsulate(uVar3,local_148,&local_250,local_248,&local_258);
        iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0xe4,
                            "EVP_PKEY_encapsulate(ctx, enc, &enclen, sec, &seclen)",&_LC13,uVar1,0);
        if (iVar2 != 0) {
          local_258 = local_258 + 1;
          uVar1 = EVP_PKEY_decapsulate_init(uVar3,opparam);
          iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0xe7,
                              "EVP_PKEY_decapsulate_init(ctx, opparam)",&_LC0,uVar1,1);
          if (iVar2 != 0) {
            local_258 = local_258 + -1;
            uVar1 = EVP_PKEY_decapsulate(uVar3,local_248,&local_258,local_148,local_250);
            iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0xeb,
                                "EVP_PKEY_decapsulate(ctx, sec, &seclen, enc, enclen)",&_LC13,uVar1,
                                0);
            if (iVar2 != 0) {
              local_258 = local_258 + 1;
              local_250 = local_250 + -1;
              uVar1 = EVP_PKEY_decapsulate(uVar3,local_248,&local_258,local_148);
              uVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0xf0,
                                  "EVP_PKEY_decapsulate(ctx, sec, &seclen, enc, enclen)",&_LC13,
                                  uVar1,0);
              goto LAB_0010115e;
            }
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_0010115e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_no_operation_set(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  uVar2 = (&rctx)[param_1];
  uVar3 = EVP_PKEY_encapsulate_init(uVar2,0);
  iVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0xae,"EVP_PKEY_encapsulate_init(ctx, NULL)",&_LC0
                      ,uVar3,1);
  if (iVar4 != 0) {
    uVar3 = EVP_PKEY_encapsulate(uVar2,0,&local_38,0,0);
    iVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0xaf,
                        "EVP_PKEY_encapsulate(ctx, NULL, &len, NULL, NULL)",&_LC0,uVar3,1);
    if (iVar4 != 0) {
      uVar3 = EVP_PKEY_decapsulate_init(uVar2,0);
      iVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0xb0,"EVP_PKEY_decapsulate_init(ctx, NULL)",
                          &_LC0,uVar3,1);
      if (iVar4 != 0) {
        lVar1 = (long)param_1 * 0x78;
        uVar3 = EVP_PKEY_decapsulate
                          (uVar2,0,&local_38,*(undefined8 *)(ec_encapdata + lVar1 + 0x38),
                           *(undefined8 *)(ec_encapdata + lVar1 + 0x40));
        iVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0xb1,
                            "EVP_PKEY_decapsulate(ctx, NULL, &len, t->expected_enc, t->expected_enclen)"
                            ,&_LC0,uVar3,1);
        bVar5 = iVar4 != 0;
        goto LAB_001013c4;
      }
    }
  }
  bVar5 = false;
LAB_001013c4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool do_decap(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
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
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_150 = 0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,param_2,0);
  iVar1 = test_ptr("test/dhkem_test.inc",0x2b8,
                   "recipctx = EVP_PKEY_CTX_new_from_pkey(libctx, rpriv, NULL)",ctx);
  if (iVar1 != 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
      uVar2 = EVP_PKEY_decapsulate_init(ctx,opparam);
      iVar1 = test_int_eq("test/dhkem_test.inc",699,"EVP_PKEY_decapsulate_init(recipctx, opparam)",
                          &_LC0,uVar2,1);
    }
    else {
      uVar2 = EVP_PKEY_auth_decapsulate_init(ctx,param_3,opparam);
      iVar1 = test_int_eq("test/dhkem_test.inc",0x2be,
                          "EVP_PKEY_auth_decapsulate_init(recipctx, spub, opparam)",&_LC0,uVar2,1);
    }
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_decapsulate
                        (ctx,0,&local_150,*(undefined8 *)(param_1 + 0x38),
                         *(undefined8 *)(param_1 + 0x40));
      iVar1 = test_int_eq("test/dhkem_test.inc",0x2c2,
                          "EVP_PKEY_decapsulate(recipctx, NULL, &secretlen, t->expected_enc, t->expected_enclen)"
                          ,&_LC0,uVar2,1);
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_decapsulate
                          (ctx,local_148,&local_150,*(undefined8 *)(param_1 + 0x38),
                           *(undefined8 *)(param_1 + 0x40));
        iVar1 = test_int_eq("test/dhkem_test.inc",0x2c5,
                            "EVP_PKEY_decapsulate(recipctx, secret, &secretlen, t->expected_enc, t->expected_enclen)"
                            ,&_LC0,uVar2,1);
        if (iVar1 != 0) {
          iVar1 = test_mem_eq("test/dhkem_test.inc",0x2c8,"secret","t->expected_secret",local_148,
                              local_150,*(undefined8 *)(param_1 + 0x48),
                              *(undefined8 *)(param_1 + 0x50));
          bVar3 = iVar1 != 0;
          goto LAB_00101615;
        }
      }
    }
  }
  bVar3 = false;
LAB_00101615:
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



EVP_PKEY * new_raw_public_key(char *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pEVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  EVP_PKEY *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80 [10];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (EVP_PKEY *)0x0;
  if (*param_1 == 'X') {
    puVar3 = &local_a8;
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,param_1,0);
    if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_00101894;
  }
  else {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,&_LC9,0);
    if (ctx == (EVP_PKEY_CTX *)0x0) {
LAB_00101894:
      pEVar2 = (EVP_PKEY *)0x0;
      goto LAB_00101833;
    }
    puVar3 = local_80;
    OSSL_PARAM_construct_utf8_string(&local_e8,"group",param_1,0);
    local_88 = local_c8;
    local_a8 = local_e8;
    uStack_a0 = uStack_e0;
    local_98 = local_d8;
    uStack_90 = uStack_d0;
  }
  OSSL_PARAM_construct_octet_string(&local_e8,&_LC70,param_2,param_3);
  *puVar3 = local_e8;
  puVar3[1] = uStack_e0;
  puVar3[2] = local_d8;
  puVar3[3] = uStack_d0;
  puVar3[4] = local_c8;
  OSSL_PARAM_construct_end(&local_e8);
  puVar3[5] = local_e8;
  puVar3[6] = uStack_e0;
  puVar3[7] = local_d8;
  puVar3[8] = uStack_d0;
  puVar3[9] = local_c8;
  iVar1 = EVP_PKEY_fromdata_init(ctx);
  if (iVar1 < 1) {
LAB_00101860:
    EVP_PKEY_free(local_b0);
    local_b0 = (EVP_PKEY *)0x0;
  }
  else {
    iVar1 = EVP_PKEY_fromdata(ctx,&local_b0,0x86,&local_a8);
    if (iVar1 < 1) goto LAB_00101860;
  }
  EVP_PKEY_CTX_free(ctx);
  pEVar2 = local_b0;
LAB_00101833:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



EVP_PKEY *
new_raw_private_key(char *param_1,uchar *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  long lVar2;
  BIGNUM *a;
  long lVar3;
  EVP_PKEY *pEVar4;
  long in_FS_OFFSET;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (EVP_PKEY *)0x0;
  if (*param_1 == 'X') {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,param_1,0);
    if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_00101a98;
    lVar2 = OSSL_PARAM_BLD_new();
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_BLD_push_octet_string(lVar2,&_LC27,param_2,param_3);
      a = (BIGNUM *)0x0;
      if (iVar1 != 0) goto joined_r0x001019f0;
      goto LAB_00101946;
    }
LAB_00101a88:
    a = (BIGNUM *)0x0;
    lVar3 = 0;
LAB_00101949:
    EVP_PKEY_free(local_48);
    local_48 = (EVP_PKEY *)0x0;
  }
  else {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,&_LC9,0);
    if (ctx == (EVP_PKEY_CTX *)0x0) {
LAB_00101a98:
      pEVar4 = (EVP_PKEY *)0x0;
      goto LAB_00101981;
    }
    lVar2 = OSSL_PARAM_BLD_new();
    if (lVar2 == 0) goto LAB_00101a88;
    a = BN_bin2bn(param_2,(int)param_3,(BIGNUM *)0x0);
    if (((a == (BIGNUM *)0x0) ||
        (iVar1 = OSSL_PARAM_BLD_push_utf8_string(lVar2,"group",param_1,0), iVar1 == 0)) ||
       (iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC27,a), iVar1 == 0)) {
LAB_00101946:
      lVar3 = 0;
      goto LAB_00101949;
    }
joined_r0x001019f0:
    if ((param_4 != 0) &&
       (iVar1 = OSSL_PARAM_BLD_push_octet_string(lVar2,&_LC70,param_4,param_5), iVar1 == 0))
    goto LAB_00101946;
    lVar3 = OSSL_PARAM_BLD_to_param(lVar2);
    if (((lVar3 == 0) || (iVar1 = EVP_PKEY_fromdata_init(ctx), iVar1 < 1)) ||
       (iVar1 = EVP_PKEY_fromdata(ctx,&local_48,0x87,lVar3), iVar1 < 1)) goto LAB_00101949;
  }
  BN_free(a);
  OSSL_PARAM_free(lVar3);
  OSSL_PARAM_BLD_free(lVar2);
  EVP_PKEY_CTX_free(ctx);
  pEVar4 = local_48;
LAB_00101981:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pEVar4;
}



bool test_ec_badauth(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  EVP_PKEY *pkey;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_348;
  undefined8 local_340;
  undefined1 local_338 [256];
  undefined1 local_238 [256];
  undefined1 local_138 [264];
  long local_30;
  
  uVar2 = rctx;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_348 = 0x100;
  local_340 = 0x100;
  if ((param_1 & 1) == 0) {
    bVar6 = false;
    test_note("%s %s","P-256","Encap");
    local_138[0] = 0;
    pkey = (EVP_PKEY *)new_raw_private_key("P-256",p256_ikmr_priv,0x20,local_138,1);
    iVar3 = test_ptr("test/evp_pkey_dhkem_test.c",0x296,
                     "auth = new_raw_private_key(t->curve, t->rpriv, t->rprivlen, pub, 1)",pkey);
    if (iVar3 == 0) goto LAB_00101ba3;
    uVar4 = EVP_PKEY_auth_encapsulate_init(uVar2,pkey,opparam);
    iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x29a,
                        "EVP_PKEY_auth_encapsulate_init(ctx, auth, opparam)",&_LC0,uVar4,1);
    if (iVar3 == 0) goto LAB_00101ba3;
    uVar4 = EVP_PKEY_encapsulate(uVar2,local_338,&local_348,local_238,&local_340);
    iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x29c,
                        "EVP_PKEY_encapsulate(ctx, enc, &enclen, secret, &secretlen)",&_LC13,uVar4,0
                       );
    if (iVar3 == 0) goto LAB_00101ba3;
LAB_00101cd6:
    uVar5 = ERR_get_error();
    uVar1 = (uint)uVar5 & 0x7fffff;
    if ((uVar5 & 0x80000000) != 0) {
      uVar1 = (uint)uVar5 & 0x7fffffff;
    }
    iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x2a6,"ERR_GET_REASON(ERR_get_error())",
                        "PROV_R_INVALID_KEY",uVar1,0x9e);
    bVar6 = iVar3 != 0;
  }
  else {
    test_note("%s %s","P-256","Decap");
    local_138[0] = 0;
    pkey = (EVP_PKEY *)new_raw_private_key("P-256",p256_ikmr_priv,0x20,local_138,1);
    iVar3 = test_ptr("test/evp_pkey_dhkem_test.c",0x296,
                     "auth = new_raw_private_key(t->curve, t->rpriv, t->rprivlen, pub, 1)",pkey);
    if (iVar3 != 0) {
      uVar4 = EVP_PKEY_auth_decapsulate_init(uVar2,pkey,opparam);
      iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x2a0,
                          "EVP_PKEY_auth_decapsulate_init(ctx, auth, opparam)",&_LC0,uVar4,1);
      if (iVar3 != 0) {
        uVar4 = EVP_PKEY_decapsulate(uVar2,local_238,&local_340,p256_expected_enc,0x41);
        iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x2a1,
                            "EVP_PKEY_decapsulate(ctx, secret, &secretlen, t->expected_enc, t->expected_enclen)"
                            ,&_LC13,uVar4,0);
        if (iVar3 == 0) {
          bVar6 = false;
          goto LAB_00101ba3;
        }
        goto LAB_00101cd6;
      }
    }
    bVar6 = false;
  }
LAB_00101ba3:
  EVP_PKEY_free(pkey);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_ec_badpublic(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  ulong uVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_348;
  undefined8 local_340;
  undefined1 local_338 [256];
  undefined1 local_238 [256];
  undefined1 local_138 [264];
  long local_30;
  
  pcVar5 = "Decap";
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_348 = 0x100;
  if ((param_1 & 1) == 0) {
    pcVar5 = "Encap";
  }
  ctx = (EVP_PKEY_CTX *)0x0;
  test_note("%s %s","P-256",pcVar5);
  local_238[0] = 0;
  pkey = (EVP_PKEY *)new_raw_private_key("P-256",p256_ikmr_priv,0x20,local_238,1);
  uVar1 = test_ptr("test/evp_pkey_dhkem_test.c",0x264,
                   "recippriv = new_raw_private_key(t->curve, t->rpriv, t->rprivlen, pub, 1)",pkey);
  if (uVar1 == 0) goto LAB_00101e32;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pkey,0);
  iVar2 = test_ptr("test/evp_pkey_dhkem_test.c",0x268,
                   "ctx = EVP_PKEY_CTX_new_from_pkey(libctx, recippriv, NULL)",ctx);
  if (iVar2 != 0) {
    if ((param_1 & 1) == 0) {
      local_340 = 0x100;
      uVar3 = EVP_PKEY_encapsulate_init(ctx,opparam);
      iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x26f,
                          "EVP_PKEY_encapsulate_init(ctx, opparam)",&_LC0,uVar3,1);
      if (iVar2 != 0) {
        uVar3 = EVP_PKEY_encapsulate(ctx,local_138,&local_340,local_338,&local_348);
        iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x271,
                            "EVP_PKEY_encapsulate(ctx, enc , &enclen, secret, &secretlen)",&_LC13,
                            uVar3,0);
        goto joined_r0x00102000;
      }
    }
    else {
      uVar3 = EVP_PKEY_decapsulate_init(ctx,opparam);
      iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x275,
                          "EVP_PKEY_decapsulate_init(ctx, opparam)",&_LC0,uVar3,1);
      if (iVar2 != 0) {
        uVar3 = EVP_PKEY_decapsulate(ctx,local_338,&local_348,p256_expected_enc,0x41);
        iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x277,
                            "EVP_PKEY_decapsulate(ctx, secret, &secretlen, t->expected_enc, t->expected_enclen)"
                            ,&_LC13,uVar3,0);
joined_r0x00102000:
        if (iVar2 != 0) {
          uVar4 = ERR_get_error();
          uVar1 = (uint)uVar4 & 0x7fffff;
          if ((uVar4 & 0x80000000) != 0) {
            uVar1 = (uint)uVar4 & 0x7fffffff;
          }
          iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x27d,"ERR_GET_REASON(ERR_get_error())",
                              "PROV_R_INVALID_KEY",uVar1,0x9e);
          uVar1 = (uint)(iVar2 != 0);
          goto LAB_00101e32;
        }
      }
    }
  }
  uVar1 = 0;
LAB_00101e32:
  EVP_PKEY_free(pkey);
  EVP_PKEY_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_ec_public_key_infinity(void)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_249;
  undefined1 local_248 [256];
  undefined1 local_148 [264];
  long local_40;
  
  uVar1 = rctx;
  ctx = (EVP_PKEY_CTX *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_249 = 0;
  local_260 = 0x100;
  local_258 = 0x100;
  pkey = (EVP_PKEY *)new_raw_private_key("P-256",p256_ikmr_priv,0x20,&local_249,1);
  uVar2 = test_ptr("test/evp_pkey_dhkem_test.c",0x12f,
                   "key = new_raw_private_key(t->curve, t->rpriv, t->rprivlen, tmp, sizeof(tmp))",
                   pkey);
  if (uVar2 != 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pkey,0);
    iVar3 = test_ptr("test/evp_pkey_dhkem_test.c",0x131,
                     "keyctx = EVP_PKEY_CTX_new_from_pkey(libctx, key, NULL)",ctx);
    if (iVar3 != 0) {
      uVar4 = EVP_PKEY_encapsulate_init(ctx,opparam);
      iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x133,
                          "EVP_PKEY_encapsulate_init(keyctx, opparam)",&_LC0,uVar4,1);
      if (iVar3 != 0) {
        uVar4 = EVP_PKEY_encapsulate(ctx,local_148);
        iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x134,
                            "EVP_PKEY_encapsulate(keyctx, e, &elen, s, &slen)",&_LC13,uVar4,0);
        if (iVar3 != 0) {
          uVar4 = EVP_PKEY_decapsulate_init(ctx,opparam);
          iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x136,
                              "EVP_PKEY_decapsulate_init(keyctx, opparam)",&_LC0,uVar4,1);
          if (iVar3 != 0) {
            uVar4 = EVP_PKEY_decapsulate(ctx,local_248,&local_260,p256_expected_enc,0x41);
            iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x137,
                                "EVP_PKEY_decapsulate(keyctx, s, &slen, t->expected_enc, t->expected_enclen)"
                                ,&_LC13,uVar4,0);
            if (iVar3 != 0) {
              uVar4 = EVP_PKEY_auth_encapsulate_init(uVar1,pkey,opparam);
              iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x13b,
                                  "EVP_PKEY_auth_encapsulate_init(ctx, key, opparam)",&_LC0,uVar4,1)
              ;
              if (iVar3 != 0) {
                uVar4 = EVP_PKEY_encapsulate(uVar1,local_148,&local_258,local_248,&local_260);
                iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x13c,
                                    "EVP_PKEY_encapsulate(ctx, e, &elen, s, &slen)",&_LC13,uVar4,0);
                uVar2 = (uint)(iVar3 != 0);
                goto LAB_001020b3;
              }
            }
          }
        }
      }
    }
    uVar2 = 0;
  }
LAB_001020b3:
  EVP_PKEY_free(pkey);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_ec_invalid_private_key(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  
  ctx = (EVP_PKEY_CTX *)0x0;
  pkey = (EVP_PKEY *)new_raw_private_key("P-256",order_0,0x20,p256_ikmr_pub,0x41);
  uVar1 = test_ptr("test/evp_pkey_dhkem_test.c",0x119,
                   "priv = new_raw_private_key(\"P-256\", order, sizeof(order), t->rpub, t->rpublen)"
                   ,pkey);
  if (uVar1 != 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pkey,0);
    uVar1 = test_ptr("test/evp_pkey_dhkem_test.c",0x11b,
                     "ctx = EVP_PKEY_CTX_new_from_pkey(libctx, priv, NULL)",ctx);
    if (uVar1 != 0) {
      uVar2 = EVP_PKEY_encapsulate_init(ctx,0);
      iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x11c,"EVP_PKEY_encapsulate_init(ctx, NULL)",
                          &_LC13,uVar2,0);
      uVar1 = (uint)(iVar3 != 0);
    }
  }
  EVP_PKEY_free(pkey);
  EVP_PKEY_CTX_free(ctx);
  return uVar1;
}



bool test_noauthpublic(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  EVP_PKEY *pkey;
  ulong uVar7;
  bool bVar8;
  
  uVar2 = (&rctx)[1 < (int)param_1];
  lVar1 = (ulong)(1 < (int)param_1) * 0x78;
  uVar3 = *(undefined8 *)(ec_encapdata + lVar1);
  if ((param_1 & 1) == 0) {
    test_note("%s %s",uVar3,"Encap");
    pkey = (EVP_PKEY *)
           new_raw_private_key(uVar3,*(undefined8 *)(ec_encapdata + lVar1 + 0x28),
                               *(undefined8 *)(ec_encapdata + lVar1 + 0x30),0,1 < (int)param_1);
    iVar5 = test_ptr("test/evp_pkey_dhkem_test.c",0x1b7,
                     "auth = new_raw_private_key(t->curve, t->rpriv, t->rprivlen, NULL, expected)",
                     pkey);
    bVar8 = false;
    if (iVar5 == 0) goto LAB_001024b9;
    uVar6 = EVP_PKEY_auth_encapsulate_init(uVar2,pkey,opparam);
    iVar5 = test_int_eq("test/evp_pkey_dhkem_test.c",0x1bc,
                        "EVP_PKEY_auth_encapsulate_init(ctx, auth, opparam)","expected",uVar6,
                        1 < (int)param_1);
    if (iVar5 == 0) goto LAB_001024b9;
LAB_001024aa:
    bVar8 = true;
    if ((int)param_1 < 2) {
      uVar7 = ERR_get_error();
      uVar4 = (uint)uVar7 & 0x7fffff;
      if ((uVar7 & 0x80000000) != 0) {
        uVar4 = (uint)uVar7 & 0x7fffffff;
      }
      iVar5 = test_int_eq("test/evp_pkey_dhkem_test.c",0x1c5,"ERR_GET_REASON(ERR_get_error())",
                          "PROV_R_NOT_A_PUBLIC_KEY",uVar4,0xdc);
      bVar8 = iVar5 != 0;
    }
  }
  else {
    test_note("%s %s",uVar3,"Decap");
    pkey = (EVP_PKEY *)
           new_raw_private_key(uVar3,*(undefined8 *)(ec_encapdata + lVar1 + 0x28),
                               *(undefined8 *)(ec_encapdata + lVar1 + 0x30),0,1 < (int)param_1);
    iVar5 = test_ptr("test/evp_pkey_dhkem_test.c",0x1b7,
                     "auth = new_raw_private_key(t->curve, t->rpriv, t->rprivlen, NULL, expected)",
                     pkey);
    if (iVar5 != 0) {
      uVar6 = EVP_PKEY_auth_decapsulate_init(uVar2,pkey,opparam);
      iVar5 = test_int_eq("test/evp_pkey_dhkem_test.c",0x1c0,
                          "EVP_PKEY_auth_decapsulate_init(ctx, auth, opparam)","expected",uVar6,
                          1 < (int)param_1);
      if (iVar5 != 0) goto LAB_001024aa;
    }
    bVar8 = false;
  }
LAB_001024b9:
  EVP_PKEY_free(pkey);
  return bVar8;
}



uint test_nopublic(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  ulong uVar6;
  char *pcVar7;
  
  pcVar7 = "Decap";
  uVar6 = (ulong)(1 < (int)param_1);
  if ((param_1 & 1) == 0) {
    pcVar7 = "Encap";
  }
  lVar1 = uVar6 * 0x78;
  uVar2 = *(undefined8 *)(ec_encapdata + lVar1);
  test_note("%s %s",uVar2,pcVar7);
  ctx = (EVP_PKEY_CTX *)0x0;
  pkey = (EVP_PKEY *)
         new_raw_private_key(uVar2,*(undefined8 *)(ec_encapdata + lVar1 + 0x28),
                             *(undefined8 *)(ec_encapdata + lVar1 + 0x30),0,0);
  uVar3 = test_ptr("test/evp_pkey_dhkem_test.c",0x194,
                   "priv = new_raw_private_key(t->curve, t->rpriv, t->rprivlen, NULL, 0)",pkey);
  if (uVar3 != 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pkey,0);
    iVar4 = test_ptr("test/evp_pkey_dhkem_test.c",0x197,
                     "ctx = EVP_PKEY_CTX_new_from_pkey(libctx, priv, NULL)",ctx);
    if (iVar4 != 0) {
      if ((param_1 & 1) == 0) {
        uVar5 = EVP_PKEY_encapsulate_init(ctx,opparam);
        iVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0x19b,
                            "EVP_PKEY_encapsulate_init(ctx, opparam)","expected",uVar5,uVar6);
      }
      else {
        uVar5 = EVP_PKEY_decapsulate_init();
        iVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0x19e,
                            "EVP_PKEY_decapsulate_init(ctx, opparam)","expected",uVar5,uVar6);
      }
      if (iVar4 != 0) {
        uVar3 = 1;
        if ((int)param_1 < 2) {
          uVar6 = ERR_get_error();
          uVar3 = (uint)uVar6 & 0x7fffff;
          if ((uVar6 & 0x80000000) != 0) {
            uVar3 = (uint)uVar6 & 0x7fffffff;
          }
          iVar4 = test_int_eq("test/evp_pkey_dhkem_test.c",0x1a2,"ERR_GET_REASON(ERR_get_error())",
                              "PROV_R_NOT_A_PUBLIC_KEY",uVar3,0xdc);
          uVar3 = (uint)(iVar4 != 0);
        }
        goto LAB_00102664;
      }
    }
    uVar3 = 0;
  }
LAB_00102664:
  EVP_PKEY_free(pkey);
  EVP_PKEY_CTX_free(ctx);
  return uVar3;
}



int test_dhkem_decapsulate(int param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  EVP_PKEY *pkey;
  EVP_PKEY *pEVar4;
  char *pcVar5;
  undefined8 uVar6;
  EVP_PKEY *pkey_00;
  
  lVar1 = (long)param_1 * 0x78;
  lVar2 = *(long *)(ec_encapdata + lVar1 + 0x58);
  uVar6 = *(undefined8 *)(ec_encapdata + lVar1);
  if (lVar2 == 0) {
    test_note("Test %s %s Decapsulate",uVar6,&_LC99);
    pEVar4 = (EVP_PKEY *)
             new_raw_private_key(uVar6,*(undefined8 *)(ec_encapdata + lVar1 + 0x28),
                                 *(undefined8 *)(ec_encapdata + lVar1 + 0x30),
                                 *(undefined8 *)(ec_encapdata + lVar1 + 0x18),
                                 *(undefined8 *)(ec_encapdata + lVar1 + 0x20));
    pcVar5 = "rpriv = new_raw_private_key(t->curve, t->rpriv, t->rprivlen, t->rpub, t->rpublen)";
    uVar6 = 0x49;
    pkey_00 = (EVP_PKEY *)0x0;
    pkey = pEVar4;
  }
  else {
    test_note("Test %s %s Decapsulate",uVar6,&_LC102);
    pkey = (EVP_PKEY *)
           new_raw_private_key(uVar6,*(undefined8 *)(ec_encapdata + lVar1 + 0x28),
                               *(undefined8 *)(ec_encapdata + lVar1 + 0x30),
                               *(undefined8 *)(ec_encapdata + lVar1 + 0x18),
                               *(undefined8 *)(ec_encapdata + lVar1 + 0x20));
    iVar3 = test_ptr("test/evp_pkey_dhkem_test.c",0x49,
                     "rpriv = new_raw_private_key(t->curve, t->rpriv, t->rprivlen, t->rpub, t->rpublen)"
                     ,pkey);
    if (iVar3 == 0) {
      pkey_00 = (EVP_PKEY *)0x0;
      iVar3 = 0;
      goto LAB_00102893;
    }
    pEVar4 = (EVP_PKEY *)
             new_raw_public_key(uVar6,lVar2,*(undefined8 *)(ec_encapdata + lVar1 + 0x60));
    pcVar5 = "spub = new_raw_public_key(t->curve, t->spub, t->spublen)";
    uVar6 = 0x4d;
    pkey_00 = pEVar4;
  }
  iVar3 = test_ptr("test/evp_pkey_dhkem_test.c",uVar6,pcVar5,pEVar4);
  if (iVar3 != 0) {
    iVar3 = do_decap(ec_encapdata + (long)param_1 * 0x78,pkey,pkey_00);
  }
LAB_00102893:
  EVP_PKEY_free(pkey_00);
  EVP_PKEY_free(pkey);
  return iVar3;
}



int test_dhkem_encapsulate(int param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  EVP_PKEY *pkey;
  EVP_PKEY *pEVar4;
  char *pcVar5;
  undefined8 uVar6;
  EVP_PKEY *pkey_00;
  
  lVar1 = (long)param_1 * 0x78;
  lVar2 = *(long *)(ec_encapdata + lVar1 + 0x68);
  uVar6 = *(undefined8 *)(ec_encapdata + lVar1);
  if (lVar2 == 0) {
    test_note("Test %s %s Decapsulate",uVar6,&_LC99);
    pEVar4 = (EVP_PKEY *)
             new_raw_public_key(uVar6,*(undefined8 *)(ec_encapdata + lVar1 + 0x18),
                                *(undefined8 *)(ec_encapdata + lVar1 + 0x20));
    pcVar5 = "rpub = new_raw_public_key(t->curve, t->rpub, t->rpublen)";
    uVar6 = 0x30;
    pkey_00 = (EVP_PKEY *)0x0;
    pkey = pEVar4;
  }
  else {
    test_note("Test %s %s Decapsulate",uVar6,&_LC102);
    pkey = (EVP_PKEY *)
           new_raw_public_key(uVar6,*(undefined8 *)(ec_encapdata + lVar1 + 0x18),
                              *(undefined8 *)(ec_encapdata + lVar1 + 0x20));
    iVar3 = test_ptr("test/evp_pkey_dhkem_test.c",0x30,
                     "rpub = new_raw_public_key(t->curve, t->rpub, t->rpublen)",pkey);
    if (iVar3 == 0) {
      pkey_00 = (EVP_PKEY *)0x0;
      iVar3 = 0;
      goto LAB_001029f7;
    }
    pEVar4 = (EVP_PKEY *)
             new_raw_private_key(uVar6,lVar2,*(undefined8 *)(ec_encapdata + lVar1 + 0x70),
                                 *(undefined8 *)(ec_encapdata + lVar1 + 0x58),
                                 *(undefined8 *)(ec_encapdata + lVar1 + 0x60));
    pcVar5 = "spriv = new_raw_private_key(t->curve, t->spriv, t->sprivlen, t->spub, t->spublen)";
    uVar6 = 0x34;
    pkey_00 = pEVar4;
  }
  iVar3 = test_ptr("test/evp_pkey_dhkem_test.c",uVar6,pcVar5,pEVar4);
  if (iVar3 != 0) {
    iVar3 = do_encap(ec_encapdata + (long)param_1 * 0x78,pkey,pkey_00);
  }
LAB_001029f7:
  EVP_PKEY_free(pkey_00);
  EVP_PKEY_free(pkey);
  return iVar3;
}



bool test_ec_dhkem_derivekey_fail(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  EVP_PKEY *local_c0;
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
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = (EVP_PKEY *)0x0;
  OSSL_PARAM_construct_utf8_string(&local_f8,"group","secp256k1",0);
  local_98 = local_d8;
  local_b8 = local_f8;
  uStack_b0 = uStack_f0;
  local_a8 = local_e8;
  uStack_a0 = uStack_e0;
  OSSL_PARAM_construct_octet_string(&local_f8,"dhkem-ikm",p256_ikme,0x20);
  local_70 = local_d8;
  local_90 = local_f8;
  uStack_88 = uStack_f0;
  local_80 = local_e8;
  uStack_78 = uStack_e0;
  OSSL_PARAM_construct_end(&local_f8);
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_48 = local_d8;
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,&_LC9,0);
  iVar1 = test_ptr("test/evp_pkey_dhkem_test.c",0x84,
                   "genctx = EVP_PKEY_CTX_new_from_name(libctx, \"EC\", NULL)",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_keygen_init(ctx);
    iVar1 = test_int_eq("test/evp_pkey_dhkem_test.c",0x85,"EVP_PKEY_keygen_init(genctx)",&_LC0,iVar1
                        ,1);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_CTX_set_params(ctx,&local_b8);
      iVar1 = test_int_eq("test/evp_pkey_dhkem_test.c",0x86,
                          "EVP_PKEY_CTX_set_params(genctx, params)",&_LC0,uVar2,1);
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_generate(ctx,&local_c0);
        iVar1 = test_int_eq("test/evp_pkey_dhkem_test.c",0x87,"EVP_PKEY_generate(genctx, &pkey)",
                            &_LC13,uVar2,0);
        if (iVar1 != 0) {
          OSSL_PARAM_construct_utf8_string(&local_f8,"group","P-224",0);
          local_98 = local_d8;
          local_b8 = local_f8;
          uStack_b0 = uStack_f0;
          local_a8 = local_e8;
          uStack_a0 = uStack_e0;
          OSSL_PARAM_construct_octet_string(&local_f8,"dhkem-ikm",p256_ikme,0x20);
          local_70 = local_d8;
          local_90 = local_f8;
          uStack_88 = uStack_f0;
          local_80 = local_e8;
          uStack_78 = uStack_e0;
          OSSL_PARAM_construct_end(&local_f8);
          local_48 = local_d8;
          local_68 = local_f8;
          uStack_60 = uStack_f0;
          local_58 = local_e8;
          uStack_50 = uStack_e0;
          iVar1 = EVP_PKEY_keygen_init(ctx);
          iVar1 = test_int_eq("test/evp_pkey_dhkem_test.c",0x90,"EVP_PKEY_keygen_init(genctx)",&_LC0
                              ,iVar1,1);
          if (iVar1 != 0) {
            uVar2 = EVP_PKEY_CTX_set_params(ctx,&local_b8);
            iVar1 = test_int_eq("test/evp_pkey_dhkem_test.c",0x91,
                                "EVP_PKEY_CTX_set_params(genctx, params)",&_LC0,uVar2,1);
            if (iVar1 != 0) {
              uVar2 = EVP_PKEY_generate(ctx,&local_c0);
              iVar1 = test_int_eq("test/evp_pkey_dhkem_test.c",0x92,
                                  "EVP_PKEY_generate(genctx, &pkey)",&_LC13,uVar2,0);
              if (iVar1 != 0) {
                OSSL_PARAM_construct_utf8_string(&local_f8,"group","P-256",0);
                local_98 = local_d8;
                local_b8 = local_f8;
                uStack_b0 = uStack_f0;
                local_a8 = local_e8;
                uStack_a0 = uStack_e0;
                OSSL_PARAM_construct_octet_string(&local_f8,"dhkem-ikm",p256_ikme,0x1f);
                local_70 = local_d8;
                local_90 = local_f8;
                uStack_88 = uStack_f0;
                local_80 = local_e8;
                uStack_78 = uStack_e0;
                OSSL_PARAM_construct_end(&local_f8);
                local_68 = local_f8;
                uStack_60 = uStack_f0;
                local_48 = local_d8;
                local_58 = local_e8;
                uStack_50 = uStack_e0;
                uVar2 = EVP_PKEY_CTX_set_params(ctx,&local_b8);
                iVar1 = test_int_eq("test/evp_pkey_dhkem_test.c",0x9b,
                                    "EVP_PKEY_CTX_set_params(genctx, params)",&_LC0,uVar2,1);
                if (iVar1 != 0) {
                  uVar2 = EVP_PKEY_generate(ctx,&local_c0);
                  iVar1 = test_int_eq("test/evp_pkey_dhkem_test.c",0x9c,
                                      "EVP_PKEY_generate(genctx, &pkey)",&_LC13,uVar2,0);
                  bVar3 = iVar1 != 0;
                  goto LAB_00102b95;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00102b95:
  BN_free((BIGNUM *)0x0);
  EVP_PKEY_free(local_c0);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_ec_noikme(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pkey_00;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined1 local_348 [256];
  undefined1 local_248 [256];
  undefined1 local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_360 = 0x100;
  local_358 = 0x100;
  local_350 = 0x100;
  bVar1 = 4 < param_1;
  if (bVar1) {
    pcVar5 = " with auth";
    pcVar6 = *(char **)(dhkem_supported_curves + (long)(param_1 + -5) * 8);
  }
  else {
    pcVar6 = *(char **)(dhkem_supported_curves + (long)param_1 * 8);
    pcVar5 = "";
  }
  test_note("testing encap/decap of curve %s%s\n",pcVar6,pcVar5);
  if (*pcVar6 == 'X') {
    pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(libctx,0,pcVar6);
    uVar2 = test_ptr("test/evp_pkey_dhkem_test.c",0x214,
                     "recip = EVP_PKEY_Q_keygen(libctx, NULL, curve)",pkey);
    if (uVar2 != 0) {
      if (!bVar1) goto LAB_00102fc9;
      pkey_00 = (EVP_PKEY *)EVP_PKEY_Q_keygen(libctx,0,pcVar6);
      pcVar6 = "sender_auth = EVP_PKEY_Q_keygen(libctx, NULL, curve)";
      uVar7 = 0x216;
LAB_001030e1:
      ctx = (EVP_PKEY_CTX *)0x0;
      uVar2 = test_ptr("test/evp_pkey_dhkem_test.c",uVar7,pcVar6,pkey_00);
      if (uVar2 == 0) goto LAB_00102ffb;
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pkey,0);
      iVar3 = test_ptr("test/evp_pkey_dhkem_test.c",0x221,
                       "ctx = EVP_PKEY_CTX_new_from_pkey(libctx, recip, NULL)",ctx);
      if (iVar3 != 0) {
        if (pkey_00 == (EVP_PKEY *)0x0) goto LAB_00103170;
        uVar4 = EVP_PKEY_auth_encapsulate_init(ctx,pkey_00,0);
        iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x223,
                            "EVP_PKEY_auth_encapsulate_init(ctx, sender_auth, NULL)",&_LC0,uVar4,1);
        if (iVar3 != 0) goto LAB_001031af;
      }
      goto LAB_00103163;
    }
  }
  else {
    pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(libctx,0,&_LC9,pcVar6);
    uVar2 = test_ptr("test/evp_pkey_dhkem_test.c",0x21a,
                     "recip = EVP_PKEY_Q_keygen(libctx, NULL, \"EC\", curve)",pkey);
    if (uVar2 != 0) {
      if (bVar1) {
        pkey_00 = (EVP_PKEY *)EVP_PKEY_Q_keygen(libctx,0,&_LC9,pcVar6);
        pcVar6 = "sender_auth = EVP_PKEY_Q_keygen(libctx, NULL, \"EC\", curve)";
        uVar7 = 0x21c;
        goto LAB_001030e1;
      }
LAB_00102fc9:
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pkey,0);
      iVar3 = test_ptr("test/evp_pkey_dhkem_test.c",0x221,
                       "ctx = EVP_PKEY_CTX_new_from_pkey(libctx, recip, NULL)",ctx);
      if (iVar3 == 0) {
        pkey_00 = (EVP_PKEY *)0x0;
        uVar2 = 0;
        goto LAB_00102ffb;
      }
LAB_00103170:
      pkey_00 = (EVP_PKEY *)0x0;
      uVar4 = EVP_PKEY_encapsulate_init(ctx,0);
      uVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x226,"EVP_PKEY_encapsulate_init(ctx, NULL)",
                          &_LC0,uVar4,1);
      if (uVar2 == 0) goto LAB_00102ffb;
LAB_001031af:
      uVar4 = EVP_PKEY_CTX_set_kem_op(ctx,"DHKEM");
      iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x227,"EVP_PKEY_CTX_set_kem_op(ctx, op)",
                          &_LC0,uVar4,1);
      if (iVar3 != 0) {
        uVar4 = EVP_PKEY_encapsulate(ctx,local_148,&local_350,local_348,&local_360);
        iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x228,
                            "EVP_PKEY_encapsulate(ctx, sender_pub, &sender_publen, sender_secret, &sender_secretlen)"
                            ,&_LC0,uVar4,1);
        if (iVar3 != 0) {
          if (pkey_00 == (EVP_PKEY *)0x0) {
            uVar4 = EVP_PKEY_decapsulate_init(ctx,0);
            uVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x22e,
                                "EVP_PKEY_decapsulate_init(ctx, NULL)",&_LC0,uVar4,1);
            if (uVar2 == 0) goto LAB_00102ffb;
          }
          else {
            uVar4 = EVP_PKEY_auth_decapsulate_init(ctx,pkey_00,0);
            iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x22b,
                                "EVP_PKEY_auth_decapsulate_init(ctx, sender_auth, NULL)",&_LC0,uVar4
                                ,1);
            if (iVar3 == 0) goto LAB_00103163;
          }
          uVar4 = EVP_PKEY_CTX_set_kem_op(ctx,"DHKEM");
          iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x22f,"EVP_PKEY_CTX_set_kem_op(ctx, op)",
                              &_LC0,uVar4,1);
          if (iVar3 != 0) {
            uVar4 = EVP_PKEY_decapsulate(ctx,local_248,&local_358,local_148,local_350);
            iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x230,
                                "EVP_PKEY_decapsulate(ctx, recip_secret, &recip_secretlen, sender_pub, sender_publen)"
                                ,&_LC0,uVar4,1);
            if (iVar3 != 0) {
              iVar3 = test_mem_eq("test/evp_pkey_dhkem_test.c",0x232,"recip_secret","sender_secret",
                                  local_248,local_358,local_348,local_360);
              uVar2 = (uint)(iVar3 != 0);
              goto LAB_00102ffb;
            }
          }
        }
      }
LAB_00103163:
      uVar2 = 0;
      goto LAB_00102ffb;
    }
  }
  pkey_00 = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY_CTX *)0x0;
LAB_00102ffb:
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(pkey_00);
  EVP_PKEY_free(pkey);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



bool test_ec_dhkem_derivekey(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  EVP_PKEY_CTX *ctx;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  EVP_PKEY *local_1b0;
  undefined8 local_1a8;
  BIGNUM *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  uchar local_118 [80];
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1b0 = (EVP_PKEY *)0x0;
  local_1a8 = 0;
  local_1a0 = (BIGNUM *)0x0;
  lVar4 = (long)param_1 * 0x38;
  OSSL_PARAM_construct_utf8_string(&local_1e8,"group",*(undefined8 *)(ec_derivekey_data + lVar4),0);
  local_198 = local_1e8;
  uStack_190 = uStack_1e0;
  local_188 = local_1d8;
  uStack_180 = uStack_1d0;
  local_178 = local_1c8;
  OSSL_PARAM_construct_octet_string
            (&local_1e8,"dhkem-ikm",*(undefined8 *)(ec_derivekey_data + lVar4 + 8),
             *(undefined8 *)(ec_derivekey_data + lVar4 + 0x10));
  local_150 = local_1c8;
  local_170 = local_1e8;
  uStack_168 = uStack_1e0;
  local_160 = local_1d8;
  uStack_158 = uStack_1d0;
  OSSL_PARAM_construct_end(&local_1e8);
  local_148 = local_1e8;
  uStack_140 = uStack_1e0;
  local_128 = local_1c8;
  local_138 = local_1d8;
  uStack_130 = uStack_1d0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,&_LC9,0);
  iVar1 = test_ptr("test/evp_pkey_dhkem_test.c",0x1e3,
                   "genctx = EVP_PKEY_CTX_new_from_name(libctx, \"EC\", NULL)",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_keygen_init(ctx);
    iVar1 = test_int_eq("test/evp_pkey_dhkem_test.c",0x1e4,"EVP_PKEY_keygen_init(genctx)",&_LC0,
                        iVar1,1);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_CTX_set_params(ctx,&local_198);
      iVar1 = test_int_eq("test/evp_pkey_dhkem_test.c",0x1e5,
                          "EVP_PKEY_CTX_set_params(genctx, params)",&_LC0,uVar2,1);
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_generate(ctx,&local_1b0);
        iVar1 = test_int_eq("test/evp_pkey_dhkem_test.c",0x1e6,"EVP_PKEY_generate(genctx, &pkey)",
                            &_LC0,uVar2,1);
        if (iVar1 != 0) {
          iVar1 = EVP_PKEY_get_octet_string_param
                            (local_1b0,"encoded-pub-key",local_c8,0x85,&local_1a8);
          iVar1 = test_true("test/evp_pkey_dhkem_test.c",0x1e7,
                            "EVP_PKEY_get_octet_string_param(pkey, OSSL_PKEY_PARAM_ENCODED_PUBLIC_KEY, pubkey, sizeof(pubkey), &pubkeylen)"
                            ,iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = EVP_PKEY_get_bn_param(local_1b0,&_LC27,&local_1a0);
            iVar1 = test_true("test/evp_pkey_dhkem_test.c",0x1ea,
                              "EVP_PKEY_get_bn_param(pkey, OSSL_PKEY_PARAM_PRIV_KEY, &priv)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = BN_bn2bin(local_1a0,local_118);
              iVar3 = test_int_gt("test/evp_pkey_dhkem_test.c",0x1ec,
                                  "privkeylen = BN_bn2bin(priv, privkey)",&_LC13,iVar1,0);
              if (iVar3 != 0) {
                iVar3 = test_int_le("test/evp_pkey_dhkem_test.c",0x1ed,"privkeylen",
                                    "sizeof(privkey)",iVar1,0x42);
                if (iVar3 != 0) {
                  lVar4 = (long)param_1 * 0x38;
                  iVar1 = test_mem_eq("test/evp_pkey_dhkem_test.c",0x1ee,"privkey","t->priv",
                                      local_118,(long)iVar1,
                                      *(undefined8 *)(ec_derivekey_data + lVar4 + 0x28),
                                      *(undefined8 *)(ec_derivekey_data + lVar4 + 0x30));
                  if (iVar1 != 0) {
                    iVar1 = test_mem_eq("test/evp_pkey_dhkem_test.c",0x1ef,"pubkey","t->pub",
                                        local_c8,local_1a8,
                                        *(undefined8 *)(ec_derivekey_data + lVar4 + 0x18),
                                        *(undefined8 *)(ec_derivekey_data + lVar4 + 0x20));
                    bVar5 = iVar1 != 0;
                    goto LAB_001034e6;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_001034e6:
  BN_free(local_1a0);
  EVP_PKEY_free(local_1b0);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_set_params(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ec = 1;
  uVar3 = (&rctx)[param_1];
  OSSL_PARAM_construct_int(&local_128,"operation",&local_ec);
  local_c8 = local_108;
  local_e8 = local_128;
  uStack_e0 = uStack_120;
  local_d8 = local_118;
  uStack_d0 = uStack_110;
  OSSL_PARAM_construct_end(&local_128);
  local_a0 = local_108;
  local_c0 = local_128;
  uStack_b8 = uStack_120;
  local_b0 = local_118;
  uStack_a8 = uStack_110;
  uVar1 = EVP_PKEY_encapsulate_init(uVar3,&local_e8);
  iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x161,"EVP_PKEY_encapsulate_init(ctx, badparams)"
                      ,&_LC13,uVar1,0);
  if (iVar2 != 0) {
    OSSL_PARAM_construct_utf8_string(&local_128,"operation","unknown_op",0);
    local_c8 = local_108;
    local_e8 = local_128;
    uStack_e0 = uStack_120;
    local_d8 = local_118;
    uStack_d0 = uStack_110;
    OSSL_PARAM_construct_end(&local_128);
    local_a0 = local_108;
    local_c0 = local_128;
    uStack_b8 = uStack_120;
    local_b0 = local_118;
    uStack_a8 = uStack_110;
    uVar1 = EVP_PKEY_encapsulate_init(uVar3,&local_e8);
    iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x167,
                        "EVP_PKEY_encapsulate_init(ctx, badparams)",&_LC13,uVar1,0);
    if (iVar2 != 0) {
      OSSL_PARAM_construct_utf8_string(&local_128,"operation",0,0);
      local_c8 = local_108;
      local_e8 = local_128;
      uStack_e0 = uStack_120;
      local_d8 = local_118;
      uStack_d0 = uStack_110;
      OSSL_PARAM_construct_end(&local_128);
      local_a0 = local_108;
      local_c0 = local_128;
      uStack_b8 = uStack_120;
      local_b0 = local_118;
      uStack_a8 = uStack_110;
      uVar1 = EVP_PKEY_encapsulate_init(uVar3,&local_e8);
      iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x16e,
                          "EVP_PKEY_encapsulate_init(ctx, badparams)",&_LC13,uVar1,0);
      if (iVar2 != 0) {
        OSSL_PARAM_construct_int(&local_128,&_LC35,&local_ec);
        local_c8 = local_108;
        local_e8 = local_128;
        uStack_e0 = uStack_120;
        local_d8 = local_118;
        uStack_d0 = uStack_110;
        OSSL_PARAM_construct_end(&local_128);
        local_a0 = local_108;
        local_c0 = local_128;
        uStack_b8 = uStack_120;
        local_b0 = local_118;
        uStack_a8 = uStack_110;
        uVar1 = EVP_PKEY_encapsulate_init(uVar3,&local_e8);
        iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x174,
                            "EVP_PKEY_encapsulate_init(ctx, badparams)",&_LC13,uVar1,0);
        if (iVar2 != 0) {
          OSSL_PARAM_construct_octet_string(&local_128,&_LC35,0,0);
          local_c8 = local_108;
          local_e8 = local_128;
          uStack_e0 = uStack_120;
          local_d8 = local_118;
          uStack_d0 = uStack_110;
          OSSL_PARAM_construct_end(&local_128);
          local_a0 = local_108;
          local_c0 = local_128;
          uStack_b8 = uStack_120;
          local_b0 = local_118;
          uStack_a8 = uStack_110;
          uVar1 = EVP_PKEY_encapsulate_init(uVar3,&local_e8);
          iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x17a,
                              "EVP_PKEY_encapsulate_init(ctx, badparams)",&_LC0,uVar1,1);
          if (iVar2 != 0) {
            OSSL_PARAM_construct_int(&local_128,"unknownparam",&local_ec);
            local_c8 = local_108;
            local_e8 = local_128;
            uStack_e0 = uStack_120;
            local_d8 = local_118;
            uStack_d0 = uStack_110;
            OSSL_PARAM_construct_end(&local_128);
            local_a0 = local_108;
            local_c0 = local_128;
            uStack_b8 = uStack_120;
            local_b0 = local_118;
            uStack_a8 = uStack_110;
            uVar1 = EVP_PKEY_encapsulate_init(uVar3,&local_e8);
            uVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x180,
                                "EVP_PKEY_encapsulate_init(ctx, badparams)",&_LC0,uVar1,1);
            goto LAB_00103831;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_00103831:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_settables(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = (&rctx)[param_1];
  uVar1 = EVP_PKEY_encapsulate_init(uVar3,0);
  iVar2 = test_int_eq("test/evp_pkey_dhkem_test.c",0x5e,"EVP_PKEY_encapsulate_init(ctx, NULL)",&_LC0
                      ,uVar1,1);
  if (iVar2 != 0) {
    uVar3 = EVP_PKEY_CTX_settable_params(uVar3);
    iVar2 = test_ptr("test/evp_pkey_dhkem_test.c",0x5f,
                     "settableparams = EVP_PKEY_CTX_settable_params(ctx)",uVar3);
    if (iVar2 != 0) {
      lVar4 = OSSL_PARAM_locate_const(uVar3,"operation");
      iVar2 = test_ptr("test/evp_pkey_dhkem_test.c",0x60,
                       "p = OSSL_PARAM_locate_const(settableparams, OSSL_KEM_PARAM_OPERATION)",lVar4
                      );
      if ((iVar2 != 0) &&
         (iVar2 = test_uint_eq("test/evp_pkey_dhkem_test.c",0x62,"p->data_type",
                               "OSSL_PARAM_UTF8_STRING",*(undefined4 *)(lVar4 + 8),4), iVar2 != 0))
      {
        lVar4 = OSSL_PARAM_locate_const(uVar3,&_LC35);
        iVar2 = test_ptr("test/evp_pkey_dhkem_test.c",99,
                         "p = OSSL_PARAM_locate_const(settableparams, OSSL_KEM_PARAM_IKME)",lVar4);
        if (iVar2 != 0) {
          iVar2 = test_uint_eq("test/evp_pkey_dhkem_test.c",0x65,"p->data_type",
                               "OSSL_PARAM_OCTET_STRING",*(undefined4 *)(lVar4 + 8),5);
          return iVar2 != 0;
        }
      }
    }
  }
  return false;
}



uint test_ec_curve_unsupported(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  
  ctx = (EVP_PKEY_CTX *)0x0;
  pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(libctx,0,&_LC9,"P-224");
  uVar1 = test_ptr("test/evp_pkey_dhkem_test.c",0x242,
                   "key = EVP_PKEY_Q_keygen(libctx, NULL, \"EC\", curve)",pkey);
  if (uVar1 != 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pkey,0);
    uVar1 = test_ptr("test/evp_pkey_dhkem_test.c",0x243,
                     "ctx = EVP_PKEY_CTX_new_from_pkey(libctx, key, NULL)",ctx);
    if (uVar1 != 0) {
      uVar2 = EVP_PKEY_encapsulate_init(ctx,0);
      uVar1 = test_int_eq("test/evp_pkey_dhkem_test.c",0x244,"EVP_PKEY_encapsulate_init(ctx, NULL)",
                          &_LC7,uVar2,0xfffffffe);
      if (uVar1 != 0) {
        uVar2 = EVP_PKEY_decapsulate_init(ctx,0);
        iVar3 = test_int_eq("test/evp_pkey_dhkem_test.c",0x245,
                            "EVP_PKEY_decapsulate_init(ctx, NULL)",&_LC7,uVar2,0xfffffffe);
        uVar1 = (uint)(iVar3 != 0);
      }
    }
  }
  EVP_PKEY_free(pkey);
  EVP_PKEY_CTX_free(ctx);
  return uVar1;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_48 [7];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = test_get_libctx(&libctx,&nullprov,0,&libprov,"default");
  if (iVar1 != 0) {
    OSSL_PARAM_construct_utf8_string(local_48,"operation","DHKEM",0);
    opparam._32_8_ = local_48[4];
    opparam._0_8_ = local_48[0];
    opparam._8_8_ = local_48[1];
    opparam._16_8_ = local_48[2];
    opparam._24_8_ = local_48[3];
    OSSL_PARAM_construct_end(local_48);
    opparam._72_8_ = local_48[4];
    opparam._40_8_ = local_48[0];
    opparam._48_8_ = local_48[1];
    opparam._56_8_ = local_48[2];
    opparam._64_8_ = local_48[3];
    rkey = EVP_PKEY_Q_keygen(libctx,0,&_LC9,"P-256");
    iVar1 = test_ptr("test/evp_pkey_dhkem_test.c",799,
                     "rkey[TEST_KEYTYPE_P256] = EVP_PKEY_Q_keygen(libctx, NULL, \"EC\", \"P-256\")",
                     rkey);
    if (iVar1 != 0) {
      DAT_001042b8 = EVP_PKEY_Q_keygen(libctx,0,"X25519");
      iVar1 = test_ptr("test/evp_pkey_dhkem_test.c",0x323,
                       "rkey[TEST_KEYTYPE_X25519] = EVP_PKEY_Q_keygen(libctx, NULL, \"X25519\")",
                       DAT_001042b8);
      if (iVar1 != 0) {
        rctx = EVP_PKEY_CTX_new_from_pkey(libctx,rkey,0);
        iVar1 = test_ptr("test/evp_pkey_dhkem_test.c",0x327,
                         "rctx[TEST_KEYTYPE_P256] = EVP_PKEY_CTX_new_from_pkey(libctx, rkey[TEST_KEYTYPE_P256], NULL)"
                         ,rctx);
        if (iVar1 != 0) {
          DAT_001042a8 = EVP_PKEY_CTX_new_from_pkey(libctx,DAT_001042b8,0);
          iVar1 = test_ptr("test/evp_pkey_dhkem_test.c",0x32c,
                           "rctx[TEST_KEYTYPE_X25519] = EVP_PKEY_CTX_new_from_pkey(libctx, rkey[TEST_KEYTYPE_X25519], NULL)"
                           ,DAT_001042a8);
          if (iVar1 != 0) {
            add_all_tests("test_dhkem_encapsulate",test_dhkem_encapsulate,5,1);
            add_all_tests("test_dhkem_decapsulate",test_dhkem_decapsulate,5,1);
            add_all_tests("test_settables",test_settables,2,1);
            add_all_tests("test_init_multiple",0x100000,2,1);
            add_all_tests("test_auth_key_type_mismatch",test_auth_key_type_mismatch,2,1);
            add_all_tests("test_no_operation_set",test_no_operation_set,2,1);
            add_all_tests("test_ikm_small",test_ikm_small,2,1);
            add_all_tests("test_input_size_small",test_input_size_small,2,1);
            add_all_tests("test_null_params",test_null_params,2,1);
            add_all_tests("test_set_params",test_set_params,2,1);
            add_all_tests("test_nopublic",test_nopublic,4,1);
            add_all_tests("test_noauthpublic",test_noauthpublic,4,1);
            add_all_tests("test_ec_dhkem_derivekey",test_ec_dhkem_derivekey,3,1);
            add_all_tests("test_ec_noikme",test_ec_noikme,10,1);
            add_test("test_ec_auth_key_curve_mismatch",test_ec_auth_key_curve_mismatch);
            add_test("test_ec_invalid_private_key",test_ec_invalid_private_key);
            add_test("test_ec_dhkem_derivekey_fail",test_ec_dhkem_derivekey_fail);
            add_test("test_ec_curve_nonnist",test_ec_curve_nonnist);
            add_test("test_ec_curve_unsupported",test_ec_curve_unsupported);
            add_test("test_ec_invalid_decap_enc_buffer",test_ec_invalid_decap_enc_buffer);
            add_test("test_ec_public_key_infinity",test_ec_public_key_infinity);
            add_all_tests("test_ec_badpublic",test_ec_badpublic,2,1);
            add_all_tests("test_ec_badauth",test_ec_badauth,2,1);
            add_all_tests("test_ecx_dhkem_derivekey",test_ecx_dhkem_derivekey,2,1);
            add_test("test_ecx_auth_key_curve_mismatch",test_ecx_auth_key_curve_mismatch);
            add_test("test_ed_curve_unsupported",test_ed_curve_unsupported);
            uVar2 = 1;
            goto LAB_00103df2;
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_00103df2:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cleanup_tests(void)

{
  EVP_PKEY_free(DAT_001042b8);
  EVP_PKEY_free(rkey);
  EVP_PKEY_CTX_free(DAT_001042a8);
  EVP_PKEY_CTX_free(rctx);
  OSSL_PROVIDER_unload(libprov);
  OSSL_LIB_CTX_free(libctx);
  OSSL_PROVIDER_unload(nullprov);
  return;
}



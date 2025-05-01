
bool test_evp_pbe_alg_add(void)

{
  int iVar1;
  EVP_MD *md;
  EVP_CIPHER *cipher;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  md = EVP_md5();
  cipher = EVP_des_cbc();
  iVar1 = EVP_PBE_alg_add(10,cipher,md,&PKCS5_PBE_keyivgen);
  iVar1 = test_true("test/evp_extra_test2.c",0x57b,
                    "EVP_PBE_alg_add(NID_pbeWithMD5AndDES_CBC, EVP_des_cbc(), EVP_md5(), PKCS5_PBE_keyivgen)"
                    ,iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = EVP_PBE_find_ex(0,10,&local_28,&local_24,&local_18,&local_20);
    iVar1 = test_true("test/evp_extra_test2.c",0x57f,
                      "EVP_PBE_find_ex(EVP_PBE_TYPE_OUTER, NID_pbeWithMD5AndDES_CBC, &cipher_nid, &md_nid, &keygen, &keygen_ex)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = test_true("test/evp_extra_test2.c",0x583,"keygen != NULL",local_18 != 0);
      if (iVar1 != 0) {
        iVar1 = test_true("test/evp_extra_test2.c",0x585,"keygen_ex == NULL",local_20 == 0);
        bVar2 = iVar1 != 0;
        goto LAB_00100086;
      }
    }
  }
  bVar2 = false;
LAB_00100086:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_provider_unload_effective(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  uVar3 = OSSL_PROVIDER_load(0,"default");
  uVar1 = test_ptr("test/evp_extra_test2.c",0x2d2,"provider = OSSL_PROVIDER_load(NULL, \"default\")"
                   ,uVar3);
  if (uVar1 != 0) {
    uVar4 = EVP_MD_fetch(0,"SHA2-256",0);
    uVar1 = test_ptr("test/evp_extra_test2.c",0x2d3,
                     "sha256 = EVP_MD_fetch(NULL, \"SHA2-256\", NULL)",uVar4);
    if (uVar1 != 0) {
      if (param_1 < 1) {
        EVP_MD_free(uVar4);
        OSSL_PROVIDER_unload(uVar3);
      }
      else {
        OSSL_PROVIDER_unload(uVar3);
        EVP_MD_free(uVar4);
      }
      uVar4 = EVP_MD_fetch(0,"SHA2-256",0);
      iVar2 = test_ptr_null("test/evp_extra_test2.c",0x2e6,
                            "sha256 = EVP_MD_fetch(NULL, \"SHA2-256\", NULL)",uVar4);
      uVar1 = (uint)(iVar2 != 0);
      uVar3 = 0;
    }
  }
  EVP_MD_free(uVar4);
  OSSL_PROVIDER_unload(uVar3);
  return uVar1;
}



undefined4 evp_test_name_parsing(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = EVP_MD_fetch(mainctx,"SHA256:BogusName",0);
  iVar1 = test_ptr_null("test/evp_extra_test2.c",0x599,
                        "md = EVP_MD_fetch(mainctx, \"SHA256:BogusName\", NULL)",uVar2);
  if (iVar1 != 0) {
    return 1;
  }
  EVP_MD_free(uVar2);
  return 0;
}



bool test_evp_md_ctx_copy2(void)

{
  ENGINE *pEVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EVP_MD_CTX *in;
  EVP_MD_CTX *out;
  bool bVar5;
  
  uVar3 = OSSL_LIB_CTX_new();
  iVar2 = test_ptr("test/evp_extra_test2.c",0x553,"ctx = OSSL_LIB_CTX_new()",uVar3);
  if (iVar2 == 0) {
    bVar5 = false;
    out = (EVP_MD_CTX *)0x0;
    in = (EVP_MD_CTX *)0x0;
    uVar4 = 0;
  }
  else {
    uVar4 = EVP_MD_fetch(uVar3,"sha256",0);
    iVar2 = test_ptr("test/evp_extra_test2.c",0x554,"md = EVP_MD_fetch(ctx, \"sha256\", NULL)",uVar4
                    );
    if (iVar2 == 0) {
      out = (EVP_MD_CTX *)0x0;
      in = (EVP_MD_CTX *)0x0;
      bVar5 = false;
    }
    else {
      in = (EVP_MD_CTX *)EVP_MD_CTX_new();
      out = (EVP_MD_CTX *)EVP_MD_CTX_new();
      iVar2 = test_ptr("test/evp_extra_test2.c",0x55a,"inctx",in);
      if (iVar2 != 0) {
        iVar2 = test_ptr("test/evp_extra_test2.c",0x55a,"outctx",out);
        if (iVar2 != 0) {
          iVar2 = EVP_DigestInit_ex2(in,uVar4,0);
          iVar2 = test_true("test/evp_extra_test2.c",0x55e,"EVP_DigestInit_ex2(inctx, md, NULL)",
                            iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = EVP_DigestInit_ex2(out,uVar4,0);
            iVar2 = test_true("test/evp_extra_test2.c",0x560,"EVP_DigestInit_ex2(outctx, md, NULL)",
                              iVar2 != 0);
            if (iVar2 != 0) {
              pEVar1 = out[1].engine;
              iVar2 = EVP_MD_CTX_copy_ex(out,in);
              iVar2 = test_true("test/evp_extra_test2.c",0x568,"EVP_MD_CTX_copy_ex(outctx, inctx)",
                                iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = test_true("test/evp_extra_test2.c",0x569,"outctx->algctx == origin_algctx",
                                  out[1].engine == pEVar1);
                bVar5 = iVar2 != 0;
                goto LAB_00100307;
              }
            }
          }
        }
      }
      bVar5 = false;
    }
  }
LAB_00100307:
  EVP_MD_free(uVar4);
  EVP_MD_CTX_free(in);
  EVP_MD_CTX_free(out);
  OSSL_LIB_CTX_free(uVar3);
  return bVar5;
}



uint test_evp_md_ctx_copy(void)

{
  uint uVar1;
  int iVar2;
  EVP_MD_CTX *in;
  EVP_MD_CTX *out;
  
  out = (EVP_MD_CTX *)0x0;
  in = (EVP_MD_CTX *)EVP_MD_CTX_new();
  uVar1 = test_ptr("test/evp_extra_test2.c",0x542,"mdctx = EVP_MD_CTX_new()",in);
  if (uVar1 != 0) {
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    uVar1 = test_ptr("test/evp_extra_test2.c",0x543,"copyctx = EVP_MD_CTX_new()",out);
    if (uVar1 != 0) {
      iVar2 = EVP_MD_CTX_copy_ex(out,in);
      iVar2 = test_true("test/evp_extra_test2.c",0x544,"EVP_MD_CTX_copy_ex(copyctx, mdctx)",
                        iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
  }
  EVP_MD_CTX_free(in);
  EVP_MD_CTX_free(out);
  return uVar1;
}



uint test_evp_md_ctx_dup(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  uVar3 = EVP_MD_CTX_new();
  uVar1 = test_ptr("test/evp_extra_test2.c",0x533,"mdctx = EVP_MD_CTX_new()",uVar3);
  if (uVar1 != 0) {
    uVar4 = EVP_MD_CTX_dup(uVar3);
    iVar2 = test_ptr("test/evp_extra_test2.c",0x534,"copyctx = EVP_MD_CTX_dup(mdctx)",uVar4);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_MD_CTX_free(uVar3);
  EVP_MD_CTX_free(uVar4);
  return uVar1;
}



uint test_rsa_pss_sign(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  uchar *sig;
  long in_FS_OFFSET;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_fc;
  undefined1 *local_f8;
  size_t local_f0;
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
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  ctx = (EVP_PKEY_CTX *)0x0;
  sig = (uchar *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_fc = 6;
  local_f0 = 0;
  local_f8 = kExampleRSAKeyDER;
  OSSL_PARAM_construct_int(&local_138,"pad-mode",&local_fc);
  local_e8 = local_138;
  uStack_e0 = uStack_130;
  local_d8 = local_128;
  uStack_d0 = uStack_120;
  local_c8 = local_118;
  OSSL_PARAM_construct_utf8_string(&local_138,"digest","SHA2-256",0);
  local_c0 = local_138;
  uStack_b8 = uStack_130;
  local_b0 = local_128;
  uStack_a8 = uStack_120;
  local_a0 = local_118;
  OSSL_PARAM_construct_end(&local_138);
  local_98 = local_138;
  uStack_90 = uStack_130;
  local_88 = local_128;
  uStack_80 = uStack_120;
  local_78 = local_118;
  pkey = (EVP_PKEY *)d2i_AutoPrivateKey_ex(0,&local_f8,0x260,mainctx,0);
  uVar1 = test_ptr("test/evp_extra_test2.c",0x51a,
                   "pkey = d2i_AutoPrivateKey_ex(NULL, &pdata, keydata[0].size, mainctx, NULL)",pkey
                  );
  if (uVar1 != 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(mainctx,pkey,0);
    uVar1 = test_ptr("test/evp_extra_test2.c",0x51c,
                     "pctx = EVP_PKEY_CTX_new_from_pkey(mainctx, pkey, NULL)",ctx);
    if (uVar1 != 0) {
      uVar2 = EVP_PKEY_sign_init_ex(ctx,&local_e8);
      iVar3 = test_int_gt("test/evp_extra_test2.c",0x51d,"EVP_PKEY_sign_init_ex(pctx, sig_params)",
                          &_LC28,uVar2,0);
      if (iVar3 != 0) {
        iVar3 = EVP_PKEY_sign(ctx,(uchar *)0x0,&local_f0,local_68,0x20);
        iVar3 = test_int_gt("test/evp_extra_test2.c",0x51e,
                            "EVP_PKEY_sign(pctx, NULL, &sig_len, mdbuf, sizeof(mdbuf))",&_LC28,iVar3
                            ,0);
        if (iVar3 != 0) {
          iVar3 = test_int_gt("test/evp_extra_test2.c",0x520,"sig_len",&_LC28,local_f0 & 0xffffffff,
                              0);
          if (iVar3 != 0) {
            sig = (uchar *)CRYPTO_malloc((int)local_f0,"test/evp_extra_test2.c",0x521);
            uVar1 = test_ptr("test/evp_extra_test2.c",0x521,"sig = OPENSSL_malloc(sig_len)",sig);
            if (uVar1 != 0) {
              iVar3 = EVP_PKEY_sign(ctx,sig,&local_f0,local_68,0x20);
              iVar3 = test_int_gt("test/evp_extra_test2.c",0x522,
                                  "EVP_PKEY_sign(pctx, sig, &sig_len, mdbuf, sizeof(mdbuf))",&_LC28,
                                  iVar3,0);
              uVar1 = (uint)(iVar3 != 0);
            }
            goto LAB_0010072e;
          }
        }
      }
      uVar1 = 0;
      sig = (uchar *)0x0;
    }
  }
LAB_0010072e:
  EVP_PKEY_CTX_free(ctx);
  CRYPTO_free(sig);
  EVP_PKEY_free(pkey);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_PEM_read_bio_negative_wrong_password(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  EVP_PKEY *x;
  BIO_METHOD *type;
  BIO *bp;
  UI_METHOD *meth;
  EVP_CIPHER *enc;
  EVP_PKEY *pkey;
  ulong uVar4;
  UI_METHOD *local_40;
  
  meth = (UI_METHOD *)0x0;
  uVar3 = OSSL_PROVIDER_load(0,"default");
  x = (EVP_PKEY *)EVP_PKEY_Q_keygen(0,0,&_LC34,0x400);
  type = BIO_s_mem();
  bp = BIO_new(type);
  if (0 < param_1) {
    meth = (UI_METHOD *)UI_null();
  }
  iVar1 = test_ptr("test/evp_extra_test2.c",0x33d,"provider",uVar3);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/evp_extra_test2.c",0x33f,"key_bio",bp);
    if (iVar1 != 0) {
      iVar1 = test_ptr("test/evp_extra_test2.c",0x341,"write_pkey");
      if (iVar1 != 0) {
        local_40 = UI_get_default_method();
        UI_set_default_method(meth);
        enc = EVP_aes_256_cbc();
        PEM_write_bio_PrivateKey(bp,x,enc,(uchar *)0x0,0,(undefined1 *)0x0,&_LC38);
        pkey = (EVP_PKEY *)0x0;
        uVar2 = test_true("test/evp_extra_test2.c",0x347,
                          "PEM_write_bio_PrivateKey(key_bio, write_pkey, EVP_aes_256_cbc(), NULL, 0, NULL, \"pass\")"
                         );
        if (uVar2 != 0) {
          ERR_clear_error();
          pkey = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
          uVar2 = test_ptr_null("test/evp_extra_test2.c",0x34d,"read_pkey",pkey);
          if (uVar2 != 0) {
            uVar4 = ERR_get_error();
            uVar2 = (uint)uVar4 & 0x7fffff;
            if ((uVar4 & 0x80000000) != 0) {
              uVar2 = (uint)uVar4 & 0x7fffffff;
            }
            iVar1 = test_int_eq("test/evp_extra_test2.c",0x350,"ERR_GET_REASON(ERR_get_error())",
                                "PEM_R_PROBLEMS_GETTING_PASSWORD",uVar2,0x6d);
            uVar2 = (uint)(iVar1 != 0);
          }
        }
        goto LAB_00100991;
      }
    }
  }
  local_40 = (UI_METHOD *)0x0;
  pkey = (EVP_PKEY *)0x0;
  uVar2 = 0;
LAB_00100991:
  test_openssl_errors();
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(x);
  BIO_free(bp);
  OSSL_PROVIDER_unload(uVar3);
  UI_set_default_method(local_40);
  return uVar2;
}



uint test_PEM_read_bio_negative(int param_1)

{
  int iVar1;
  uint uVar2;
  BIO *bp;
  EVP_PKEY *pkey;
  ulong uVar3;
  undefined8 uVar4;
  
  bp = BIO_new_mem_buf(*(void **)(keydata + (long)param_1 * 0x18),
                       *(int *)(keydata + (long)param_1 * 0x18 + 8));
  iVar1 = test_ptr("test/evp_extra_test2.c",0x315,
                   "key_bio = BIO_new_mem_buf(keydata[testid].kder, keydata[testid].size)");
  if (iVar1 == 0) {
    uVar2 = 0;
    pkey = (EVP_PKEY *)0x0;
    uVar4 = 0;
  }
  else {
    ERR_clear_error();
    uVar4 = 0;
    pkey = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
    uVar2 = test_ptr_null("test/evp_extra_test2.c",0x318,
                          "pkey = PEM_read_bio_PrivateKey(key_bio, NULL, NULL, NULL)",pkey);
    if (uVar2 != 0) {
      uVar3 = ERR_peek_error();
      uVar2 = test_int_ne("test/evp_extra_test2.c",0x31a,"ERR_peek_error()",&_LC28,
                          uVar3 & 0xffffffff,0);
      if (uVar2 != 0) {
        uVar4 = OSSL_PROVIDER_load(0,"default");
        uVar2 = test_ptr("test/evp_extra_test2.c",0x31c,
                         "provider = OSSL_PROVIDER_load(NULL, \"default\")");
        if (uVar2 != 0) {
          uVar3 = BIO_ctrl(bp,0x80,0,(void *)0x0);
          uVar2 = test_int_ge("test/evp_extra_test2.c",0x31e,"BIO_seek(key_bio, 0)",&_LC28,
                              uVar3 & 0xffffffff,0);
          if (uVar2 != 0) {
            ERR_clear_error();
            pkey = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
            uVar2 = test_ptr_null("test/evp_extra_test2.c",0x321,
                                  "pkey = PEM_read_bio_PrivateKey(key_bio, NULL, NULL, NULL)",pkey);
            if (uVar2 != 0) {
              uVar3 = ERR_peek_error();
              iVar1 = test_int_ne("test/evp_extra_test2.c",0x323,"ERR_peek_error()",&_LC28,
                                  uVar3 & 0xffffffff,0);
              uVar2 = (uint)(iVar1 != 0);
            }
          }
        }
      }
    }
  }
  test_openssl_errors();
  EVP_PKEY_free(pkey);
  BIO_free(bp);
  OSSL_PROVIDER_unload(uVar4);
  return uVar2;
}



uint test_pkcs8key_nid_bio(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  BIO_METHOD *type;
  BIO *bp;
  BIO *a;
  EVP_PKEY *x;
  ulong uVar4;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  uVar3 = OSSL_PROVIDER_load(0,"default");
  iVar1 = test_ptr("test/evp_extra_test2.c",0x291,"provider = OSSL_PROVIDER_load(NULL, \"default\")"
                   ,uVar3);
  if (iVar1 == 0) {
    uVar2 = 0;
    bp = (BIO *)0x0;
    a = (BIO *)0x0;
    pkey = (EVP_PKEY *)0x0;
    x = (EVP_PKEY *)0x0;
  }
  else {
    type = BIO_s_mem();
    bp = BIO_new(type);
    iVar1 = test_ptr("test/evp_extra_test2.c",0x292,"enc_bio = BIO_new(BIO_s_mem())",bp);
    if (iVar1 == 0) {
      a = (BIO *)0x0;
      pkey = (EVP_PKEY *)0x0;
      x = (EVP_PKEY *)0x0;
      uVar2 = 0;
    }
    else {
      x = (EVP_PKEY *)0x0;
      a = BIO_new_mem_buf(kExampleRSAKeyPKCS8,0x27a);
      uVar2 = test_ptr("test/evp_extra_test2.c",0x293,
                       "in = BIO_new_mem_buf(kExampleRSAKeyPKCS8, sizeof(kExampleRSAKeyPKCS8))",a);
      pkey = (EVP_PKEY *)0x0;
      if (uVar2 != 0) {
        x = (EVP_PKEY *)d2i_PrivateKey_ex_bio(a,0,0,0);
        iVar1 = test_ptr("test/evp_extra_test2.c",0x295,
                         "pkey = d2i_PrivateKey_ex_bio(in, NULL, NULL, NULL)",x);
        if (iVar1 != 0) {
          iVar1 = i2d_PKCS8PrivateKey_nid_bio(bp,x,0x92,"PASSWORD",8,(undefined1 *)0x0,(void *)0x0);
          iVar1 = test_int_eq("test/evp_extra_test2.c",0x296,
                              "i2d_PKCS8PrivateKey_nid_bio(enc_bio, pkey, nid, pwd, sizeof(pwd) - 1, NULL, NULL)"
                              ,&_LC50,iVar1,1);
          if (iVar1 != 0) {
            uVar4 = BIO_ctrl(bp,3,0,&local_48);
            iVar1 = test_int_gt("test/evp_extra_test2.c",0x299,
                                "enc_datalen = BIO_get_mem_data(enc_bio, &enc_data)",&_LC28,
                                uVar4 & 0xffffffff,0);
            if (iVar1 != 0) {
              pkey = d2i_PKCS8PrivateKey_bio(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,"PASSWORD");
              uVar2 = test_ptr("test/evp_extra_test2.c",0x29a,
                               "pkey_dec = d2i_PKCS8PrivateKey_bio(enc_bio, NULL, NULL, (void *)pwd)"
                               ,pkey);
              if (uVar2 != 0) {
                iVar1 = EVP_PKEY_eq(x,pkey);
                iVar1 = test_true("test/evp_extra_test2.c",0x29c,"EVP_PKEY_eq(pkey, pkey_dec)",
                                  iVar1 != 0);
                uVar2 = (uint)(iVar1 != 0);
              }
              goto LAB_00100d4c;
            }
          }
        }
        uVar2 = 0;
        pkey = (EVP_PKEY *)0x0;
      }
    }
  }
LAB_00100d4c:
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(x);
  BIO_free(a);
  BIO_free(bp);
  OSSL_PROVIDER_unload(uVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_pkey_export_null(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = kExampleRSAKeyDER;
  pkey = (EVP_PKEY *)d2i_AutoPrivateKey_ex(0,&local_28,0x260,mainctx,0);
  iVar1 = test_ptr("test/evp_extra_test2.c",0x4da,
                   "pkey = d2i_AutoPrivateKey_ex(NULL, &pdata, keydata[0].size, mainctx, NULL)",pkey
                  );
  if (iVar1 != 0) {
    uVar2 = EVP_PKEY_export(0,0x87,test_pkey_export_cb,0);
    iVar1 = test_int_eq("test/evp_extra_test2.c",0x4dc,
                        "EVP_PKEY_export(NULL, EVP_PKEY_KEYPAIR, test_pkey_export_cb, NULL)",&_LC28,
                        uVar2,0);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_export(pkey,0x87,0,0);
      iVar1 = test_int_eq("test/evp_extra_test2.c",0x4de,
                          "EVP_PKEY_export(pkey, EVP_PKEY_KEYPAIR, NULL, NULL)",&_LC28,uVar2,0);
      bVar3 = iVar1 != 0;
      goto LAB_00100fc5;
    }
  }
  bVar3 = false;
LAB_00100fc5:
  EVP_PKEY_free(pkey);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_pkey_export(void)

{
  int iVar1;
  uint uVar2;
  EVP_PKEY *pkey;
  RSA *key;
  uint uVar3;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = kExampleRSAKeyDER;
  pkey = (EVP_PKEY *)d2i_AutoPrivateKey_ex(0,&local_38,0x260,mainctx,0);
  iVar1 = test_ptr("test/evp_extra_test2.c",0x4ed,
                   "pkey = d2i_AutoPrivateKey_ex(NULL, &pdata, pdata_len, mainctx, NULL)",pkey);
  if (iVar1 == 0) {
LAB_001010dc:
    uVar3 = 0;
  }
  else {
    iVar1 = EVP_PKEY_export(pkey,0x87,test_pkey_export_cb,pkey);
    iVar1 = test_true("test/evp_extra_test2.c",0x4ef,
                      "EVP_PKEY_export(pkey, EVP_PKEY_KEYPAIR, test_pkey_export_cb, pkey)",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_001010dc;
    iVar1 = EVP_PKEY_export(pkey,0x87,test_pkey_export_cb,0);
    iVar1 = test_false("test/evp_extra_test2.c",0x4f1,
                       "EVP_PKEY_export(pkey, EVP_PKEY_KEYPAIR, test_pkey_export_cb, NULL)",
                       iVar1 != 0);
    uVar3 = (uint)(iVar1 != 0);
  }
  EVP_PKEY_free(pkey);
  local_38 = kExampleRSAKeyDER;
  key = d2i_RSAPrivateKey((RSA **)0x0,&local_38,0x260);
  uVar2 = test_ptr("test/evp_extra_test2.c",0x4fa,"rsa = d2i_RSAPrivateKey(NULL, &pdata, pdata_len)"
                   ,key);
  if (uVar2 != 0) {
    pkey = EVP_PKEY_new();
    iVar1 = test_ptr("test/evp_extra_test2.c",0x4fb,"pkey = EVP_PKEY_new()",pkey);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_assign(pkey,6,key);
      iVar1 = test_true("test/evp_extra_test2.c",0x4fc,"EVP_PKEY_assign_RSA(pkey, rsa)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EVP_PKEY_export(pkey,0x87,test_pkey_export_cb,pkey);
        iVar1 = test_true("test/evp_extra_test2.c",0x4fd,
                          "EVP_PKEY_export(pkey, EVP_PKEY_KEYPAIR, test_pkey_export_cb, pkey)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = EVP_PKEY_export(pkey,0x87,test_pkey_export_cb,0);
          iVar1 = test_false("test/evp_extra_test2.c",0x4ff,
                             "EVP_PKEY_export(pkey, EVP_PKEY_KEYPAIR, test_pkey_export_cb, NULL)",
                             iVar1 != 0);
          uVar2 = uVar3;
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          goto LAB_0010111e;
        }
      }
    }
    uVar2 = 0;
  }
LAB_0010111e:
  EVP_PKEY_free(pkey);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_pkey_todata_null(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_30;
  undefined1 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = kExampleRSAKeyDER;
  pkey = (EVP_PKEY *)d2i_AutoPrivateKey_ex(0,&local_28,0x260,mainctx,0);
  iVar1 = test_ptr("test/evp_extra_test2.c",0x4c3,
                   "pkey = d2i_AutoPrivateKey_ex(NULL, &pdata, keydata[0].size, mainctx, NULL)",pkey
                  );
  if (iVar1 != 0) {
    uVar2 = EVP_PKEY_todata(0,0x87,&local_30);
    iVar1 = test_int_eq("test/evp_extra_test2.c",0x4c5,
                        "EVP_PKEY_todata(NULL, EVP_PKEY_KEYPAIR, &params)",&_LC28,uVar2,0);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_todata(pkey,0x87,0);
      iVar1 = test_int_eq("test/evp_extra_test2.c",0x4c6,
                          "EVP_PKEY_todata(pkey, EVP_PKEY_KEYPAIR, NULL)",&_LC28,uVar2,0);
      bVar3 = iVar1 != 0;
      goto LAB_00101323;
    }
  }
  bVar3 = false;
LAB_00101323:
  EVP_PKEY_free(pkey);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 set_fromdata_uint(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_84;
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 0;
  local_80 = (EVP_PKEY *)0x0;
  iVar1 = EVP_PKEY_fromdata_init();
  if (iVar1 == 1) {
    OSSL_PARAM_construct_uint(&local_b8,param_2,&local_84);
    local_58 = local_98;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    OSSL_PARAM_construct_end(&local_b8);
    local_30 = local_98;
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    local_40 = local_a8;
    uStack_38 = uStack_a0;
    uVar2 = EVP_PKEY_fromdata(param_1,&local_80,0x84,&local_78);
    EVP_PKEY_free(local_80);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_dsa_fromdata_digest_prop(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  char *pcVar4;
  long in_FS_OFFSET;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_fc;
  EVP_PKEY *local_f8;
  EVP_PKEY *local_f0;
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
  local_f8 = (EVP_PKEY *)0x0;
  local_fc = 0x200;
  local_f0 = (EVP_PKEY *)0x0;
  OSSL_PARAM_construct_uint(&local_138,"pbits",&local_fc);
  local_e8 = local_138;
  uStack_e0 = uStack_130;
  local_d8 = local_128;
  uStack_d0 = uStack_120;
  local_c8 = local_118;
  OSSL_PARAM_construct_utf8_string(&local_138,"digest","SHA512",0);
  pcVar4 = "provider=default";
  local_a0 = local_118;
  if (param_1 == 0) {
    pcVar4 = "provider=unknown";
  }
  local_c0 = local_138;
  uStack_b8 = uStack_130;
  local_b0 = local_128;
  uStack_a8 = uStack_120;
  OSSL_PARAM_construct_utf8_string(&local_138,"properties",pcVar4,0);
  local_78 = local_118;
  local_98 = local_138;
  uStack_90 = uStack_130;
  local_88 = local_128;
  uStack_80 = uStack_120;
  OSSL_PARAM_construct_end(&local_138);
  local_70 = local_138;
  uStack_68 = uStack_130;
  local_50 = local_118;
  local_60 = local_128;
  uStack_58 = uStack_120;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(mainctx,&_LC70,0);
  iVar1 = test_ptr("test/evp_extra_test2.c",0x4a8,
                   "ctx = EVP_PKEY_CTX_new_from_name(mainctx, \"DSA\", NULL)",ctx);
  if (iVar1 != 0) {
    uVar2 = EVP_PKEY_fromdata_init(ctx);
    iVar1 = test_int_eq("test/evp_extra_test2.c",0x4a9,"EVP_PKEY_fromdata_init(ctx)",&_LC50,uVar2,1)
    ;
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_fromdata(ctx,&local_f8,0x84,&local_e8);
      iVar1 = test_int_eq("test/evp_extra_test2.c",0x4aa,
                          "EVP_PKEY_fromdata(ctx, &pkey, EVP_PKEY_KEY_PARAMETERS, params)",&_LC50,
                          uVar2,1);
      if (iVar1 != 0) {
        ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(mainctx,local_f8,0);
        uVar3 = test_ptr("test/evp_extra_test2.c",0x4ad,
                         "gctx = EVP_PKEY_CTX_new_from_pkey(mainctx, pkey, NULL)",ctx_00);
        if (uVar3 != 0) {
          iVar1 = EVP_PKEY_paramgen_init(ctx_00);
          uVar3 = test_int_eq("test/evp_extra_test2.c",0x4ae,"EVP_PKEY_paramgen_init(gctx)",&_LC50,
                              iVar1,1);
          if (uVar3 != 0) {
            iVar1 = EVP_PKEY_paramgen(ctx_00,&local_f0);
            iVar1 = test_int_eq("test/evp_extra_test2.c",0x4af,"EVP_PKEY_paramgen(gctx, &pkey2)",
                                "expected",iVar1,param_1 != 0);
            uVar3 = (uint)(iVar1 != 0);
          }
        }
        goto LAB_00101644;
      }
    }
  }
  uVar3 = 0;
  ctx_00 = (EVP_PKEY_CTX *)0x0;
LAB_00101644:
  EVP_PKEY_free(local_f0);
  EVP_PKEY_free(local_f8);
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_CTX_free(ctx_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint do_check_params(undefined8 param_1,undefined4 param_2)

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
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(mainctx,&_LC70,0);
  iVar1 = test_ptr("test/evp_extra_test2.c",0x40e,
                   "gen_ctx = EVP_PKEY_CTX_new_from_name(mainctx, \"DSA\", NULL)",ctx);
  if (iVar1 != 0) {
    uVar2 = EVP_PKEY_fromdata_init(ctx);
    iVar1 = test_int_eq("test/evp_extra_test2.c",0x40f,"EVP_PKEY_fromdata_init(gen_ctx)",&_LC50,
                        uVar2,1);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_fromdata(ctx,&local_38,0x87,param_1);
      iVar1 = test_int_eq("test/evp_extra_test2.c",0x410,
                          "EVP_PKEY_fromdata(gen_ctx, &pkey, EVP_PKEY_KEYPAIR, key_params)",&_LC50,
                          uVar2,1);
      if (iVar1 != 0) {
        ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(mainctx,local_38,0);
        uVar3 = test_ptr("test/evp_extra_test2.c",0x412,
                         "check_ctx = EVP_PKEY_CTX_new_from_pkey(mainctx, pkey, NULL)",ctx_00);
        if (uVar3 != 0) {
          uVar2 = EVP_PKEY_param_check(ctx_00);
          iVar1 = test_int_eq("test/evp_extra_test2.c",0x414,"EVP_PKEY_param_check(check_ctx)",
                              "expected",uVar2,param_2);
          uVar3 = (uint)(iVar1 != 0);
        }
        goto LAB_00101829;
      }
    }
  }
  uVar3 = 0;
  ctx_00 = (EVP_PKEY_CTX *)0x0;
LAB_00101829:
  EVP_PKEY_CTX_free(ctx_00);
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_dh_paramgen(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *pEVar3;
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
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (EVP_PKEY *)0x0;
  local_a4 = 0x200;
  OSSL_PARAM_construct_uint(&local_d8,"pbits",&local_a4);
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  local_88 = local_c8;
  uStack_80 = uStack_c0;
  local_78 = local_b8;
  OSSL_PARAM_construct_utf8_string(&local_d8,&_LC84,"generator",0);
  local_70 = local_d8;
  uStack_68 = uStack_d0;
  local_60 = local_c8;
  uStack_58 = uStack_c0;
  local_50 = local_b8;
  OSSL_PARAM_construct_end(&local_d8);
  local_48 = local_d8;
  uStack_40 = uStack_d0;
  local_38 = local_c8;
  uStack_30 = uStack_c0;
  local_28 = local_b8;
  pEVar3 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(mainctx,&_LC85,0);
  iVar1 = test_ptr("test/evp_extra_test2.c",0x182,
                   "gctx = EVP_PKEY_CTX_new_from_name(mainctx, \"DH\", NULL)",pEVar3);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_paramgen_init(pEVar3);
    iVar1 = test_int_gt("test/evp_extra_test2.c",0x183,"EVP_PKEY_paramgen_init(gctx)",&_LC28,iVar1,0
                       );
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_CTX_set_params(pEVar3,&local_98);
      iVar1 = test_true("test/evp_extra_test2.c",0x184,"EVP_PKEY_CTX_set_params(gctx, params)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EVP_PKEY_paramgen(pEVar3,&local_a0);
        iVar1 = test_true("test/evp_extra_test2.c",0x185,"EVP_PKEY_paramgen(gctx, &pkey)",iVar1 != 0
                         );
        if ((iVar1 != 0) &&
           (iVar1 = test_ptr("test/evp_extra_test2.c",0x186,&_LC89,local_a0), iVar1 != 0)) {
          EVP_PKEY_CTX_free(pEVar3);
          pEVar3 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(mainctx,local_a0,0);
          iVar1 = test_ptr("test/evp_extra_test2.c",0x18b,
                           "gctx = EVP_PKEY_CTX_new_from_pkey(mainctx, pkey, NULL)",pEVar3);
          if (iVar1 != 0) {
            uVar2 = EVP_PKEY_param_check(pEVar3);
            iVar1 = test_int_eq("test/evp_extra_test2.c",0x18c,"EVP_PKEY_param_check(gctx)",&_LC50,
                                uVar2,1);
            if (iVar1 != 0) {
              uVar2 = EVP_PKEY_param_check_quick(pEVar3);
              iVar1 = test_int_eq("test/evp_extra_test2.c",0x18d,"EVP_PKEY_param_check_quick(gctx)",
                                  &_LC50,uVar2,1);
              bVar4 = iVar1 != 0;
              goto LAB_00101a79;
            }
          }
          bVar4 = false;
          goto LAB_00101a79;
        }
      }
    }
  }
  EVP_PKEY_CTX_free(pEVar3);
  bVar4 = false;
  pEVar3 = (EVP_PKEY_CTX *)0x0;
LAB_00101a79:
  EVP_PKEY_CTX_free(pEVar3);
  EVP_PKEY_free(local_a0);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



bool do_check_bn(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  BIGNUM *local_140;
  undefined1 local_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_140 = (BIGNUM *)0x0;
  uVar3 = OSSL_PARAM_locate();
  iVar1 = test_ptr("test/evp_extra_test2.c",0x423,"p = OSSL_PARAM_locate(params, key)",uVar3);
  if (iVar1 != 0) {
    iVar1 = OSSL_PARAM_get_BN(uVar3,&local_140);
    iVar1 = test_true("test/evp_extra_test2.c",0x424,"OSSL_PARAM_get_BN(p, &bn)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_bn2binpad(local_140,local_138,param_4 & 0xffffffff);
      iVar2 = test_int_gt("test/evp_extra_test2.c",0x425,
                          "len = BN_bn2binpad(bn, buffer, expected_len)",&_LC28,iVar1,0);
      if (iVar2 != 0) {
        iVar1 = test_mem_eq("test/evp_extra_test2.c",0x426,"expected","buffer",param_3,param_4,
                            local_138,(long)iVar1);
        bVar4 = iVar1 != 0;
        goto LAB_00101c6d;
      }
    }
  }
  bVar4 = false;
LAB_00101c6d:
  BN_free(local_140);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool do_check_int(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  uVar2 = OSSL_PARAM_locate();
  iVar1 = test_ptr("test/evp_extra_test2.c",0x430,"p = OSSL_PARAM_locate(params, key)",uVar2);
  if (iVar1 != 0) {
    iVar1 = OSSL_PARAM_get_int(uVar2,&local_24);
    iVar1 = test_true("test/evp_extra_test2.c",0x431,"OSSL_PARAM_get_int(p, &val)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = test_int_eq("test/evp_extra_test2.c",0x432,&_LC97,"expected",local_24,param_3);
      bVar3 = iVar1 != 0;
      goto LAB_00101d9e;
    }
  }
  bVar3 = false;
LAB_00101d9e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_dsa_todata(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  undefined8 uVar3;
  EVP_PKEY_CTX *ctx;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  byte bVar8;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  int local_128;
  int local_124;
  undefined8 local_120;
  undefined1 *local_118;
  EVP_PKEY *local_110;
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
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long local_40;
  
  bVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = 0;
  local_68 = __LC117;
  uStack_60 = (undefined4)_UNK_00107498;
  local_118 = dsa_key;
  uStack_5c = (undefined4)__LC118;
  uStack_58 = (undefined4)((ulong)__LC118 >> 0x20);
  uStack_54 = _UNK_001074a8;
  local_128 = 0x13f;
  local_124 = 5;
  OSSL_PARAM_construct_octet_string(&local_158,&_LC98,&local_68,0x1c);
  local_e8 = local_138;
  local_108 = local_158;
  uStack_100 = uStack_150;
  local_f8 = local_148;
  uStack_f0 = uStack_140;
  OSSL_PARAM_construct_int(&local_158,"gindex",&local_124);
  local_c0 = local_138;
  local_e0 = local_158;
  uStack_d8 = uStack_150;
  local_d0 = local_148;
  uStack_c8 = uStack_140;
  OSSL_PARAM_construct_int(&local_158,"pcounter",&local_128);
  local_98 = local_138;
  local_b8 = local_158;
  uStack_b0 = uStack_150;
  local_a8 = local_148;
  uStack_a0 = uStack_140;
  OSSL_PARAM_construct_end(&local_158);
  local_90 = local_158;
  uStack_88 = uStack_150;
  local_70 = local_138;
  local_80 = local_148;
  uStack_78 = uStack_140;
  pkey = (EVP_PKEY *)d2i_AutoPrivateKey_ex(0,&local_118,0x352,mainctx,0);
  iVar1 = test_ptr("test/evp_extra_test2.c",0x45c,
                   "pkey = d2i_AutoPrivateKey_ex(NULL, &pkeydata, sizeof(dsa_key), mainctx, NULL)",
                   pkey);
  if (iVar1 != 0) {
    uVar2 = EVP_PKEY_todata(pkey,0x87,&local_120);
    iVar1 = test_int_eq("test/evp_extra_test2.c",0x45e,
                        "EVP_PKEY_todata(pkey, EVP_PKEY_KEYPAIR, &to_params)",&_LC50,uVar2,1);
    if (iVar1 != 0) {
      iVar1 = do_check_bn(local_120,&_LC103,dsa_p,0x101);
      if (iVar1 != 0) {
        iVar1 = do_check_bn(local_120,&_LC104,dsa_q,0x1d);
        if (iVar1 != 0) {
          iVar1 = do_check_bn(local_120,&_LC105,dsa_g,0x101);
          if (iVar1 != 0) {
            iVar1 = do_check_bn(local_120,&_LC106,dsa_pub,0x100);
            if (iVar1 != 0) {
              iVar1 = do_check_bn(local_120,&_LC107,dsa_priv,0x1c);
              if (iVar1 != 0) {
                iVar1 = do_check_int(local_120,"gindex",0xffffffff);
                if (iVar1 != 0) {
                  iVar1 = do_check_int(local_120,"pcounter",0xffffffff);
                  if (iVar1 != 0) {
                    iVar1 = do_check_int(local_120,"hindex",0);
                    if (iVar1 != 0) {
                      iVar1 = do_check_int(local_120,"validate-pq",1);
                      if (iVar1 != 0) {
                        iVar1 = do_check_int(local_120,"validate-g",1);
                        if (iVar1 != 0) {
                          iVar1 = do_check_int(local_120,"validate-legacy",0);
                          if (iVar1 != 0) {
                            uVar3 = OSSL_PARAM_locate(local_120,&_LC98);
                            iVar1 = test_ptr_null("test/evp_extra_test2.c",0x46c,
                                                  "OSSL_PARAM_locate(to_params, OSSL_PKEY_PARAM_FFC_SEED)"
                                                  ,uVar3);
                            uVar3 = local_120;
                            if (iVar1 != 0) {
                              local_110 = (EVP_PKEY *)0x0;
                              ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(mainctx,&_LC70,0);
                              iVar1 = test_ptr("test/evp_extra_test2.c",0x366,
                                               "ctx = EVP_PKEY_CTX_new_from_name(mainctx, type, NULL)"
                                               ,ctx);
                              if (iVar1 != 0) {
                                uVar2 = EVP_PKEY_fromdata_init(ctx);
                                iVar1 = test_int_eq("test/evp_extra_test2.c",0x367,
                                                    "EVP_PKEY_fromdata_init(ctx)",&_LC50,uVar2,1);
                                if (iVar1 != 0) {
                                  uVar2 = EVP_PKEY_fromdata(ctx,&local_110,0x87,uVar3);
                                  iVar1 = test_int_eq("test/evp_extra_test2.c",0x368,
                                                                                                            
                                                  "EVP_PKEY_fromdata(ctx, &pkey, EVP_PKEY_KEYPAIR, (OSSL_PARAM *)params)"
                                                  ,&_LC50,uVar2,1);
                                  if (iVar1 != 0) {
                                    iVar1 = EVP_PKEY_eq(local_110,pkey);
                                    iVar1 = test_true("test/evp_extra_test2.c",0x36b,
                                                      "EVP_PKEY_eq(pkey, expected)",iVar1 != 0);
                                    EVP_PKEY_CTX_free(ctx);
                                    EVP_PKEY_free(local_110);
                                    if (iVar1 != 0) {
                                      uVar3 = OSSL_PARAM_merge(local_120,&local_108);
                                      iVar1 = test_ptr("test/evp_extra_test2.c",0x472,
                                                                                                              
                                                  "all_params = OSSL_PARAM_merge(to_params, gen_params)"
                                                  ,uVar3);
                                      if (iVar1 != 0) {
                                        iVar1 = do_check_params(uVar3,1);
                                        if (iVar1 != 0) {
                                          OSSL_PARAM_construct_int(&local_158,"gindex",&local_124);
                                          puVar5 = &local_158;
                                          puVar6 = &local_e0;
                                          for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
                                            *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
                                            puVar5 = (undefined8 *)
                                                     ((long)puVar5 + (ulong)bVar8 * -8 + 4);
                                            puVar6 = (undefined8 *)
                                                     ((long)puVar6 + (ulong)bVar8 * -8 + 4);
                                          }
                                          OSSL_PARAM_construct_int(&local_158,"pcounter",&local_128)
                                          ;
                                          puVar5 = &local_158;
                                          puVar6 = &local_b8;
                                          for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
                                            *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
                                            puVar5 = (undefined8 *)
                                                     ((long)puVar5 + (ulong)bVar8 * -8 + 4);
                                            puVar6 = (undefined8 *)
                                                     ((long)puVar6 + (ulong)bVar8 * -8 + 4);
                                          }
                                          local_124 = local_124 + 1;
                                          iVar1 = do_check_params(uVar3,0);
                                          if (iVar1 != 0) {
                                            local_124 = local_124 + -1;
                                            local_128 = local_128 + 1;
                                            iVar1 = do_check_params(uVar3,0);
                                            if (iVar1 != 0) {
                                              local_128 = local_128 + -1;
                                              local_68 = CONCAT71(local_68._1_7_,0xb0);
                                              iVar1 = do_check_params(uVar3,0);
                                              bVar7 = iVar1 != 0;
                                              goto LAB_00101fdd;
                                            }
                                          }
                                        }
                                      }
                                      bVar7 = false;
                                      goto LAB_00101fdd;
                                    }
                                    goto LAB_00101fd8;
                                  }
                                }
                              }
                              EVP_PKEY_CTX_free(ctx);
                              EVP_PKEY_free(local_110);
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
LAB_00101fd8:
  bVar7 = false;
  uVar3 = 0;
LAB_00101fdd:
  EVP_PKEY_free(pkey);
  OSSL_PARAM_free(uVar3);
  OSSL_PARAM_free(local_120);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_ec_d2i_i2d_pubkey(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  FILE *fp;
  EVP_PKEY *pkey;
  EVP_PKEY *pkey_00;
  
  fp = fopen("pubkey.der","wb");
  iVar1 = test_ptr("test/evp_extra_test2.c",0x204,"fp = fopen(filename, \"wb\")",fp);
  if (iVar1 == 0) {
    uVar2 = 0;
    pkey_00 = (EVP_PKEY *)0x0;
    pkey = (EVP_PKEY *)0x0;
  }
  else {
    pkey_00 = (EVP_PKEY *)0x0;
    pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(mainctx,0,&_LC123,"P-256");
    uVar2 = test_ptr("test/evp_extra_test2.c",0x205,
                     "key = EVP_PKEY_Q_keygen(mainctx, NULL, \"EC\", \"P-256\")",pkey);
    if (uVar2 != 0) {
      iVar1 = i2d_PUBKEY_fp(fp,pkey);
      iVar1 = test_true("test/evp_extra_test2.c",0x206,"i2d_PUBKEY_fp(fp, key)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = fclose(fp);
        iVar1 = test_int_eq("test/evp_extra_test2.c",0x207,"fclose(fp)",&_LC28,iVar1,0);
        if (iVar1 != 0) {
          fp = fopen("pubkey.der","rb");
          uVar2 = test_ptr("test/evp_extra_test2.c",0x20b,"fp = fopen(filename, \"rb\")",fp);
          if (uVar2 != 0) {
            pkey_00 = (EVP_PKEY *)d2i_PUBKEY_ex_fp(fp,0,mainctx,0);
            uVar2 = test_ptr("test/evp_extra_test2.c",0x20c,
                             "outkey = d2i_PUBKEY_ex_fp(fp, NULL, mainctx, NULL)",pkey_00);
            if (uVar2 != 0) {
              uVar3 = EVP_PKEY_eq(pkey,pkey_00);
              iVar1 = test_int_eq("test/evp_extra_test2.c",0x20d,"EVP_PKEY_eq(key, outkey)",&_LC50,
                                  uVar3,1);
              uVar2 = (uint)(iVar1 != 0);
            }
          }
          goto LAB_00102445;
        }
      }
      pkey_00 = (EVP_PKEY *)0x0;
      uVar2 = 0;
    }
  }
LAB_00102445:
  EVP_PKEY_free(pkey_00);
  EVP_PKEY_free(pkey);
  fclose(fp);
  return uVar2;
}



int test_d2i_PrivateKey_ex(int param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  BIO *bp;
  EVP_PKEY *pkey;
  ulong uVar4;
  
  uVar3 = OSSL_PROVIDER_load(0,"default");
  iVar2 = test_ptr("test/evp_extra_test2.c",0x2f8,"provider = OSSL_PROVIDER_load(NULL, \"default\")"
                   ,uVar3);
  if (iVar2 == 0) {
    iVar2 = 0;
    pkey = (EVP_PKEY *)0x0;
    bp = (BIO *)0x0;
  }
  else {
    pkey = (EVP_PKEY *)0x0;
    lVar1 = (long)(int)((uint)(param_1 != 0) * 2) * 0x18;
    bp = BIO_new_mem_buf(*(void **)(keydata + lVar1),*(int *)(keydata + lVar1 + 8));
    iVar2 = test_ptr("test/evp_extra_test2.c",0x2fa,
                     "key_bio = BIO_new_mem_buf(keydata[id].kder, keydata[id].size)");
    if (iVar2 != 0) {
      pkey = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
      iVar2 = test_ptr_null("test/evp_extra_test2.c",0x2fc,
                            "pkey = PEM_read_bio_PrivateKey(key_bio, NULL, NULL, NULL)");
      if (iVar2 != 0) {
        ERR_clear_error();
        uVar4 = BIO_ctrl(bp,0x80,0,(void *)0x0);
        iVar2 = test_int_ge("test/evp_extra_test2.c",0x300,"BIO_seek(key_bio, 0)",&_LC28,
                            uVar4 & 0xffffffff,0);
        if (iVar2 != 0) {
          pkey = d2i_PrivateKey_bio(bp,(EVP_PKEY **)0x0);
          iVar2 = test_ptr("test/evp_extra_test2.c",0x302,"pkey = d2i_PrivateKey_bio(key_bio, NULL)"
                           ,pkey);
          uVar4 = ERR_peek_error();
          test_int_eq("test/evp_extra_test2.c",0x303,"ERR_peek_error()",&_LC28,uVar4 & 0xffffffff,0)
          ;
          test_openssl_errors();
          goto LAB_00102610;
        }
      }
      iVar2 = 0;
    }
  }
LAB_00102610:
  EVP_PKEY_free(pkey);
  BIO_free(bp);
  OSSL_PROVIDER_unload(uVar3);
  return iVar2;
}



int test_new_keytype(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  undefined8 uVar3;
  EVP_PKEY_CTX *ctx;
  void *ptr;
  void *ptr_00;
  void *ptr_01;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(mainctx,0,&_LC133);
  iVar1 = test_ptr("test/evp_extra_test2.c",0x1d8,"key = EVP_PKEY_Q_keygen(mainctx, NULL, \"XOR\")",
                   pkey);
  if (iVar1 == 0) {
    iVar1 = OSSL_PROVIDER_add_builtin(mainctx,"tls-provider",&tls_provider_init);
    iVar1 = test_true("test/evp_extra_test2.c",0x1db,
                      "OSSL_PROVIDER_add_builtin(mainctx, \"tls-provider\", tls_provider_init)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      uVar3 = OSSL_PROVIDER_load(mainctx,"tls-provider");
      iVar1 = test_ptr("test/evp_extra_test2.c",0x1dd,
                       "tlsprov = OSSL_PROVIDER_load(mainctx, \"tls-provider\")",uVar3);
      if (iVar1 != 0) {
        pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(mainctx,0,&_LC133);
        iVar1 = test_ptr("test/evp_extra_test2.c",0x1e0,
                         "key = EVP_PKEY_Q_keygen(mainctx, NULL, \"XOR\")",pkey);
        if (iVar1 != 0) {
          ctx = EVP_PKEY_CTX_new(pkey,(ENGINE *)0x0);
          iVar1 = test_ptr("test/evp_extra_test2.c",0x1e3,"ctx = EVP_PKEY_CTX_new(key, NULL)",ctx);
          if (iVar1 != 0) {
            uVar2 = EVP_PKEY_encapsulate_init(ctx,0);
            iVar1 = test_int_eq("test/evp_extra_test2.c",0x1e4,
                                "EVP_PKEY_encapsulate_init(ctx, NULL)",&_LC50,uVar2,1);
            if (iVar1 == 0) {
              ptr_01 = (void *)0x0;
              ptr_00 = (void *)0x0;
              ptr = (void *)0x0;
              iVar1 = 0;
              goto LAB_001027c1;
            }
            uVar2 = EVP_PKEY_encapsulate(ctx,0,&local_58,0,&local_50);
            iVar1 = test_int_eq("test/evp_extra_test2.c",0x1e5,
                                "EVP_PKEY_encapsulate(ctx, NULL, &outlen, NULL, &secretlen)",&_LC50,
                                uVar2,1);
            if (iVar1 != 0) {
              ptr = CRYPTO_malloc((int)local_58,"test/evp_extra_test2.c",0x1e7);
              ptr_00 = CRYPTO_malloc((int)local_50,"test/evp_extra_test2.c",0x1e8);
              ptr_01 = CRYPTO_malloc((int)local_50,"test/evp_extra_test2.c",0x1e9);
              if (((ptr != (void *)0x0) && (ptr_00 != (void *)0x0)) && (ptr_01 != (void *)0x0)) {
                uVar2 = EVP_PKEY_encapsulate(ctx,ptr,&local_58,ptr_00,&local_50);
                iVar1 = test_int_eq("test/evp_extra_test2.c",0x1eb,
                                    "EVP_PKEY_encapsulate(ctx, out, &outlen, secret, &secretlen)",
                                    &_LC50,uVar2,1);
                if (iVar1 != 0) {
                  uVar2 = EVP_PKEY_decapsulate_init(ctx,0);
                  iVar1 = test_int_eq("test/evp_extra_test2.c",0x1ec,
                                      "EVP_PKEY_decapsulate_init(ctx, NULL)",&_LC50,uVar2,1);
                  if (iVar1 != 0) {
                    uVar2 = EVP_PKEY_decapsulate(ctx,ptr_01,local_48,ptr,local_58);
                    iVar1 = test_int_eq("test/evp_extra_test2.c",0x1ed,
                                        "EVP_PKEY_decapsulate(ctx, secret2, &secretlen2, out, outlen)"
                                        ,&_LC50,uVar2,1);
                    if (iVar1 != 0) {
                      iVar1 = test_mem_eq("test/evp_extra_test2.c",0x1ee,"secret","secret2",ptr_00,
                                          local_50);
                      if (iVar1 != 0) {
                        iVar1 = OSSL_PROVIDER_unload(uVar3);
                        goto LAB_001027c1;
                      }
                    }
                  }
                }
              }
              iVar1 = 0;
              goto LAB_001027c1;
            }
          }
          iVar1 = 0;
          ptr_01 = (void *)0x0;
          ptr_00 = (void *)0x0;
          ptr = (void *)0x0;
          goto LAB_001027c1;
        }
      }
      ptr_01 = (void *)0x0;
      ptr_00 = (void *)0x0;
      ptr = (void *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      goto LAB_001027c1;
    }
  }
  ptr_01 = (void *)0x0;
  ptr_00 = (void *)0x0;
  ptr = (void *)0x0;
  ctx = (EVP_PKEY_CTX *)0x0;
  iVar1 = 0;
LAB_001027c1:
  CRYPTO_free(ptr);
  CRYPTO_free(ptr_00);
  CRYPTO_free(ptr_01);
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(pkey);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_d2i_AutoPrivateKey_ex(int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  EVP_PKEY *pkey;
  char *pcVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_80;
  BIGNUM *local_78;
  BIGNUM *local_70;
  BIGNUM *local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (BIGNUM *)0x0;
  local_70 = (BIGNUM *)0x0;
  lVar1 = (long)param_1 * 0x18;
  lVar2 = *(long *)(keydata + lVar1 + 8);
  lVar3 = *(long *)(keydata + lVar1);
  local_68 = (BIGNUM *)0x0;
  iVar6 = *(int *)(keydata + lVar1 + 0x10);
  local_80 = lVar3;
  pkey = (EVP_PKEY *)d2i_AutoPrivateKey_ex(0,&local_80,lVar2,mainctx,0);
  iVar4 = test_ptr("test/evp_extra_test2.c",0x25c,
                   "pkey = d2i_AutoPrivateKey_ex(NULL, &p, input_len, mainctx, NULL)",pkey);
  if (iVar4 != 0) {
    iVar4 = test_ptr_eq("test/evp_extra_test2.c",0x25e,&_LC103,"input + input_len",local_80,
                        lVar3 + lVar2);
    if (iVar4 != 0) {
      uVar5 = EVP_PKEY_get_id(pkey);
      iVar4 = test_int_eq("test/evp_extra_test2.c",0x25f,"EVP_PKEY_get_id(pkey)","expected_id",uVar5
                          ,iVar6);
      if (iVar4 != 0) {
        if (iVar6 == 6) {
          iVar6 = EVP_PKEY_get_bn_param(pkey,&_LC150,&local_68);
          uVar8 = 0x263;
          pcVar7 = "EVP_PKEY_get_bn_param(pkey, OSSL_PKEY_PARAM_RSA_D, &priv_bn)";
LAB_00102d43:
          iVar6 = test_true("test/evp_extra_test2.c",uVar8,pcVar7,iVar6 != 0);
          bVar9 = iVar6 != 0;
          goto LAB_00102bdd;
        }
        if (iVar6 == 0x40a) {
          iVar6 = EVP_PKEY_get_octet_string_param(pkey,&_LC107,local_58,0x20,local_60);
          iVar6 = test_true("test/evp_extra_test2.c",0x26a,
                            "EVP_PKEY_get_octet_string_param(pkey, OSSL_PKEY_PARAM_PRIV_KEY, buffer, sizeof(buffer), &len)"
                            ,iVar6 != 0);
          if (iVar6 != 0) {
LAB_00102da1:
            bVar9 = true;
            goto LAB_00102bdd;
          }
        }
        else {
          iVar4 = EVP_PKEY_get_bn_param(pkey,&_LC107,&local_68);
          iVar4 = test_true("test/evp_extra_test2.c",0x270,
                            "EVP_PKEY_get_bn_param(pkey, OSSL_PKEY_PARAM_PRIV_KEY, &priv_bn)",
                            iVar4 != 0);
          if (iVar4 != 0) {
            if (iVar6 != 0x1c) goto LAB_00102da1;
            iVar6 = EVP_PKEY_get_bn_param(pkey,&_LC103,&local_78);
            iVar6 = test_true("test/evp_extra_test2.c",0x276,
                              "EVP_PKEY_get_bn_param(pkey, OSSL_PKEY_PARAM_FFC_P, &p_bn)",iVar6 != 0
                             );
            if (iVar6 != 0) {
              iVar6 = EVP_PKEY_get_bn_param(pkey,&_LC105,&local_70);
              uVar8 = 0x277;
              pcVar7 = "EVP_PKEY_get_bn_param(pkey, OSSL_PKEY_PARAM_FFC_G, &g_bn)";
              goto LAB_00102d43;
            }
          }
        }
      }
    }
  }
  bVar9 = false;
LAB_00102bdd:
  BN_free(local_78);
  BN_free(local_70);
  BN_free(local_68);
  EVP_PKEY_free(pkey);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_alternative_default(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = EVP_MD_fetch(0,"SHA2-256",0);
  iVar2 = test_ptr_null("test/evp_extra_test2.c",0x2b1,
                        "sha256 = EVP_MD_fetch(NULL, \"SHA2-256\", NULL)",uVar4);
  if (iVar2 != 0) {
    uVar5 = OSSL_LIB_CTX_set0_default(mainctx);
    iVar2 = test_ptr("test/evp_extra_test2.c",0x2b8,"oldctx = OSSL_LIB_CTX_set0_default(mainctx)",
                     uVar5);
    if (iVar2 != 0) {
      uVar4 = EVP_MD_fetch(0,"SHA2-256",0);
      uVar3 = test_ptr("test/evp_extra_test2.c",0x2b9,
                       "sha256 = EVP_MD_fetch(NULL, \"SHA2-256\", NULL)",uVar4);
      if (uVar3 != 0) {
        EVP_MD_free(uVar4);
        uVar1 = mainctx;
        uVar5 = OSSL_LIB_CTX_set0_default(uVar5);
        uVar4 = 0;
        uVar3 = test_ptr_eq("test/evp_extra_test2.c",0x2c2,"OSSL_LIB_CTX_set0_default(oldctx)",
                            "mainctx",uVar5,uVar1);
        if (uVar3 != 0) {
          uVar4 = EVP_MD_fetch(0,"SHA2-256",0);
          iVar2 = test_ptr_null("test/evp_extra_test2.c",0x2c3,
                                "sha256 = EVP_MD_fetch(NULL, \"SHA2-256\", NULL)",uVar4);
          uVar3 = (uint)(iVar2 != 0);
        }
      }
      goto LAB_00102e3f;
    }
  }
  uVar3 = 0;
LAB_00102e3f:
  EVP_MD_free(uVar4);
  return uVar3;
}



undefined4 set_fromdata_string_constprop_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (EVP_PKEY *)0x0;
  iVar1 = EVP_PKEY_fromdata_init();
  if (iVar1 == 1) {
    OSSL_PARAM_construct_utf8_string(&local_b8,param_2,&_LC159,0);
    local_58 = local_98;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    OSSL_PARAM_construct_end(&local_b8);
    local_30 = local_98;
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    local_40 = local_a8;
    uStack_38 = uStack_a0;
    uVar2 = EVP_PKEY_fromdata(param_1,&local_80,0x84,&local_78);
    EVP_PKEY_free(local_80);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint do_pkey_tofrom_data_select(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  EVP_PKEY_CTX *ctx;
  undefined *puVar6;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  EVP_PKEY *local_a0;
  EVP_PKEY *local_98;
  BIGNUM *local_90;
  undefined1 local_88 [72];
  long local_40;
  
  puVar6 = &_LC107;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = (EVP_PKEY *)0x0;
  local_98 = (EVP_PKEY *)0x0;
  iVar1 = strcmp(param_2,"RSA");
  if (iVar1 == 0) {
    puVar6 = &_LC150;
  }
  iVar1 = strcmp(param_2,"X25519");
  uVar2 = EVP_PKEY_todata(param_1,0x86,&local_b0);
  iVar3 = test_int_eq("test/evp_extra_test2.c",0x131,
                      "EVP_PKEY_todata(key, EVP_PKEY_PUBLIC_KEY, &pub_params)",&_LC50,uVar2,1);
  if (iVar3 != 0) {
    uVar5 = OSSL_PARAM_locate(local_b0,puVar6);
    iVar3 = test_ptr_null("test/evp_extra_test2.c",0x132,"OSSL_PARAM_locate(pub_params, privtag)",
                          uVar5);
    if (iVar3 != 0) {
      uVar2 = EVP_PKEY_todata(param_1,0x87,&local_a8);
      iVar3 = test_int_eq("test/evp_extra_test2.c",0x138,
                          "EVP_PKEY_todata(key, EVP_PKEY_KEYPAIR, &keypair_params)",&_LC50,uVar2,1);
      if (iVar3 != 0) {
        uVar5 = OSSL_PARAM_locate(local_a8,puVar6);
        iVar3 = test_ptr("test/evp_extra_test2.c",0x139,"OSSL_PARAM_locate(keypair_params, privtag)"
                         ,uVar5);
        if (iVar3 != 0) {
          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(mainctx,param_2,0);
          iVar3 = test_ptr("test/evp_extra_test2.c",0x140,
                           "fromctx = EVP_PKEY_CTX_new_from_name(mainctx, keytype, NULL)",ctx);
          if (iVar3 != 0) {
            uVar2 = EVP_PKEY_fromdata_init(ctx);
            iVar3 = test_int_eq("test/evp_extra_test2.c",0x141,"EVP_PKEY_fromdata_init(fromctx)",
                                &_LC50,uVar2,1);
            if (iVar3 != 0) {
              uVar2 = EVP_PKEY_fromdata(ctx,&local_a0,0x86,local_a8);
              uVar4 = test_int_eq("test/evp_extra_test2.c",0x142,
                                  "EVP_PKEY_fromdata(fromctx, &fromkey, EVP_PKEY_PUBLIC_KEY, keypair_params)"
                                  ,&_LC50,uVar2,1);
              if (uVar4 == 0) goto LAB_001030e8;
              if (iVar1 == 0) {
                iVar3 = EVP_PKEY_get_octet_string_param(local_a0,puVar6,local_88,0x40,0);
              }
              else {
                local_90 = (BIGNUM *)0x0;
                iVar3 = EVP_PKEY_get_bn_param(local_a0,puVar6,&local_90);
                BN_free(local_90);
              }
              iVar3 = test_false("test/evp_extra_test2.c",0x144,
                                 "pkey_has_private(fromkey, privtag, use_octstring)",iVar3 != 0);
              if (iVar3 != 0) {
                uVar2 = EVP_PKEY_fromdata(ctx,&local_98,0x87,local_a8);
                iVar3 = test_int_eq("test/evp_extra_test2.c",0x14a,
                                    "EVP_PKEY_fromdata(fromctx, &fromkeypair, EVP_PKEY_KEYPAIR, keypair_params)"
                                    ,&_LC50,uVar2,1);
                if (iVar3 != 0) {
                  if (iVar1 == 0) {
                    iVar1 = EVP_PKEY_get_octet_string_param(local_98,puVar6,local_88,0x40,0);
                  }
                  else {
                    local_90 = (BIGNUM *)0x0;
                    iVar1 = EVP_PKEY_get_bn_param(local_98,puVar6,&local_90);
                    BN_free(local_90);
                  }
                  iVar1 = test_true("test/evp_extra_test2.c",0x14c,
                                    "pkey_has_private(fromkeypair, privtag, use_octstring)",
                                    iVar1 != 0);
                  uVar4 = (uint)(iVar1 != 0);
                  goto LAB_001030e8;
                }
              }
            }
          }
          uVar4 = 0;
          goto LAB_001030e8;
        }
      }
    }
  }
  ctx = (EVP_PKEY_CTX *)0x0;
  uVar4 = 0;
LAB_001030e8:
  EVP_PKEY_free(local_98);
  EVP_PKEY_free(local_a0);
  EVP_PKEY_CTX_free(ctx);
  OSSL_PARAM_free(local_a8);
  OSSL_PARAM_free(local_b0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_rsa_tofrom_data_select(void)

{
  uint uVar1;
  int iVar2;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  undefined1 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = kExampleRSAKeyDER;
  pkey = (EVP_PKEY *)d2i_AutoPrivateKey_ex(0,&local_28,0x260,mainctx,0);
  uVar1 = test_ptr("test/evp_extra_test2.c",0x246,
                   "key = d2i_AutoPrivateKey_ex(NULL, &pdata, pdata_len, mainctx, NULL)",pkey);
  if (uVar1 != 0) {
    iVar2 = do_pkey_tofrom_data_select(pkey,&_LC34);
    iVar2 = test_true("test/evp_extra_test2.c",0x248,"do_pkey_tofrom_data_select(key, \"RSA\")",
                      iVar2 != 0);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_PKEY_free(pkey);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_dsa_tofrom_data_select(void)

{
  uint uVar1;
  int iVar2;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  undefined1 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = dsa_key;
  pkey = (EVP_PKEY *)d2i_AutoPrivateKey_ex(0,&local_28,0x352,mainctx,0);
  uVar1 = test_ptr("test/evp_extra_test2.c",0x43b,
                   "key = d2i_AutoPrivateKey_ex(NULL, &pkeydata, sizeof(dsa_key), mainctx, NULL)",
                   pkey);
  if (uVar1 != 0) {
    iVar2 = do_pkey_tofrom_data_select(pkey,&_LC70);
    iVar2 = test_true("test/evp_extra_test2.c",0x43d,"do_pkey_tofrom_data_select(key, \"DSA\")",
                      iVar2 != 0);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_PKEY_free(pkey);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_sm2_tofrom_data_select(void)

{
  uint uVar1;
  int iVar2;
  EVP_PKEY *pkey;
  
  pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(mainctx,0,&_LC175);
  uVar1 = test_ptr("test/evp_extra_test2.c",0x238,"key = EVP_PKEY_Q_keygen(mainctx, NULL, \"SM2\")",
                   pkey);
  if (uVar1 != 0) {
    iVar2 = do_pkey_tofrom_data_select(pkey,&_LC175);
    iVar2 = test_true("test/evp_extra_test2.c",0x239,"do_pkey_tofrom_data_select(key, \"SM2\")",
                      iVar2 != 0);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_PKEY_free(pkey);
  return uVar1;
}



uint test_ecx_tofrom_data_select(void)

{
  uint uVar1;
  int iVar2;
  EVP_PKEY *pkey;
  
  pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(mainctx,0,"X25519");
  uVar1 = test_ptr("test/evp_extra_test2.c",0x22a,
                   "key = EVP_PKEY_Q_keygen(mainctx, NULL, \"X25519\")",pkey);
  if (uVar1 != 0) {
    iVar2 = do_pkey_tofrom_data_select(pkey,"X25519");
    iVar2 = test_true("test/evp_extra_test2.c",0x22b,"do_pkey_tofrom_data_select(key, \"X25519\")",
                      iVar2 != 0);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_PKEY_free(pkey);
  return uVar1;
}



uint test_ec_tofrom_data_select(void)

{
  uint uVar1;
  int iVar2;
  EVP_PKEY *pkey;
  
  pkey = (EVP_PKEY *)EVP_PKEY_Q_keygen(mainctx,0,&_LC123,"P-256");
  uVar1 = test_ptr("test/evp_extra_test2.c",0x21e,
                   "key = EVP_PKEY_Q_keygen(mainctx, NULL, \"EC\", \"P-256\")",pkey);
  if (uVar1 != 0) {
    iVar2 = do_pkey_tofrom_data_select(pkey,&_LC123);
    iVar2 = test_true("test/evp_extra_test2.c",0x21f,"do_pkey_tofrom_data_select(key, \"EC\")",
                      iVar2 != 0);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_PKEY_free(pkey);
  return uVar1;
}



bool test_dh_tofrom_data_select(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar3;
  BIGNUM *a;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  EVP_PKEY *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (EVP_PKEY *)0x0;
  OSSL_PARAM_construct_utf8_string(&local_c8,"group","ffdhe2048",0);
  local_68 = local_a8;
  local_88 = local_c8;
  uStack_80 = uStack_c0;
  local_78 = local_b8;
  uStack_70 = uStack_b0;
  OSSL_PARAM_construct_end(&local_c8);
  local_60 = local_c8;
  uStack_58 = uStack_c0;
  local_40 = local_a8;
  local_50 = local_b8;
  uStack_48 = uStack_b0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(mainctx,&_LC183,0);
  iVar1 = test_ptr("test/evp_extra_test2.c",0x166,
                   "gctx = EVP_PKEY_CTX_new_from_name(mainctx, \"DHX\", NULL)",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_keygen_init(ctx);
    iVar1 = test_int_gt("test/evp_extra_test2.c",0x167,"EVP_PKEY_keygen_init(gctx)",&_LC28,iVar1,0);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_CTX_set_params(ctx,&local_88);
      iVar1 = test_true("test/evp_extra_test2.c",0x168,"EVP_PKEY_CTX_set_params(gctx, params)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_generate(ctx,&local_90);
        iVar1 = test_int_gt("test/evp_extra_test2.c",0x169,"EVP_PKEY_generate(gctx, &key)",&_LC28,
                            uVar2,0);
        if (iVar1 != 0) {
          iVar1 = do_pkey_tofrom_data_select(local_90,&_LC183);
          iVar1 = test_true("test/evp_extra_test2.c",0x16a,
                            "do_pkey_tofrom_data_select(key, \"DHX\")",iVar1 != 0);
          if (iVar1 != 0) {
            uVar3 = EVP_PKEY_get0_DH(local_90);
            iVar1 = test_ptr("test/evp_extra_test2.c",0x16c,"dhkey = EVP_PKEY_get0_DH(key)",uVar3);
            if (iVar1 != 0) {
              a = (BIGNUM *)DH_get0_priv_key(uVar3);
              iVar1 = test_ptr("test/evp_extra_test2.c",0x16d,"privkey = DH_get0_priv_key(dhkey)",a)
              ;
              if (iVar1 != 0) {
                iVar1 = BN_num_bits(a);
                iVar1 = test_int_le("test/evp_extra_test2.c",0x16e,"BN_num_bits(privkey)",&_LC190,
                                    iVar1,0xe1);
                bVar4 = iVar1 != 0;
                goto LAB_001037f0;
              }
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_001037f0:
  EVP_PKEY_free(local_90);
  EVP_PKEY_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_pkey_export_cb(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar3;
  EVP_PKEY *local_38;
  long local_30;
  
  bVar3 = false;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_00103a12;
  local_38 = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(mainctx,&_LC34,0);
  iVar1 = test_ptr("test/evp_extra_test2.c",0x366,
                   "ctx = EVP_PKEY_CTX_new_from_name(mainctx, type, NULL)",ctx);
  if (iVar1 == 0) {
LAB_001039ff:
    bVar3 = false;
  }
  else {
    uVar2 = EVP_PKEY_fromdata_init(ctx);
    iVar1 = test_int_eq("test/evp_extra_test2.c",0x367,"EVP_PKEY_fromdata_init(ctx)",&_LC50,uVar2,1)
    ;
    if (iVar1 == 0) goto LAB_001039ff;
    uVar2 = EVP_PKEY_fromdata(ctx,&local_38,0x87,param_1);
    iVar1 = test_int_eq("test/evp_extra_test2.c",0x368,
                        "EVP_PKEY_fromdata(ctx, &pkey, EVP_PKEY_KEYPAIR, (OSSL_PARAM *)params)",
                        &_LC50,uVar2,1);
    if (iVar1 == 0) goto LAB_001039ff;
    iVar1 = EVP_PKEY_eq(local_38,param_2);
    iVar1 = test_true("test/evp_extra_test2.c",0x36b,"EVP_PKEY_eq(pkey, expected)",iVar1 != 0);
    bVar3 = iVar1 != 0;
  }
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(local_38);
LAB_00103a12:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_dh_paramfromdata(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_94;
  EVP_PKEY *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(mainctx,&_LC85,0);
  iVar1 = test_ptr("test/evp_extra_test2.c",0x1b9,
                   "ctx = EVP_PKEY_CTX_new_from_name(mainctx, \"DH\", NULL)",ctx);
  if (iVar1 != 0) {
    local_94 = 0;
    local_90 = (EVP_PKEY *)0x0;
    iVar1 = EVP_PKEY_fromdata_init(ctx);
    if (iVar1 == 1) {
      OSSL_PARAM_construct_uint(&local_c8,"group",&local_94);
      local_68 = local_a8;
      local_88 = local_c8;
      uStack_80 = uStack_c0;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      OSSL_PARAM_construct_end(&local_c8);
      local_40 = local_a8;
      local_60 = local_c8;
      uStack_58 = uStack_c0;
      local_50 = local_b8;
      uStack_48 = uStack_b0;
      uVar2 = EVP_PKEY_fromdata(ctx,&local_90,0x84,&local_88);
      EVP_PKEY_free(local_90);
    }
    else {
      uVar2 = 0xffffffff;
    }
    iVar1 = test_int_eq("test/evp_extra_test2.c",0x1ba,
                        "set_fromdata_uint(ctx, OSSL_PKEY_PARAM_GROUP_NAME)",&_LC28,uVar2,0);
    if (iVar1 != 0) {
      local_90 = (EVP_PKEY *)0x0;
      iVar1 = EVP_PKEY_fromdata_init(ctx);
      if (iVar1 == 1) {
        OSSL_PARAM_construct_utf8_string(&local_c8,"group",&_LC159,0);
        local_68 = local_a8;
        local_88 = local_c8;
        uStack_80 = uStack_c0;
        local_78 = local_b8;
        uStack_70 = uStack_b0;
        OSSL_PARAM_construct_end(&local_c8);
        local_40 = local_a8;
        local_60 = local_c8;
        uStack_58 = uStack_c0;
        local_50 = local_b8;
        uStack_48 = uStack_b0;
        uVar2 = EVP_PKEY_fromdata(ctx,&local_90,0x84,&local_88);
        EVP_PKEY_free(local_90);
      }
      else {
        uVar2 = 0xffffffff;
      }
      iVar1 = test_int_eq("test/evp_extra_test2.c",0x1bb,
                          "set_fromdata_string(ctx, OSSL_PKEY_PARAM_GROUP_NAME, \"bad\")",&_LC28,
                          uVar2,0);
      if (iVar1 != 0) {
        local_90 = (EVP_PKEY *)0x0;
        iVar1 = EVP_PKEY_fromdata_init(ctx);
        if (iVar1 == 1) {
          OSSL_PARAM_construct_utf8_string(&local_c8,&_LC103,&_LC159,0);
          local_68 = local_a8;
          local_88 = local_c8;
          uStack_80 = uStack_c0;
          local_78 = local_b8;
          uStack_70 = uStack_b0;
          OSSL_PARAM_construct_end(&local_c8);
          local_40 = local_a8;
          local_60 = local_c8;
          uStack_58 = uStack_c0;
          local_50 = local_b8;
          uStack_48 = uStack_b0;
          uVar2 = EVP_PKEY_fromdata(ctx,&local_90,0x84,&local_88);
          EVP_PKEY_free(local_90);
        }
        else {
          uVar2 = 0xffffffff;
        }
        iVar1 = test_int_eq("test/evp_extra_test2.c",0x1bc,
                            "set_fromdata_string(ctx, OSSL_PKEY_PARAM_FFC_P, \"bad\")",&_LC28,uVar2,
                            0);
        if (iVar1 != 0) {
          local_90 = (EVP_PKEY *)0x0;
          iVar1 = EVP_PKEY_fromdata_init(ctx);
          if (iVar1 == 1) {
            OSSL_PARAM_construct_utf8_string(&local_c8,"gindex",&_LC159,0);
            local_68 = local_a8;
            local_88 = local_c8;
            uStack_80 = uStack_c0;
            local_78 = local_b8;
            uStack_70 = uStack_b0;
            OSSL_PARAM_construct_end(&local_c8);
            local_40 = local_a8;
            local_60 = local_c8;
            uStack_58 = uStack_c0;
            local_50 = local_b8;
            uStack_48 = uStack_b0;
            uVar2 = EVP_PKEY_fromdata(ctx,&local_90,0x84,&local_88);
            EVP_PKEY_free(local_90);
          }
          else {
            uVar2 = 0xffffffff;
          }
          iVar1 = test_int_eq("test/evp_extra_test2.c",0x1bd,
                              "set_fromdata_string(ctx, OSSL_PKEY_PARAM_FFC_GINDEX, \"bad\")",&_LC28
                              ,uVar2,0);
          if (iVar1 != 0) {
            local_90 = (EVP_PKEY *)0x0;
            iVar1 = EVP_PKEY_fromdata_init(ctx);
            if (iVar1 == 1) {
              OSSL_PARAM_construct_utf8_string(&local_c8,"pcounter",&_LC159,0);
              local_68 = local_a8;
              local_88 = local_c8;
              uStack_80 = uStack_c0;
              local_78 = local_b8;
              uStack_70 = uStack_b0;
              OSSL_PARAM_construct_end(&local_c8);
              local_40 = local_a8;
              local_60 = local_c8;
              uStack_58 = uStack_c0;
              local_50 = local_b8;
              uStack_48 = uStack_b0;
              uVar2 = EVP_PKEY_fromdata(ctx,&local_90,0x84,&local_88);
              EVP_PKEY_free(local_90);
            }
            else {
              uVar2 = 0xffffffff;
            }
            iVar1 = test_int_eq("test/evp_extra_test2.c",0x1be,
                                "set_fromdata_string(ctx, OSSL_PKEY_PARAM_FFC_PCOUNTER, \"bad\")",
                                &_LC28,uVar2,0);
            if (iVar1 != 0) {
              local_90 = (EVP_PKEY *)0x0;
              iVar1 = EVP_PKEY_fromdata_init(ctx);
              if (iVar1 == 1) {
                OSSL_PARAM_construct_utf8_string(&local_c8,&_LC198,&_LC159,0);
                local_68 = local_a8;
                local_88 = local_c8;
                uStack_80 = uStack_c0;
                local_78 = local_b8;
                uStack_70 = uStack_b0;
                OSSL_PARAM_construct_end(&local_c8);
                local_40 = local_a8;
                local_60 = local_c8;
                uStack_58 = uStack_c0;
                local_50 = local_b8;
                uStack_48 = uStack_b0;
                uVar2 = EVP_PKEY_fromdata(ctx,&local_90,0x84,&local_88);
                EVP_PKEY_free(local_90);
              }
              else {
                uVar2 = 0xffffffff;
              }
              iVar1 = test_int_eq("test/evp_extra_test2.c",0x1bf,
                                  "set_fromdata_string(ctx, OSSL_PKEY_PARAM_FFC_COFACTOR, \"bad\")",
                                  &_LC28,uVar2,0);
              if (iVar1 != 0) {
                uVar2 = set_fromdata_string_constprop_0(ctx,"hindex");
                iVar1 = test_int_eq("test/evp_extra_test2.c",0x1c0,
                                    "set_fromdata_string(ctx, OSSL_PKEY_PARAM_FFC_H, \"bad\")",
                                    &_LC28,uVar2,0);
                if (iVar1 != 0) {
                  uVar2 = set_fromdata_uint(ctx,&_LC98);
                  iVar1 = test_int_eq("test/evp_extra_test2.c",0x1c1,
                                      "set_fromdata_uint(ctx, OSSL_PKEY_PARAM_FFC_SEED)",&_LC28,
                                      uVar2,0);
                  if (iVar1 != 0) {
                    uVar2 = set_fromdata_string_constprop_0(ctx,"validate-pq");
                    iVar1 = test_int_eq("test/evp_extra_test2.c",0x1c2,
                                        "set_fromdata_string(ctx, OSSL_PKEY_PARAM_FFC_VALIDATE_PQ, \"bad\")"
                                        ,&_LC28,uVar2,0);
                    if (iVar1 != 0) {
                      uVar2 = set_fromdata_string_constprop_0(ctx,"validate-g");
                      iVar1 = test_int_eq("test/evp_extra_test2.c",0x1c3,
                                          "set_fromdata_string(ctx, OSSL_PKEY_PARAM_FFC_VALIDATE_G, \"bad\")"
                                          ,&_LC28,uVar2,0);
                      if (iVar1 != 0) {
                        uVar2 = set_fromdata_string_constprop_0(ctx,"validate-legacy");
                        iVar1 = test_int_eq("test/evp_extra_test2.c",0x1c4,
                                            "set_fromdata_string(ctx, OSSL_PKEY_PARAM_FFC_VALIDATE_LEGACY, \"bad\")"
                                            ,&_LC28,uVar2,0);
                        if (iVar1 != 0) {
                          uVar2 = set_fromdata_uint(ctx,"digest");
                          iVar1 = test_int_eq("test/evp_extra_test2.c",0x1c5,
                                              "set_fromdata_uint(ctx, OSSL_PKEY_PARAM_FFC_DIGEST)",
                                              &_LC28,uVar2,0);
                          bVar3 = iVar1 != 0;
                          goto LAB_00103b40;
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
LAB_00103b40:
  EVP_PKEY_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_get_libctx(&mainctx,&nullprov,0,0,0);
  if (iVar1 != 0) {
    add_test("evp_test_name_parsing",evp_test_name_parsing);
    add_test("test_alternative_default",test_alternative_default);
    add_all_tests("test_d2i_AutoPrivateKey_ex",test_d2i_AutoPrivateKey_ex,6,1);
    add_test("test_new_keytype",test_new_keytype);
    add_all_tests("test_d2i_PrivateKey_ex",test_d2i_PrivateKey_ex,2,1);
    add_test("test_ec_tofrom_data_select",test_ec_tofrom_data_select);
    add_test("test_ecx_tofrom_data_select",test_ecx_tofrom_data_select);
    add_test("test_ec_d2i_i2d_pubkey",test_ec_d2i_i2d_pubkey);
    add_test("test_sm2_tofrom_data_select",test_sm2_tofrom_data_select);
    add_test("test_dsa_todata",test_dsa_todata);
    add_test("test_dsa_tofrom_data_select",test_dsa_tofrom_data_select);
    add_all_tests("test_dsa_fromdata_digest_prop",test_dsa_fromdata_digest_prop,2,1);
    add_test("test_dh_tofrom_data_select",test_dh_tofrom_data_select);
    add_test("test_dh_paramgen",test_dh_paramgen);
    add_test("test_dh_paramfromdata",test_dh_paramfromdata);
    add_test("test_rsa_tofrom_data_select",test_rsa_tofrom_data_select);
    add_test("test_pkey_todata_null",test_pkey_todata_null);
    add_test("test_pkey_export_null",test_pkey_export_null);
    add_test("test_pkey_export",test_pkey_export);
    add_test("test_pkcs8key_nid_bio",test_pkcs8key_nid_bio);
    add_all_tests("test_PEM_read_bio_negative",test_PEM_read_bio_negative,6,1);
    add_all_tests("test_PEM_read_bio_negative_wrong_password",
                  test_PEM_read_bio_negative_wrong_password,2,1);
    add_test("test_rsa_pss_sign",test_rsa_pss_sign);
    add_test("test_evp_md_ctx_dup",test_evp_md_ctx_dup);
    add_test("test_evp_md_ctx_copy",test_evp_md_ctx_copy);
    add_test("test_evp_md_ctx_copy2",test_evp_md_ctx_copy2);
    add_all_tests("test_provider_unload_effective",test_provider_unload_effective,2,1);
    add_test("test_evp_pbe_alg_add",0x100000);
    return 1;
  }
  OSSL_LIB_CTX_free(mainctx);
  mainctx = 0;
  return 0;
}



void cleanup_tests(void)

{
  OSSL_LIB_CTX_free(mainctx);
  OSSL_PROVIDER_unload(nullprov);
  return;
}



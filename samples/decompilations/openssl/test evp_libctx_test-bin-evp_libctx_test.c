
bool test_cipher_tdes_randkey(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EVP_CIPHER_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_9c;
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
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_9c = 0;
  local_38 = 0;
  OSSL_PARAM_construct_int(&local_d8,"encrypt-check",&local_9c);
  local_78 = local_b8;
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  local_88 = local_c8;
  uStack_80 = uStack_c0;
  OSSL_PARAM_construct_end(&local_d8);
  local_70 = local_d8;
  uStack_68 = uStack_d0;
  local_50 = local_b8;
  local_60 = local_c8;
  uStack_58 = uStack_c0;
  uVar3 = EVP_CIPHER_fetch(libctx,"AES-256-CBC",0);
  iVar1 = test_ptr("test/evp_libctx_test.c",0x284,
                   "aes_cipher = EVP_CIPHER_fetch(libctx, \"AES-256-CBC\", NULL)",uVar3);
  if (iVar1 != 0) {
    uVar2 = EVP_CIPHER_get_flags(uVar3);
    iVar1 = test_int_eq("test/evp_libctx_test.c",0x285,
                        "EVP_CIPHER_get_flags(aes_cipher) & EVP_CIPH_RAND_KEY",&_LC4,uVar2 & 0x200,0
                       );
    if (iVar1 != 0) {
      uVar4 = EVP_CIPHER_fetch(libctx,"DES-EDE3-CBC",0);
      iVar1 = test_ptr("test/evp_libctx_test.c",0x286,
                       "tdes_cipher = EVP_CIPHER_fetch(libctx, \"DES-EDE3-CBC\", NULL)",uVar4);
      if (iVar1 != 0) {
        uVar2 = EVP_CIPHER_get_flags(uVar4);
        iVar1 = test_int_ne("test/evp_libctx_test.c",0x287,
                            "EVP_CIPHER_get_flags(tdes_cipher) & EVP_CIPH_RAND_KEY",&_LC4,
                            uVar2 & 0x200,0);
        if (iVar1 != 0) {
          ctx = EVP_CIPHER_CTX_new();
          iVar1 = test_ptr("test/evp_libctx_test.c",0x288,"ctx = EVP_CIPHER_CTX_new()",ctx);
          if (iVar1 != 0) {
            iVar1 = EVP_CipherInit_ex2(ctx,uVar4,0,0,1,&local_98);
            iVar1 = test_true("test/evp_libctx_test.c",0x289,
                              "EVP_CipherInit_ex2(ctx, tdes_cipher, NULL, NULL, 1, params)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = EVP_CIPHER_CTX_rand_key(ctx,local_48);
              iVar1 = test_int_gt("test/evp_libctx_test.c",0x28b,"EVP_CIPHER_CTX_rand_key(ctx, key)"
                                  ,&_LC4,iVar1,0);
              bVar5 = iVar1 != 0;
              goto LAB_001000e8;
            }
          }
          bVar5 = false;
          goto LAB_001000e8;
        }
      }
      bVar5 = false;
      ctx = (EVP_CIPHER_CTX *)0x0;
      goto LAB_001000e8;
    }
  }
  bVar5 = false;
  uVar4 = 0;
  ctx = (EVP_CIPHER_CTX *)0x0;
LAB_001000e8:
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(uVar4);
  EVP_CIPHER_free(uVar3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint kem_invalid_keytype(void)

{
  EVP_PKEY *pkey;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  long in_FS_OFFSET;
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
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,&_LC14,0);
  iVar1 = test_ptr("test/evp_libctx_test.c",0x2eb,
                   "gctx = EVP_PKEY_CTX_new_from_name(libctx, \"DH\", NULL)",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_keygen_init(ctx);
    iVar1 = test_int_gt("test/evp_libctx_test.c",0x2ec,"EVP_PKEY_keygen_init(gctx)",&_LC4,iVar1,0);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_CTX_set_params(ctx,&local_88);
      iVar1 = test_true("test/evp_libctx_test.c",0x2ed,"EVP_PKEY_CTX_set_params(gctx, params)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EVP_PKEY_keygen(ctx,&local_90);
        test_true("test/evp_libctx_test.c",0x2ee,"EVP_PKEY_keygen(gctx, &pkey)",iVar1 != 0);
      }
    }
  }
  ctx_00 = (EVP_PKEY_CTX *)0x0;
  EVP_PKEY_CTX_free(ctx);
  pkey = local_90;
  uVar2 = test_ptr("test/evp_libctx_test.c",0x2fc,"key = gen_dh_key()",local_90);
  if (uVar2 != 0) {
    ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pkey,0);
    uVar2 = test_ptr("test/evp_libctx_test.c",0x2ff,
                     "sctx = EVP_PKEY_CTX_new_from_pkey(libctx, key, NULL)",ctx_00);
    if (uVar2 != 0) {
      uVar3 = EVP_PKEY_encapsulate_init(ctx_00,0);
      iVar1 = test_int_eq("test/evp_libctx_test.c",0x301,"EVP_PKEY_encapsulate_init(sctx, NULL)",
                          &_LC21,uVar3,0xfffffffe);
      uVar2 = (uint)(iVar1 != 0);
    }
  }
  EVP_PKEY_free(pkey);
  EVP_PKEY_CTX_free(ctx_00);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void string_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



uint test_cipher_reinit_partialupdate(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  ulong uVar5;
  long in_FS_OFFSET;
  int local_354;
  int local_350;
  int local_34c;
  uchar local_348 [256];
  uchar local_248 [256];
  uchar local_148 [264];
  long local_40;
  
  cipher = (EVP_CIPHER *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_354 = 0;
  local_350 = 0;
  local_34c = 0;
  uVar4 = OPENSSL_sk_value(cipher_names,param_1);
  ctx = EVP_CIPHER_CTX_new();
  uVar1 = test_ptr("test/evp_libctx_test.c",0x1db,"ctx = EVP_CIPHER_CTX_new()",ctx);
  if (uVar1 == 0) goto LAB_00100580;
  test_note("Fetching %s\n",uVar4);
  cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(libctx,uVar4,0);
  iVar2 = test_ptr("test/evp_libctx_test.c",0x1df,"cipher = EVP_CIPHER_fetch(libctx, name, NULL)",
                   cipher);
  if (iVar2 != 0) {
    iVar2 = EVP_CIPHER_get_block_size(cipher);
    iVar3 = test_int_gt("test/evp_libctx_test.c",0x1e3,"in_len",&_LC4,iVar2,0);
    if (iVar3 != 0) {
      if (1 < iVar2) {
        iVar2 = iVar2 >> 1;
      }
      uVar5 = EVP_CIPHER_get_flags(cipher);
      if ((uVar5 & 0x404000) == 0) {
        iVar3 = EVP_CIPHER_get_mode(cipher);
        if (iVar3 != 7) {
          iVar3 = EVP_CIPHER_get_mode(cipher);
          if (iVar3 != 0x10001) {
            iVar3 = EVP_CIPHER_get_mode(cipher);
            if (iVar3 != 0x10002) {
              iVar3 = EVP_EncryptInit_ex(ctx,cipher,(ENGINE *)0x0,key_5,iv_4);
              iVar3 = test_true("test/evp_libctx_test.c",0x1f2,
                                "EVP_EncryptInit_ex(ctx, cipher, NULL, key, iv)",iVar3 != 0);
              if (iVar3 != 0) {
                iVar3 = EVP_EncryptUpdate(ctx,local_348,&local_354,in_3,iVar2);
                iVar3 = test_true("test/evp_libctx_test.c",499,
                                  "EVP_EncryptUpdate(ctx, out1, &out1_len, in, in_len)",iVar3 != 0);
                if (iVar3 != 0) {
                  iVar3 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key_5,iv_4);
                  iVar3 = test_true("test/evp_libctx_test.c",500,
                                    "EVP_EncryptInit_ex(ctx, NULL, NULL, key, iv)",iVar3 != 0);
                  if (iVar3 != 0) {
                    EVP_EncryptUpdate(ctx,local_248,&local_350,in_3,iVar2);
                    iVar3 = test_true("test/evp_libctx_test.c",0x1f5,
                                      "EVP_EncryptUpdate(ctx, out2, &out2_len, in, in_len)");
                    if (iVar3 != 0) {
                      iVar3 = EVP_CIPHER_get_iv_length(cipher);
                      if (iVar3 != 0) {
                        iVar3 = test_mem_eq("test/evp_libctx_test.c",0x1f9,&_LC31,&_LC30,local_348,
                                            (long)local_354,local_248,(long)local_350);
                        if (iVar3 == 0) goto LAB_00100600;
                      }
                      iVar3 = EVP_CIPHER_get_mode(cipher);
                      if (iVar3 == 0x10004) goto LAB_00100658;
                      iVar3 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,
                                                 iv_4);
                      iVar3 = test_true("test/evp_libctx_test.c",0x1fd,
                                        "EVP_EncryptInit_ex(ctx, NULL, NULL, NULL, iv)",iVar3 != 0);
                      if (iVar3 != 0) {
                        iVar2 = EVP_EncryptUpdate(ctx,local_148,&local_34c,in_3,iVar2);
                        iVar2 = test_true("test/evp_libctx_test.c",0x1fe,
                                          "EVP_EncryptUpdate(ctx, out3, &out3_len, in, in_len)",
                                          iVar2 != 0);
                        if (iVar2 != 0) {
                          iVar2 = EVP_CIPHER_get_iv_length(cipher);
                          if (iVar2 != 0) {
                            iVar2 = test_mem_eq("test/evp_libctx_test.c",0x202,&_LC31,&_LC34,
                                                local_348,(long)local_354,local_148,(long)local_34c)
                            ;
                            uVar1 = (uint)(iVar2 != 0);
                            goto LAB_00100580;
                          }
                          goto LAB_00100658;
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_00100600;
            }
          }
        }
      }
LAB_00100658:
      uVar1 = 1;
      goto LAB_00100580;
    }
  }
LAB_00100600:
  uVar1 = 0;
LAB_00100580:
  EVP_CIPHER_free(cipher);
  EVP_CIPHER_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_cipher_reinit(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  long in_FS_OFFSET;
  uchar *puVar7;
  int local_3d4;
  int local_3d0;
  int local_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  uchar local_348 [256];
  uchar local_248 [256];
  uchar local_148 [264];
  long local_40;
  
  cipher = (EVP_CIPHER *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_3d4 = 0;
  local_3c8 = __LC44;
  uStack_3c0 = _UNK_00104ee8;
  local_3d0 = 0;
  local_388 = __LC45;
  uStack_380 = _UNK_00104ef8;
  local_3cc = 0;
  local_378 = __LC46;
  uStack_370 = _UNK_00104f08;
  local_368 = __LC47;
  uStack_360 = _UNK_00104f18;
  local_358 = __LC48;
  uStack_350 = _UNK_00104f28;
  local_3b8 = __LC49;
  uStack_3b0 = _UNK_00104f38;
  local_3a8 = __LC49;
  uStack_3a0 = _UNK_00104f38;
  local_398 = __LC49;
  uStack_390 = _UNK_00104f38;
  uVar6 = OPENSSL_sk_value(cipher_names,param_1);
  ctx = EVP_CIPHER_CTX_new();
  uVar1 = test_ptr("test/evp_libctx_test.c",0x17d,"ctx = EVP_CIPHER_CTX_new()",ctx);
  if (uVar1 == 0) goto LAB_001009a1;
  test_note("Fetching %s\n",uVar6);
  cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(libctx,uVar6,0);
  iVar2 = test_ptr("test/evp_libctx_test.c",0x181,"cipher = EVP_CIPHER_fetch(libctx, name, NULL)",
                   cipher);
  if (iVar2 != 0) {
    iVar2 = EVP_CIPHER_get_mode(cipher);
    iVar3 = EVP_CIPHER_get_mode(cipher);
    iVar4 = EVP_CIPHER_is_a(cipher,&_LC35);
    if ((iVar4 == 0) && (iVar4 = EVP_CIPHER_is_a(cipher,"RC4-40"), iVar4 == 0)) {
      iVar4 = EVP_CIPHER_is_a(cipher,"RC4-HMAC-MD5");
      uVar1 = (uint)(iVar4 != 0);
    }
    else {
      uVar1 = 1;
    }
    iVar4 = EVP_CIPHER_is_a(cipher,"DES3-WRAP");
    iVar5 = EVP_EncryptInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)&local_388,(uchar *)&local_3b8);
    iVar5 = test_true("test/evp_libctx_test.c",0x194,
                      "EVP_EncryptInit_ex(ctx, cipher, NULL, key, iv)",iVar5 != 0);
    if (iVar5 != 0) {
      iVar5 = EVP_EncryptUpdate(ctx,local_348,&local_3d4,(uchar *)&local_3c8,0x10);
      iVar5 = test_true("test/evp_libctx_test.c",0x195,
                        "EVP_EncryptUpdate(ctx, out1, &out1_len, in, sizeof(in))",iVar5 != 0);
      if (iVar5 != 0) {
        iVar5 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)&local_388,
                                   (uchar *)&local_3b8);
        iVar5 = test_true("test/evp_libctx_test.c",0x196,
                          "EVP_EncryptInit_ex(ctx, NULL, NULL, key, iv)",iVar5 != 0);
        if (iVar5 != 0) {
          iVar5 = EVP_EncryptUpdate(ctx,local_248,&local_3d0,(uchar *)&local_3c8,0x10);
          iVar5 = test_int_eq("test/evp_libctx_test.c",0x197,
                              "EVP_EncryptUpdate(ctx, out2, &out2_len, in, sizeof(in))",
                              "ccm ? 0 : 1",iVar5,iVar2 != 7);
          if (iVar5 != 0) {
            if (uVar1 == 0) {
              iVar5 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,
                                         (uchar *)&local_3b8);
              iVar5 = test_true("test/evp_libctx_test.c",0x19a,
                                "EVP_EncryptInit_ex(ctx, NULL, NULL, NULL, iv)",iVar5 != 0);
              if (iVar5 != 0) {
                iVar5 = EVP_EncryptUpdate(ctx,local_148,&local_3cc,(uchar *)&local_3c8,0x10);
                iVar5 = test_int_eq("test/evp_libctx_test.c",0x19b,
                                    "EVP_EncryptUpdate(ctx, out3, &out3_len, in, sizeof(in))",
                                    "ccm || siv ? 0 : 1",iVar5,iVar2 != 7 && iVar3 != 0x10004);
                if (iVar5 != 0) goto LAB_00100ba9;
              }
            }
            else {
LAB_00100ba9:
              if (iVar2 == 7) {
LAB_00100d4a:
                uVar1 = 1;
                goto LAB_001009a1;
              }
              if (iVar4 == 0) {
                iVar2 = test_mem_eq("test/evp_libctx_test.c",0x1a6,&_LC31,&_LC30,local_348,
                                    (long)local_3d4,local_248,(long)local_3d0);
                if (iVar2 != 0) {
                  if (iVar3 != 0x10004 && uVar1 == 0) {
                    iVar2 = test_mem_eq("test/evp_libctx_test.c",0x1a7,&_LC31,&_LC34,local_348,
                                        (long)local_3d4,local_148,(long)local_3cc);
                    uVar1 = (uint)(iVar2 != 0);
                    goto LAB_001009a1;
                  }
                  goto LAB_00100d4a;
                }
              }
              else {
                iVar2 = test_mem_ne("test/evp_libctx_test.c",0x1a1,&_LC31,&_LC30,local_348,
                                    (long)local_3d4,local_248,(long)local_3d0);
                if (iVar2 != 0) {
                  puVar7 = local_148;
                  iVar2 = test_mem_ne("test/evp_libctx_test.c",0x1a2,&_LC31,&_LC34,local_348,
                                      (long)local_3d4,puVar7,(long)local_3cc,puVar7);
                  if (iVar2 != 0) {
                    iVar2 = test_mem_ne("test/evp_libctx_test.c",0x1a3,&_LC30,&_LC34,local_248,
                                        (long)local_3d0,puVar7,(long)local_3cc);
                    uVar1 = (uint)(iVar2 != 0);
                    goto LAB_001009a1;
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
LAB_001009a1:
  EVP_CIPHER_free(cipher);
  EVP_CIPHER_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



void collect_cipher_names(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)EVP_CIPHER_get0_name();
  iVar1 = OSSL_PROVIDER_available(libctx,&_LC50);
  if ((((iVar1 != 0) && (*pcVar2 == 'D')) && (pcVar2[1] == 'E')) && (pcVar2[2] == 'S')) {
    return;
  }
  pcVar2 = CRYPTO_strdup(pcVar2,"test/evp_libctx_test.c",0x21d);
  if (pcVar2 != (char *)0x0) {
    iVar1 = OPENSSL_sk_push(param_2,pcVar2);
    if (iVar1 == 0) {
      CRYPTO_free(pcVar2);
      return;
    }
  }
  return;
}



int name_cmp(char *name,char *cmp)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(*(undefined8 *)name,*(undefined8 *)cmp);
  return iVar1;
}



bool dhx_cert_load(void)

{
  int iVar1;
  BIO *bp;
  X509 *pXVar2;
  long in_FS_OFFSET;
  bool bVar3;
  X509 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (X509 *)0x0;
  bp = BIO_new_mem_buf(dhx_cert_2,0x403);
  iVar1 = test_ptr("test/evp_libctx_test.c",0x14f,
                   "bio = BIO_new_mem_buf(dhx_cert, sizeof(dhx_cert))",bp);
  if (iVar1 != 0) {
    local_28 = (X509 *)X509_new_ex(libctx,0);
    iVar1 = test_ptr("test/evp_libctx_test.c",0x150,"cert = X509_new_ex(libctx, NULL)",local_28);
    if (iVar1 != 0) {
      pXVar2 = d2i_X509_bio(bp,&local_28);
      iVar1 = test_ptr("test/evp_libctx_test.c",0x151,"d2i_X509_bio(bio, &cert)",pXVar2);
      bVar3 = iVar1 != 0;
      goto LAB_00100eea;
    }
  }
  bVar3 = false;
LAB_00100eea:
  X509_free(local_28);
  BIO_free(bp);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_dsa_param_keygen(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  EVP_PKEY *pkey;
  DSA *r;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  int local_7c;
  EVP_PKEY_CTX *local_78;
  EVP_PKEY *local_70;
  EVP_PKEY *local_60;
  undefined *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (EVP_PKEY *)0x0;
  local_58[0] = &_LC56;
  local_58[1] = &_LC57;
  uVar2 = param_1 / 9;
  uVar8 = param_1 % 3;
  uVar7 = (param_1 / 3) % 3;
  if ((uVar2 == 0 && uVar8 == 2) && (uVar7 == 1)) {
    puVar4 = &_LC55;
    local_7c = 1;
    puVar5 = &_LC57;
    local_58[2] = &_LC55;
LAB_001011b9:
    puVar6 = local_58[(int)uVar2];
  }
  else {
    puVar4 = &_LC54;
    local_58[2] = &_LC55;
    if (uVar8 < 3) {
      puVar4 = local_58[(int)uVar8];
    }
    local_58[2] = &_LC55;
    puVar5 = &_LC54;
    local_58[0] = &_LC56;
    local_58[1] = &_LC57;
    if (uVar7 < 3) {
      puVar5 = local_58[(int)uVar7];
    }
    local_58[2] = &_LC55;
    puVar6 = &_LC54;
    local_7c = 0;
    local_58[0] = &_LC56;
    local_58[1] = &_LC57;
    if (uVar2 < 3) goto LAB_001011b9;
  }
  local_58[2] = &_LC55;
  local_58[1] = &_LC57;
  local_58[0] = &_LC56;
  test_note("Testing with (p, q, g) = (%s, %s, %s)\n",puVar6,puVar5,puVar4);
  pkey = EVP_PKEY_new();
  iVar1 = test_ptr("test/evp_libctx_test.c",0x93,"pkey_parm = EVP_PKEY_new()",pkey);
  if (iVar1 == 0) {
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    r = (DSA *)0x0;
    local_70 = (EVP_PKEY *)0x0;
    local_78 = (EVP_PKEY_CTX *)0x0;
    uVar2 = 0;
    goto LAB_001010e2;
  }
  r = DSA_new();
  iVar1 = test_ptr("test/evp_libctx_test.c",0x94,"dsa = DSA_new()",r);
  if (iVar1 == 0) {
LAB_0010117b:
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    uVar2 = 0;
    local_70 = (EVP_PKEY *)0x0;
    local_78 = (EVP_PKEY_CTX *)0x0;
  }
  else {
    a = BN_dup(*(BIGNUM **)(bn_0 + (long)(int)uVar2 * 8));
    iVar1 = test_ptr("test/evp_libctx_test.c",0x95,"p = BN_dup(bn[pind])",a);
    if (iVar1 == 0) {
      local_70 = (EVP_PKEY *)0x0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      local_78 = (EVP_PKEY_CTX *)0x0;
      uVar2 = 0;
      goto LAB_001010e2;
    }
    a_00 = BN_dup(*(BIGNUM **)(bn_0 + (long)(int)uVar7 * 8));
    iVar1 = test_ptr("test/evp_libctx_test.c",0x96,"q = BN_dup(bn[qind])",a_00);
    if (iVar1 == 0) {
      local_70 = (EVP_PKEY *)0x0;
      a_01 = (BIGNUM *)0x0;
      local_78 = (EVP_PKEY_CTX *)0x0;
      uVar2 = 0;
      goto LAB_001010e2;
    }
    a_01 = BN_dup(*(BIGNUM **)(bn_0 + (long)(int)uVar8 * 8));
    uVar2 = test_ptr("test/evp_libctx_test.c",0x97,"g = BN_dup(bn[gind])",a_01);
    if (uVar2 != 0) {
      iVar1 = DSA_set0_pqg(r,a,a_00,a_01);
      uVar2 = test_true("test/evp_libctx_test.c",0x98,"DSA_set0_pqg(dsa, p, q, g)",iVar1 != 0);
      if (uVar2 != 0) {
        iVar1 = EVP_PKEY_assign(pkey,0x74,r);
        iVar1 = test_true("test/evp_libctx_test.c",0x9c,"EVP_PKEY_assign_DSA(pkey_parm, dsa)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          local_78 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pkey,0);
          iVar1 = test_ptr("test/evp_libctx_test.c",0xa0,
                           "gen_ctx = EVP_PKEY_CTX_new_from_pkey(libctx, pkey_parm, NULL)",local_78)
          ;
          if (iVar1 != 0) {
            iVar1 = EVP_PKEY_keygen_init(local_78);
            iVar1 = test_int_gt("test/evp_libctx_test.c",0xa1,"EVP_PKEY_keygen_init(gen_ctx)",&_LC4,
                                iVar1,0);
            if (iVar1 == 0) {
              a_01 = (BIGNUM *)0x0;
              a_00 = (BIGNUM *)0x0;
              a = (BIGNUM *)0x0;
              r = (DSA *)0x0;
              local_70 = (EVP_PKEY *)0x0;
              uVar2 = 0;
              goto LAB_001010e2;
            }
            iVar1 = EVP_PKEY_keygen(local_78,&local_60);
            iVar1 = test_int_eq("test/evp_libctx_test.c",0xa2,"EVP_PKEY_keygen(gen_ctx, &pkey)",
                                "expected",iVar1,local_7c);
            if (iVar1 != 0) {
              if (local_7c == 0) {
                a_01 = (BIGNUM *)0x0;
                a_00 = (BIGNUM *)0x0;
                a = (BIGNUM *)0x0;
                local_70 = (EVP_PKEY *)0x0;
                r = (DSA *)0x0;
                uVar2 = 1;
              }
              else {
                local_70 = (EVP_PKEY *)EVP_PKEY_dup(local_60);
                iVar1 = test_ptr("test/evp_libctx_test.c",0xa6,"dup_pk = EVP_PKEY_dup(pkey)",
                                 local_70);
                if (iVar1 == 0) {
                  a_01 = (BIGNUM *)0x0;
                  a_00 = (BIGNUM *)0x0;
                  a = (BIGNUM *)0x0;
                  r = (DSA *)0x0;
                  uVar2 = 0;
                }
                else {
                  uVar3 = EVP_PKEY_eq(local_60,local_70);
                  iVar1 = test_int_eq("test/evp_libctx_test.c",0xa7,"EVP_PKEY_eq(pkey, dup_pk)",
                                      &_LC71,uVar3,1);
                  a_01 = (BIGNUM *)0x0;
                  a_00 = (BIGNUM *)0x0;
                  a = (BIGNUM *)0x0;
                  uVar2 = (uint)(iVar1 != 0);
                  r = (DSA *)0x0;
                }
              }
              goto LAB_001010e2;
            }
          }
          local_70 = (EVP_PKEY *)0x0;
          a_01 = (BIGNUM *)0x0;
          r = (DSA *)0x0;
          uVar2 = 0;
          a_00 = (BIGNUM *)0x0;
          a = (BIGNUM *)0x0;
          goto LAB_001010e2;
        }
        goto LAB_0010117b;
      }
    }
    local_70 = (EVP_PKEY *)0x0;
    local_78 = (EVP_PKEY_CTX *)0x0;
  }
LAB_001010e2:
  EVP_PKEY_free(local_60);
  EVP_PKEY_free(local_70);
  EVP_PKEY_CTX_free(local_78);
  EVP_PKEY_free(pkey);
  DSA_free(r);
  BN_free(a_01);
  BN_free(a_00);
  BN_free(a);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_evp_cipher_api_safety(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  EVP_CIPHER_CTX *a;
  ulong uVar4;
  
  a = EVP_CIPHER_CTX_new();
  uVar4 = test_ptr("test/evp_libctx_test.c",0x54,&_LC73,a);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  uVar1 = EVP_CIPHER_CTX_get_block_size(a);
  uVar2 = test_int_eq("test/evp_libctx_test.c",0x5b,"EVP_CIPHER_CTX_get_block_size(ctx)",&_LC4,uVar1
                      ,0);
  if (uVar2 != 0) {
    uVar1 = EVP_CIPHER_CTX_get_iv_length(a);
    iVar3 = test_int_eq("test/evp_libctx_test.c",0x62,"EVP_CIPHER_CTX_get_iv_length(ctx)",&_LC4,
                        uVar1,0);
    uVar2 = (uint)(iVar3 != 0);
  }
  EVP_CIPHER_CTX_free(a);
  return (ulong)uVar2;
}



uint rsa_keygen_constprop_0(EVP_PKEY **param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EVP_PKEY *pEVar5;
  long in_FS_OFFSET;
  uchar *local_48;
  uchar *local_40;
  long local_38;
  long local_30;
  
  uVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  local_40 = (uchar *)0x0;
  local_38 = 0;
  uVar3 = EVP_PKEY_Q_keygen(libctx,0,&_LC76,0x800);
  *param_2 = uVar3;
  uVar1 = test_ptr("test/evp_libctx_test.c",0x22a,
                   "*priv = EVP_PKEY_Q_keygen(libctx, NULL, \"RSA\", (size_t)bits)",uVar3);
  if (uVar1 != 0) {
    uVar4 = OSSL_ENCODER_CTX_new_for_pkey(*param_2,0x86,&_LC79,"type-specific",0);
    iVar2 = test_ptr("test/evp_libctx_test.c",0x22b,
                     "ectx = OSSL_ENCODER_CTX_new_for_pkey(*priv, EVP_PKEY_PUBLIC_KEY, \"DER\", \"type-specific\", NULL)"
                     ,uVar4);
    if (iVar2 != 0) {
      iVar2 = OSSL_ENCODER_to_data(uVar4,&local_48,&local_38);
      iVar2 = test_true("test/evp_libctx_test.c",0x230,"OSSL_ENCODER_to_data(ectx, &pub_der, &len)",
                        iVar2 != 0);
      if (iVar2 != 0) {
        local_40 = local_48;
        pEVar5 = d2i_PublicKey(6,param_1,&local_40,local_38);
        iVar2 = test_ptr("test/evp_libctx_test.c",0x233,"d2i_PublicKey(EVP_PKEY_RSA, pub, &pp, len)"
                         ,pEVar5);
        uVar1 = (uint)(iVar2 != 0);
        goto LAB_00101611;
      }
    }
    uVar1 = 0;
  }
LAB_00101611:
  OSSL_ENCODER_CTX_free(uVar4);
  CRYPTO_free(local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint kem_rsa_gen_recover(void)

{
  EVP_PKEY *pEVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY_CTX *ctx_01;
  undefined1 *extraout_RDX;
  undefined1 *puVar6;
  undefined1 *extraout_RDX_00;
  undefined1 *extraout_RDX_01;
  undefined1 *extraout_RDX_02;
  undefined1 *extraout_RDX_03;
  undefined1 *extraout_RDX_04;
  undefined1 *extraout_RDX_05;
  undefined1 *extraout_RDX_06;
  undefined1 *extraout_RDX_07;
  undefined1 *extraout_RDX_08;
  undefined1 *extraout_RDX_09;
  undefined1 *extraout_RDX_10;
  undefined1 *extraout_RDX_11;
  undefined1 *extraout_RDX_12;
  undefined1 *extraout_RDX_13;
  undefined1 *extraout_RDX_14;
  long in_FS_OFFSET;
  EVP_PKEY *local_370;
  EVP_PKEY *local_368;
  ulong local_360;
  undefined8 local_358;
  ulong local_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
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
  local_348 = (undefined1  [16])0x0;
  local_338 = (undefined1  [16])0x0;
  local_328 = (undefined1  [16])0x0;
  local_318 = (undefined1  [16])0x0;
  local_308 = (undefined1  [16])0x0;
  local_2f8 = (undefined1  [16])0x0;
  local_2e8 = (undefined1  [16])0x0;
  local_2d8 = (undefined1  [16])0x0;
  local_2c8 = (undefined1  [16])0x0;
  local_2b8 = (undefined1  [16])0x0;
  local_2a8 = (undefined1  [16])0x0;
  local_298 = (undefined1  [16])0x0;
  local_288 = (undefined1  [16])0x0;
  local_278 = (undefined1  [16])0x0;
  local_370 = (EVP_PKEY *)0x0;
  local_368 = (EVP_PKEY *)0x0;
  local_268 = (undefined1  [16])0x0;
  local_258 = (undefined1  [16])0x0;
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
  local_360 = 0;
  local_358 = 0;
  local_350 = 0;
  iVar2 = rsa_keygen_constprop_0(&local_370,&local_368);
  iVar2 = test_true("test/evp_libctx_test.c",0x248,"rsa_keygen(bits, &pub, &priv)",iVar2 != 0);
  if (iVar2 == 0) {
    uVar5 = 0;
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    puVar6 = extraout_RDX;
    ctx_01 = (EVP_PKEY_CTX *)0x0;
  }
  else {
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,local_370,0);
    uVar5 = test_ptr("test/evp_libctx_test.c",0x249,
                     "sctx = EVP_PKEY_CTX_new_from_pkey(libctx, pub, NULL)",ctx);
    pEVar1 = local_368;
    puVar6 = extraout_RDX_00;
    ctx_01 = (EVP_PKEY_CTX *)0x0;
    if (uVar5 != 0) {
      uVar3 = EVP_PKEY_encapsulate_init(ctx,0);
      iVar2 = test_int_eq("test/evp_libctx_test.c",0x24a,"EVP_PKEY_encapsulate_init(sctx, NULL)",
                          &_LC71,uVar3,1);
      puVar6 = extraout_RDX_01;
      if (iVar2 != 0) {
        uVar3 = EVP_PKEY_CTX_set_kem_op(ctx,"RSASVE");
        iVar2 = test_int_eq("test/evp_libctx_test.c",0x24b,
                            "EVP_PKEY_CTX_set_kem_op(sctx, \"RSASVE\")",&_LC71,uVar3,1);
        puVar6 = extraout_RDX_02;
        if (iVar2 != 0) {
          ctx_00 = EVP_PKEY_CTX_dup(ctx);
          iVar2 = test_ptr("test/evp_libctx_test.c",0x24c,"dctx = EVP_PKEY_CTX_dup(sctx)",ctx_00);
          puVar6 = extraout_RDX_03;
          if (iVar2 != 0) {
            uVar3 = EVP_PKEY_encapsulate(ctx_00,0,0,0,0);
            iVar2 = test_int_eq("test/evp_libctx_test.c",0x24e,
                                "EVP_PKEY_encapsulate(dctx, NULL, NULL, NULL, NULL)",&_LC4,uVar3,0);
            puVar6 = extraout_RDX_04;
            if (iVar2 != 0) {
              uVar3 = EVP_PKEY_encapsulate(ctx_00,0,&local_360,0);
              iVar2 = test_int_eq("test/evp_libctx_test.c",0x24f,
                                  "EVP_PKEY_encapsulate(dctx, NULL, &ctlen, NULL, &secretlen)",
                                  &_LC71,uVar3,1);
              puVar6 = extraout_RDX_05;
              if ((iVar2 != 0) &&
                 (iVar2 = test_int_eq("test/evp_libctx_test.c",0x251,"ctlen","secretlen",
                                      local_360 & 0xffffffff,local_350 & 0xffffffff),
                 puVar6 = extraout_RDX_06, iVar2 != 0)) {
                uVar5 = test_int_eq("test/evp_libctx_test.c",0x252,"ctlen","bits / 8",
                                    local_360 & 0xffffffff,0x100);
                puVar6 = extraout_RDX_07;
                ctx_01 = (EVP_PKEY_CTX *)0x0;
                if (uVar5 == 0) goto LAB_00101927;
                uVar3 = EVP_PKEY_encapsulate(ctx_00,local_248,&local_360,local_348,&local_350);
                iVar2 = test_int_eq("test/evp_libctx_test.c",0x253,
                                    "EVP_PKEY_encapsulate(dctx, ct, &ctlen, secret, &secretlen)",
                                    &_LC71,uVar3,1);
                puVar6 = extraout_RDX_08;
                if (iVar2 != 0) {
                  ctx_01 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pEVar1,0);
                  iVar2 = test_ptr("test/evp_libctx_test.c",0x255,
                                   "rctx = EVP_PKEY_CTX_new_from_pkey(libctx, priv, NULL)",ctx_01);
                  puVar6 = extraout_RDX_09;
                  if (iVar2 != 0) {
                    uVar3 = EVP_PKEY_decapsulate_init(ctx_01,0);
                    iVar2 = test_int_eq("test/evp_libctx_test.c",0x256,
                                        "EVP_PKEY_decapsulate_init(rctx, NULL)",&_LC71,uVar3,1);
                    puVar6 = extraout_RDX_10;
                    if (iVar2 != 0) {
                      uVar3 = EVP_PKEY_CTX_set_kem_op(ctx_01,"RSASVE");
                      iVar2 = test_int_eq("test/evp_libctx_test.c",599,
                                          "EVP_PKEY_CTX_set_kem_op(rctx, \"RSASVE\")",&_LC71,uVar3,1
                                         );
                      puVar6 = extraout_RDX_11;
                      if (iVar2 != 0) {
                        uVar3 = EVP_PKEY_decapsulate(ctx_01,0,0,local_248,local_360);
                        iVar2 = test_int_eq("test/evp_libctx_test.c",0x259,
                                            "EVP_PKEY_decapsulate(rctx, NULL, NULL, ct, ctlen)",
                                            &_LC4,uVar3,0);
                        puVar6 = extraout_RDX_12;
                        if (iVar2 != 0) {
                          uVar3 = EVP_PKEY_decapsulate(ctx_01,0,&local_358,local_248,local_360);
                          iVar2 = test_int_eq("test/evp_libctx_test.c",0x25a,
                                              "EVP_PKEY_decapsulate(rctx, NULL, &unwraplen, ct, ctlen)"
                                              ,&_LC71,uVar3,1);
                          puVar6 = extraout_RDX_13;
                          if (iVar2 != 0) {
                            uVar3 = EVP_PKEY_decapsulate
                                              (ctx_01,local_148,&local_358,local_248,local_360);
                            uVar5 = test_int_eq("test/evp_libctx_test.c",0x25c,
                                                "EVP_PKEY_decapsulate(rctx, unwrap, &unwraplen, ct, ctlen)"
                                                ,&_LC71,uVar3,1);
                            puVar6 = extraout_RDX_14;
                            if (uVar5 != 0) {
                              puVar6 = local_348;
                              iVar2 = test_mem_eq("test/evp_libctx_test.c",0x25e,"unwrap","secret",
                                                  local_148,local_358,local_348,local_350);
                              uVar5 = (uint)(iVar2 != 0);
                            }
                            goto LAB_00101927;
                          }
                        }
                      }
                    }
                  }
                  uVar5 = 0;
                  goto LAB_00101927;
                }
              }
            }
          }
          uVar5 = 0;
          ctx_01 = (EVP_PKEY_CTX *)0x0;
          goto LAB_00101927;
        }
      }
      uVar5 = 0;
      ctx_00 = (EVP_PKEY_CTX *)0x0;
      ctx_01 = (EVP_PKEY_CTX *)0x0;
    }
  }
LAB_00101927:
  iVar2 = fips_provider_version_match(libctx,">=3.4.0",puVar6);
  if (iVar2 != 0) {
    local_360 = 1;
    uVar3 = EVP_PKEY_encapsulate(ctx_00,local_248,&local_360,local_348,&local_350);
    uVar4 = test_int_eq("test/evp_libctx_test.c",0x263,
                        "EVP_PKEY_encapsulate(dctx, ct, &ctlen, secret, &secretlen)",&_LC4,uVar3,0);
    local_358 = 1;
    if (uVar4 != 0) {
      uVar4 = uVar5;
    }
    uVar3 = EVP_PKEY_decapsulate(ctx_01,local_148,&local_358,local_248,local_360);
    uVar5 = test_int_eq("test/evp_libctx_test.c",0x267,
                        "EVP_PKEY_decapsulate(rctx, unwrap, &unwraplen, ct, ctlen)",&_LC4,uVar3,0);
    if (uVar5 != 0) {
      uVar5 = uVar4;
    }
  }
  EVP_PKEY_free(local_370);
  EVP_PKEY_free(local_368);
  EVP_PKEY_CTX_free(ctx_01);
  EVP_PKEY_CTX_free(ctx_00);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



uint kem_rsa_params(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  EVP_PKEY *local_268;
  EVP_PKEY *local_260;
  ulong local_258;
  ulong local_250;
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
  local_268 = (EVP_PKEY *)0x0;
  local_260 = (EVP_PKEY *)0x0;
  local_168 = (undefined1  [16])0x0;
  local_258 = 0;
  local_250 = 0;
  local_158 = (undefined1  [16])0x0;
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
  iVar1 = rsa_keygen_constprop_0(&local_268,&local_260);
  iVar1 = test_true("test/evp_libctx_test.c",0x29e,"rsa_keygen(2048, &pub, &priv)",iVar1 != 0);
  if (iVar1 == 0) {
    uVar2 = 0;
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    pkey = local_260;
    goto LAB_00102026;
  }
  ctx_00 = (EVP_PKEY_CTX *)0x0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,local_268,0);
  uVar2 = test_ptr("test/evp_libctx_test.c",0x29f,
                   "pubctx = EVP_PKEY_CTX_new_from_pkey(libctx, pub, NULL)",ctx);
  pkey = local_260;
  if (uVar2 == 0) goto LAB_00102026;
  ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,local_260,0);
  iVar1 = test_ptr("test/evp_libctx_test.c",0x2a0,
                   "privctx = EVP_PKEY_CTX_new_from_pkey(libctx, priv, NULL)",ctx_00);
  if (iVar1 != 0) {
    uVar3 = EVP_PKEY_CTX_set_kem_op(ctx,"RSASVE");
    iVar1 = test_int_eq("test/evp_libctx_test.c",0x2a2,"EVP_PKEY_CTX_set_kem_op(pubctx, \"RSASVE\")"
                        ,&_LC21,uVar3,0xfffffffe);
    if (iVar1 != 0) {
      uVar3 = EVP_PKEY_encapsulate_init(0,0);
      iVar1 = test_int_eq("test/evp_libctx_test.c",0x2a4,"EVP_PKEY_encapsulate_init(NULL, NULL)",
                          &_LC4,uVar3,0);
      if (iVar1 != 0) {
        uVar3 = EVP_PKEY_encapsulate(0,0,0,0,0);
        iVar1 = test_int_eq("test/evp_libctx_test.c",0x2a5,
                            "EVP_PKEY_encapsulate(NULL, NULL, NULL, NULL, NULL)",&_LC4,uVar3,0);
        if (iVar1 != 0) {
          uVar3 = EVP_PKEY_decapsulate_init(0,0);
          iVar1 = test_int_eq("test/evp_libctx_test.c",0x2a6,"EVP_PKEY_decapsulate_init(NULL, NULL)"
                              ,&_LC4,uVar3,0);
          if (iVar1 != 0) {
            uVar3 = EVP_PKEY_decapsulate(0,0,0,0,0);
            iVar1 = test_int_eq("test/evp_libctx_test.c",0x2a7,
                                "EVP_PKEY_decapsulate(NULL, NULL, NULL, NULL, 0)",&_LC4,uVar3,0);
            if (iVar1 != 0) {
              uVar3 = EVP_PKEY_encapsulate(ctx,0,0,0,0);
              iVar1 = test_int_eq("test/evp_libctx_test.c",0x2a9,
                                  "EVP_PKEY_encapsulate(pubctx, NULL, NULL, NULL, NULL)",&_LC111,
                                  uVar3,0xffffffff);
              if (iVar1 != 0) {
                uVar3 = EVP_PKEY_decapsulate(ctx_00,0,0,0,0);
                iVar1 = test_int_eq("test/evp_libctx_test.c",0x2aa,
                                    "EVP_PKEY_decapsulate(privctx, NULL, NULL, NULL, 0)",&_LC4,uVar3
                                    ,0);
                if (iVar1 != 0) {
                  uVar3 = EVP_PKEY_decapsulate_init(ctx,0);
                  iVar1 = test_int_eq("test/evp_libctx_test.c",0x2ac,
                                      "EVP_PKEY_decapsulate_init(pubctx, NULL)",&_LC71,uVar3,1);
                  if (iVar1 != 0) {
                    uVar3 = EVP_PKEY_CTX_set_kem_op(ctx,"RSASVE");
                    iVar1 = test_int_eq("test/evp_libctx_test.c",0x2ad,
                                        "EVP_PKEY_CTX_set_kem_op(pubctx, \"RSASVE\")",&_LC71,uVar3,1
                                       );
                    if (iVar1 != 0) {
                      uVar3 = EVP_PKEY_decapsulate(ctx,local_248,&local_250,local_148,0x100);
                      iVar1 = test_int_eq("test/evp_libctx_test.c",0x2ae,
                                          "EVP_PKEY_decapsulate(pubctx, secret, &secretlen, ct, sizeof(ct))"
                                          ,&_LC4,uVar3,0);
                      if (iVar1 != 0) {
                        iVar1 = test_uchar_eq("test/evp_libctx_test.c",0x2b0,"secret[0]",&_LC4,
                                              local_248[0],0);
                        if (iVar1 != 0) {
                          uVar3 = EVP_PKEY_encapsulate_init(ctx,0);
                          iVar1 = test_int_eq("test/evp_libctx_test.c",0x2b2,
                                              "EVP_PKEY_encapsulate_init(pubctx, NULL)",&_LC71,uVar3
                                              ,1);
                          if (iVar1 != 0) {
                            if (is_fips_lt_3_5 == 0) {
                              uVar3 = EVP_PKEY_encapsulate(ctx,0,&local_258,0,&local_250);
                              iVar1 = test_int_eq("test/evp_libctx_test.c",0x2b4,
                                                  "EVP_PKEY_encapsulate(pubctx, NULL, &ctlen, NULL, &secretlen)"
                                                  ,&_LC71,uVar3,1);
                              if (((iVar1 != 0) &&
                                  (iVar1 = test_true("test/evp_libctx_test.c",0x2b5,
                                                     "ctlen <= sizeof(ct)",local_258 < 0x101),
                                  iVar1 != 0)) &&
                                 (iVar1 = test_true("test/evp_libctx_test.c",0x2b6,
                                                    "secretlen <= sizeof(secret)",local_250 < 0x101)
                                 , iVar1 != 0)) {
                                uVar3 = EVP_PKEY_encapsulate
                                                  (ctx,local_148,&local_258,local_248,&local_250);
                                iVar1 = test_int_eq("test/evp_libctx_test.c",0x2b7,
                                                                                                        
                                                  "EVP_PKEY_encapsulate(pubctx, ct, &ctlen, secret, &secretlen)"
                                                  ,&_LC71,uVar3,1);
                                if (iVar1 != 0) goto LAB_001023a6;
                              }
                            }
                            else {
LAB_001023a6:
                              uVar3 = EVP_PKEY_CTX_set_kem_op(ctx,&_LC76);
                              iVar1 = test_int_eq("test/evp_libctx_test.c",0x2b9,
                                                  "EVP_PKEY_CTX_set_kem_op(pubctx, \"RSA\")",&_LC4,
                                                  uVar3,0);
                              if (iVar1 != 0) {
                                uVar3 = EVP_PKEY_CTX_set_kem_op(ctx,0);
                                iVar1 = test_int_eq("test/evp_libctx_test.c",0x2ba,
                                                    "EVP_PKEY_CTX_set_kem_op(pubctx, NULL)",&_LC4,
                                                    uVar3,0);
                                if (iVar1 != 0) {
                                  uVar3 = EVP_PKEY_CTX_set_kem_op(0,"RSASVE");
                                  iVar1 = test_int_eq("test/evp_libctx_test.c",699,
                                                      "EVP_PKEY_CTX_set_kem_op(NULL, \"RSASVE\")",
                                                      &_LC4,uVar3,0);
                                  if (iVar1 != 0) {
                                    uVar3 = EVP_PKEY_CTX_set_kem_op(0,0);
                                    iVar1 = test_int_eq("test/evp_libctx_test.c",700,
                                                        "EVP_PKEY_CTX_set_kem_op(NULL, NULL)",&_LC4,
                                                        uVar3,0);
                                    if (iVar1 != 0) {
                                      uVar3 = EVP_PKEY_CTX_set_kem_op(ctx,"RSASVE");
                                      iVar1 = test_int_eq("test/evp_libctx_test.c",0x2be,
                                                                                                                    
                                                  "EVP_PKEY_CTX_set_kem_op(pubctx, \"RSASVE\")",
                                                  &_LC71,uVar3,1);
                                      if (iVar1 != 0) {
                                        uVar3 = EVP_PKEY_encapsulate(ctx,0,&local_258,0,0);
                                        iVar1 = test_int_eq("test/evp_libctx_test.c",0x2bf,
                                                                                                                        
                                                  "EVP_PKEY_encapsulate(pubctx, NULL, &ctlen, NULL, NULL)"
                                                  ,&_LC71,uVar3,1);
                                        if (iVar1 != 0) {
                                          uVar3 = EVP_PKEY_encapsulate
                                                            (ctx,local_148,&local_258,local_248,0);
                                          iVar1 = test_int_eq("test/evp_libctx_test.c",0x2c0,
                                                                                                                            
                                                  "EVP_PKEY_encapsulate(pubctx, ct, &ctlen, secret, NULL)"
                                                  ,&_LC71,uVar3,1);
                                          if (iVar1 != 0) {
                                            uVar3 = EVP_PKEY_encapsulate(ctx,0,&local_258,0,0);
                                            iVar1 = test_int_eq("test/evp_libctx_test.c",0x2c1,
                                                                                                                                
                                                  "EVP_PKEY_encapsulate(pubctx, NULL, &ctlen, NULL, NULL)"
                                                  ,&_LC71,uVar3,1);
                                            if (iVar1 != 0) {
                                              uVar3 = EVP_PKEY_encapsulate(ctx,0,0,0,&local_250);
                                              iVar1 = test_int_eq("test/evp_libctx_test.c",0x2c3,
                                                                                                                                    
                                                  "EVP_PKEY_encapsulate(pubctx, NULL, NULL, NULL, &secretlen)"
                                                  ,&_LC71,uVar3,1);
                                              if (iVar1 != 0) {
                                                uVar3 = EVP_PKEY_encapsulate
                                                                  (ctx,local_148,0,local_248,
                                                                   &local_250);
                                                iVar1 = test_int_eq("test/evp_libctx_test.c",0x2c4,
                                                                                                                                        
                                                  "EVP_PKEY_encapsulate(pubctx, ct, NULL, secret, &secretlen)"
                                                  ,&_LC71,uVar3,1);
                                                if (iVar1 != 0) {
                                                  uVar3 = EVP_PKEY_encapsulate(ctx,0,0,0,0);
                                                  iVar1 = test_int_eq("test/evp_libctx_test.c",0x2c6
                                                                      ,
                                                  "EVP_PKEY_encapsulate(pubctx, NULL, NULL, NULL, NULL)"
                                                  ,&_LC4,uVar3,0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_encapsulate
                                                                      (ctx,0,&local_258,0,0);
                                                    iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                        0x2c7,
                                                  "EVP_PKEY_encapsulate(pubctx, NULL, &ctlen, NULL, NULL)"
                                                  ,&_LC71,uVar3,1);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_encapsulate
                                                                      (ctx,0,0,0,&local_250);
                                                    iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                        0x2c8,
                                                  "EVP_PKEY_encapsulate(pubctx, NULL, NULL, NULL, &secretlen)"
                                                  ,&_LC71,uVar3,1);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_encapsulate
                                                                      (ctx,0,&local_258,0,&local_250
                                                                      );
                                                    iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                        0x2c9,
                                                  "EVP_PKEY_encapsulate(pubctx, NULL, &ctlen, NULL, &secretlen)"
                                                  ,&_LC71,uVar3,1);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_encapsulate
                                                                      (ctx,local_148,&local_258,0,0)
                                                    ;
                                                    iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                        0x2cb,
                                                  "EVP_PKEY_encapsulate(pubctx, ct, &ctlen, NULL, NULL)"
                                                  ,&_LC4,uVar3,0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_encapsulate
                                                                      (ctx,local_148,0,local_248,0);
                                                    iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                        0x2cd,
                                                  "EVP_PKEY_encapsulate(pubctx, ct, NULL, secret, NULL)"
                                                  ,&_LC71,uVar3,1);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_decapsulate_init(ctx_00,0);
                                                    iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                        0x2cf,
                                                  "EVP_PKEY_decapsulate_init(privctx, NULL)",&_LC71,
                                                  uVar3,1);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_CTX_set_kem_op(ctx_00,"RSASVE")
                                                    ;
                                                    iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                        0x2d0,
                                                  "EVP_PKEY_CTX_set_kem_op(privctx, \"RSASVE\")",
                                                  &_LC71,uVar3,1);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_decapsulate
                                                                      (ctx_00,local_248,0,local_148,
                                                                       0x100);
                                                    iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                        0x2d1,
                                                  "EVP_PKEY_decapsulate(privctx, secret, NULL, ct, sizeof(ct))"
                                                  ,&_LC71,uVar3,1);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_decapsulate
                                                                      (ctx_00,0,&local_250,local_148
                                                                       ,0x100);
                                                    iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                        0x2d2,
                                                  "EVP_PKEY_decapsulate(privctx, NULL, &secretlen, ct, sizeof(ct))"
                                                  ,&_LC71,uVar3,1);
                                                  if ((iVar1 != 0) &&
                                                     (iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                          0x2d3,"secretlen",&_LC136,
                                                                          local_250 & 0xffffffff,
                                                                          0x100), iVar1 != 0)) {
                                                    uVar3 = EVP_PKEY_decapsulate
                                                                      (ctx_00,0,0,local_148,0x100);
                                                    iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                        0x2d5,
                                                  "EVP_PKEY_decapsulate(privctx, NULL, NULL, ct, sizeof(ct))"
                                                  ,&_LC4,uVar3,0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_decapsulate
                                                                      (ctx_00,local_248,&local_250,0
                                                                       ,0);
                                                    iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                        0x2d6,
                                                  "EVP_PKEY_decapsulate(privctx, secret, &secretlen, NULL, 0)"
                                                  ,&_LC4,uVar3,0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_decapsulate
                                                                      (ctx_00,local_248,&local_250,0
                                                                       ,0x100);
                                                    iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                        0x2d7,
                                                  "EVP_PKEY_decapsulate(privctx, secret, &secretlen, NULL, sizeof(ct))"
                                                  ,&_LC4,uVar3,0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_decapsulate
                                                                      (ctx_00,local_248,&local_250,
                                                                       local_148,0);
                                                    iVar1 = test_int_eq("test/evp_libctx_test.c",
                                                                        0x2d8,
                                                  "EVP_PKEY_decapsulate(privctx, secret, &secretlen, ct, 0)"
                                                  ,&_LC4,uVar3,0);
                                                  uVar2 = (uint)(iVar1 != 0);
                                                  goto LAB_00102026;
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
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_00102026:
  EVP_PKEY_free(local_268);
  EVP_PKEY_free(pkey);
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_CTX_free(ctx_00);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



uint test_dh_safeprime_param_keygen(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  EVP_PKEY *pkey;
  DH *dh;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  int local_7c;
  EVP_PKEY_CTX *local_78;
  EVP_PKEY *local_70;
  EVP_PKEY *local_60;
  undefined *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (EVP_PKEY *)0x0;
  local_58[0] = &_LC56;
  local_58[1] = &_LC57;
  uVar2 = param_1 / 9;
  uVar8 = param_1 % 3;
  uVar7 = (param_1 / 3) % 3;
  if ((uVar2 == 0 && uVar8 == 2) && (uVar7 == 1)) {
    puVar4 = &_LC55;
    local_7c = 1;
    puVar5 = &_LC57;
    local_58[2] = &_LC55;
LAB_00102cc9:
    puVar6 = local_58[(int)uVar2];
  }
  else {
    puVar4 = &_LC54;
    local_58[2] = &_LC55;
    if (uVar8 < 3) {
      puVar4 = local_58[(int)uVar8];
    }
    local_58[2] = &_LC55;
    puVar5 = &_LC54;
    local_58[0] = &_LC56;
    local_58[1] = &_LC57;
    if (uVar7 < 3) {
      puVar5 = local_58[(int)uVar7];
    }
    local_58[2] = &_LC55;
    puVar6 = &_LC54;
    local_7c = 0;
    local_58[0] = &_LC56;
    local_58[1] = &_LC57;
    if (uVar2 < 3) goto LAB_00102cc9;
  }
  local_58[2] = &_LC55;
  local_58[1] = &_LC57;
  local_58[0] = &_LC56;
  test_note("Testing with (p, q, g) = (%s, %s, %s)",puVar6,puVar5,puVar4);
  pkey = EVP_PKEY_new();
  iVar1 = test_ptr("test/evp_libctx_test.c",0xd2,"pkey_parm = EVP_PKEY_new()",pkey);
  if (iVar1 == 0) {
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    dh = (DH *)0x0;
    local_70 = (EVP_PKEY *)0x0;
    local_78 = (EVP_PKEY_CTX *)0x0;
    uVar2 = 0;
    goto LAB_00102bf2;
  }
  dh = DH_new();
  iVar1 = test_ptr("test/evp_libctx_test.c",0xd3,"dh = DH_new()",dh);
  if (iVar1 == 0) {
LAB_00102c8b:
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    uVar2 = 0;
    local_70 = (EVP_PKEY *)0x0;
    local_78 = (EVP_PKEY_CTX *)0x0;
  }
  else {
    a = BN_dup(*(BIGNUM **)(bn_1 + (long)(int)uVar2 * 8));
    iVar1 = test_ptr("test/evp_libctx_test.c",0xd4,"p = BN_dup(bn[pind])",a);
    if (iVar1 == 0) {
      local_70 = (EVP_PKEY *)0x0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      local_78 = (EVP_PKEY_CTX *)0x0;
      uVar2 = 0;
      goto LAB_00102bf2;
    }
    a_00 = BN_dup(*(BIGNUM **)(bn_1 + (long)(int)uVar7 * 8));
    iVar1 = test_ptr("test/evp_libctx_test.c",0xd5,"q = BN_dup(bn[qind])",a_00);
    if (iVar1 == 0) {
      local_70 = (EVP_PKEY *)0x0;
      a_01 = (BIGNUM *)0x0;
      local_78 = (EVP_PKEY_CTX *)0x0;
      uVar2 = 0;
      goto LAB_00102bf2;
    }
    a_01 = BN_dup(*(BIGNUM **)(bn_1 + (long)(int)uVar8 * 8));
    uVar2 = test_ptr("test/evp_libctx_test.c",0xd6,"g = BN_dup(bn[gind])",a_01);
    if (uVar2 != 0) {
      iVar1 = DH_set0_pqg(dh,a,a_00,a_01);
      uVar2 = test_true("test/evp_libctx_test.c",0xd7,"DH_set0_pqg(dh, p, q, g)",iVar1 != 0);
      if (uVar2 != 0) {
        iVar1 = EVP_PKEY_assign(pkey,0x1c,dh);
        iVar1 = test_true("test/evp_libctx_test.c",0xdb,"EVP_PKEY_assign_DH(pkey_parm, dh)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          local_78 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,pkey,0);
          iVar1 = test_ptr("test/evp_libctx_test.c",0xdf,
                           "gen_ctx = EVP_PKEY_CTX_new_from_pkey(libctx, pkey_parm, NULL)",local_78)
          ;
          if (iVar1 != 0) {
            iVar1 = EVP_PKEY_keygen_init(local_78);
            iVar1 = test_int_gt("test/evp_libctx_test.c",0xe0,"EVP_PKEY_keygen_init(gen_ctx)",&_LC4,
                                iVar1,0);
            if (iVar1 == 0) {
              a_01 = (BIGNUM *)0x0;
              a_00 = (BIGNUM *)0x0;
              a = (BIGNUM *)0x0;
              dh = (DH *)0x0;
              local_70 = (EVP_PKEY *)0x0;
              uVar2 = 0;
              goto LAB_00102bf2;
            }
            iVar1 = EVP_PKEY_keygen(local_78,&local_60);
            iVar1 = test_int_eq("test/evp_libctx_test.c",0xe1,"EVP_PKEY_keygen(gen_ctx, &pkey)",
                                "expected",iVar1,local_7c);
            if (iVar1 != 0) {
              if (local_7c == 0) {
                a_01 = (BIGNUM *)0x0;
                a_00 = (BIGNUM *)0x0;
                a = (BIGNUM *)0x0;
                local_70 = (EVP_PKEY *)0x0;
                dh = (DH *)0x0;
                uVar2 = 1;
              }
              else {
                local_70 = (EVP_PKEY *)EVP_PKEY_dup(local_60);
                iVar1 = test_ptr("test/evp_libctx_test.c",0xe5,"dup_pk = EVP_PKEY_dup(pkey)",
                                 local_70);
                if (iVar1 == 0) {
                  a_01 = (BIGNUM *)0x0;
                  a_00 = (BIGNUM *)0x0;
                  a = (BIGNUM *)0x0;
                  dh = (DH *)0x0;
                  uVar2 = 0;
                }
                else {
                  uVar3 = EVP_PKEY_eq(local_60,local_70);
                  iVar1 = test_int_eq("test/evp_libctx_test.c",0xe6,"EVP_PKEY_eq(pkey, dup_pk)",
                                      &_LC71,uVar3,1);
                  a_01 = (BIGNUM *)0x0;
                  a_00 = (BIGNUM *)0x0;
                  a = (BIGNUM *)0x0;
                  uVar2 = (uint)(iVar1 != 0);
                  dh = (DH *)0x0;
                }
              }
              goto LAB_00102bf2;
            }
          }
          local_70 = (EVP_PKEY *)0x0;
          a_01 = (BIGNUM *)0x0;
          dh = (DH *)0x0;
          uVar2 = 0;
          a_00 = (BIGNUM *)0x0;
          a = (BIGNUM *)0x0;
          goto LAB_00102bf2;
        }
        goto LAB_00102c8b;
      }
    }
    local_70 = (EVP_PKEY *)0x0;
    local_78 = (EVP_PKEY_CTX *)0x0;
  }
LAB_00102bf2:
  EVP_PKEY_free(local_60);
  EVP_PKEY_free(local_70);
  EVP_PKEY_CTX_free(local_78);
  EVP_PKEY_free(pkey);
  DH_free(dh);
  BN_free(a_01);
  BN_free(a_00);
  BN_free(a);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return test_options_6;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *__s1;
  
  uVar3 = 0;
  __s1 = "default";
LAB_00103003:
  iVar1 = opt_next();
  do {
    if (iVar1 == 0) {
      iVar1 = test_get_libctx(&libctx,&nullprov,uVar3,&libprov,__s1);
      if (iVar1 == 0) {
        return 0;
      }
      add_test("test_evp_cipher_api_safety",test_evp_cipher_api_safety);
      iVar1 = strcmp(__s1,"fips");
      if (iVar1 == 0) {
        is_fips = 1;
LAB_001030b4:
        iVar1 = fips_provider_version_lt(libctx,3,5,0);
        is_fips_lt_3_5 = (uint)(iVar1 != 0);
        if ((is_fips != 0) && (iVar1 = fips_provider_version_lt(libctx,3,4,0), iVar1 == 0))
        goto LAB_0010311d;
      }
      else {
        if (is_fips != 0) goto LAB_001030b4;
        is_fips_lt_3_5 = 0;
      }
      add_all_tests("test_dsa_param_keygen",test_dsa_param_keygen,0x1b,1);
LAB_0010311d:
      add_all_tests("test_dh_safeprime_param_keygen",test_dh_safeprime_param_keygen,0x1b,1);
      add_test("dhx_cert_load",dhx_cert_load);
      cipher_names = OPENSSL_sk_new(name_cmp);
      iVar1 = test_ptr("test/evp_libctx_test.c",0x335,
                       "cipher_names = sk_OPENSSL_STRING_new(name_cmp)",cipher_names);
      if (iVar1 == 0) {
        return 0;
      }
      EVP_CIPHER_do_all_provided(libctx,collect_cipher_names,cipher_names);
      uVar2 = OPENSSL_sk_num(cipher_names);
      add_all_tests("test_cipher_reinit",test_cipher_reinit,uVar2,1);
      uVar2 = OPENSSL_sk_num(cipher_names);
      add_all_tests("test_cipher_reinit_partialupdate",test_cipher_reinit_partialupdate,uVar2,1);
      add_test("kem_rsa_gen_recover",kem_rsa_gen_recover);
      add_test("kem_rsa_params",kem_rsa_params);
      add_test("kem_invalid_keytype",kem_invalid_keytype);
      add_test("test_cipher_tdes_randkey",0x100000);
      return 1;
    }
    if (iVar1 == 2) {
      __s1 = (char *)opt_arg();
      goto LAB_00103003;
    }
    if (2 < iVar1) break;
    if (iVar1 != 1) {
      return 0;
    }
    uVar3 = opt_arg();
    iVar1 = opt_next();
  } while( true );
  if (5 < iVar1 - 500U) {
    return 0;
  }
  goto LAB_00103003;
}



void cleanup_tests(void)

{
  OPENSSL_sk_pop_free(cipher_names,string_free);
  OSSL_PROVIDER_unload(libprov);
  OSSL_LIB_CTX_free(libctx);
  OSSL_PROVIDER_unload(nullprov);
  return;
}



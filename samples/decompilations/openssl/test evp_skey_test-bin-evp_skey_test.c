
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_skey_cipher(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  EVP_CIPHER_CTX *a;
  long in_FS_OFFSET;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0;
  local_58 = __LC15;
  uStack_50 = _UNK_001011f8;
  uVar4 = fake_cipher_start(libctx);
  uVar1 = test_ptr("test/evp_skey_test.c",0x31,"fake_prov = fake_cipher_start(libctx)",uVar4);
  if (uVar1 == 0) goto LAB_00100075;
  uVar5 = EVP_CIPHER_fetch(libctx,"fake_cipher","provider=fake-cipher");
  iVar2 = test_ptr("test/evp_skey_test.c",0x36,"fake_cipher",uVar5);
  if (iVar2 == 0) {
    a = (EVP_CIPHER_CTX *)0x0;
    uVar6 = 0;
    uVar1 = 0;
  }
  else {
    OSSL_PARAM_construct_utf8_string(&local_128,"key_name","fake key name",0);
    local_b8 = local_108;
    local_d8 = local_128;
    uStack_d0 = uStack_120;
    local_c8 = local_118;
    uStack_c0 = uStack_110;
    OSSL_PARAM_construct_octet_string(&local_128,"raw-bytes",&local_58,0x10);
    local_b0 = local_128;
    uStack_a8 = uStack_120;
    local_a0 = local_118;
    uStack_98 = uStack_110;
    local_90 = local_108;
    OSSL_PARAM_construct_end(&local_128);
    a = (EVP_CIPHER_CTX *)0x0;
    local_68 = local_108;
    local_88 = local_128;
    uStack_80 = uStack_120;
    local_78 = local_118;
    uStack_70 = uStack_110;
    uVar6 = EVP_SKEY_import(libctx,"fake_cipher","provider=fake-cipher",3,&local_d8);
    uVar1 = test_ptr("test/evp_skey_test.c",0x41,&_LC7,uVar6);
    if (uVar1 != 0) {
      a = EVP_CIPHER_CTX_new();
      iVar2 = test_ptr("test/evp_skey_test.c",0x45,"ctx = EVP_CIPHER_CTX_new()",a);
      if (iVar2 != 0) {
        uVar3 = EVP_CipherInit_SKEY(a,uVar5,uVar6,0,0,1,0);
        iVar2 = test_int_gt("test/evp_skey_test.c",0x46,
                            "EVP_CipherInit_SKEY(ctx, fake_cipher, key, NULL, 0, 1, NULL)",&_LC9,
                            uVar3,0);
        if (iVar2 != 0) {
          uVar3 = EVP_SKEY_export(uVar6,2,ossl_pkey_todata_cb,&local_f0);
          iVar2 = test_int_gt("test/evp_skey_test.c",0x4a,
                              "EVP_SKEY_export(key, OSSL_SKEYMGMT_SELECT_SECRET_KEY, ossl_pkey_todata_cb, &export_params)"
                              ,&_LC9,uVar3,0);
          if (iVar2 != 0) {
            uVar3 = EVP_SKEY_get0_raw_key(uVar6,&local_e8,&local_e0);
            iVar2 = test_int_gt("test/evp_skey_test.c",0x4f,
                                "EVP_SKEY_get0_raw_key(key, &export, &export_len)",&_LC9,uVar3,0);
            if (iVar2 != 0) {
              iVar2 = test_mem_eq("test/evp_skey_test.c",0x50,"export","import_key",local_e8,
                                  local_e0,&local_58,0x10);
              uVar1 = (uint)(iVar2 != 0);
              goto LAB_001001e7;
            }
          }
        }
      }
      uVar1 = 0;
    }
  }
LAB_001001e7:
  OSSL_PARAM_free(local_f0);
  EVP_SKEY_free(uVar6);
  EVP_CIPHER_free(uVar5);
  EVP_CIPHER_CTX_free(a);
  fake_cipher_finish(uVar4);
LAB_00100075:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_pkey_todata_cb(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = OSSL_PARAM_dup();
  *param_2 = uVar1;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_des_raw_skey(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  EVP_CIPHER_CTX *ctx;
  long in_FS_OFFSET;
  int local_f8 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0;
  local_b8 = __LC37;
  uStack_b0 = _UNK_00101218;
  local_a8 = __LC37;
  uStack_a0 = _UNK_00101218;
  deflprov = OSSL_PROVIDER_load(libctx,"default");
  uVar1 = test_ptr("test/evp_skey_test.c",0xc3,"deflprov",deflprov);
  if (uVar1 == 0) goto LAB_00100405;
  local_c8 = 0x101010101010101;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_d8 = __LC18;
  uStack_d0 = _UNK_00101208;
  local_78 = 0;
  local_48 = 0;
  local_e0 = 0x202020202020202;
  uVar4 = EVP_CIPHER_fetch(libctx,"DES-EDE3-CBC","provider=default");
  iVar2 = test_ptr("test/evp_skey_test.c",0xcd,"des_cbc",uVar4);
  if (iVar2 == 0) {
    uVar5 = 0;
    ctx = (EVP_CIPHER_CTX *)0x0;
    uVar1 = 0;
  }
  else {
    uVar5 = EVP_SKEY_import_raw_key(libctx,&_LC22,&local_d8,0x18,0);
    iVar2 = test_ptr("test/evp_skey_test.c",0xd3,&_LC23,uVar5);
    if (iVar2 != 0) {
      uVar3 = EVP_SKEY_get0_raw_key(uVar5,&local_f0,&local_e8);
      iVar2 = test_int_gt("test/evp_skey_test.c",0xd6,
                          "EVP_SKEY_get0_raw_key(skey, &export_key, &export_length)",&_LC9,uVar3,0);
      if (iVar2 != 0) {
        iVar2 = test_mem_eq("test/evp_skey_test.c",0xd7,"des_key","export_key",&local_d8,0x18,
                            local_f0,local_e8);
        if (iVar2 != 0) {
          local_f8[0] = 0x28;
          local_f8[1] = 0;
          ctx = EVP_CIPHER_CTX_new();
          iVar2 = test_ptr("test/evp_skey_test.c",0xdc,"ctx = EVP_CIPHER_CTX_new()",ctx);
          if (iVar2 != 0) {
            uVar3 = EVP_CipherInit_SKEY(ctx,uVar4,uVar5,&local_e0,8,1,0);
            iVar2 = test_int_gt("test/evp_skey_test.c",0xdd,
                                "EVP_CipherInit_SKEY(ctx, des_cbc, skey, des_iv, DES_IV_SIZE, 1, NULL)"
                                ,&_LC9,uVar3,0);
            if (iVar2 != 0) {
              iVar2 = EVP_CipherUpdate(ctx,local_98,local_f8,(uchar *)&local_b8,0x20);
              iVar2 = test_int_gt("test/evp_skey_test.c",0xde,
                                  "EVP_CipherUpdate(ctx, encrypted_skey, &enc_len, data, DATA_SIZE)"
                                  ,&_LC9,iVar2,0);
              if (iVar2 != 0) {
                iVar2 = EVP_CipherFinal(ctx,local_98 + local_f8[0],local_f8 + 1);
                iVar2 = test_int_gt("test/evp_skey_test.c",0xdf,
                                    "EVP_CipherFinal(ctx, encrypted_skey + enc_len, &fin_len)",&_LC9
                                    ,iVar2,0);
                if (iVar2 != 0) {
                  EVP_CIPHER_CTX_free(ctx);
                  ctx = EVP_CIPHER_CTX_new();
                  local_f8[0] = 0x28;
                  local_f8[1] = 0;
                  uVar3 = EVP_CipherInit_ex2(ctx,uVar4,&local_d8,&local_e0,1,0);
                  iVar2 = test_int_gt("test/evp_skey_test.c",0xe7,
                                      "EVP_CipherInit_ex2(ctx, des_cbc, des_key, des_iv, 1, NULL)",
                                      &_LC9,uVar3,0);
                  if (iVar2 != 0) {
                    iVar2 = EVP_CipherUpdate(ctx,local_68,local_f8,(uchar *)&local_b8,0x20);
                    iVar2 = test_int_gt("test/evp_skey_test.c",0xe8,
                                        "EVP_CipherUpdate(ctx, encrypted_raw, &enc_len, data, DATA_SIZE)"
                                        ,&_LC9,iVar2,0);
                    if (iVar2 != 0) {
                      iVar2 = EVP_CipherFinal(ctx,local_68 + local_f8[0],local_f8 + 1);
                      iVar2 = test_int_gt("test/evp_skey_test.c",0xe9,
                                          "EVP_CipherFinal(ctx, encrypted_raw + enc_len, &fin_len)",
                                          &_LC9,iVar2,0);
                      if (iVar2 != 0) {
                        iVar2 = test_mem_eq("test/evp_skey_test.c",0xea,"encrypted_skey",
                                            "encrypted_raw",local_98,0x28,local_68,0x28);
                        uVar1 = (uint)(iVar2 != 0);
                        goto LAB_00100586;
                      }
                    }
                  }
                }
              }
            }
          }
          uVar1 = 0;
          goto LAB_00100586;
        }
      }
    }
    uVar1 = 0;
    ctx = (EVP_CIPHER_CTX *)0x0;
  }
LAB_00100586:
  EVP_SKEY_free(uVar5);
  EVP_CIPHER_free(uVar4);
  EVP_CIPHER_CTX_free(ctx);
  OSSL_PROVIDER_unload(deflprov);
LAB_00100405:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_aes_raw_skey(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  EVP_CIPHER_CTX *ctx;
  long in_FS_OFFSET;
  int local_100 [2];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f8 = 0;
  local_c8 = __LC37;
  uStack_c0 = _UNK_00101218;
  local_b8 = __LC37;
  uStack_b0 = _UNK_00101218;
  deflprov = OSSL_PROVIDER_load(libctx,"default");
  uVar1 = test_ptr("test/evp_skey_test.c",0x77,"deflprov",deflprov);
  if (uVar1 == 0) goto LAB_001008b5;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_e8 = __LC18;
  uStack_e0 = _UNK_00101208;
  local_d8 = __LC37;
  uStack_d0 = _UNK_00101218;
  uVar4 = EVP_CIPHER_fetch(libctx,"AES-128-CBC","provider=default");
  iVar2 = test_ptr("test/evp_skey_test.c",0x81,"aes_cbc",uVar4);
  if (iVar2 == 0) {
    uVar5 = 0;
    ctx = (EVP_CIPHER_CTX *)0x0;
    uVar1 = 0;
  }
  else {
    uVar5 = EVP_SKEY_import_raw_key(libctx,"AES-128",&local_e8,0x10,0);
    iVar2 = test_ptr("test/evp_skey_test.c",0x86,&_LC23,uVar5);
    if (iVar2 != 0) {
      uVar3 = EVP_SKEY_get0_raw_key(uVar5,&local_f8,&local_f0);
      iVar2 = test_int_gt("test/evp_skey_test.c",0x89,
                          "EVP_SKEY_get0_raw_key(skey, &export_key, &export_length)",&_LC9,uVar3,0);
      if (iVar2 != 0) {
        iVar2 = test_mem_eq("test/evp_skey_test.c",0x8a,"aes_key","export_key",&local_e8,0x10,
                            local_f8,local_f0);
        if (iVar2 != 0) {
          local_100[0] = 0x30;
          local_100[1] = 0;
          ctx = EVP_CIPHER_CTX_new();
          iVar2 = test_ptr("test/evp_skey_test.c",0x8f,"ctx = EVP_CIPHER_CTX_new()",ctx);
          if (iVar2 != 0) {
            uVar3 = EVP_CipherInit_SKEY(ctx,uVar4,uVar5,&local_d8,0x10,1,0);
            iVar2 = test_int_gt("test/evp_skey_test.c",0x90,
                                "EVP_CipherInit_SKEY(ctx, aes_cbc, skey, aes_iv, IV_SIZE, 1, NULL)",
                                &_LC9,uVar3,0);
            if (iVar2 != 0) {
              iVar2 = EVP_CipherUpdate(ctx,local_a8,local_100,(uchar *)&local_c8,0x20);
              iVar2 = test_int_gt("test/evp_skey_test.c",0x91,
                                  "EVP_CipherUpdate(ctx, encrypted_skey, &enc_len, data, DATA_SIZE)"
                                  ,&_LC9,iVar2,0);
              if (iVar2 != 0) {
                iVar2 = EVP_CipherFinal(ctx,local_a8 + local_100[0],local_100 + 1);
                iVar2 = test_int_gt("test/evp_skey_test.c",0x92,
                                    "EVP_CipherFinal(ctx, encrypted_skey + enc_len, &fin_len)",&_LC9
                                    ,iVar2,0);
                if (iVar2 != 0) {
                  EVP_CIPHER_CTX_free(ctx);
                  ctx = EVP_CIPHER_CTX_new();
                  local_100[0] = 0x30;
                  local_100[1] = 0;
                  uVar3 = EVP_CipherInit_ex2(ctx,uVar4,&local_e8,&local_d8,1,0);
                  iVar2 = test_int_gt("test/evp_skey_test.c",0x9a,
                                      "EVP_CipherInit_ex2(ctx, aes_cbc, aes_key, aes_iv, 1, NULL)",
                                      &_LC9,uVar3,0);
                  if (iVar2 != 0) {
                    iVar2 = EVP_CipherUpdate(ctx,local_78,local_100,(uchar *)&local_c8,0x20);
                    iVar2 = test_int_gt("test/evp_skey_test.c",0x9b,
                                        "EVP_CipherUpdate(ctx, encrypted_raw, &enc_len, data, DATA_SIZE)"
                                        ,&_LC9,iVar2,0);
                    if (iVar2 != 0) {
                      iVar2 = EVP_CipherFinal(ctx,local_78 + local_100[0],local_100 + 1);
                      iVar2 = test_int_gt("test/evp_skey_test.c",0x9c,
                                          "EVP_CipherFinal(ctx, encrypted_raw + enc_len, &fin_len)",
                                          &_LC9,iVar2,0);
                      if (iVar2 != 0) {
                        iVar2 = test_mem_eq("test/evp_skey_test.c",0x9d,"encrypted_skey",
                                            "encrypted_raw",local_a8,0x30,local_78,0x30);
                        uVar1 = (uint)(iVar2 != 0);
                        goto LAB_00100a16;
                      }
                    }
                  }
                }
              }
            }
          }
          uVar1 = 0;
          goto LAB_00100a16;
        }
      }
    }
    uVar1 = 0;
    ctx = (EVP_CIPHER_CTX *)0x0;
  }
LAB_00100a16:
  OSSL_PARAM_free(0);
  OSSL_PARAM_BLD_free(0);
  EVP_SKEY_free(uVar5);
  EVP_CIPHER_free(uVar4);
  EVP_CIPHER_CTX_free(ctx);
  OSSL_PROVIDER_unload(deflprov);
LAB_001008b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool setup_tests(void)

{
  bool bVar1;
  
  libctx = OSSL_LIB_CTX_new();
  bVar1 = libctx != 0;
  if (bVar1) {
    add_test("test_skey_cipher",0x100000);
    add_test("test_aes_raw_skey",test_aes_raw_skey);
    add_test("test_des_raw_skey",test_des_raw_skey);
  }
  return bVar1;
}



void cleanup_tests(void)

{
  OSSL_LIB_CTX_free(libctx);
  return;
}



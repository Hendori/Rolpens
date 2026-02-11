
bool do_decrypt(uchar *param_1,uchar *param_2,int param_3,void *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  long in_FS_OFFSET;
  bool bVar3;
  int local_90;
  int local_8c;
  uchar local_88 [32];
  uchar local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = EVP_CIPHER_CTX_new();
  iVar1 = test_ptr("test/aesgcmtest.c",0x4b,"ctx = EVP_CIPHER_CTX_new()");
  if (iVar1 != 0) {
    cipher = EVP_aes_256_gcm();
    iVar1 = EVP_DecryptInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
    iVar1 = test_true("test/aesgcmtest.c",0x4c,
                      "EVP_DecryptInit_ex(ctx, EVP_aes_256_gcm(), NULL, NULL, NULL) > 0",0 < iVar1);
    if (iVar1 != 0) {
      iVar1 = EVP_DecryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,gcm_key,param_1);
      iVar1 = test_true("test/aesgcmtest.c",0x4e,
                        "EVP_DecryptInit_ex(ctx, NULL, NULL, gcm_key, iv) > 0",0 < iVar1);
      if (iVar1 != 0) {
        uVar2 = EVP_CIPHER_CTX_get_tag_length(ctx);
        iVar1 = test_int_eq("test/aesgcmtest.c",0x4f,"EVP_CIPHER_CTX_get_tag_length(ctx)",&_LC4,
                            uVar2,0x10);
        if (iVar1 != 0) {
          iVar1 = EVP_DecryptUpdate(ctx,(uchar *)0x0,&local_90,gcm_aad,0x10);
          iVar1 = test_true("test/aesgcmtest.c",0x50,
                            "EVP_DecryptUpdate(ctx, NULL, &outlen, gcm_aad, sizeof(gcm_aad)) > 0",
                            0 < iVar1);
          if (iVar1 != 0) {
            iVar1 = EVP_DecryptUpdate(ctx,local_88,&local_8c,param_2,param_3);
            iVar1 = test_true("test/aesgcmtest.c",0x52,
                              "EVP_DecryptUpdate(ctx, pt, &ptlen, ct, ct_len) > 0",0 < iVar1);
            if (iVar1 != 0) {
              iVar1 = EVP_CIPHER_CTX_ctrl(ctx,0x11,param_5,param_4);
              iVar1 = test_true("test/aesgcmtest.c",0x54,
                                "EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_AEAD_SET_TAG, tag_len, (void *)tag) > 0"
                                ,0 < iVar1);
              if (iVar1 != 0) {
                iVar1 = EVP_DecryptFinal_ex(ctx,local_68,&local_90);
                iVar1 = test_true("test/aesgcmtest.c",0x56,
                                  "EVP_DecryptFinal_ex(ctx, outbuf, &outlen) > 0",0 < iVar1);
                if (iVar1 != 0) {
                  iVar1 = test_mem_eq("test/aesgcmtest.c",0x57,"gcm_pt",&_LC10,gcm_pt,0x10,local_88,
                                      (long)local_8c);
                  bVar3 = iVar1 != 0;
                  goto LAB_0010005b;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_0010005b:
  EVP_CIPHER_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint badkeylen_test(void)

{
  uint uVar1;
  int iVar2;
  EVP_CIPHER *cipher;
  EVP_CIPHER_CTX *ctx;
  
  ctx = (EVP_CIPHER_CTX *)0x0;
  cipher = EVP_aes_192_gcm();
  uVar1 = test_ptr("test/aesgcmtest.c",0x6f,"cipher = EVP_aes_192_gcm()",cipher);
  if (uVar1 != 0) {
    ctx = EVP_CIPHER_CTX_new();
    iVar2 = test_ptr("test/aesgcmtest.c",0x70,"ctx = EVP_CIPHER_CTX_new()");
    if (iVar2 != 0) {
      iVar2 = EVP_EncryptInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
      iVar2 = test_true("test/aesgcmtest.c",0x71,"EVP_EncryptInit_ex(ctx, cipher, NULL, NULL, NULL)"
                        ,iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = EVP_CIPHER_CTX_set_key_length(ctx,2);
        iVar2 = test_int_le("test/aesgcmtest.c",0x72,"EVP_CIPHER_CTX_set_key_length(ctx, 2)",&_LC14,
                            iVar2,0);
        uVar1 = (uint)(iVar2 != 0);
        goto LAB_001002ad;
      }
    }
    uVar1 = 0;
  }
LAB_001002ad:
  EVP_CIPHER_CTX_free(ctx);
  return uVar1;
}



bool do_encrypt_constprop_0
               (long param_1,uchar *param_2,int *param_3,void *param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  undefined1 *iv;
  long in_FS_OFFSET;
  bool bVar3;
  int local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_5 = 0x10;
  ctx = EVP_CIPHER_CTX_new();
  iVar1 = test_ptr("test/aesgcmtest.c",0x2f,"ctx = EVP_CIPHER_CTX_new()");
  if (iVar1 != 0) {
    cipher = EVP_aes_256_gcm();
    iVar1 = EVP_EncryptInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
    iVar1 = test_true("test/aesgcmtest.c",0x30,
                      "EVP_EncryptInit_ex(ctx, EVP_aes_256_gcm(), NULL, NULL, NULL) > 0",0 < iVar1);
    if (iVar1 != 0) {
      iv = gcm_iv;
      if (param_1 != 0) {
        iv = (uchar *)0x0;
      }
      iVar1 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,gcm_key,iv);
      iVar1 = test_true("test/aesgcmtest.c",0x32,
                        "EVP_EncryptInit_ex(ctx, NULL, NULL, gcm_key, iv_gen != NULL ? NULL : gcm_iv) > 0"
                        ,0 < iVar1);
      if (iVar1 != 0) {
        iVar1 = EVP_EncryptUpdate(ctx,(uchar *)0x0,&local_8c,gcm_aad,0x10);
        iVar1 = test_true("test/aesgcmtest.c",0x34,
                          "EVP_EncryptUpdate(ctx, NULL, &outlen, gcm_aad, sizeof(gcm_aad)) > 0",
                          0 < iVar1);
        if (iVar1 != 0) {
          iVar1 = EVP_EncryptUpdate(ctx,param_2,param_3,gcm_pt,0x10);
          iVar1 = test_true("test/aesgcmtest.c",0x36,
                            "EVP_EncryptUpdate(ctx, ct, ct_len, gcm_pt, sizeof(gcm_pt)) > 0",
                            0 < iVar1);
          if (iVar1 != 0) {
            iVar1 = EVP_EncryptFinal_ex(ctx,local_88,&local_8c);
            iVar1 = test_true("test/aesgcmtest.c",0x38,
                              "EVP_EncryptFinal_ex(ctx, outbuf, &outlen) > 0",0 < iVar1);
            if (iVar1 != 0) {
              uVar2 = EVP_CIPHER_CTX_get_tag_length(ctx);
              iVar1 = test_int_eq("test/aesgcmtest.c",0x39,"EVP_CIPHER_CTX_get_tag_length(ctx)",
                                  &_LC4,uVar2,0x10);
              if (iVar1 != 0) {
                iVar1 = EVP_CIPHER_CTX_ctrl(ctx,0x10,0x10,param_4);
                iVar1 = test_true("test/aesgcmtest.c",0x3a,
                                  "EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_AEAD_GET_TAG, 16, tag) > 0",
                                  0 < iVar1);
                if (iVar1 != 0) {
                  bVar3 = true;
                  if (param_1 != 0) {
                    iVar1 = EVP_CIPHER_CTX_get_original_iv(ctx,param_1,0xc,1);
                    bVar3 = iVar1 != 0;
                  }
                  iVar1 = test_true("test/aesgcmtest.c",0x3c,
                                    "iv_gen == NULL || EVP_CIPHER_CTX_get_original_iv(ctx, iv_gen, 12)"
                                    ,bVar3);
                  bVar3 = iVar1 != 0;
                  goto LAB_001003bd;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_001003bd:
  EVP_CIPHER_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool kat_test(void)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  int local_80;
  int local_7c;
  undefined1 local_78 [32];
  undefined1 local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  iVar1 = do_encrypt_constprop_0(0,local_58,&local_80,local_78,&local_7c);
  if (iVar1 != 0) {
    iVar1 = test_mem_eq("test/aesgcmtest.c",100,"gcm_ct",&_LC23,gcm_ct,0x10,local_58,(long)local_80)
    ;
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/aesgcmtest.c",0x65,"gcm_tag",&_LC25,gcm_tag,0x10,local_78,
                          (long)local_7c);
      if (iVar1 != 0) {
        iVar1 = do_decrypt(gcm_iv,local_58,local_80,local_78,local_7c);
        bVar2 = iVar1 != 0;
        goto LAB_0010062d;
      }
    }
  }
  bVar2 = false;
LAB_0010062d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ivgen_test(void)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  uVar2 = do_encrypt_constprop_0(local_78,local_48,&local_80,local_68,&local_7c);
  if ((int)uVar2 != 0) {
    iVar1 = do_decrypt(local_78,local_48,local_80,local_68,local_7c);
    uVar2 = (ulong)(iVar1 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("kat_test",kat_test);
  add_test("badkeylen_test",badkeylen_test);
  add_test("ivgen_test",ivgen_test);
  return 1;
}



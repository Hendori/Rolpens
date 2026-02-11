
undefined8 pkey_custom_check(void)

{
  return 0xbeef;
}



void md_names(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = EVP_CIPHER_fetch(param_2,"AES-128-CBC",0);
  iVar1 = test_ptr("test/evp_extra_test.c",0x127e,"aes128",uVar2);
  if (iVar1 == 0) {
    success = 0;
  }
  EVP_CIPHER_free(uVar2);
  return;
}



uint test_invalid_ctx_for_digest(void)

{
  uint uVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  uVar1 = test_ptr("test/evp_extra_test.c",0x194d,"mdctx",ctx);
  if (uVar1 != 0) {
    iVar2 = EVP_DigestUpdate(ctx,&_LC4,4);
    iVar2 = test_int_eq("test/evp_extra_test.c",0x1950,
                        "EVP_DigestUpdate(mdctx, \"test\", sizeof(\"test\") - 1)",&_LC5,iVar2,0);
    uVar1 = (uint)(iVar2 != 0);
    EVP_MD_CTX_free(ctx);
  }
  return uVar1;
}



uint test_sign_continuation(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  EVP_PKEY_CTX *ctx;
  EVP_MD_CTX *ctx_00;
  undefined8 uVar4;
  long in_FS_OFFSET;
  EVP_PKEY *local_168;
  size_t local_160;
  undefined5 local_155;
  undefined3 uStack_150;
  undefined5 uStack_14d;
  uchar local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_168 = (EVP_PKEY *)0x0;
  local_155 = 0x6542206f54;
  uStack_150 = 0x695320;
  uStack_14d = 0x64656e67;
  local_160 = 0x100;
  uVar3 = fake_rsa_start(testctx);
  uVar1 = test_ptr("test/evp_extra_test.c",0x1825,"fake_rsa = fake_rsa_start(testctx)",uVar3);
  if (uVar1 == 0) goto LAB_0010016c;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(testctx,&_LC9,"provider=fake-rsa");
  iVar2 = test_ptr("test/evp_extra_test.c",0x1829,
                   "pctx = EVP_PKEY_CTX_new_from_name(testctx, \"RSA\", \"provider=fake-rsa\")",ctx)
  ;
  if (iVar2 == 0) {
LAB_001001ff:
    ctx_00 = (EVP_MD_CTX *)0x0;
    uVar1 = 0;
  }
  else {
    iVar2 = EVP_PKEY_fromdata_init(ctx);
    iVar2 = test_true("test/evp_extra_test.c",0x182b,"EVP_PKEY_fromdata_init(pctx)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_001001ff;
    iVar2 = EVP_PKEY_fromdata(ctx,&local_168,0x87,0);
    iVar2 = test_true("test/evp_extra_test.c",0x182c,
                      "EVP_PKEY_fromdata(pctx, &pkey, EVP_PKEY_KEYPAIR, NULL)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_001001ff;
    iVar2 = test_ptr("test/evp_extra_test.c",0x182d,&_LC13,local_168);
    if (iVar2 == 0) goto LAB_001001ff;
    ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new();
    iVar2 = test_ptr("test/evp_extra_test.c",0x1831,"mctx = EVP_MD_CTX_new()",ctx_00);
    if (iVar2 == 0) {
LAB_00100520:
      uVar1 = 0;
    }
    else {
      iVar2 = EVP_DigestSignInit_ex(ctx_00,0,0,testctx,0,local_168,0);
      iVar2 = test_true("test/evp_extra_test.c",0x1832,
                        "EVP_DigestSignInit_ex(mctx, NULL, NULL, testctx, NULL, pkey, NULL)",
                        iVar2 != 0);
      if (iVar2 == 0) goto LAB_00100520;
      iVar2 = EVP_DigestSignUpdate(ctx_00,&local_155,0xd);
      iVar2 = test_true("test/evp_extra_test.c",0x1834,
                        "EVP_DigestSignUpdate(mctx, sigbuf, sizeof(sigbuf))",iVar2 != 0);
      if (iVar2 == 0) goto LAB_00100520;
      iVar2 = EVP_DigestSignFinal(ctx_00,local_148,&local_160);
      iVar2 = test_true("test/evp_extra_test.c",0x1835,
                        "EVP_DigestSignFinal(mctx, signature, &siglen)",iVar2 != 0);
      if (iVar2 == 0) goto LAB_00100520;
      iVar2 = EVP_DigestSignUpdate(ctx_00,&local_155,0xd);
      iVar2 = test_true("test/evp_extra_test.c",0x1836,
                        "EVP_DigestSignUpdate(mctx, sigbuf, sizeof(sigbuf))",iVar2 != 0);
      if (iVar2 == 0) goto LAB_00100520;
      iVar2 = EVP_DigestSignFinal(ctx_00,local_148,&local_160);
      iVar2 = test_true("test/evp_extra_test.c",0x1837,
                        "EVP_DigestSignFinal(mctx, signature, &siglen)",iVar2 != 0);
      if (iVar2 == 0) goto LAB_00100520;
      EVP_MD_CTX_free(ctx_00);
      ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new();
      uVar4 = test_ptr("test/evp_extra_test.c",0x183d,"mctx = EVP_MD_CTX_new()",ctx_00);
      if ((int)uVar4 == 0) goto LAB_00100520;
      iVar2 = EVP_DigestSignInit_ex(ctx_00,0,0,testctx,0,local_168);
      iVar2 = test_true("test/evp_extra_test.c",0x183e,
                        "EVP_DigestSignInit_ex(mctx, NULL, NULL, testctx, NULL, pkey, nodup_params)"
                        ,iVar2 != 0);
      if (iVar2 == 0) goto LAB_00100520;
      iVar2 = EVP_DigestSignUpdate(ctx_00,&local_155,0xd,uVar4);
      iVar2 = test_true("test/evp_extra_test.c",0x1840,
                        "EVP_DigestSignUpdate(mctx, sigbuf, sizeof(sigbuf))",iVar2 != 0);
      if (iVar2 == 0) goto LAB_00100520;
      iVar2 = EVP_DigestSignFinal(ctx_00,local_148,&local_160);
      iVar2 = test_true("test/evp_extra_test.c",0x1841,
                        "EVP_DigestSignFinal(mctx, signature, &siglen)",iVar2 != 0);
      if (iVar2 == 0) goto LAB_00100520;
      iVar2 = EVP_DigestSignUpdate(ctx_00,&local_155,0xd);
      iVar2 = test_false("test/evp_extra_test.c",0x1842,
                         "EVP_DigestSignUpdate(mctx, sigbuf, sizeof(sigbuf))",iVar2 != 0);
      if (iVar2 == 0) goto LAB_00100520;
      iVar2 = EVP_DigestSignFinal(ctx_00,local_148,&local_160);
      iVar2 = test_false("test/evp_extra_test.c",0x1843,
                         "EVP_DigestSignFinal(mctx, signature, &siglen)",iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
  }
  EVP_MD_CTX_free(ctx_00);
  EVP_PKEY_free(local_168);
  EVP_PKEY_CTX_free(ctx);
  fake_rsa_finish(uVar3);
LAB_0010016c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_ecx_not_private_key(int param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  EVP_PKEY *pkey;
  EVP_MD_CTX *ctx;
  ulong uVar8;
  void *ptr;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0x3020100;
  local_50 = 0;
  lVar1 = (long)param_1 * 0x28;
  iVar5 = *(int *)(keys + lVar1);
  if ((iVar5 == 0) || (iVar5 - 0x40aU < 2)) {
    iVar5 = test_skip("test/evp_extra_test.c",0x17e3,"signing not supported for X25519/X448/ML-KEM")
    ;
    goto LAB_001005a3;
  }
  lVar3 = *(long *)(keys + lVar1 + 0x10);
  if (lVar3 == 0) {
    iVar5 = test_skip("test/evp_extra_test.c",0x17e8,"no public key present");
    goto LAB_001005a3;
  }
  iVar2 = *(int *)(keys + lVar1 + 0x24);
  pcVar7 = OBJ_nid2sn(iVar5);
  pkey = (EVP_PKEY *)EVP_PKEY_new_raw_public_key_ex(testctx,pcVar7,0,lVar3,(long)iVar2);
  iVar5 = test_ptr("test/evp_extra_test.c",0x17ef,&_LC13,pkey);
  if (iVar5 == 0) {
    ptr = (void *)0x0;
    ctx = (EVP_MD_CTX *)0x0;
    iVar5 = 0;
  }
  else {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    ptr = (void *)0x0;
    iVar5 = test_ptr("test/evp_extra_test.c",0x17f2,"ctx = EVP_MD_CTX_new()");
    if (iVar5 != 0) {
      iVar5 = EVP_DigestSignInit(ctx,(EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,pkey);
      if (iVar5 == 1) {
        iVar5 = EVP_DigestSign(ctx,0,&local_50,&local_44,4);
        if (iVar5 != 1) goto LAB_0010068f;
        ptr = CRYPTO_malloc((int)local_50,"test/evp_extra_test.c",0x17fb);
        iVar5 = test_ptr("test/evp_extra_test.c",0x17fb,"mac = OPENSSL_malloc(maclen)",ptr);
        if (iVar5 == 0) goto LAB_0010062a;
        uVar6 = EVP_DigestSign(ctx,ptr,&local_50,&local_44,4);
        iVar5 = test_int_eq("test/evp_extra_test.c",0x17fe,
                            "EVP_DigestSign(ctx, mac, &maclen, msg, sizeof(msg))",&_LC5,uVar6,0);
        if (iVar5 == 0) {
          iVar5 = 0;
          goto LAB_0010062a;
        }
      }
      else {
LAB_0010068f:
        ptr = (void *)0x0;
      }
      uVar8 = ERR_peek_error();
      uVar4 = (uint)uVar8 & 0x7fffff;
      if ((uVar8 & 0x80000000) != 0) {
        uVar4 = (uint)uVar8 & 0x7fffffff;
      }
      iVar5 = 0;
      if (uVar4 == 0xdd) {
        ERR_clear_error();
        iVar5 = 1;
      }
    }
  }
LAB_0010062a:
  EVP_MD_CTX_free(ctx);
  CRYPTO_free(ptr);
  EVP_PKEY_free(pkey);
LAB_001005a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_ecx_short_keys(int param_1)

{
  int iVar1;
  char *pcVar2;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_11 = 1;
  pcVar2 = OBJ_nid2sn(*(int *)(ecxnids + (long)param_1 * 4));
  pkey = (EVP_PKEY *)EVP_PKEY_new_raw_private_key_ex(testctx,pcVar2,0,&local_11,1);
  iVar1 = test_ptr_null("test/evp_extra_test.c",0x17b4,&_LC13,pkey);
  if (iVar1 == 0) {
    EVP_PKEY_free(pkey);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 != 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_cipher_with_engine(void)

{
  int iVar1;
  uint uVar2;
  ENGINE *e;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER_CTX *out;
  EVP_CIPHER *cipher;
  long in_FS_OFFSET;
  int local_70;
  uchar local_6c [4];
  undefined8 local_68;
  undefined8 uStack_60;
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c[0] = '\0';
  local_6c[1] = '\x01';
  local_6c[2] = '\x02';
  local_6c[3] = '\x03';
  local_70 = 0;
  local_68 = __LC33;
  uStack_60 = _UNK_0011d2b8;
  e = ENGINE_by_id("dasync");
  iVar1 = test_ptr("test/evp_extra_test.c",0x1780,"e = ENGINE_by_id(engine_id)",e);
  if (iVar1 != 0) {
    iVar1 = ENGINE_init(e);
    iVar1 = test_true("test/evp_extra_test.c",0x1783,"ENGINE_init(e)",iVar1 != 0);
    if (iVar1 != 0) {
      ctx = EVP_CIPHER_CTX_new();
      out = (EVP_CIPHER_CTX *)0x0;
      uVar2 = test_ptr("test/evp_extra_test.c",0x1788,"ctx = EVP_CIPHER_CTX_new()",ctx);
      if (uVar2 != 0) {
        out = EVP_CIPHER_CTX_new();
        iVar1 = test_ptr("test/evp_extra_test.c",0x1789,"ctx2 = EVP_CIPHER_CTX_new()",out);
        if (iVar1 != 0) {
          cipher = EVP_aes_128_cbc();
          iVar1 = EVP_EncryptInit_ex(ctx,cipher,e,(uchar *)&local_68,(uchar *)&local_68);
          iVar1 = test_true("test/evp_extra_test.c",0x178c,
                            "EVP_EncryptInit_ex(ctx, EVP_aes_128_cbc(), e, keyiv, keyiv)",iVar1 != 0
                           );
          if (iVar1 != 0) {
            iVar1 = EVP_CIPHER_CTX_copy(out,ctx);
            iVar1 = test_true("test/evp_extra_test.c",0x1790,"EVP_CIPHER_CTX_copy(ctx2, ctx)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = EVP_EncryptUpdate(out,local_58,&local_70,local_6c,4);
              iVar1 = test_true("test/evp_extra_test.c",0x1793,
                                "EVP_EncryptUpdate(ctx2, buf, &len, msg, sizeof(msg))",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = EVP_EncryptFinal_ex(out,local_58 + local_70,&local_70);
                iVar1 = test_true("test/evp_extra_test.c",0x1794,
                                  "EVP_EncryptFinal_ex(ctx2, buf + len, &len)",iVar1 != 0);
                uVar2 = (uint)(iVar1 != 0);
                goto LAB_00100950;
              }
            }
          }
        }
        uVar2 = 0;
      }
LAB_00100950:
      EVP_CIPHER_CTX_free(ctx);
      EVP_CIPHER_CTX_free(out);
      ENGINE_finish(e);
      ENGINE_free(e);
      goto LAB_001008d3;
    }
    ENGINE_free(e);
  }
  uVar2 = 0;
LAB_001008d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_signatures_with_engine(int param_1)

{
  int iVar1;
  uint uVar2;
  ENGINE *e;
  EVP_CIPHER *pEVar3;
  EVP_PKEY *pkey;
  EVP_MD_CTX *ctx;
  EVP_MD *type;
  long in_FS_OFFSET;
  uchar *local_90;
  size_t local_88;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0x3020100;
  local_78 = __LC33;
  uStack_70 = _UNK_0011d2b8;
  local_68 = __LC33;
  uStack_60 = _UNK_0011d2b8;
  local_7e = 0x100;
  local_88 = 0;
  local_58 = __LC39;
  uStack_50 = _UNK_0011d2c8;
  e = ENGINE_by_id("dasync");
  iVar1 = test_ptr("test/evp_extra_test.c",0x1733,"e = ENGINE_by_id(engine_id)",e);
  if (iVar1 != 0) {
    iVar1 = ENGINE_init(e);
    iVar1 = test_true("test/evp_extra_test.c",0x1736,"ENGINE_init(e)",iVar1 != 0);
    if (iVar1 != 0) {
      if (param_1 == 1) {
        pEVar3 = EVP_aes_128_cbc();
        pkey = (EVP_PKEY *)EVP_PKEY_new_CMAC_key(e,&local_7e,2,pEVar3);
LAB_00100bc2:
        iVar1 = test_ptr("test/evp_extra_test.c",0x174c,&_LC13,pkey);
        if (iVar1 == 0) {
          local_90 = (uchar *)0x0;
          ctx = (EVP_MD_CTX *)0x0;
          uVar2 = 0;
        }
        else {
          ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
          uVar2 = test_ptr("test/evp_extra_test.c",0x174f,"ctx = EVP_MD_CTX_new()");
          local_90 = (uchar *)0x0;
          if (uVar2 != 0) {
            if (param_1 == 2) {
              iVar1 = EVP_DigestSignInit(ctx,(EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,pkey);
            }
            else {
              type = EVP_sha256();
              iVar1 = EVP_DigestSignInit(ctx,(EVP_PKEY_CTX **)0x0,type,(ENGINE *)0x0,pkey);
              if (param_1 == 0) {
                uVar2 = test_true("test/evp_extra_test.c",0x1755,&_LC35,iVar1 != 0);
                if (uVar2 != 0) {
                  iVar1 = EVP_DigestSignUpdate(ctx,&local_7c,4);
                  iVar1 = test_true("test/evp_extra_test.c",0x1758,
                                    "EVP_DigestSignUpdate(ctx, msg, sizeof(msg))",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = EVP_DigestSignFinal(ctx,(uchar *)0x0,&local_88);
                    iVar1 = test_true("test/evp_extra_test.c",0x1759,
                                      "EVP_DigestSignFinal(ctx, NULL, &maclen)",iVar1 != 0);
                    if (iVar1 != 0) {
                      local_90 = (uchar *)CRYPTO_malloc((int)local_88,"test/evp_extra_test.c",0x175c
                                                       );
                      uVar2 = test_ptr("test/evp_extra_test.c",0x175c,"mac = OPENSSL_malloc(maclen)"
                                       ,local_90);
                      if (uVar2 != 0) {
                        iVar1 = EVP_DigestSignFinal(ctx,local_90,&local_88);
                        iVar1 = test_true("test/evp_extra_test.c",0x175f,
                                          "EVP_DigestSignFinal(ctx, mac, &maclen)",iVar1 != 0);
                        uVar2 = (uint)(iVar1 != 0);
                      }
                      goto LAB_00100c60;
                    }
                  }
                  local_90 = (uchar *)0x0;
                  uVar2 = 0;
                }
                goto LAB_00100c60;
              }
            }
            iVar1 = test_false("test/evp_extra_test.c",0x1763,&_LC35,iVar1 != 0);
            local_90 = (uchar *)0x0;
            uVar2 = (uint)(iVar1 != 0);
          }
        }
      }
      else {
        if (param_1 == 2) {
          pkey = (EVP_PKEY *)EVP_PKEY_new_raw_private_key(0x43f,e,&local_68,0x20);
          goto LAB_00100bc2;
        }
        if (param_1 == 0) {
          pEVar3 = EVP_aes_128_cbc();
          pkey = (EVP_PKEY *)EVP_PKEY_new_CMAC_key(e,&local_78,0x10,pEVar3);
          goto LAB_00100bc2;
        }
        ctx = (EVP_MD_CTX *)0x0;
        uVar2 = 0;
        pkey = (EVP_PKEY *)0x0;
        test_error("test/evp_extra_test.c",0x1749,"Invalid test case");
        local_90 = (uchar *)0x0;
      }
LAB_00100c60:
      EVP_MD_CTX_free(ctx);
      CRYPTO_free(local_90);
      EVP_PKEY_free(pkey);
      ENGINE_finish(e);
      ENGINE_free(e);
      goto LAB_00100b32;
    }
    ENGINE_free(e);
  }
  uVar2 = 0;
LAB_00100b32:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 custom_ciph_cleanup(void)

{
  long lVar1;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  if (lVar1 != 0) {
    custom_ciph_cleanup_called = custom_ciph_cleanup_called + 1;
  }
  return 1;
}



undefined8 custom_ciph_init(void)

{
  long lVar1;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  if (lVar1 != 0) {
    custom_ciph_init_called = custom_ciph_init_called + 1;
    return 1;
  }
  return 0;
}



ulong test_custom_md_meth(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  EVP_MD *type_00;
  size_t cnt;
  ASN1_OBJECT *obj;
  long in_FS_OFFSET;
  uint local_9c;
  char local_96 [86];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_strncpy(local_96,"Test Message\n",0xe);
  if (testctx != 0) {
    uVar4 = test_skip("test/evp_extra_test.c",0x168a,"Non-default libctx");
    goto LAB_00100f37;
  }
  custom_md_cleanup_called = 0;
  custom_md_init_called = 0;
  iVar1 = OBJ_create("1.3.6.1.4.1.16604.998866.1","custom-md","custom-md");
  iVar2 = test_int_ne("test/evp_extra_test.c",0x168f,&_LC44,"NID_undef",iVar1,0);
  obj = (ASN1_OBJECT *)0x0;
  if (iVar2 == 0) {
    type = (EVP_MD *)0x0;
    ctx = (EVP_MD_CTX *)0x0;
    uVar3 = 0;
  }
  else {
    type = (EVP_MD *)EVP_MD_meth_new(iVar1,0);
    iVar2 = test_ptr("test/evp_extra_test.c",0x1692,&_LC45,type);
    if (iVar2 == 0) {
LAB_00100fe2:
      ctx = (EVP_MD_CTX *)0x0;
      uVar3 = 0;
    }
    else {
      iVar2 = EVP_MD_meth_set_init(type,custom_md_init);
      ctx = (EVP_MD_CTX *)0x0;
      uVar3 = test_true("test/evp_extra_test.c",0x1695,"EVP_MD_meth_set_init(tmp, custom_md_init)",
                        iVar2 != 0);
      if (uVar3 != 0) {
        iVar2 = EVP_MD_meth_set_cleanup(type,custom_md_cleanup);
        uVar3 = test_true("test/evp_extra_test.c",0x1696,
                          "EVP_MD_meth_set_cleanup(tmp, custom_md_cleanup)",iVar2 != 0);
        if (uVar3 != 0) {
          iVar2 = EVP_MD_meth_set_app_datasize(type,4);
          iVar2 = test_true("test/evp_extra_test.c",0x1697,
                            "EVP_MD_meth_set_app_datasize(tmp, sizeof(custom_dgst_ctx))",iVar2 != 0)
          ;
          if (iVar2 == 0) goto LAB_00100fe2;
          ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
          iVar2 = test_ptr("test/evp_extra_test.c",0x169c,"mdctx",ctx);
          if (iVar2 != 0) {
            iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
            iVar2 = test_true("test/evp_extra_test.c",0x16a2,"EVP_DigestInit_ex(mdctx, tmp, NULL)",
                              iVar2 != 0);
            if (iVar2 != 0) {
              type_00 = EVP_sha256();
              iVar2 = EVP_DigestInit_ex(ctx,type_00,(ENGINE *)0x0);
              iVar2 = test_true("test/evp_extra_test.c",0x16a3,
                                "EVP_DigestInit_ex(mdctx, EVP_sha256(), NULL)",iVar2 != 0);
              if (iVar2 != 0) {
                cnt = strlen(local_96);
                iVar2 = EVP_DigestUpdate(ctx,local_96,cnt);
                iVar2 = test_true("test/evp_extra_test.c",0x16a4,
                                  "EVP_DigestUpdate(mdctx, mess, strlen(mess))",iVar2 != 0);
                if (iVar2 != 0) {
                  iVar2 = EVP_DigestFinal_ex(ctx,(uchar *)(local_96 + 0xe),&local_9c);
                  iVar2 = test_true("test/evp_extra_test.c",0x16a5,
                                    "EVP_DigestFinal_ex(mdctx, md_value, &md_len)",iVar2 != 0);
                  if (iVar2 != 0) {
                    iVar2 = test_int_eq("test/evp_extra_test.c",0x16a6,"custom_md_init_called",
                                        &_LC53,custom_md_init_called,1);
                    if (iVar2 != 0) {
                      iVar2 = test_int_eq("test/evp_extra_test.c",0x16a7,"custom_md_cleanup_called",
                                          &_LC53,custom_md_cleanup_called,1);
                      if (iVar2 != 0) {
                        iVar2 = OBJ_create("1.3.6.1.4.1.16604.998866.1","custom-md","custom-md");
                        iVar2 = test_int_eq("test/evp_extra_test.c",0x16aa,
                                            "OBJ_create(\"1.3.6.1.4.1.16604.998866.1\", \"custom-md\", \"custom-md\")"
                                            ,"NID_undef",iVar2,0);
                        if (iVar2 != 0) {
                          uVar4 = ERR_peek_error();
                          if ((uVar4 & 0x80000000) == 0) {
                            uVar4 = uVar4 >> 0x17 & 0xff;
                          }
                          else {
                            uVar4 = 2;
                          }
                          uVar3 = test_int_eq("test/evp_extra_test.c",0x16ac,
                                              "ERR_GET_LIB(ERR_peek_error())","ERR_LIB_OBJ",uVar4,8)
                          ;
                          if (uVar3 != 0) {
                            uVar4 = ERR_get_error();
                            uVar3 = (uint)uVar4 & 0x7fffff;
                            if ((uVar4 & 0x80000000) != 0) {
                              uVar3 = (uint)uVar4 & 0x7fffffff;
                            }
                            iVar2 = test_int_eq("test/evp_extra_test.c",0x16ad,
                                                "ERR_GET_REASON(ERR_get_error())","OBJ_R_OID_EXISTS"
                                                ,uVar3,0x66);
                            if (iVar2 == 0) goto LAB_001010d6;
                            obj = ASN1_OBJECT_create(iVar1,&_LC61,0xc,"custom-md","custom-md");
                            iVar2 = OBJ_add_object(obj);
                            iVar1 = test_int_eq("test/evp_extra_test.c",0x16b3,"OBJ_add_object(o)",
                                                &_LC44,iVar2,iVar1);
                            uVar3 = (uint)(iVar1 != 0);
                          }
                          goto LAB_00100ff5;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_001010d6:
          uVar3 = 0;
        }
      }
    }
  }
LAB_00100ff5:
  ASN1_OBJECT_free(obj);
  EVP_MD_CTX_free(ctx);
  EVP_MD_meth_free(type);
  uVar4 = (ulong)uVar3;
LAB_00100f37:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 custom_md_cleanup(void)

{
  long lVar1;
  
  lVar1 = EVP_MD_CTX_get0_md_data();
  if (lVar1 != 0) {
    custom_md_cleanup_called = custom_md_cleanup_called + 1;
  }
  return 1;
}



undefined8 custom_md_init(void)

{
  long lVar1;
  
  lVar1 = EVP_MD_CTX_get0_md_data();
  if (lVar1 != 0) {
    custom_md_init_called = custom_md_init_called + 1;
    return 1;
  }
  return 0;
}



uint test_evp_md_cipher_meth(void)

{
  uint uVar1;
  int iVar2;
  EVP_MD *pEVar3;
  undefined8 uVar4;
  EVP_CIPHER *pEVar5;
  undefined8 uVar6;
  
  pEVar3 = EVP_sha256();
  uVar4 = EVP_MD_meth_dup(pEVar3);
  pEVar5 = EVP_aes_128_cbc();
  uVar6 = EVP_CIPHER_meth_dup(pEVar5);
  uVar1 = test_ptr("test/evp_extra_test.c",0x1650,&_LC63,uVar4);
  if (uVar1 != 0) {
    iVar2 = test_ptr("test/evp_extra_test.c",0x1650,&_LC64,uVar6);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_MD_meth_free(uVar4);
  EVP_CIPHER_meth_free(uVar6);
  return uVar1;
}



undefined8 custom_pmeth_ctrl(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  code *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EVP_PKEY_meth_get_ctrl(orig_pmeth,&local_38,0);
  if (param_2 == 9999) {
    ctrl_called = 1;
    uVar1 = 1;
  }
  else {
    uVar1 = (*local_38)(param_1,param_2,param_3,param_4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void custom_pmeth_copy(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  code *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  EVP_PKEY_meth_get_copy(orig_pmeth,&local_28);
  (*local_28)(param_1,param_2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void custom_pmeth_cleanup(undefined8 param_1)

{
  long in_FS_OFFSET;
  code *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  EVP_PKEY_meth_get_cleanup(orig_pmeth,&local_18);
  (*local_18)(param_1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void custom_pmeth_init(undefined8 param_1)

{
  long in_FS_OFFSET;
  code *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  EVP_PKEY_meth_get_init(orig_pmeth,&local_18);
  (*local_18)(param_1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void custom_pmeth_sign(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  long in_FS_OFFSET;
  code *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EVP_PKEY_meth_get_sign(orig_pmeth,0,&local_38);
  (*local_38)(param_1,param_2,param_3,param_4,param_5);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void custom_pmeth_derive(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  code *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  EVP_PKEY_meth_get_derive(orig_pmeth,0,&local_28);
  (*local_28)(param_1,param_2,param_3);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void custom_pmeth_digestsign
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long in_FS_OFFSET;
  code *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EVP_PKEY_meth_get_digestsign(orig_pmeth,&local_38);
  (*local_38)(param_1,param_2,param_3,param_4,param_5);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_keylen_change(int param_1)

{
  int iVar1;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  long in_FS_OFFSET;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  int local_4a4;
  undefined8 local_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  uchar local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_498 = (undefined1  [16])0x0;
  local_4a0 = 0xc;
  local_488 = (undefined1  [16])0x0;
  local_478 = (undefined1  [16])0x0;
  local_468 = (undefined1  [16])0x0;
  local_458 = (undefined1  [16])0x0;
  if (lgcyprov == 0) {
    iVar1 = test_skip("test/evp_extra_test.c",0x1529,"Test requires legacy provider to be loaded");
    goto LAB_001017c1;
  }
  cipher = (EVP_CIPHER *)0x0;
  ctx = EVP_CIPHER_CTX_new();
  iVar1 = test_ptr("test/evp_extra_test.c",0x152b,"ctx = EVP_CIPHER_CTX_new()",ctx);
  if (iVar1 != 0) {
    cipher = (EVP_CIPHER *)
             EVP_CIPHER_fetch(testctx,*(undefined8 *)(keylen_change_ciphers + (long)param_1 * 8),0);
    iVar1 = test_ptr("test/evp_extra_test.c",0x152e,
                     "ciph = EVP_CIPHER_fetch(testctx, keylen_change_ciphers[idx], testpropq)",
                     cipher);
    if (iVar1 != 0) {
      iVar1 = EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,key_15,(uchar *)0x0,1);
      iVar1 = test_true("test/evp_extra_test.c",0x1532,
                        "EVP_CipherInit_ex(ctx, ciph, NULL, key, NULL, 1)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EVP_CipherUpdate(ctx,local_448,&local_4a4,gcmDefaultPlaintext,0x10);
        iVar1 = test_true("test/evp_extra_test.c",0x1535,
                          "EVP_CipherUpdate(ctx, outbuf, &outlen, gcmDefaultPlaintext, sizeof(gcmDefaultPlaintext))"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          OSSL_PARAM_construct_size_t(&local_4d8,"keylen",&local_4a0);
          local_498._8_8_ = uStack_4d0;
          local_498._0_8_ = local_4d8;
          local_478._0_8_ = local_4b8;
          local_488._8_8_ = uStack_4c0;
          local_488._0_8_ = local_4c8;
          iVar1 = EVP_CIPHER_CTX_set_params(ctx,local_498);
          iVar1 = test_true("test/evp_extra_test.c",0x153b,"EVP_CIPHER_CTX_set_params(ctx, params)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            ERR_set_mark();
            iVar1 = EVP_CipherUpdate(ctx,local_448,&local_4a4,gcmDefaultPlaintext,0x10);
            iVar1 = test_false("test/evp_extra_test.c",0x153f,
                               "EVP_CipherUpdate(ctx, outbuf, &outlen, gcmDefaultPlaintext, sizeof(gcmDefaultPlaintext))"
                               ,iVar1 != 0);
            if (iVar1 != 0) {
              ERR_pop_to_mark();
              iVar1 = 1;
              goto LAB_001017b1;
            }
            ERR_clear_last_mark();
          }
        }
      }
    }
    iVar1 = 0;
  }
LAB_001017b1:
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(cipher);
LAB_001017c1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_ivlen_change(int param_1)

{
  int iVar1;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  long in_FS_OFFSET;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  int local_4a4;
  undefined8 local_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  uchar local_448 [1032];
  long local_40;
  
  cipher = (EVP_CIPHER *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_498 = (undefined1  [16])0x0;
  local_488 = (undefined1  [16])0x0;
  local_478 = (undefined1  [16])0x0;
  local_468 = (undefined1  [16])0x0;
  local_458 = (undefined1  [16])0x0;
  local_4a0 = 0xd;
  ctx = EVP_CIPHER_CTX_new();
  iVar1 = test_ptr("test/evp_extra_test.c",0x14e4,"ctx = EVP_CIPHER_CTX_new()",ctx);
  if (iVar1 != 0) {
    cipher = (EVP_CIPHER *)
             EVP_CIPHER_fetch(testctx,*(undefined8 *)(ivlen_change_ciphers + (long)param_1 * 8),0);
    iVar1 = test_ptr("test/evp_extra_test.c",0x14e7,
                     "ciph = EVP_CIPHER_fetch(testctx, ivlen_change_ciphers[idx], testpropq)",cipher
                    );
    if (iVar1 != 0) {
      iVar1 = EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,kGCMDefaultKey,iv_14,1);
      iVar1 = test_true("test/evp_extra_test.c",0x14eb,
                        "EVP_CipherInit_ex(ctx, ciph, NULL, kGCMDefaultKey, iv, 1)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EVP_CipherUpdate(ctx,local_448,&local_4a4,gcmDefaultPlaintext,0x10);
        iVar1 = test_true("test/evp_extra_test.c",0x14ee,
                          "EVP_CipherUpdate(ctx, outbuf, &outlen, gcmDefaultPlaintext, sizeof(gcmDefaultPlaintext))"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          OSSL_PARAM_construct_size_t(&local_4d8,"ivlen",&local_4a0);
          local_498._8_8_ = uStack_4d0;
          local_498._0_8_ = local_4d8;
          local_478._0_8_ = local_4b8;
          local_488._8_8_ = uStack_4c0;
          local_488._0_8_ = local_4c8;
          iVar1 = EVP_CIPHER_CTX_set_params(ctx,local_498);
          iVar1 = test_true("test/evp_extra_test.c",0x14f4,"EVP_CIPHER_CTX_set_params(ctx, params)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            ERR_set_mark();
            iVar1 = EVP_CipherUpdate(ctx,local_448,&local_4a4,gcmDefaultPlaintext,0x10);
            iVar1 = test_false("test/evp_extra_test.c",0x14f8,
                               "EVP_CipherUpdate(ctx, outbuf, &outlen, gcmDefaultPlaintext, sizeof(gcmDefaultPlaintext))"
                               ,iVar1 != 0);
            if (iVar1 != 0) {
              ERR_pop_to_mark();
              iVar1 = 1;
              goto LAB_00101a23;
            }
            ERR_clear_last_mark();
          }
        }
      }
    }
    iVar1 = 0;
  }
LAB_00101a23:
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(cipher);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_evp_updated_iv(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_460;
  int local_45c;
  undefined1 local_458 [16];
  uchar local_448 [1032];
  long local_40;
  
  cipher = (EVP_CIPHER *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = EVP_CIPHER_CTX_new();
  iVar2 = test_ptr("test/evp_extra_test.c",0x141e,"ctx = EVP_CIPHER_CTX_new()",ctx);
  pcVar4 = "CTX_ALLOC";
  if (iVar2 != 0) {
    uVar1 = *(undefined8 *)(evp_updated_iv_tests + (long)param_1 * 0x10);
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,uVar1,0);
    if (cipher == (EVP_CIPHER *)0x0) {
      uVar5 = 1;
      test_info("test/evp_extra_test.c",0x1423,"cipher %s not supported, skipping",uVar1);
      goto LAB_00101c6a;
    }
    iVar2 = EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,kCFBDefaultKey,iCFBIV,
                              *(int *)(evp_updated_iv_tests + (long)param_1 * 0x10 + 8));
    iVar2 = test_true("test/evp_extra_test.c",0x1427,
                      "EVP_CipherInit_ex(ctx, type, NULL, kCFBDefaultKey, iCFBIV, t->enc)",
                      iVar2 != 0);
    pcVar4 = "CIPHER_INIT";
    if (iVar2 != 0) {
      iVar2 = EVP_CIPHER_CTX_set_padding(ctx,0);
      iVar2 = test_true("test/evp_extra_test.c",0x142b,"EVP_CIPHER_CTX_set_padding(ctx, 0)",
                        iVar2 != 0);
      pcVar4 = "PADDING";
      if (iVar2 != 0) {
        iVar2 = EVP_CipherUpdate(ctx,local_448,&local_460,cfbPlaintext,0x10);
        iVar2 = test_true("test/evp_extra_test.c",0x142f,
                          "EVP_CipherUpdate(ctx, outbuf, &outlen1, cfbPlaintext, sizeof(cfbPlaintext))"
                          ,iVar2 != 0);
        pcVar4 = "CIPHER_UPDATE";
        if (iVar2 != 0) {
          iVar2 = EVP_CIPHER_CTX_get_updated_iv(ctx,local_458,0x10);
          iVar2 = test_true("test/evp_extra_test.c",0x1433,
                            "EVP_CIPHER_CTX_get_updated_iv(ctx, updated_iv, sizeof(updated_iv))",
                            iVar2 != 0);
          pcVar4 = "CIPHER_CTX_GET_UPDATED_IV";
          if (iVar2 != 0) {
            iVar2 = EVP_CIPHER_CTX_get_iv_length(ctx);
            iVar3 = test_int_ge("test/evp_extra_test.c",0x1438,"iv_len",&_LC5,iVar2,0);
            pcVar4 = "CIPHER_CTX_GET_IV_LEN";
            if (iVar3 != 0) {
              iVar2 = test_mem_ne("test/evp_extra_test.c",0x143c,"iCFBIV","updated_iv",iCFBIV,0x10,
                                  local_458,(long)iVar2);
              pcVar4 = "IV_NOT_UPDATED";
              if (iVar2 != 0) {
                uVar5 = 1;
                iVar2 = EVP_CipherFinal_ex(ctx,local_448 + local_460,&local_45c);
                iVar2 = test_true("test/evp_extra_test.c",0x1440,
                                  "EVP_CipherFinal_ex(ctx, outbuf + outlen1, &outlen2)",iVar2 != 0);
                if (iVar2 != 0) goto LAB_00101c6a;
                pcVar4 = "CIPHER_FINAL";
              }
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
  test_info("test/evp_extra_test.c",0x1448,"test_evp_updated_iv %d: %s",param_1,pcVar4);
LAB_00101c6a:
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(cipher);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_evp_reset(int param_1)

{
  long lVar1;
  uchar *in;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  char *pcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  int local_450;
  int local_44c;
  uchar local_448 [1032];
  long local_40;
  
  cipher = (EVP_CIPHER *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = EVP_CIPHER_CTX_new();
  iVar4 = test_ptr("test/evp_extra_test.c",0x13ad,"ctx = EVP_CIPHER_CTX_new()",ctx);
  pcVar5 = "CTX_ALLOC";
  if (iVar4 != 0) {
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"aes-128-cfb",0);
    iVar4 = test_ptr("test/evp_extra_test.c",0x13b1,
                     "type = EVP_CIPHER_fetch(testctx, \"aes-128-cfb\", testpropq)",cipher);
    pcVar5 = "CIPHER_FETCH";
    if (iVar4 != 0) {
      lVar1 = (long)param_1 * 0x28;
      iVar4 = EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,kCFBDefaultKey,iCFBIV,
                                *(int *)(evp_reset_tests + lVar1 + 0x20));
      iVar4 = test_true("test/evp_extra_test.c",0x13b5,
                        "EVP_CipherInit_ex(ctx, type, NULL, kCFBDefaultKey, iCFBIV, t->enc)",
                        iVar4 != 0);
      pcVar5 = "CIPHER_INIT";
      if (iVar4 != 0) {
        iVar4 = EVP_CIPHER_CTX_set_padding(ctx,0);
        iVar4 = test_true("test/evp_extra_test.c",0x13b9,"EVP_CIPHER_CTX_set_padding(ctx, 0)",
                          iVar4 != 0);
        pcVar5 = "PADDING";
        if (iVar4 != 0) {
          uVar6 = *(undefined8 *)(evp_reset_tests + lVar1 + 0x10);
          in = *(uchar **)(evp_reset_tests + lVar1);
          iVar4 = EVP_CipherUpdate(ctx,local_448,&local_450,in,(int)uVar6);
          iVar4 = test_true("test/evp_extra_test.c",0x13bd,
                            "EVP_CipherUpdate(ctx, outbuf, &outlen1, t->input, t->inlen)",iVar4 != 0
                           );
          pcVar5 = "CIPHER_UPDATE";
          if (iVar4 != 0) {
            iVar4 = EVP_CipherFinal_ex(ctx,local_448 + local_450,&local_44c);
            iVar4 = test_true("test/evp_extra_test.c",0x13c1,
                              "EVP_CipherFinal_ex(ctx, outbuf + outlen1, &outlen2)",iVar4 != 0);
            pcVar5 = "CIPHER_FINAL";
            if (iVar4 != 0) {
              uVar2 = *(undefined8 *)(evp_reset_tests + lVar1 + 0x18);
              uVar3 = *(undefined8 *)(evp_reset_tests + lVar1 + 8);
              iVar4 = test_mem_eq("test/evp_extra_test.c",0x13c5,"t->expected","outbuf",uVar3,uVar2,
                                  local_448,(long)(local_44c + local_450));
              pcVar5 = "WRONG_RESULT";
              if (iVar4 != 0) {
                iVar4 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,
                                          (uchar *)0x0,-1);
                iVar4 = test_true("test/evp_extra_test.c",0x13c9,
                                  "EVP_CipherInit_ex(ctx, NULL, NULL, NULL, NULL, -1)",iVar4 != 0);
                pcVar5 = "CIPHER_REINIT";
                if (iVar4 != 0) {
                  iVar4 = EVP_CipherUpdate(ctx,local_448,&local_450,in,(int)uVar6);
                  iVar4 = test_true("test/evp_extra_test.c",0x13cd,
                                    "EVP_CipherUpdate(ctx, outbuf, &outlen1, t->input, t->inlen)",
                                    iVar4 != 0);
                  pcVar5 = "CIPHER_UPDATE (reinit)";
                  if (iVar4 != 0) {
                    iVar4 = EVP_CipherFinal_ex(ctx,local_448 + local_450,&local_44c);
                    iVar4 = test_true("test/evp_extra_test.c",0x13d1,
                                      "EVP_CipherFinal_ex(ctx, outbuf + outlen1, &outlen2)",
                                      iVar4 != 0);
                    pcVar5 = "CIPHER_FINAL (reinit)";
                    if (iVar4 != 0) {
                      uVar6 = 1;
                      iVar4 = test_mem_eq("test/evp_extra_test.c",0x13d5,"t->expected","outbuf",
                                          uVar3,uVar2,local_448,(long)(local_44c + local_450));
                      if (iVar4 != 0) goto LAB_00101f6a;
                      pcVar5 = "WRONG_RESULT (reinit)";
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
  uVar6 = 0;
  test_info("test/evp_extra_test.c",0x13dc,"test_evp_reset %d: %s",param_1,pcVar5);
LAB_00101f6a:
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(cipher);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_gcm_reinit(int param_1)

{
  int iVar1;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_464;
  int local_460;
  int local_45c;
  undefined1 local_458 [16];
  uchar local_448 [1032];
  long local_40;
  
  cipher = (EVP_CIPHER *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = EVP_CIPHER_CTX_new();
  iVar1 = test_ptr("test/evp_extra_test.c",0x1474,"ctx = EVP_CIPHER_CTX_new()",ctx);
  pcVar2 = "CTX_ALLOC";
  if (iVar1 != 0) {
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"aes-256-gcm",0);
    iVar1 = test_ptr("test/evp_extra_test.c",0x1478,
                     "type = EVP_CIPHER_fetch(testctx, \"aes-256-gcm\", testpropq)");
    pcVar2 = "CIPHER_FETCH";
    if (iVar1 != 0) {
      EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,1);
      iVar1 = test_true("test/evp_extra_test.c",0x147c,
                        "EVP_CipherInit_ex(ctx, type, NULL, NULL, NULL, 1)");
      pcVar2 = "ENC_INIT";
      if (iVar1 != 0) {
        lVar3 = (long)param_1 * 0x50;
        iVar1 = EVP_CIPHER_CTX_ctrl(ctx,9,*(int *)(gcm_reinit_tests + lVar3 + 0x30),(void *)0x0);
        iVar1 = test_int_gt("test/evp_extra_test.c",0x1480,
                            "EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_IVLEN, t->ivlen1, NULL)",
                            &_LC5,iVar1,0);
        pcVar2 = "SET_IVLEN1";
        if (iVar1 != 0) {
          iVar1 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,kGCMResetKey,
                                    *(uchar **)(gcm_reinit_tests + lVar3),1);
          iVar1 = test_true("test/evp_extra_test.c",0x1484,
                            "EVP_CipherInit_ex(ctx, NULL, NULL, kGCMResetKey, t->iv1, 1)",iVar1 != 0
                           );
          pcVar2 = "SET_IV1";
          if (iVar1 != 0) {
            iVar1 = EVP_CipherUpdate(ctx,(uchar *)0x0,&local_45c,gcmAAD,0x14);
            iVar1 = test_true("test/evp_extra_test.c",0x1488,
                              "EVP_CipherUpdate(ctx, NULL, &outlen3, gcmAAD, sizeof(gcmAAD))",
                              iVar1 != 0);
            pcVar2 = "AAD1";
            if (iVar1 != 0) {
              EVP_CIPHER_CTX_set_padding(ctx,0);
              iVar1 = EVP_CipherUpdate(ctx,local_448,&local_464,gcmResetPlaintext,0x3c);
              iVar1 = test_true("test/evp_extra_test.c",0x148d,
                                "EVP_CipherUpdate(ctx, outbuf, &outlen1, gcmResetPlaintext, sizeof(gcmResetPlaintext))"
                                ,iVar1 != 0);
              pcVar2 = "CIPHER_UPDATE1";
              if (iVar1 != 0) {
                iVar1 = EVP_CipherFinal_ex(ctx,local_448 + local_464,&local_460);
                iVar1 = test_true("test/evp_extra_test.c",0x1492,
                                  "EVP_CipherFinal_ex(ctx, outbuf + outlen1, &outlen2)",iVar1 != 0);
                pcVar2 = "CIPHER_FINAL1";
                if (iVar1 != 0) {
                  iVar1 = test_mem_eq("test/evp_extra_test.c",0x1496,"t->expected1","outbuf",
                                      *(undefined8 *)(gcm_reinit_tests + lVar3 + 0x10),
                                      *(undefined8 *)(gcm_reinit_tests + lVar3 + 0x40),local_448,
                                      (long)(local_460 + local_464));
                  pcVar2 = "WRONG_RESULT1";
                  if (iVar1 != 0) {
                    iVar1 = EVP_CIPHER_CTX_ctrl(ctx,0x10,0x10,local_458);
                    iVar1 = test_int_gt("test/evp_extra_test.c",0x149a,
                                        "EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_AEAD_GET_TAG, taglen, tag)"
                                        ,&_LC5,iVar1,0);
                    pcVar2 = "GET_TAG1";
                    if (iVar1 != 0) {
                      lVar3 = (long)param_1 * 0x50;
                      iVar1 = test_mem_eq("test/evp_extra_test.c",0x149e,"t->tag1",&_LC131,
                                          *(undefined8 *)(gcm_reinit_tests + lVar3 + 0x20),0x10,
                                          local_458,0x10);
                      pcVar2 = "TAG_ERROR1";
                      if (iVar1 != 0) {
                        iVar1 = EVP_CIPHER_CTX_ctrl(ctx,9,*(int *)(gcm_reinit_tests + lVar3 + 0x38),
                                                    (void *)0x0);
                        iVar1 = test_int_gt("test/evp_extra_test.c",0x14a3,
                                            "EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_IVLEN, t->ivlen2, NULL)"
                                            ,&_LC5,iVar1);
                        pcVar2 = "SET_IVLEN2";
                        if (iVar1 != 0) {
                          iVar1 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0
                                                    ,*(uchar **)(gcm_reinit_tests + lVar3 + 8),-1);
                          iVar1 = test_true("test/evp_extra_test.c",0x14a7,
                                            "EVP_CipherInit_ex(ctx, NULL, NULL, NULL, t->iv2, -1)",
                                            iVar1 != 0);
                          pcVar2 = "SET_IV2";
                          if (iVar1 != 0) {
                            iVar1 = EVP_CipherUpdate(ctx,(uchar *)0x0,&local_45c,gcmAAD,0x14);
                            iVar1 = test_true("test/evp_extra_test.c",0x14ab,
                                              "EVP_CipherUpdate(ctx, NULL, &outlen3, gcmAAD, sizeof(gcmAAD))"
                                              ,iVar1 != 0);
                            pcVar2 = "AAD2";
                            if (iVar1 != 0) {
                              iVar1 = EVP_CipherUpdate(ctx,local_448,&local_464,gcmResetPlaintext,
                                                       0x3c);
                              iVar1 = test_true("test/evp_extra_test.c",0x14af,
                                                "EVP_CipherUpdate(ctx, outbuf, &outlen1, gcmResetPlaintext, sizeof(gcmResetPlaintext))"
                                                ,iVar1 != 0);
                              pcVar2 = "CIPHER_UPDATE2";
                              if (iVar1 != 0) {
                                iVar1 = EVP_CipherFinal_ex(ctx,local_448 + local_464,&local_460);
                                iVar1 = test_true("test/evp_extra_test.c",0x14b4,
                                                  "EVP_CipherFinal_ex(ctx, outbuf + outlen1, &outlen2)"
                                                  ,iVar1 != 0);
                                pcVar2 = "CIPHER_FINAL2";
                                if (iVar1 != 0) {
                                  iVar1 = test_mem_eq("test/evp_extra_test.c",0x14b8,"t->expected2",
                                                      "outbuf",*(undefined8 *)
                                                                (gcm_reinit_tests + lVar3 + 0x18),
                                                      *(undefined8 *)
                                                       (gcm_reinit_tests + lVar3 + 0x48),local_448,
                                                      (long)(local_460 + local_464));
                                  pcVar2 = "WRONG_RESULT2";
                                  if (iVar1 != 0) {
                                    iVar1 = EVP_CIPHER_CTX_ctrl(ctx,0x10,0x10,local_458);
                                    iVar1 = test_int_gt("test/evp_extra_test.c",0x14bc,
                                                                                                                
                                                  "EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_AEAD_GET_TAG, taglen, tag)"
                                                  ,&_LC5,iVar1,0);
                                    pcVar2 = "GET_TAG2";
                                    if (iVar1 != 0) {
                                      uVar4 = 1;
                                      iVar1 = test_mem_eq("test/evp_extra_test.c",0x14c0,"t->tag2",
                                                          &_LC131,*(undefined8 *)
                                                                   (gcm_reinit_tests + lVar3 + 0x28)
                                                          ,0x10,local_458,0x10);
                                      if (iVar1 != 0) goto LAB_001022fa;
                                      pcVar2 = "TAG_ERROR2";
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
  uVar4 = 0;
  test_info("test/evp_extra_test.c",0x14c7,"evp_init_test %d: %s",param_1,pcVar2);
LAB_001022fa:
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(cipher);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_evp_init_seq(int param_1)

{
  int iVar1;
  int iVar2;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_460;
  int local_45c;
  undefined1 local_458 [16];
  uchar local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = EVP_CIPHER_CTX_new();
  if (ctx == (EVP_CIPHER_CTX *)0x0) {
    cipher = (EVP_CIPHER *)0x0;
    pcVar3 = "CTX_ALLOC";
  }
  else {
    lVar6 = (long)param_1;
    lVar4 = lVar6 * 0x60;
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,*(undefined8 *)(evp_init_tests + lVar4),0);
    iVar1 = test_ptr("test/evp_extra_test.c",0x1323,
                     "type = EVP_CIPHER_fetch(testctx, t->cipher, testpropq)");
    pcVar3 = "CIPHER_FETCH";
    if (iVar1 != 0) {
      iVar1 = EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,
                                *(int *)(evp_init_tests + lVar4 + 0x54));
      iVar1 = test_true("test/evp_extra_test.c",0x1327,
                        "EVP_CipherInit_ex(ctx, type, NULL, NULL, NULL, t->initenc)",iVar1 != 0);
      pcVar3 = "EMPTY_ENC_INIT";
      if (iVar1 != 0) {
        iVar1 = EVP_CIPHER_CTX_set_padding(ctx,0);
        iVar1 = test_true("test/evp_extra_test.c",0x132b,"EVP_CIPHER_CTX_set_padding(ctx, 0)",
                          iVar1 != 0);
        if (iVar1 == 0) {
          pcVar3 = "PADDING";
        }
        else {
          iVar1 = *(int *)(evp_init_tests + lVar4 + 0x50);
          if (iVar1 != 0) {
            iVar2 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                      *(uchar **)(evp_init_tests + lVar4 + 8),(uchar *)0x0,-1);
            iVar2 = test_true("test/evp_extra_test.c",0x132f,
                              "EVP_CipherInit_ex(ctx, NULL, NULL, t->key, NULL, -1)",iVar2 != 0);
            if (iVar2 == 0) {
              pcVar3 = "KEY_INIT (before iv)";
              goto LAB_001028ff;
            }
          }
          if (*(long *)(evp_init_tests + lVar6 * 0x60 + 0x30) == 0) {
LAB_00102a88:
            EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,
                              *(uchar **)(evp_init_tests + lVar6 * 0x60 + 0x10),-1);
            iVar2 = test_true("test/evp_extra_test.c",0x1306,
                              "EVP_CipherInit_ex(ctx, NULL, NULL, NULL, t->iv, -1)");
            if (iVar2 != 0) {
              if (iVar1 == 0) {
                EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                  *(uchar **)(evp_init_tests + lVar6 * 0x60 + 8),(uchar *)0x0,-1);
                iVar1 = test_true("test/evp_extra_test.c",0x1337,
                                  "EVP_CipherInit_ex(ctx, NULL, NULL, t->key, NULL, -1)");
                if (iVar1 == 0) {
                  pcVar3 = "KEY_INIT (after iv)";
                  goto LAB_001028ff;
                }
              }
              lVar4 = lVar6 * 0x60;
              iVar1 = *(int *)(evp_init_tests + lVar4 + 0x58);
              iVar2 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,
                                        (uchar *)0x0,iVar1);
              iVar2 = test_true("test/evp_extra_test.c",0x133b,
                                "EVP_CipherInit_ex(ctx, NULL, NULL, NULL, NULL, t->finalenc)",
                                iVar2 != 0);
              pcVar3 = "FINAL_ENC_INIT";
              if (iVar2 != 0) {
                iVar2 = EVP_CipherUpdate(ctx,local_448,&local_460,
                                         *(uchar **)(evp_init_tests + lVar4 + 0x18),
                                         *(int *)(evp_init_tests + lVar4 + 0x38));
                iVar2 = test_true("test/evp_extra_test.c",0x133f,
                                  "EVP_CipherUpdate(ctx, outbuf, &outlen1, t->input, t->inlen)",
                                  iVar2 != 0);
                if (iVar2 == 0) {
                  pcVar3 = "CIPHER_UPDATE";
                }
                else {
                  if ((iVar1 == 0) && (*(void **)(evp_init_tests + lVar4 + 0x28) != (void *)0x0)) {
                    iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x11,*(int *)(evp_init_tests + lVar4 + 0x48),
                                                *(void **)(evp_init_tests + lVar4 + 0x28));
                    iVar2 = test_int_gt("test/evp_extra_test.c",0x1345,
                                        "EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_AEAD_SET_TAG, t->taglen, (void *)t->tag)"
                                        ,&_LC5,iVar2,0);
                    if (iVar2 == 0) {
                      pcVar3 = "SET_TAG";
                      goto LAB_001028ff;
                    }
                  }
                  iVar2 = EVP_CipherFinal_ex(ctx,local_448 + local_460,&local_45c);
                  iVar2 = test_true("test/evp_extra_test.c",0x134b,
                                    "EVP_CipherFinal_ex(ctx, outbuf + outlen1, &outlen2)",iVar2 != 0
                                   );
                  pcVar3 = "CIPHER_FINAL";
                  if (iVar2 != 0) {
                    lVar4 = lVar6 * 0x60;
                    iVar2 = test_mem_eq("test/evp_extra_test.c",0x134f,"t->expected","outbuf",
                                        *(undefined8 *)(evp_init_tests + lVar4 + 0x20),
                                        *(undefined8 *)(evp_init_tests + lVar4 + 0x40),local_448,
                                        (long)(local_45c + local_460));
                    if (iVar2 == 0) {
                      pcVar3 = "WRONG_RESULT";
                    }
                    else {
                      if ((iVar1 == 0) ||
                         (lVar4 = *(long *)(evp_init_tests + lVar4 + 0x28), lVar4 == 0)) {
LAB_00102c79:
                        uVar5 = 1;
                        goto LAB_0010291b;
                      }
                      iVar1 = EVP_CIPHER_CTX_ctrl(ctx,0x10,0x10,local_458);
                      iVar1 = test_int_gt("test/evp_extra_test.c",0x1354,
                                          "EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_AEAD_GET_TAG, taglen, tag)"
                                          ,&_LC5,iVar1,0);
                      pcVar3 = "GET_TAG";
                      if (iVar1 != 0) {
                        iVar1 = test_mem_eq("test/evp_extra_test.c",0x1358,"t->tag",&_LC131,lVar4,
                                            *(undefined8 *)(evp_init_tests + lVar6 * 0x60 + 0x48),
                                            local_458,0x10);
                        pcVar3 = "TAG_ERROR";
                        if (iVar1 != 0) goto LAB_00102c79;
                      }
                    }
                  }
                }
              }
              goto LAB_001028ff;
            }
          }
          else {
            iVar2 = EVP_CIPHER_CTX_ctrl(ctx,9,(int)*(long *)(evp_init_tests + lVar6 * 0x60 + 0x30),
                                        (void *)0x0);
            iVar2 = test_int_gt("test/evp_extra_test.c",0x1303,
                                "EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_IVLEN, t->ivlen, NULL)",
                                &_LC5,iVar2,0);
            if (iVar2 != 0) goto LAB_00102a88;
          }
          pcVar3 = "IV_INIT";
        }
      }
    }
  }
LAB_001028ff:
  uVar5 = 0;
  test_info("test/evp_extra_test.c",0x1360,"evp_init_test %d: %s",param_1,pcVar3);
LAB_0010291b:
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(cipher);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



uint test_evp_reinit_seq(int param_1)

{
  uchar *in;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  EVP_CIPHER_CTX *ctx;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  int local_854;
  int local_850;
  int local_84c;
  uchar local_848 [1024];
  uchar local_448 [1032];
  long local_40;
  
  uVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = EVP_CIPHER_CTX_new();
  uVar4 = test_ptr("test/evp_extra_test.c",0x1374,"ctx = EVP_CIPHER_CTX_new()",ctx);
  if (uVar4 != 0) {
    lVar6 = (long)param_1 * 0x60;
    uVar7 = EVP_CIPHER_fetch(testctx,*(undefined8 *)(evp_reinit_tests + lVar6),0);
    iVar5 = test_ptr("test/evp_extra_test.c",0x1375,
                     "type = EVP_CIPHER_fetch(testctx, t->cipher, testpropq)",uVar7);
    if (iVar5 != 0) {
      iVar5 = EVP_CipherInit_ex2(ctx,uVar7,*(undefined8 *)(evp_reinit_tests + lVar6 + 8),
                                 *(undefined8 *)(evp_reinit_tests + lVar6 + 0x10),
                                 *(undefined4 *)(evp_reinit_tests + lVar6 + 0x54),0);
      uVar4 = test_true("test/evp_extra_test.c",0x1377,
                        "EVP_CipherInit_ex2(ctx, type, t->key, t->iv, t->initenc, NULL)",iVar5 != 0)
      ;
      if (uVar4 == 0) goto LAB_00102e2a;
      in = *(uchar **)(evp_reinit_tests + lVar6 + 0x18);
      uVar1 = *(undefined8 *)(evp_reinit_tests + lVar6 + 0x38);
      iVar5 = EVP_CipherUpdate(ctx,local_848,&local_854,in,(int)uVar1);
      iVar5 = test_true("test/evp_extra_test.c",0x1379,
                        "EVP_CipherUpdate(ctx, outbuf1, &outlen1, t->input, t->inlen)",iVar5 != 0);
      if (iVar5 != 0) {
        iVar5 = EVP_CipherFinal_ex(ctx,local_848,&local_84c);
        iVar5 = test_true("test/evp_extra_test.c",0x137a,
                          "EVP_CipherFinal_ex(ctx, outbuf1, &outlen_final)",iVar5 != 0);
        if (iVar5 != 0) {
          uVar2 = *(undefined8 *)(evp_reinit_tests + lVar6 + 0x40);
          uVar3 = *(undefined8 *)(evp_reinit_tests + lVar6 + 0x20);
          iVar5 = test_mem_eq("test/evp_extra_test.c",0x137c,"t->expected","outbuf1",uVar3,uVar2,
                              local_848,(long)(local_84c + local_854));
          if (iVar5 != 0) {
            iVar5 = EVP_CipherInit_ex2(ctx,0,0,0,0xffffffff,0);
            iVar5 = test_true("test/evp_extra_test.c",0x137e,
                              "EVP_CipherInit_ex2(ctx, NULL, NULL, NULL, -1, NULL)",iVar5 != 0);
            if (iVar5 != 0) {
              iVar5 = EVP_CipherUpdate(ctx,local_448,&local_850,in,(int)uVar1);
              iVar5 = test_true("test/evp_extra_test.c",0x1380,
                                "EVP_CipherUpdate(ctx, outbuf2, &outlen2, t->input, t->inlen)",
                                iVar5 != 0);
              if (iVar5 != 0) {
                iVar5 = EVP_CipherFinal_ex(ctx,local_448,&local_84c);
                iVar5 = test_true("test/evp_extra_test.c",0x1381,
                                  "EVP_CipherFinal_ex(ctx, outbuf2, &outlen_final)",iVar5 != 0);
                if (iVar5 != 0) {
                  iVar5 = test_mem_eq("test/evp_extra_test.c",0x1383,"t->expected","outbuf2",uVar3,
                                      uVar2,local_448,(long)(local_84c + local_850));
                  uVar4 = (uint)(iVar5 != 0);
                  goto LAB_00102e2a;
                }
              }
            }
          }
        }
      }
    }
    uVar4 = 0;
  }
LAB_00102e2a:
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(uVar7);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_names_do_all(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  uVar3 = OSSL_LIB_CTX_new();
  uVar1 = test_ptr("test/evp_extra_test.c",0x128f,&_LC162,uVar3);
  if (uVar1 != 0) {
    uVar4 = EVP_MD_fetch(uVar3,"SHA2-256",0);
    uVar1 = test_ptr("test/evp_extra_test.c",0x1293,"sha256",uVar4);
    if (uVar1 != 0) {
      iVar2 = EVP_MD_names_do_all(uVar4,md_names,uVar3);
      uVar1 = test_true("test/evp_extra_test.c",0x129a,"EVP_MD_names_do_all(sha256, md_names, ctx)",
                        iVar2 != 0);
      if (uVar1 != 0) {
        iVar2 = test_true("test/evp_extra_test.c",0x129d,"success",success != 0);
        uVar1 = (uint)(iVar2 != 0);
      }
    }
  }
  EVP_MD_free(uVar4);
  OSSL_LIB_CTX_free(uVar3);
  return uVar1;
}



uint test_ecpub(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  EVP_PKEY_CTX *ctx;
  EC_KEY *key;
  EVP_PKEY *pEVar7;
  long in_FS_OFFSET;
  uchar *local_468;
  EVP_PKEY *local_460;
  uchar *local_458;
  EVP_PKEY *local_450;
  uchar local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_460 = (EVP_PKEY *)0x0;
  local_450 = (EVP_PKEY *)0x0;
  if (nullprov != 0) {
    uVar1 = test_skip("test/evp_extra_test.c",0x1209,
                      "Test does not support a non-default library context");
    goto LAB_00103231;
  }
  iVar6 = *(int *)(ecpub_nids + (long)param_1 * 4);
  ctx = EVP_PKEY_CTX_new_id(0x198,(ENGINE *)0x0);
  iVar2 = test_ptr("test/evp_extra_test.c",0x120e,&_LC162,ctx);
  if (iVar2 == 0) {
LAB_001032cf:
    uVar1 = 0;
    key = (EC_KEY *)0x0;
  }
  else {
    iVar2 = EVP_PKEY_keygen_init(ctx);
    iVar2 = test_int_gt("test/evp_extra_test.c",0x120f,"EVP_PKEY_keygen_init(ctx)",&_LC5,iVar2,0);
    if (iVar2 == 0) goto LAB_001032cf;
    uVar3 = EVP_PKEY_CTX_set_ec_paramgen_curve_nid(ctx,iVar6);
    iVar2 = test_int_gt("test/evp_extra_test.c",0x1210,
                        "EVP_PKEY_CTX_set_ec_paramgen_curve_nid(ctx, nid)",&_LC5,uVar3,0);
    if (iVar2 == 0) goto LAB_001032cf;
    iVar2 = EVP_PKEY_keygen(ctx,&local_460);
    iVar2 = test_true("test/evp_extra_test.c",0x1211,"EVP_PKEY_keygen(ctx, &pkey)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_001032cf;
    iVar2 = i2d_PublicKey(local_460,(uchar **)0x0);
    iVar4 = test_int_ge("test/evp_extra_test.c",0x1215,&_LC171,&_LC53,iVar2,1);
    if ((iVar4 == 0) ||
       (iVar4 = test_int_lt("test/evp_extra_test.c",0x1216,&_LC171,&_LC172,iVar2,0x400), iVar4 == 0)
       ) goto LAB_001032cf;
    local_468 = local_448;
    iVar4 = i2d_PublicKey(local_460,&local_468);
    iVar5 = test_int_ge("test/evp_extra_test.c",0x121a,&_LC171,&_LC53,iVar4,1);
    if ((iVar5 == 0) ||
       (iVar4 = test_int_eq("test/evp_extra_test.c",0x121b,&_LC171,"savelen",iVar4,iVar2),
       iVar4 == 0)) goto LAB_001032cf;
    local_458 = local_448;
    local_450 = EVP_PKEY_new();
    iVar4 = test_ptr("test/evp_extra_test.c",0x1221,"(pkey2 = EVP_PKEY_new())",local_450);
    if (iVar4 == 0) goto LAB_001032cf;
    key = EC_KEY_new_by_curve_name(iVar6);
    uVar1 = test_ptr("test/evp_extra_test.c",0x1222,"(ec = EC_KEY_new_by_curve_name(nid))",key);
    if (uVar1 != 0) {
      iVar6 = EVP_PKEY_assign(local_450,0x198,key);
      uVar1 = test_true("test/evp_extra_test.c",0x1223,"EVP_PKEY_assign_EC_KEY(pkey2, ec)",
                        iVar6 != 0);
      if (uVar1 != 0) {
        pEVar7 = d2i_PublicKey(0x198,&local_450,&local_458,(long)iVar2);
        iVar6 = test_ptr("test/evp_extra_test.c",0x1227,
                         "d2i_PublicKey(EVP_PKEY_EC, &pkey2, &q, savelen)",pEVar7);
        if (iVar6 == 0) goto LAB_001032cf;
        uVar3 = EVP_PKEY_eq(local_460,local_450);
        iVar6 = test_int_eq("test/evp_extra_test.c",0x122a,"EVP_PKEY_eq(pkey, pkey2)",&_LC53,uVar3,1
                           );
        uVar1 = (uint)(iVar6 != 0);
        key = (EC_KEY *)0x0;
      }
    }
  }
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(local_460);
  EVP_PKEY_free(local_450);
  EC_KEY_free(key);
LAB_00103231:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



uint test_EVP_rsa_pss_with_keygen_bits(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  EVP_PKEY *local_38;
  long local_30;
  
  ctx = (EVP_PKEY_CTX *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (EVP_PKEY *)0x0;
  uVar4 = EVP_MD_fetch(testctx,"sha256",0);
  uVar1 = test_ptr("test/evp_extra_test.c",0x1243,&_LC63,uVar4);
  if (uVar1 != 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(testctx,"RSA-PSS",0);
    iVar2 = test_ptr("test/evp_extra_test.c",0x1244,
                     "(ctx = EVP_PKEY_CTX_new_from_name(testctx, \"RSA-PSS\", testpropq))",ctx);
    if (iVar2 != 0) {
      iVar2 = EVP_PKEY_keygen_init(ctx);
      iVar2 = test_int_gt("test/evp_extra_test.c",0x1245,"EVP_PKEY_keygen_init(ctx)",&_LC5,iVar2,0);
      if (iVar2 != 0) {
        uVar3 = EVP_PKEY_CTX_set_rsa_keygen_bits(ctx,0x200);
        iVar2 = test_int_gt("test/evp_extra_test.c",0x1246,
                            "EVP_PKEY_CTX_set_rsa_keygen_bits(ctx, 512)",&_LC5,uVar3,0);
        if (iVar2 != 0) {
          uVar3 = EVP_PKEY_CTX_set_rsa_pss_keygen_md(ctx,uVar4);
          iVar2 = test_int_gt("test/evp_extra_test.c",0x1247,
                              "EVP_PKEY_CTX_set_rsa_pss_keygen_md(ctx, md)",&_LC5,uVar3,0);
          if (iVar2 != 0) {
            iVar2 = EVP_PKEY_keygen(ctx,&local_38);
            iVar2 = test_true("test/evp_extra_test.c",0x1248,"EVP_PKEY_keygen(ctx, &pkey)",
                              iVar2 != 0);
            uVar1 = (uint)(iVar2 != 0);
            goto LAB_001035b5;
          }
        }
      }
    }
    uVar1 = 0;
  }
LAB_001035b5:
  EVP_MD_free(uVar4);
  EVP_PKEY_free(local_38);
  EVP_PKEY_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong test_evp_bf_default_keylen(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = __LC183;
  uStack_30 = _UNK_0011d2d8;
  if (lgcyprov == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = test_skip("test/evp_extra_test.c",0x11e1,"Test requires legacy provider to be loaded")
      ;
      return uVar5;
    }
    goto LAB_00103842;
  }
  uVar4 = EVP_CIPHER_fetch(testctx,*(undefined8 *)(algos_13 + (long)param_1 * 8),0);
  iVar1 = test_ptr("test/evp_extra_test.c",0x11e3,
                   "cipher = EVP_CIPHER_fetch(testctx, algos[idx], testpropq)",uVar4);
  if (iVar1 == 0) {
LAB_00103777:
    uVar5 = 0;
  }
  else {
    uVar2 = EVP_CIPHER_get_key_length(uVar4);
    iVar1 = test_int_eq("test/evp_extra_test.c",0x11e4,"EVP_CIPHER_get_key_length(cipher)",&_LC185,
                        uVar2,0x10);
    if (iVar1 == 0) goto LAB_00103777;
    uVar2 = *(undefined4 *)((long)&local_38 + (long)param_1 * 4);
    uVar3 = EVP_CIPHER_get_iv_length(uVar4);
    iVar1 = test_int_eq("test/evp_extra_test.c",0x11e5,"EVP_CIPHER_get_iv_length(cipher)",
                        "ivlen[idx]",uVar3,uVar2);
    uVar5 = (ulong)(iVar1 != 0);
  }
  EVP_CIPHER_free(uVar4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_00103842:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_evp_iv_des(int param_1)

{
  int iVar1;
  uint uVar2;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  undefined8 *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_7c;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  uchar local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0x20;
  if ((lgcyprov == 0) && (param_1 < 3)) {
    uVar2 = test_skip("test/evp_extra_test.c",0x1191,"Test requires legacy provider to be loaded");
    goto LAB_00103aa8;
  }
  switch(param_1) {
  case 0:
    puVar3 = &cbc_state_des_12;
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"des-cbc",0);
    break;
  case 1:
    puVar3 = &ofb_state_des_11;
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"des-ofb",0);
    break;
  case 2:
    puVar3 = &cfb_state_des_10;
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"des-cfb",0);
    break;
  case 3:
    puVar3 = &cbc_state_3des_9;
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"des-ede3-cbc",0);
    break;
  case 4:
    puVar3 = &ofb_state_3des_8;
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"des-ede3-ofb",0);
    break;
  case 5:
    puVar3 = &cfb_state_3des_7;
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"des-ede3-cfb",0);
    break;
  default:
    uVar2 = 0;
    goto LAB_00103aa8;
  }
  ctx = (EVP_CIPHER_CTX *)0x0;
  uVar2 = test_ptr("test/evp_extra_test.c",0x11b6,&_LC195,cipher);
  if (uVar2 != 0) {
    ctx = EVP_CIPHER_CTX_new();
    iVar1 = test_ptr("test/evp_extra_test.c",0x11b7,"(ctx = EVP_CIPHER_CTX_new())",ctx);
    if (iVar1 != 0) {
      iVar1 = EVP_EncryptInit_ex(ctx,cipher,(ENGINE *)0x0,key_6,(uchar *)&init_iv_5);
      iVar1 = test_true("test/evp_extra_test.c",0x11b8,
                        "EVP_EncryptInit_ex(ctx, type, NULL, key, init_iv)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EVP_EncryptUpdate(ctx,local_68,&local_7c,msg_4,0x10);
        iVar1 = test_true("test/evp_extra_test.c",0x11b9,
                          "EVP_EncryptUpdate(ctx, ciphertext, &len, msg, (int)sizeof(msg))",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = EVP_CIPHER_CTX_get_original_iv(ctx,local_78,8);
          iVar1 = test_true("test/evp_extra_test.c",0x11bb,
                            "EVP_CIPHER_CTX_get_original_iv(ctx, oiv, sizeof(oiv))",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = EVP_CIPHER_CTX_get_updated_iv(ctx,local_70,8);
            iVar1 = test_true("test/evp_extra_test.c",0x11bc,
                              "EVP_CIPHER_CTX_get_updated_iv(ctx, iv, sizeof(iv))",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = EVP_EncryptFinal_ex(ctx,local_68,&local_7c);
              iVar1 = test_true("test/evp_extra_test.c",0x11bd,
                                "EVP_EncryptFinal_ex(ctx, ciphertext, &len)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = EVP_CIPHER_CTX_get_iv_length(ctx);
                lVar4 = (long)iVar1;
                iVar1 = test_int_gt("test/evp_extra_test.c",0x11c1,"ivlen",&_LC5,iVar1,0);
                if (((iVar1 != 0) &&
                    (iVar1 = test_mem_eq("test/evp_extra_test.c",0x11c4,"init_iv",&_LC202,&init_iv_5
                                         ,lVar4,local_78,lVar4), iVar1 != 0)) &&
                   (iVar1 = test_mem_eq("test/evp_extra_test.c",0x11c5,"ref_iv",&_LC204,puVar3,8,
                                        local_70,lVar4), iVar1 != 0)) {
                  iVar1 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,
                                             (uchar *)0x0);
                  iVar1 = test_true("test/evp_extra_test.c",0x11c8,
                                    "EVP_EncryptInit_ex(ctx, NULL, NULL, NULL, NULL)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = EVP_CIPHER_CTX_get_updated_iv(ctx,local_70,8);
                    iVar1 = test_true("test/evp_extra_test.c",0x11c9,
                                      "EVP_CIPHER_CTX_get_updated_iv(ctx, iv, sizeof(iv))",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = test_mem_eq("test/evp_extra_test.c",0x11cb,"init_iv",&_LC204,
                                          &init_iv_5,lVar4,local_70,lVar4);
                      uVar2 = (uint)(iVar1 != 0);
                      goto LAB_001039ab;
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
  }
LAB_001039ab:
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(cipher);
LAB_00103aa8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_evp_iv_aes(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  EVP_CIPHER *cipher;
  EVP_CIPHER_CTX *a;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  uchar *local_138;
  int local_12c;
  int local_fc;
  uchar local_f7 [31];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uchar local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = __LC213;
  uStack_d0 = _UNK_0011d2e8;
  local_f7[7] = 'W';
  local_f7[8] = 'q';
  local_f7[9] = '}';
  local_f7[10] = 0xad;
  local_f7[0xb] = 0xdb;
  local_f7[0xc] = 0x9b;
  local_f7[0xd] = 0x98;
  local_f7[0xe] = 0x82;
  local_c8 = __LC214;
  uStack_c0 = _UNK_0011d2f8;
  local_f7[0xf] = 'Z';
  local_f7[0x10] = 'U';
  local_f7[0x11] = 0x91;
  local_f7[0x12] = 0x81;
  local_98 = __LC215;
  uStack_90 = _UNK_0011d308;
  local_f7[0] = 'W';
  local_f7[1] = 'q';
  local_f7[2] = '}';
  local_f7[3] = 0xad;
  local_f7[4] = 0xdb;
  local_f7[5] = 0x9b;
  local_f7[6] = 0x98;
  local_88 = __LC216;
  uStack_80 = _UNK_0011d318;
  local_f7[0x13] = 'W';
  local_f7[0x14] = 'q';
  local_f7[0x15] = '}';
  local_f7[0x16] = 0xad;
  local_f7[0x17] = 0xdb;
  local_f7[0x18] = 0x9b;
  local_f7[0x19] = 0x98;
  local_f7[0x1a] = 0x82;
  local_f7[0x1b] = 'Z';
  local_f7[0x1c] = 'U';
  local_f7[0x1d] = 0x91;
  local_f7[0x1e] = 0x81;
  local_78 = __LC217;
  uStack_70 = _UNK_0011d328;
  local_fc = 0x20;
  if ((nullprov != 0) && (param_1 < 6)) {
    uVar1 = test_skip("test/evp_extra_test.c",0x10fb,
                      "Test does not support a non-default library context");
    goto LAB_00103dc0;
  }
  switch(param_1) {
  case 0:
    cipher = EVP_aes_128_cbc();
    if (cipher == (EVP_CIPHER *)0x0) goto switchD_00103d98_caseD_6;
    local_138 = (uchar *)&local_98;
    local_12c = 1;
    uVar6 = 0x10;
LAB_001040d0:
    iVar2 = test_ptr("test/evp_extra_test.c",0x1141,&_LC195,cipher);
    if (iVar2 == 0) {
      EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)0x0);
switchD_00103d98_default:
      uVar1 = 0;
      goto LAB_00103dc0;
    }
    a = EVP_CIPHER_CTX_new();
    iVar2 = test_ptr("test/evp_extra_test.c",0x1142,"(ctx = EVP_CIPHER_CTX_new())",a);
    if (iVar2 == 0) {
      EVP_CIPHER_CTX_free(a);
      goto switchD_00103d98_default;
    }
    goto LAB_00103e86;
  case 1:
    cipher = EVP_aes_128_ofb();
    if (cipher != (EVP_CIPHER *)0x0) {
      local_138 = (uchar *)&local_88;
      uVar6 = 0x10;
      local_12c = param_1;
      goto LAB_001040d0;
    }
  case 7:
    uVar6 = 0x10;
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"aes-128-ofb",0);
    local_12c = 1;
    local_138 = (uchar *)&local_88;
    break;
  case 2:
    cipher = EVP_aes_128_cfb128();
    if (cipher != (EVP_CIPHER *)0x0) {
      local_138 = (uchar *)&local_78;
      local_12c = 1;
      uVar6 = 0x10;
      goto LAB_001040d0;
    }
  case 8:
    uVar6 = 0x10;
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"aes-128-cfb",0);
    local_12c = 1;
    local_138 = (uchar *)&local_78;
    break;
  case 3:
    cipher = EVP_aes_128_gcm();
    if (cipher != (EVP_CIPHER *)0x0) {
      local_138 = local_f7 + 7;
      local_12c = 0;
      uVar6 = 0xc;
      goto LAB_001040d0;
    }
  case 9:
    uVar6 = 0xc;
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"aes-128-gcm",0);
    local_12c = 0;
    local_138 = local_f7 + 7;
    break;
  case 4:
    cipher = EVP_aes_128_ccm();
    if (cipher != (EVP_CIPHER *)0x0) {
      local_138 = local_f7;
      local_12c = 0;
      uVar6 = 7;
      goto LAB_001040d0;
    }
  case 10:
    uVar6 = 7;
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"aes-128-ccm",0);
    local_12c = 0;
    local_138 = local_f7;
    break;
  case 5:
    cipher = (EVP_CIPHER *)EVP_aes_128_ocb();
    if (cipher != (EVP_CIPHER *)0x0) {
      local_138 = local_f7 + 0x13;
      local_12c = 0;
      uVar6 = 0xc;
      goto LAB_001040d0;
    }
  case 0xb:
    uVar6 = 0xc;
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"aes-128-ocb",0);
    local_12c = 0;
    local_138 = local_f7 + 0x13;
    break;
  case 6:
switchD_00103d98_caseD_6:
    uVar6 = 0x10;
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"aes-128-cbc",0);
    local_12c = 1;
    local_138 = (uchar *)&local_98;
    break;
  default:
    goto switchD_00103d98_default;
  }
  a = (EVP_CIPHER_CTX *)0x0;
  uVar1 = test_ptr("test/evp_extra_test.c",0x1141,&_LC195,cipher);
  if (uVar1 != 0) {
    a = EVP_CIPHER_CTX_new();
    uVar1 = test_ptr("test/evp_extra_test.c",0x1142,"(ctx = EVP_CIPHER_CTX_new())",a);
    if (uVar1 != 0) {
LAB_00103e86:
      iVar2 = EVP_EncryptInit_ex(a,cipher,(ENGINE *)0x0,(uchar *)&local_d8,(uchar *)&local_c8);
      iVar2 = test_true("test/evp_extra_test.c",0x1143,
                        "EVP_EncryptInit_ex(ctx, type, NULL, key, init_iv)",iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = EVP_EncryptUpdate(a,local_68,&local_fc,msg_3,0x10);
        iVar2 = test_true("test/evp_extra_test.c",0x1144,
                          "EVP_EncryptUpdate(ctx, ciphertext, &len, msg, (int)sizeof(msg))",
                          iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = EVP_CIPHER_CTX_get_original_iv(a,local_b8,0x10);
          iVar2 = test_true("test/evp_extra_test.c",0x1146,
                            "EVP_CIPHER_CTX_get_original_iv(ctx, oiv, sizeof(oiv))",iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = EVP_CIPHER_CTX_get_updated_iv(a,local_a8,0x10);
            iVar2 = test_true("test/evp_extra_test.c",0x1147,
                              "EVP_CIPHER_CTX_get_updated_iv(ctx, iv, sizeof(iv))",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = EVP_EncryptFinal_ex(a,local_68,&local_fc);
              iVar2 = test_true("test/evp_extra_test.c",0x1148,
                                "EVP_EncryptFinal_ex(ctx, ciphertext, &len)",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = EVP_CIPHER_CTX_get_iv_length(a);
                iVar3 = test_int_gt("test/evp_extra_test.c",0x114c,"ivlen",&_LC5,iVar2,0);
                if (iVar3 != 0) {
                  lVar4 = (long)iVar2;
                  iVar2 = test_mem_eq("test/evp_extra_test.c",0x114f,"init_iv",&_LC202,&local_c8,
                                      lVar4,local_b8,lVar4);
                  if ((iVar2 != 0) &&
                     (iVar2 = test_mem_eq("test/evp_extra_test.c",0x1150,"ref_iv",&_LC204,local_138,
                                          uVar6,local_a8,lVar4), iVar2 != 0)) {
                    iVar2 = EVP_EncryptInit_ex(a,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,
                                               (uchar *)0x0);
                    iVar2 = test_true("test/evp_extra_test.c",0x1154,
                                      "EVP_EncryptInit_ex(ctx, NULL, NULL, NULL, NULL)",iVar2 != 0);
                    if (iVar2 != 0) {
                      iVar2 = EVP_CIPHER_CTX_get_updated_iv(a,local_a8,0x10);
                      iVar2 = test_true("test/evp_extra_test.c",0x1155,
                                        "EVP_CIPHER_CTX_get_updated_iv(ctx, iv, sizeof(iv))",
                                        iVar2 != 0);
                      if (iVar2 != 0) {
                        if (local_12c == 0) {
                          uVar6 = 0x115b;
                          pcVar5 = "ref_iv";
                        }
                        else {
                          uVar6 = 0x1158;
                          pcVar5 = "init_iv";
                          local_138 = (uchar *)&local_c8;
                        }
                        iVar2 = test_mem_eq("test/evp_extra_test.c",uVar6,pcVar5,&_LC204,local_138,
                                            lVar4,local_a8,lVar4);
                        uVar1 = (uint)(iVar2 != 0);
                        goto LAB_00103f14;
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
  }
LAB_00103f14:
  EVP_CIPHER_CTX_free(a);
  if (5 < param_1) {
    EVP_CIPHER_free(cipher);
  }
LAB_00103dc0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



uint test_pkey_ctx_fail_without_provider(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EVP_PKEY_CTX *ctx;
  undefined *puVar5;
  
  uVar3 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/evp_extra_test.c",0x1073,"tmpctx",uVar3);
  if (iVar1 == 0) {
    uVar2 = 0;
    ctx = (EVP_PKEY_CTX *)0x0;
    uVar4 = 0;
  }
  else {
    ctx = (EVP_PKEY_CTX *)0x0;
    uVar4 = OSSL_PROVIDER_load(uVar3,&_LC220);
    uVar2 = test_ptr("test/evp_extra_test.c",0x1077,"tmpnullprov",uVar4);
    if (uVar2 != 0) {
      if (param_1 == 0) {
        puVar5 = &_LC9;
      }
      else {
        if (param_1 != 1) {
          uVar2 = 0;
          test_error("test/evp_extra_test.c",0x1093,"No test for case %d",param_1);
          goto LAB_00104467;
        }
        puVar5 = &_LC218;
      }
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar3,puVar5,&_LC223);
      iVar1 = test_ptr_null("test/evp_extra_test.c",0x1098,&_LC224,ctx);
      uVar2 = (uint)(iVar1 != 0);
    }
  }
LAB_00104467:
  EVP_PKEY_CTX_free(ctx);
  OSSL_PROVIDER_unload(uVar4);
  OSSL_LIB_CTX_free(uVar3);
  return uVar2;
}



uint test_keygen_with_empty_template(int param_1)

{
  int iVar1;
  uint uVar2;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  EVP_PKEY *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (EVP_PKEY *)0x0;
  if (nullprov != 0) {
    uVar2 = test_skip("test/evp_extra_test.c",0x1045,
                      "Test does not support a non-default library context");
    goto LAB_001045e1;
  }
  pkey = (EVP_PKEY *)0x0;
  if (param_1 == 0) {
    ctx = EVP_PKEY_CTX_new_id(6,(ENGINE *)0x0);
    pcVar3 = "ctx = EVP_PKEY_CTX_new_id(EVP_PKEY_RSA, NULL)";
    uVar4 = 0x104a;
LAB_0010462d:
    uVar2 = test_ptr("test/evp_extra_test.c",uVar4,pcVar3,ctx);
    if (uVar2 != 0) {
LAB_0010463b:
      iVar1 = EVP_PKEY_keygen_init(ctx);
      uVar2 = test_int_gt("test/evp_extra_test.c",0x1056,"EVP_PKEY_keygen_init(ctx)",&_LC5,iVar1,0);
      if (uVar2 != 0) {
        iVar1 = EVP_PKEY_keygen(ctx,&local_38);
        iVar1 = test_int_gt("test/evp_extra_test.c",0x1057,"EVP_PKEY_keygen(ctx, &pkey)",&_LC5,iVar1
                            ,0);
        uVar2 = (uint)(iVar1 != 0);
      }
    }
  }
  else {
    ctx = (EVP_PKEY_CTX *)0x0;
    if (param_1 != 1) goto LAB_0010463b;
    pkey = EVP_PKEY_new();
    iVar1 = test_ptr("test/evp_extra_test.c",0x104f,"tkey = EVP_PKEY_new()",pkey);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_set_type(pkey,6);
      iVar1 = test_true("test/evp_extra_test.c",0x1050,"EVP_PKEY_set_type(tkey, EVP_PKEY_RSA)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        ctx = EVP_PKEY_CTX_new(pkey,(ENGINE *)0x0);
        pcVar3 = "ctx = EVP_PKEY_CTX_new(tkey, NULL)";
        uVar4 = 0x1051;
        goto LAB_0010462d;
      }
    }
    ctx = (EVP_PKEY_CTX *)0x0;
    uVar2 = 0;
  }
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(local_38);
  EVP_PKEY_free(pkey);
LAB_001045e1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_evp_get_ec_pub_legacy(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  EC_KEY *key;
  BIGNUM *prv;
  EVP_PKEY *pkey;
  undefined1 *__s2;
  long in_FS_OFFSET;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  uVar3 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/evp_extra_test.c",0x609,"libctx = OSSL_LIB_CTX_new()",uVar3);
  if (iVar1 == 0) {
    prv = (BIGNUM *)0x0;
    key = (EC_KEY *)0x0;
    pkey = (EVP_PKEY *)0x0;
    uVar2 = 0;
    __s2 = (undefined1 *)0x0;
    goto LAB_0010479e;
  }
  key = (EC_KEY *)EC_KEY_new_by_curve_name_ex(uVar3,0,0x19f);
  iVar1 = test_ptr("test/evp_extra_test.c",0x60d,
                   "eckey = EC_KEY_new_by_curve_name_ex(libctx, NULL, NID_X9_62_prime256v1)",key);
  if (iVar1 == 0) {
    prv = (BIGNUM *)0x0;
    pkey = (EVP_PKEY *)0x0;
    __s2 = (undefined1 *)0x0;
    uVar2 = 0;
    goto LAB_0010479e;
  }
  prv = BN_bin2bn(ec_priv,0x20,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/evp_extra_test.c",0x611,"priv = BN_bin2bn(ec_priv, sizeof(ec_priv), NULL)",
                   prv);
  if (iVar1 == 0) {
LAB_0010486e:
    uVar2 = 0;
    pkey = (EVP_PKEY *)0x0;
    __s2 = (undefined1 *)0x0;
  }
  else {
    iVar1 = EC_KEY_set_private_key(key,prv);
    uVar2 = test_true("test/evp_extra_test.c",0x614,"EC_KEY_set_private_key(eckey, priv)",iVar1 != 0
                     );
    if (uVar2 != 0) {
      local_50 = BN_bin2bn(&DAT_001124a1,0x20,(BIGNUM *)0x0);
      uVar2 = test_ptr("test/evp_extra_test.c",0x617,"x = BN_bin2bn(&ec_pub[1], 32, NULL)",local_50)
      ;
      if (uVar2 != 0) {
        local_48 = BN_bin2bn(&DAT_001124c1,0x20,(BIGNUM *)0x0);
        iVar1 = test_ptr("test/evp_extra_test.c",0x61a,"y = BN_bin2bn(&ec_pub[33], 32, NULL)",
                         local_48);
        if (iVar1 != 0) {
          iVar1 = EC_KEY_set_public_key_affine_coordinates(key,local_50,local_48);
          iVar1 = test_true("test/evp_extra_test.c",0x61d,
                            "EC_KEY_set_public_key_affine_coordinates(eckey, x, y)",iVar1 != 0);
          if (iVar1 != 0) {
            pkey = EVP_PKEY_new();
            uVar2 = test_ptr("test/evp_extra_test.c",0x620,"pkey = EVP_PKEY_new()",pkey);
            __s2 = (undefined1 *)0x0;
            if (uVar2 != 0) {
              iVar1 = EVP_PKEY_assign(pkey,0x198,key);
              uVar2 = test_true("test/evp_extra_test.c",0x624,"EVP_PKEY_assign_EC_KEY(pkey, eckey)",
                                iVar1 != 0);
              __s2 = (undefined1 *)0x0;
              if (uVar2 != 0) {
                iVar1 = EVP_PKEY_get_bn_param(pkey,&_LC238,&local_50);
                iVar1 = test_true("test/evp_extra_test.c",0x628,
                                  "EVP_PKEY_get_bn_param(pkey, OSSL_PKEY_PARAM_EC_PUB_X, &x)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = EVP_PKEY_get_bn_param(pkey,&_LC240,&local_48);
                  iVar1 = test_true("test/evp_extra_test.c",0x629,
                                    "EVP_PKEY_get_bn_param(pkey, OSSL_PKEY_PARAM_EC_PUB_Y, &y)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    key = (EC_KEY *)0x0;
                    __s2 = (undefined1 *)CRYPTO_zalloc(0x41,"test/evp_extra_test.c",0x62c);
                    uVar2 = test_ptr("test/evp_extra_test.c",0x62c,
                                     "pad = OPENSSL_zalloc(sizeof(ec_pub))",__s2);
                    if (uVar2 != 0) {
                      *__s2 = ec_pub;
                      BN_bn2bin(local_50,__s2 + 1);
                      BN_bn2bin(local_48,__s2 + 0x21);
                      iVar1 = memcmp(&ec_pub,__s2,0x41);
                      iVar1 = test_true("test/evp_extra_test.c",0x633,
                                        "memcmp(ec_pub, pad, sizeof(ec_pub)) == 0",iVar1 == 0);
                      uVar2 = (uint)(iVar1 != 0);
                    }
                    goto LAB_0010479e;
                  }
                }
                uVar2 = 0;
                key = (EC_KEY *)0x0;
                __s2 = (undefined1 *)0x0;
              }
            }
            goto LAB_0010479e;
          }
        }
        goto LAB_0010486e;
      }
    }
    pkey = (EVP_PKEY *)0x0;
    __s2 = (undefined1 *)0x0;
  }
LAB_0010479e:
  OSSL_LIB_CTX_free(uVar3);
  EVP_PKEY_free(pkey);
  EC_KEY_free(key);
  CRYPTO_free(__s2);
  BN_free(prv);
  BN_free(local_50);
  BN_free(local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_EC_priv_only_legacy(void)

{
  int iVar1;
  undefined4 uVar2;
  BIGNUM *prv;
  EC_KEY *key;
  EVP_PKEY *pkey;
  EVP_PKEY *pEVar3;
  undefined8 uVar4;
  
  prv = BN_bin2bn(ec_priv,0x20,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/evp_extra_test.c",0x5c5,"priv = BN_bin2bn(ec_priv, sizeof(ec_priv), NULL)",
                   prv);
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar4 = 0;
    pkey = (EVP_PKEY *)0x0;
    key = (EC_KEY *)0x0;
  }
  else {
    key = EC_KEY_new_by_curve_name(0x19f);
    iVar1 = test_ptr("test/evp_extra_test.c",0x5c9,"eckey",key);
    if (iVar1 != 0) {
      iVar1 = EC_KEY_set_private_key(key,prv);
      iVar1 = test_true("test/evp_extra_test.c",0x5cc,"EC_KEY_set_private_key(eckey, priv)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        pkey = EVP_PKEY_new();
        uVar4 = 0;
        iVar1 = test_ptr("test/evp_extra_test.c",0x5d0,&_LC13,pkey);
        if (iVar1 != 0) {
          iVar1 = EVP_PKEY_assign(pkey,0x198,key);
          iVar1 = test_true("test/evp_extra_test.c",0x5d3,"EVP_PKEY_assign_EC_KEY(pkey, eckey)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            pEVar3 = (EVP_PKEY *)0x0;
            do {
              uVar4 = EVP_MD_CTX_new();
              iVar1 = test_ptr("test/evp_extra_test.c",0x5da,&_LC162,uVar4);
              if (iVar1 == 0) {
LAB_00104d32:
                key = (EC_KEY *)0x0;
                iVar1 = 0;
                goto LAB_00104b35;
              }
              iVar1 = EVP_DigestSignInit_ex(uVar4,0,0,testctx,0,pkey);
              iVar1 = test_true("test/evp_extra_test.c",0x5e1,
                                "EVP_DigestSignInit_ex(ctx, NULL, NULL, testctx, testpropq, pkey, NULL)"
                                ,iVar1 != 0);
              if (iVar1 == 0) goto LAB_00104d32;
              EVP_MD_CTX_free(uVar4);
              if (pEVar3 != (EVP_PKEY *)0x0) {
                uVar4 = 0;
                key = (EC_KEY *)0x0;
                iVar1 = 1;
                goto LAB_00104b35;
              }
              pEVar3 = (EVP_PKEY *)EVP_PKEY_dup(pkey);
              iVar1 = test_ptr("test/evp_extra_test.c",0x5ea,"dup_pk = EVP_PKEY_dup(pkey)",pEVar3);
              if (iVar1 == 0) goto LAB_00104d3f;
              uVar2 = EVP_PKEY_eq(pkey,pEVar3);
              iVar1 = test_int_eq("test/evp_extra_test.c",0x5ed,"EVP_PKEY_eq(pkey, dup_pk)",&_LC247,
                                  uVar2,0xfffffffe);
              EVP_PKEY_free(pkey);
              pkey = pEVar3;
            } while (iVar1 != 0);
            iVar1 = 0;
LAB_00104d3f:
            uVar4 = 0;
            key = (EC_KEY *)0x0;
          }
        }
        goto LAB_00104b35;
      }
    }
    uVar4 = 0;
    pkey = (EVP_PKEY *)0x0;
  }
LAB_00104b35:
  EVP_MD_CTX_free(uVar4);
  EVP_PKEY_free(pkey);
  EC_KEY_free(key);
  BN_free(prv);
  return iVar1;
}



EVP_PKEY * make_key_fromdata(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pEVar3;
  long in_FS_OFFSET;
  EVP_PKEY *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(testctx,param_1,0);
  iVar1 = test_ptr("test/evp_extra_test.c",0x418,
                   "pctx = EVP_PKEY_CTX_new_from_name(testctx, keytype, testpropq)",ctx);
  if (iVar1 != 0) {
    uVar2 = EVP_PKEY_CTX_set_params(ctx,param_2);
    iVar1 = test_int_eq("test/evp_extra_test.c",0x41b,"EVP_PKEY_CTX_set_params(pctx, params)",&_LC5,
                        uVar2,0);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_fromdata_init(ctx);
      iVar1 = test_int_gt("test/evp_extra_test.c",0x41c,"EVP_PKEY_fromdata_init(pctx)",&_LC5,uVar2,0
                         );
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_fromdata(ctx,&local_38,0x87,param_2);
        iVar1 = test_int_gt("test/evp_extra_test.c",0x41d,
                            "EVP_PKEY_fromdata(pctx, &tmp_pkey, EVP_PKEY_KEYPAIR, params)",&_LC5,
                            uVar2,0);
        if (iVar1 != 0) {
          iVar1 = test_ptr("test/evp_extra_test.c",0x421,"tmp_pkey",local_38);
          pEVar3 = local_38;
          if (iVar1 != 0) {
            local_38 = (EVP_PKEY *)0x0;
            goto LAB_00104e86;
          }
        }
      }
    }
  }
  pEVar3 = (EVP_PKEY *)0x0;
LAB_00104e86:
  EVP_PKEY_free(local_38);
  EVP_PKEY_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_selection(EVP_PKEY *param_1,uint param_2)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  bool bVar2;
  
  type = BIO_s_mem();
  bp = BIO_new(type);
  iVar1 = PEM_write_bio_PUBKEY(bp,param_1);
  if ((param_2 & 2) == 0) {
    iVar1 = test_false("test/evp_extra_test.c",0x437,&_LC35,iVar1 != 0);
  }
  else {
    iVar1 = test_true("test/evp_extra_test.c",0x434);
  }
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = PEM_write_bio_PrivateKey_ex(bp,param_1,0,0,0,0,0,testctx,0);
    if ((param_2 & 1) == 0) {
      iVar1 = test_false("test/evp_extra_test.c",0x440,&_LC35,iVar1 != 0);
      bVar2 = iVar1 != 0;
    }
    else {
      iVar1 = test_true("test/evp_extra_test.c",0x43d,&_LC35,iVar1 != 0);
      bVar2 = iVar1 != 0;
    }
  }
  BIO_free(bp);
  return bVar2;
}



uint test_evp_get_ec_pub(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a;
  undefined8 uVar3;
  undefined8 uVar4;
  EVP_PKEY *pkey;
  undefined1 *__s2;
  long in_FS_OFFSET;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  a = BN_bin2bn(ec_priv,0x20,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/evp_extra_test.c",0x58b,"priv = BN_bin2bn(ec_priv, sizeof(ec_priv), NULL)",
                   a);
  if (iVar1 == 0) {
    uVar2 = 0;
    pkey = (EVP_PKEY *)0x0;
    __s2 = (undefined1 *)0x0;
    uVar4 = 0;
    uVar3 = 0;
    goto LAB_0010504b;
  }
  uVar3 = OSSL_PARAM_BLD_new();
  iVar1 = test_ptr("test/evp_extra_test.c",0x58e,"bld = OSSL_PARAM_BLD_new()",uVar3);
  if (iVar1 == 0) {
LAB_001050db:
    uVar2 = 0;
    pkey = (EVP_PKEY *)0x0;
    __s2 = (undefined1 *)0x0;
    uVar4 = 0;
  }
  else {
    iVar1 = OSSL_PARAM_BLD_push_utf8_string(uVar3,"group","P-256",0);
    uVar2 = test_true("test/evp_extra_test.c",0x58f,
                      "OSSL_PARAM_BLD_push_utf8_string(bld, OSSL_PKEY_PARAM_GROUP_NAME, \"P-256\", 0)"
                      ,iVar1 != 0);
    if (uVar2 != 0) {
      iVar1 = OSSL_PARAM_BLD_push_octet_string(uVar3,&_LC257,&ec_pub,0x41);
      uVar2 = test_true("test/evp_extra_test.c",0x592,
                        "OSSL_PARAM_BLD_push_octet_string(bld, OSSL_PKEY_PARAM_PUB_KEY, ec_pub, sizeof(ec_pub))"
                        ,iVar1 != 0);
      if (uVar2 != 0) {
        iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC259,a);
        iVar1 = test_true("test/evp_extra_test.c",0x595,
                          "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PRIV_KEY, priv)",iVar1 != 0);
        if (iVar1 != 0) {
          uVar4 = OSSL_PARAM_BLD_to_param(uVar3);
          iVar1 = test_ptr("test/evp_extra_test.c",0x599,"params = OSSL_PARAM_BLD_to_param(bld)",
                           uVar4);
          if (iVar1 == 0) {
            pkey = (EVP_PKEY *)0x0;
            __s2 = (undefined1 *)0x0;
            uVar2 = 0;
          }
          else {
            pkey = (EVP_PKEY *)make_key_fromdata(&_LC262,uVar4);
            iVar1 = test_ptr("test/evp_extra_test.c",0x59a,
                             "keypair = make_key_fromdata(\"EC\", params)",pkey);
            if (iVar1 != 0) {
              iVar1 = test_selection(pkey,0x87);
              if (iVar1 != 0) {
                iVar1 = EVP_PKEY_get_bn_param(pkey,&_LC238,&local_50);
                if (iVar1 != 0) {
                  iVar1 = EVP_PKEY_get_bn_param(pkey,&_LC240,&local_48);
                  if (iVar1 != 0) {
                    __s2 = (undefined1 *)CRYPTO_zalloc(0x41,"test/evp_extra_test.c",0x5a4);
                    uVar2 = test_ptr("test/evp_extra_test.c",0x5a4,
                                     "pad = OPENSSL_zalloc(sizeof(ec_pub))",__s2);
                    if (uVar2 != 0) {
                      *__s2 = ec_pub;
                      BN_bn2bin(local_50,__s2 + 1);
                      BN_bn2bin(local_48,__s2 + 0x21);
                      iVar1 = memcmp(&ec_pub,__s2,0x41);
                      iVar1 = test_true("test/evp_extra_test.c",0x5aa,
                                        "memcmp(ec_pub, pad, sizeof(ec_pub)) == 0",iVar1 == 0);
                      uVar2 = (uint)(iVar1 != 0);
                    }
                    goto LAB_0010504b;
                  }
                }
              }
            }
            uVar2 = 0;
            __s2 = (undefined1 *)0x0;
          }
          goto LAB_0010504b;
        }
        goto LAB_001050db;
      }
    }
    pkey = (EVP_PKEY *)0x0;
    __s2 = (undefined1 *)0x0;
    uVar4 = 0;
  }
LAB_0010504b:
  OSSL_PARAM_free(uVar4);
  OSSL_PARAM_BLD_free(uVar3);
  EVP_PKEY_free(pkey);
  CRYPTO_free(__s2);
  BN_free(a);
  BN_free(local_50);
  BN_free(local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_EC_priv_pub(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  BIGNUM *a;
  undefined8 uVar4;
  undefined8 uVar5;
  EVP_PKEY *pkey;
  EVP_PKEY *pkey_00;
  long in_FS_OFFSET;
  EVP_PKEY *local_100;
  EVP_PKEY *local_f8;
  void *local_d8;
  ulong local_d0;
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (void *)0x0;
  local_d0 = 0;
  a = BN_bin2bn(ec_priv,0x20,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/evp_extra_test.c",0x4ec,"priv = BN_bin2bn(ec_priv, sizeof(ec_priv), NULL)",
                   a);
  if (iVar1 == 0) {
    uVar2 = 0;
    pkey_00 = (EVP_PKEY *)0x0;
    pkey = (EVP_PKEY *)0x0;
    uVar5 = 0;
    local_100 = (EVP_PKEY *)0x0;
    uVar4 = 0;
    local_f8 = (EVP_PKEY *)0x0;
    goto LAB_001053e6;
  }
  uVar4 = OSSL_PARAM_BLD_new();
  uVar2 = test_ptr("test/evp_extra_test.c",0x4f0,"bld = OSSL_PARAM_BLD_new()",uVar4);
  if (uVar2 != 0) {
    iVar1 = OSSL_PARAM_BLD_push_utf8_string(uVar4,"group","P-256",0);
    uVar2 = test_true("test/evp_extra_test.c",0x4f1,
                      "OSSL_PARAM_BLD_push_utf8_string(bld, OSSL_PKEY_PARAM_GROUP_NAME, \"P-256\", 0)"
                      ,iVar1 != 0);
    if (uVar2 != 0) {
      uVar5 = OSSL_PARAM_BLD_to_param(uVar4);
      iVar1 = test_ptr("test/evp_extra_test.c",0x4f5,"params = OSSL_PARAM_BLD_to_param(bld)",uVar5);
      if (iVar1 == 0) {
        local_100 = (EVP_PKEY *)0x0;
        pkey_00 = (EVP_PKEY *)0x0;
        pkey = (EVP_PKEY *)0x0;
        local_f8 = (EVP_PKEY *)0x0;
        uVar2 = 0;
        goto LAB_001053e6;
      }
      pkey = (EVP_PKEY *)make_key_fromdata(&_LC262,uVar5);
      uVar2 = test_ptr("test/evp_extra_test.c",0x4f6,
                       "just_params = make_key_fromdata(\"EC\", params)",pkey);
      if (uVar2 == 0) {
LAB_00105535:
        local_100 = (EVP_PKEY *)0x0;
        pkey_00 = (EVP_PKEY *)0x0;
        local_f8 = (EVP_PKEY *)0x0;
      }
      else {
        OSSL_PARAM_free(uVar5);
        OSSL_PARAM_BLD_free(uVar4);
        uVar2 = test_selection(pkey,0x84);
        if (uVar2 != 0) {
          iVar1 = test_selection(pkey,3);
          if (iVar1 == 0) {
            uVar4 = OSSL_PARAM_BLD_new();
            iVar1 = test_ptr("test/evp_extra_test.c",0x503,"bld = OSSL_PARAM_BLD_new()",uVar4);
            uVar2 = 0;
            if (iVar1 != 0) {
              iVar1 = OSSL_PARAM_BLD_push_utf8_string(uVar4,"group","P-256",0);
              iVar1 = test_true("test/evp_extra_test.c",0x504,
                                "OSSL_PARAM_BLD_push_utf8_string(bld, OSSL_PKEY_PARAM_GROUP_NAME, \"P-256\", 0)"
                                ,iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = OSSL_PARAM_BLD_push_BN(uVar4,&_LC259,a);
                iVar1 = test_true("test/evp_extra_test.c",0x507,
                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PRIV_KEY, priv)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  uVar5 = OSSL_PARAM_BLD_to_param(uVar4);
                  iVar1 = test_ptr("test/evp_extra_test.c",0x50a,
                                   "params = OSSL_PARAM_BLD_to_param(bld)",uVar5);
                  if (iVar1 != 0) {
                    local_f8 = (EVP_PKEY *)make_key_fromdata(&_LC262,uVar5);
                    iVar1 = test_ptr("test/evp_extra_test.c",0x50b,
                                     "params_and_priv = make_key_fromdata(\"EC\", params)");
                    if (iVar1 == 0) {
                      uVar2 = 0;
                      pkey_00 = (EVP_PKEY *)0x0;
                      local_100 = (EVP_PKEY *)0x0;
                    }
                    else {
                      OSSL_PARAM_free(uVar5);
                      OSSL_PARAM_BLD_free(uVar4);
                      iVar1 = test_selection(local_f8);
                      if (iVar1 == 0) {
                        uVar2 = 0;
                        pkey_00 = (EVP_PKEY *)0x0;
                        uVar5 = 0;
                        local_100 = (EVP_PKEY *)0x0;
                        uVar4 = 0;
                      }
                      else {
                        iVar1 = test_selection(local_f8,2);
                        if (iVar1 == 0) {
                          uVar4 = OSSL_PARAM_BLD_new();
                          iVar1 = test_ptr("test/evp_extra_test.c",0x51e,
                                           "bld = OSSL_PARAM_BLD_new()",uVar4);
                          if (iVar1 != 0) {
                            iVar1 = OSSL_PARAM_BLD_push_utf8_string(uVar4,"group","P-256",0);
                            iVar1 = test_true("test/evp_extra_test.c",0x51f,
                                              "OSSL_PARAM_BLD_push_utf8_string(bld, OSSL_PKEY_PARAM_GROUP_NAME, \"P-256\", 0)"
                                              ,iVar1 != 0);
                            if (iVar1 == 0) {
                              pkey_00 = (EVP_PKEY *)0x0;
                              uVar5 = 0;
                              local_100 = (EVP_PKEY *)0x0;
                              uVar2 = 0;
                              goto LAB_001053e6;
                            }
                            iVar1 = OSSL_PARAM_BLD_push_octet_string(uVar4,&_LC257,&ec_pub,0x41);
                            iVar1 = test_true("test/evp_extra_test.c",0x522,
                                              "OSSL_PARAM_BLD_push_octet_string(bld, OSSL_PKEY_PARAM_PUB_KEY, ec_pub, sizeof(ec_pub))"
                                              ,iVar1 != 0);
                            if (iVar1 != 0) {
                              uVar5 = OSSL_PARAM_BLD_to_param(uVar4);
                              iVar1 = test_ptr("test/evp_extra_test.c",0x526,
                                               "params = OSSL_PARAM_BLD_to_param(bld)",uVar5);
                              if (iVar1 == 0) {
                                pkey_00 = (EVP_PKEY *)0x0;
                                local_100 = (EVP_PKEY *)0x0;
                                uVar2 = 0;
                              }
                              else {
                                pkey_00 = (EVP_PKEY *)0x0;
                                local_100 = (EVP_PKEY *)make_key_fromdata(&_LC262,uVar5);
                                uVar2 = test_ptr("test/evp_extra_test.c",0x527,
                                                 "params_and_pub = make_key_fromdata(\"EC\", params)"
                                                 ,local_100);
                                if (uVar2 != 0) {
                                  OSSL_PARAM_free(uVar5);
                                  OSSL_PARAM_BLD_free(uVar4);
                                  iVar1 = test_selection(local_100,2);
                                  if (iVar1 != 0) {
                                    iVar1 = test_selection(local_100,1);
                                    if (iVar1 == 0) {
                                      uVar4 = OSSL_PARAM_BLD_new();
                                      iVar1 = test_ptr("test/evp_extra_test.c",0x534,
                                                       "bld = OSSL_PARAM_BLD_new()",uVar4);
                                      uVar2 = 0;
                                      if (iVar1 != 0) {
                                        iVar1 = OSSL_PARAM_BLD_push_utf8_string
                                                          (uVar4,"group","P-256",0);
                                        iVar1 = test_true("test/evp_extra_test.c",0x535,
                                                                                                                    
                                                  "OSSL_PARAM_BLD_push_utf8_string(bld, OSSL_PKEY_PARAM_GROUP_NAME, \"P-256\", 0)"
                                                  ,iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = OSSL_PARAM_BLD_push_octet_string
                                                            (uVar4,&_LC257,&ec_pub,0x41);
                                          iVar1 = test_true("test/evp_extra_test.c",0x538,
                                                                                                                        
                                                  "OSSL_PARAM_BLD_push_octet_string(bld, OSSL_PKEY_PARAM_PUB_KEY, ec_pub, sizeof(ec_pub))"
                                                  ,iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = OSSL_PARAM_BLD_push_BN(uVar4,&_LC259,a);
                                            iVar1 = test_true("test/evp_extra_test.c",0x53b,
                                                                                                                            
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PRIV_KEY, priv)"
                                                  ,iVar1 != 0);
                                            if (iVar1 != 0) {
                                              pkey_00 = (EVP_PKEY *)0x0;
                                              uVar5 = OSSL_PARAM_BLD_to_param(uVar4);
                                              iVar1 = test_ptr("test/evp_extra_test.c",0x53e,
                                                                                                                              
                                                  "params = OSSL_PARAM_BLD_to_param(bld)",uVar5);
                                              if (iVar1 != 0) {
                                                pkey_00 = (EVP_PKEY *)
                                                          make_key_fromdata(&_LC262,uVar5);
                                                iVar1 = test_ptr("test/evp_extra_test.c",0x53f,
                                                                                                                                  
                                                  "params_and_keypair = make_key_fromdata(\"EC\", params)"
                                                  ,pkey_00);
                                                if (iVar1 != 0) {
                                                  iVar1 = test_selection(pkey_00,0x87);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_parameters_eq(pkey,pkey);
                                                    iVar1 = test_int_gt("test/evp_extra_test.c",
                                                                        0x546,
                                                  "EVP_PKEY_parameters_eq(just_params, just_params)"
                                                  ,&_LC5,uVar3);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_parameters_eq(pkey,local_100);
                                                    iVar1 = test_int_gt("test/evp_extra_test.c",
                                                                        0x547,
                                                  "EVP_PKEY_parameters_eq(just_params, params_and_pub)"
                                                  ,&_LC5,uVar3);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_parameters_eq(pkey,local_f8);
                                                    iVar1 = test_int_gt("test/evp_extra_test.c",
                                                                        0x549,
                                                  "EVP_PKEY_parameters_eq(just_params, params_and_priv)"
                                                  ,&_LC5,uVar3);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_parameters_eq(pkey,pkey_00);
                                                    iVar1 = test_int_gt("test/evp_extra_test.c",
                                                                        0x54b,
                                                  "EVP_PKEY_parameters_eq(just_params, params_and_keypair)"
                                                  ,&_LC5,uVar3);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_eq(local_100,local_100);
                                                    iVar1 = test_int_gt("test/evp_extra_test.c",
                                                                        0x54d,
                                                  "EVP_PKEY_eq(params_and_pub, params_and_pub)",
                                                  &_LC5,uVar3);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_eq(local_f8);
                                                    iVar1 = test_int_gt("test/evp_extra_test.c",
                                                                        0x54e,
                                                  "EVP_PKEY_eq(params_and_priv, params_and_priv)",
                                                  &_LC5,uVar3);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_eq(pkey_00,local_100);
                                                    iVar1 = test_int_gt("test/evp_extra_test.c",
                                                                        0x54f,
                                                  "EVP_PKEY_eq(params_and_keypair, params_and_pub)",
                                                  &_LC5,uVar3);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_eq(pkey_00,local_f8);
                                                    iVar1 = test_int_gt("test/evp_extra_test.c",
                                                                        0x550,
                                                  "EVP_PKEY_eq(params_and_keypair, params_and_priv)"
                                                  ,&_LC5,uVar3);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EVP_PKEY_get1_encoded_public_key
                                                                      (local_100,&local_d8);
                                                    iVar1 = test_int_gt("test/evp_extra_test.c",
                                                                        0x554,
                                                  "EVP_PKEY_get1_encoded_public_key(params_and_pub, &encoded)"
                                                  ,&_LC5,uVar3);
                                                  if (iVar1 != 0) {
                                                    CRYPTO_free(local_d8);
                                                    local_d8 = (void *)0x0;
                                                    uVar3 = EVP_PKEY_get1_encoded_public_key
                                                                      (pkey,&local_d8);
                                                    iVar1 = test_int_eq("test/evp_extra_test.c",
                                                                        0x558,
                                                  "EVP_PKEY_get1_encoded_public_key(just_params, &encoded)"
                                                  ,&_LC5,uVar3);
                                                  if (iVar1 == 0) {
                                                    CRYPTO_free(local_d8);
                                                    local_d8 = (void *)0x0;
                                                  }
                                                  else {
                                                    uVar3 = EVP_PKEY_get_octet_string_param
                                                                      (local_100,"encoded-pub-key",
                                                                       local_c8,0x80,&local_d0);
                                                    iVar1 = test_int_eq("test/evp_extra_test.c",
                                                                        0x55f,
                                                  "EVP_PKEY_get_octet_string_param(params_and_pub, OSSL_PKEY_PARAM_ENCODED_PUBLIC_KEY, buffer, sizeof(buffer), &len)"
                                                  ,&_LC53,uVar3,1);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_int_eq("test/evp_extra_test.c",
                                                                        0x562,&_LC171,&_LC280,
                                                                        local_d0 & 0xffffffff,0x41);
                                                    if (iVar1 != 0) {
                                                      local_d0 = 0;
                                                      uVar3 = EVP_PKEY_get_octet_string_param
                                                                        (local_100,"encoded-pub-key"
                                                                         ,0,0,&local_d0);
                                                      iVar1 = test_int_eq("test/evp_extra_test.c",
                                                                          0x566,
                                                  "EVP_PKEY_get_octet_string_param(params_and_pub, OSSL_PKEY_PARAM_ENCODED_PUBLIC_KEY, NULL, 0, &len)"
                                                  ,&_LC53,uVar3,1);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_int_eq("test/evp_extra_test.c",
                                                                        0x569,&_LC171,&_LC280,
                                                                        local_d0 & 0xffffffff,0x41);
                                                    if (iVar1 != 0) {
                                                      uVar3 = EVP_PKEY_get_octet_string_param
                                                                        (local_100,"encoded-pub-key"
                                                                         ,local_c8,10,&local_d0);
                                                      iVar1 = test_int_eq("test/evp_extra_test.c",
                                                                          0x56d,
                                                  "EVP_PKEY_get_octet_string_param(params_and_pub, OSSL_PKEY_PARAM_ENCODED_PUBLIC_KEY, buffer, 10, &len)"
                                                  ,&_LC5,uVar3,0);
                                                  uVar2 = (uint)(iVar1 != 0);
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
                                              goto LAB_001053e6;
                                            }
                                          }
                                        }
                                      }
                                      pkey_00 = (EVP_PKEY *)0x0;
                                      uVar5 = 0;
                                      goto LAB_001053e6;
                                    }
                                  }
                                  uVar2 = 0;
                                  pkey_00 = (EVP_PKEY *)0x0;
                                  uVar5 = 0;
                                  uVar4 = 0;
                                }
                              }
                              goto LAB_001053e6;
                            }
                          }
                          uVar2 = 0;
                          pkey_00 = (EVP_PKEY *)0x0;
                          local_100 = (EVP_PKEY *)0x0;
                          uVar5 = 0;
                        }
                        else {
                          pkey_00 = (EVP_PKEY *)0x0;
                          uVar5 = 0;
                          uVar4 = 0;
                          local_100 = (EVP_PKEY *)0x0;
                        }
                      }
                    }
                    goto LAB_001053e6;
                  }
                  uVar2 = 0;
                  goto LAB_00105535;
                }
              }
            }
            local_100 = (EVP_PKEY *)0x0;
            pkey_00 = (EVP_PKEY *)0x0;
            uVar5 = 0;
            local_f8 = (EVP_PKEY *)0x0;
            goto LAB_001053e6;
          }
          uVar2 = 0;
        }
        local_100 = (EVP_PKEY *)0x0;
        pkey_00 = (EVP_PKEY *)0x0;
        uVar5 = 0;
        uVar4 = 0;
        local_f8 = (EVP_PKEY *)0x0;
      }
      goto LAB_001053e6;
    }
  }
  local_100 = (EVP_PKEY *)0x0;
  pkey_00 = (EVP_PKEY *)0x0;
  pkey = (EVP_PKEY *)0x0;
  uVar5 = 0;
  local_f8 = (EVP_PKEY *)0x0;
LAB_001053e6:
  OSSL_PARAM_free(uVar5);
  OSSL_PARAM_BLD_free(uVar4);
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(local_f8);
  EVP_PKEY_free(local_100);
  EVP_PKEY_free(pkey_00);
  BN_free(a);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_EVP_PKEY_ffc_priv_pub(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  undefined8 uVar3;
  undefined8 local_78;
  EVP_PKEY *local_70;
  EVP_PKEY *local_68;
  EVP_PKEY *local_60;
  BIGNUM *local_58;
  EVP_PKEY *local_50;
  
  a = BN_new();
  iVar1 = test_ptr("test/evp_extra_test.c",0x460,"p = BN_new()",a);
  if (iVar1 == 0) {
    uVar2 = 0;
    a_02 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    local_58 = (BIGNUM *)0x0;
  }
  else {
    a_00 = BN_new();
    iVar1 = test_ptr("test/evp_extra_test.c",0x461,"q = BN_new()",a_00);
    if (iVar1 == 0) {
      local_58 = (BIGNUM *)0x0;
      a_02 = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      uVar2 = 0;
    }
    else {
      a_01 = BN_new();
      iVar1 = test_ptr("test/evp_extra_test.c",0x462,"g = BN_new()",a_01);
      if (iVar1 == 0) {
        local_58 = (BIGNUM *)0x0;
        a_02 = (BIGNUM *)0x0;
        uVar2 = 0;
      }
      else {
        a_02 = BN_new();
        iVar1 = test_ptr("test/evp_extra_test.c",0x463,"pub = BN_new()",a_02);
        if (iVar1 == 0) {
          local_58 = (BIGNUM *)0x0;
          uVar2 = 0;
        }
        else {
          local_58 = BN_new();
          uVar2 = test_ptr("test/evp_extra_test.c",0x464,"priv = BN_new()",local_58);
          if (uVar2 != 0) {
            local_78 = OSSL_PARAM_BLD_new();
            iVar1 = test_ptr("test/evp_extra_test.c",0x468,"bld = OSSL_PARAM_BLD_new()",local_78);
            if (iVar1 == 0) {
LAB_00106082:
              uVar2 = 0;
            }
            else {
              iVar1 = OSSL_PARAM_BLD_push_BN(local_78,&_LC288,a);
              uVar2 = test_true("test/evp_extra_test.c",0x469,
                                "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_P, p)",iVar1 != 0);
              if (uVar2 != 0) {
                iVar1 = OSSL_PARAM_BLD_push_BN(local_78,&_LC290,a_00);
                iVar1 = test_true("test/evp_extra_test.c",0x46a,
                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_Q, q)",iVar1 != 0
                                 );
                if (iVar1 != 0) {
                  iVar1 = OSSL_PARAM_BLD_push_BN(local_78,&_LC292,a_01);
                  iVar1 = test_true("test/evp_extra_test.c",0x46b,
                                    "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_G, g)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    uVar3 = OSSL_PARAM_BLD_to_param(local_78);
                    iVar1 = test_ptr("test/evp_extra_test.c",0x46d,
                                     "params = OSSL_PARAM_BLD_to_param(bld)",uVar3);
                    if (iVar1 == 0) {
                      local_70 = (EVP_PKEY *)0x0;
                      local_68 = (EVP_PKEY *)0x0;
                      local_60 = (EVP_PKEY *)0x0;
                      local_50 = (EVP_PKEY *)0x0;
                      uVar2 = 0;
                      goto LAB_00105f15;
                    }
                    local_50 = (EVP_PKEY *)make_key_fromdata(param_1,uVar3);
                    uVar2 = test_ptr("test/evp_extra_test.c",0x46e,
                                     "just_params = make_key_fromdata(keytype, params)",local_50);
                    if (uVar2 == 0) {
LAB_0010642d:
                      local_70 = (EVP_PKEY *)0x0;
                      local_68 = (EVP_PKEY *)0x0;
                      local_60 = (EVP_PKEY *)0x0;
                    }
                    else {
                      OSSL_PARAM_free(uVar3);
                      OSSL_PARAM_BLD_free(local_78);
                      uVar2 = test_selection(local_50,0x84);
                      if (uVar2 != 0) {
                        iVar1 = test_selection(local_50,3);
                        if (iVar1 == 0) {
                          local_78 = OSSL_PARAM_BLD_new();
                          iVar1 = test_ptr("test/evp_extra_test.c",0x47b,
                                           "bld = OSSL_PARAM_BLD_new()",local_78);
                          uVar2 = 0;
                          if (iVar1 != 0) {
                            iVar1 = OSSL_PARAM_BLD_push_BN(local_78,&_LC288,a);
                            iVar1 = test_true("test/evp_extra_test.c",0x47c,
                                              "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_P, p)"
                                              ,iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = OSSL_PARAM_BLD_push_BN(local_78,&_LC290,a_00);
                              iVar1 = test_true("test/evp_extra_test.c",0x47d,
                                                "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_Q, q)"
                                                ,iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = OSSL_PARAM_BLD_push_BN(local_78,&_LC292,a_01);
                                iVar1 = test_true("test/evp_extra_test.c",0x47e,
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_G, g)"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = OSSL_PARAM_BLD_push_BN(local_78,&_LC259,local_58);
                                  iVar1 = test_true("test/evp_extra_test.c",0x47f,
                                                                                                        
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PRIV_KEY, priv)"
                                                  ,iVar1 != 0);
                                  if (iVar1 != 0) {
                                    uVar3 = OSSL_PARAM_BLD_to_param(local_78);
                                    iVar1 = test_ptr("test/evp_extra_test.c",0x482,
                                                     "params = OSSL_PARAM_BLD_to_param(bld)",uVar3);
                                    if (iVar1 != 0) {
                                      local_60 = (EVP_PKEY *)make_key_fromdata(param_1,uVar3);
                                      iVar1 = test_ptr("test/evp_extra_test.c",0x483,
                                                                                                              
                                                  "params_and_priv = make_key_fromdata(keytype, params)"
                                                  ,local_60);
                                      if (iVar1 == 0) {
                                        uVar2 = 0;
                                        local_70 = (EVP_PKEY *)0x0;
                                        local_68 = (EVP_PKEY *)0x0;
                                      }
                                      else {
                                        OSSL_PARAM_free(uVar3);
                                        OSSL_PARAM_BLD_free(local_78);
                                        iVar1 = test_selection(local_60,1);
                                        if (iVar1 == 0) {
                                          uVar2 = 0;
                                          uVar3 = 0;
                                          local_70 = (EVP_PKEY *)0x0;
                                          local_68 = (EVP_PKEY *)0x0;
                                          local_78 = 0;
                                        }
                                        else {
                                          iVar1 = test_selection(local_60,2);
                                          if (iVar1 == 0) {
                                            local_78 = OSSL_PARAM_BLD_new();
                                            iVar1 = test_ptr("test/evp_extra_test.c",0x490,
                                                             "bld = OSSL_PARAM_BLD_new()",local_78);
                                            if (iVar1 != 0) {
                                              iVar1 = OSSL_PARAM_BLD_push_BN(local_78,&_LC288,a);
                                              iVar1 = test_true("test/evp_extra_test.c",0x491,
                                                                                                                                
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_P, p)"
                                                  ,iVar1 != 0);
                                              if (iVar1 == 0) {
                                                uVar3 = 0;
                                                local_70 = (EVP_PKEY *)0x0;
                                                local_68 = (EVP_PKEY *)0x0;
                                                uVar2 = 0;
                                                goto LAB_00105f15;
                                              }
                                              iVar1 = OSSL_PARAM_BLD_push_BN(local_78,&_LC290,a_00);
                                              iVar1 = test_true("test/evp_extra_test.c",0x492,
                                                                                                                                
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_Q, q)"
                                                  ,iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = OSSL_PARAM_BLD_push_BN
                                                                  (local_78,&_LC292,a_01);
                                                iVar1 = test_true("test/evp_extra_test.c",0x493,
                                                                                                                                    
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_G, g)"
                                                  ,iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = OSSL_PARAM_BLD_push_BN
                                                                    (local_78,&_LC257,a_02);
                                                  iVar1 = test_true("test/evp_extra_test.c",0x494,
                                                                                                                                        
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PUB_KEY, pub)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = OSSL_PARAM_BLD_to_param(local_78);
                                                    iVar1 = test_ptr("test/evp_extra_test.c",0x497,
                                                                                                                                          
                                                  "params = OSSL_PARAM_BLD_to_param(bld)",uVar3);
                                                  if (iVar1 == 0) {
                                                    local_70 = (EVP_PKEY *)0x0;
                                                    local_68 = (EVP_PKEY *)0x0;
                                                    uVar2 = 0;
                                                  }
                                                  else {
                                                    local_68 = (EVP_PKEY *)
                                                               make_key_fromdata(param_1,uVar3);
                                                    uVar2 = test_ptr("test/evp_extra_test.c",0x498,
                                                                                                                                          
                                                  "params_and_pub = make_key_fromdata(keytype, params)"
                                                  );
                                                  local_70 = (EVP_PKEY *)0x0;
                                                  if (uVar2 != 0) {
                                                    OSSL_PARAM_free(uVar3);
                                                    OSSL_PARAM_BLD_free(local_78);
                                                    uVar2 = test_selection(local_68,2);
                                                    if (uVar2 != 0) {
                                                      uVar2 = 0;
                                                      iVar1 = test_selection(local_68,1);
                                                      if (iVar1 == 0) {
                                                        local_78 = OSSL_PARAM_BLD_new();
                                                        iVar1 = test_ptr("test/evp_extra_test.c",
                                                                         0x4a5,
                                                  "bld = OSSL_PARAM_BLD_new()",local_78);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_BLD_push_BN
                                                                      (local_78,&_LC288,a);
                                                    iVar1 = test_true("test/evp_extra_test.c",0x4a6,
                                                                                                                                            
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_P, p)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 == 0) {
                                                    uVar3 = 0;
                                                    local_70 = (EVP_PKEY *)0x0;
                                                    uVar2 = 0;
                                                    goto LAB_00105f15;
                                                  }
                                                  iVar1 = OSSL_PARAM_BLD_push_BN
                                                                    (local_78,&_LC290,a_00);
                                                  iVar1 = test_true("test/evp_extra_test.c",0x4a7,
                                                                                                                                        
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_Q, q)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_BLD_push_BN
                                                                      (local_78,&_LC292,a_01);
                                                    iVar1 = test_true("test/evp_extra_test.c",0x4a8,
                                                                                                                                            
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_G, g)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_BLD_push_BN
                                                                      (local_78,&_LC257,a_02);
                                                    iVar1 = test_true("test/evp_extra_test.c",0x4a9,
                                                                                                                                            
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PUB_KEY, pub)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_BLD_push_BN
                                                                      (local_78,&_LC259,local_58);
                                                    iVar1 = test_true("test/evp_extra_test.c",0x4ab,
                                                                                                                                            
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PRIV_KEY, priv)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = OSSL_PARAM_BLD_to_param(local_78);
                                                    uVar2 = test_ptr("test/evp_extra_test.c",0x4ae,
                                                                                                                                          
                                                  "params = OSSL_PARAM_BLD_to_param(bld)");
                                                  local_70 = (EVP_PKEY *)0x0;
                                                  if (uVar2 != 0) {
                                                    local_70 = (EVP_PKEY *)
                                                               make_key_fromdata(param_1,uVar3);
                                                    uVar2 = test_ptr("test/evp_extra_test.c",0x4af,
                                                                                                                                          
                                                  "params_and_keypair = make_key_fromdata(keytype, params)"
                                                  ,local_70);
                                                  if (uVar2 != 0) {
                                                    iVar1 = test_selection(local_70,0x87);
                                                    uVar2 = (uint)(iVar1 != 0);
                                                  }
                                                  }
                                                  goto LAB_00105f15;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  uVar2 = 0;
                                                  uVar3 = 0;
                                                  local_70 = (EVP_PKEY *)0x0;
                                                  goto LAB_00105f15;
                                                  }
                                                  }
                                                  uVar3 = 0;
                                                  local_70 = (EVP_PKEY *)0x0;
                                                  local_78 = 0;
                                                  }
                                                  }
                                                  goto LAB_00105f15;
                                                  }
                                                }
                                              }
                                            }
                                            uVar2 = 0;
                                            uVar3 = 0;
                                            local_70 = (EVP_PKEY *)0x0;
                                            local_68 = (EVP_PKEY *)0x0;
                                          }
                                          else {
                                            uVar3 = 0;
                                            local_70 = (EVP_PKEY *)0x0;
                                            local_68 = (EVP_PKEY *)0x0;
                                            local_78 = 0;
                                          }
                                        }
                                      }
                                      goto LAB_00105f15;
                                    }
                                    goto LAB_0010642d;
                                  }
                                }
                              }
                            }
                          }
                          uVar3 = 0;
                          local_70 = (EVP_PKEY *)0x0;
                          local_68 = (EVP_PKEY *)0x0;
                          local_60 = (EVP_PKEY *)0x0;
                          goto LAB_00105f15;
                        }
                        uVar2 = 0;
                      }
                      uVar3 = 0;
                      local_70 = (EVP_PKEY *)0x0;
                      local_68 = (EVP_PKEY *)0x0;
                      local_60 = (EVP_PKEY *)0x0;
                      local_78 = 0;
                    }
                    goto LAB_00105f15;
                  }
                }
                goto LAB_00106082;
              }
            }
            local_70 = (EVP_PKEY *)0x0;
            uVar3 = 0;
            local_68 = (EVP_PKEY *)0x0;
            local_60 = (EVP_PKEY *)0x0;
            local_50 = (EVP_PKEY *)0x0;
            goto LAB_00105f15;
          }
        }
      }
    }
  }
  local_70 = (EVP_PKEY *)0x0;
  uVar3 = 0;
  local_68 = (EVP_PKEY *)0x0;
  local_60 = (EVP_PKEY *)0x0;
  local_50 = (EVP_PKEY *)0x0;
  local_78 = 0;
LAB_00105f15:
  OSSL_PARAM_free(uVar3);
  OSSL_PARAM_BLD_free(local_78);
  EVP_PKEY_free(local_50);
  EVP_PKEY_free(local_60);
  EVP_PKEY_free(local_68);
  EVP_PKEY_free(local_70);
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(a_02);
  BN_free(local_58);
  return uVar2;
}



void test_DH_priv_pub(void)

{
  test_EVP_PKEY_ffc_priv_pub(&_LC299);
  return;
}



void test_DSA_priv_pub(void)

{
  test_EVP_PKEY_ffc_priv_pub(&_LC300);
  return;
}



bool test_EVP_PKEY_set1_DH(void)

{
  int iVar1;
  undefined4 uVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  DH *key;
  EVP_PKEY *pkey;
  EVP_PKEY *pkey_00;
  long in_FS_OFFSET;
  bool bVar3;
  DH *local_160;
  BIGNUM *local_158;
  undefined8 local_150;
  undefined1 local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_158 = (BIGNUM *)0x0;
  local_150 = 0;
  a = BN_new();
  iVar1 = test_ptr("test/evp_extra_test.c",0xffb,"p = BN_new()",a);
  if (iVar1 == 0) {
    a_00 = (BIGNUM *)0x0;
    pkey_00 = (EVP_PKEY *)0x0;
    pkey = (EVP_PKEY *)0x0;
    key = (DH *)0x0;
    local_160 = (DH *)0x0;
    bVar3 = false;
    goto LAB_0010693c;
  }
  a_00 = BN_new();
  iVar1 = test_ptr("test/evp_extra_test.c",0xffc,"g = BN_new()",a_00);
  if (iVar1 != 0) {
    local_158 = BN_new();
    iVar1 = test_ptr("test/evp_extra_test.c",0xffd,"pubkey = BN_new()",local_158);
    if (iVar1 != 0) {
      iVar1 = BN_set_word(a,9999);
      iVar1 = test_true("test/evp_extra_test.c",0xffe,"BN_set_word(p, 9999)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = BN_set_word(a_00,2);
        iVar1 = test_true("test/evp_extra_test.c",0xfff,"BN_set_word(g, 2)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = BN_set_word(local_158,0x10e1);
          iVar1 = test_true("test/evp_extra_test.c",0x1000,"BN_set_word(pubkey, 4321)",iVar1 != 0);
          if (iVar1 != 0) {
            key = DH_new();
            iVar1 = test_ptr("test/evp_extra_test.c",0x1001,"noqdh = DH_new()",key);
            if (iVar1 != 0) {
              iVar1 = DH_set0_pqg(key,a,0,a_00);
              iVar1 = test_true("test/evp_extra_test.c",0x1002,"DH_set0_pqg(noqdh, p, NULL, g)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = DH_set0_key(key,local_158,0);
                iVar1 = test_true("test/evp_extra_test.c",0x1003,"DH_set0_key(noqdh, pubkey, NULL)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  local_158 = BN_new();
                  iVar1 = test_ptr("test/evp_extra_test.c",0x1004,"pubkey = BN_new()",local_158);
                  if (iVar1 != 0) {
                    iVar1 = BN_set_word(local_158,0x10e1);
                    iVar1 = test_true("test/evp_extra_test.c",0x1005,"BN_set_word(pubkey, 4321)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      local_160 = (DH *)DH_get_2048_256();
                      pkey = EVP_PKEY_new();
                      pkey_00 = EVP_PKEY_new();
                      iVar1 = test_ptr("test/evp_extra_test.c",0x100c,"x942dh",local_160);
                      if (iVar1 != 0) {
                        iVar1 = test_ptr("test/evp_extra_test.c",0x100d,"noqdh",key);
                        if (iVar1 != 0) {
                          iVar1 = test_ptr("test/evp_extra_test.c",0x100e,"pkey1",pkey);
                          if (iVar1 != 0) {
                            iVar1 = test_ptr("test/evp_extra_test.c",0x100f,"pkey2",pkey_00);
                            if (iVar1 != 0) {
                              iVar1 = DH_set0_key(local_160,local_158,0);
                              iVar1 = test_true("test/evp_extra_test.c",0x1010,
                                                "DH_set0_key(x942dh, pubkey, NULL)",iVar1 != 0);
                              if (iVar1 != 0) {
                                local_158 = (BIGNUM *)0x0;
                                iVar1 = EVP_PKEY_set1_DH(pkey,local_160);
                                iVar1 = test_true("test/evp_extra_test.c",0x1014,
                                                  "EVP_PKEY_set1_DH(pkey1, x942dh)",iVar1 != 0);
                                if (iVar1 != 0) {
                                  uVar2 = EVP_PKEY_get_id(pkey);
                                  iVar1 = test_int_eq("test/evp_extra_test.c",0x1015,
                                                      "EVP_PKEY_get_id(pkey1)","EVP_PKEY_DHX",uVar2,
                                                      0x398);
                                  if (iVar1 == 0) {
                                    a_00 = (BIGNUM *)0x0;
                                    a = (BIGNUM *)0x0;
                                    bVar3 = false;
                                    goto LAB_0010693c;
                                  }
                                  iVar1 = EVP_PKEY_get_bn_param(pkey,&_LC257,&local_158);
                                  iVar1 = test_true("test/evp_extra_test.c",0x1018,
                                                                                                        
                                                  "EVP_PKEY_get_bn_param(pkey1, OSSL_PKEY_PARAM_PUB_KEY, &pubkey)"
                                                  ,iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = test_ptr("test/evp_extra_test.c",0x101a,"pubkey",
                                                     local_158);
                                    if (iVar1 != 0) {
                                      iVar1 = EVP_PKEY_set1_DH(pkey_00,key);
                                      iVar1 = test_true("test/evp_extra_test.c",0x101d,
                                                        "EVP_PKEY_set1_DH(pkey2, noqdh)",iVar1 != 0)
                                      ;
                                      if (iVar1 != 0) {
                                        uVar2 = EVP_PKEY_get_id(pkey_00);
                                        iVar1 = test_int_eq("test/evp_extra_test.c",0x101e,
                                                            "EVP_PKEY_get_id(pkey2)","EVP_PKEY_DH",
                                                            uVar2,0x1c);
                                        if (iVar1 != 0) {
                                          iVar1 = EVP_PKEY_get_octet_string_param
                                                            (pkey_00,&_LC257,local_148,0x100,
                                                             &local_150);
                                          iVar1 = test_true("test/evp_extra_test.c",0x1021,
                                                                                                                        
                                                  "EVP_PKEY_get_octet_string_param(pkey2, OSSL_PKEY_PARAM_PUB_KEY, pub, sizeof(pub), &len)"
                                                  ,iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = test_size_t_ne("test/evp_extra_test.c",0x1024,
                                                                   &_LC171,&_LC5,local_150,0);
                                            bVar3 = iVar1 != 0;
                                            a_00 = (BIGNUM *)0x0;
                                            a = (BIGNUM *)0x0;
                                            goto LAB_0010693c;
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
                      a_00 = (BIGNUM *)0x0;
                      a = (BIGNUM *)0x0;
                      bVar3 = false;
                      goto LAB_0010693c;
                    }
                  }
                }
              }
            }
            local_160 = (DH *)0x0;
            bVar3 = false;
            pkey_00 = (EVP_PKEY *)0x0;
            pkey = (EVP_PKEY *)0x0;
            goto LAB_0010693c;
          }
        }
      }
    }
  }
  bVar3 = false;
  pkey_00 = (EVP_PKEY *)0x0;
  pkey = (EVP_PKEY *)0x0;
  key = (DH *)0x0;
  local_160 = (DH *)0x0;
LAB_0010693c:
  BN_free(a);
  BN_free(a_00);
  BN_free(local_158);
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(pkey_00);
  DH_free(local_160);
  DH_free(key);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_decrypt_null_chunks(void)

{
  uint uVar1;
  int iVar2;
  EVP_CIPHER *cipher;
  EVP_CIPHER_CTX *ctx;
  long in_FS_OFFSET;
  int local_160;
  int local_15c;
  int local_158;
  uchar local_154 [12];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  uchar local_e8 [20];
  uchar local_d4 [60];
  uchar local_98 [88];
  long local_40;
  
  ctx = (EVP_CIPHER_CTX *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_memcpy(local_154 + 8,"\b\t\n\v",4);
  local_148 = __LC33;
  uStack_140 = _UNK_0011d2b8;
  local_154[0] = '\0';
  local_154[1] = '\x01';
  local_154[2] = '\x02';
  local_154[3] = '\x03';
  local_154[4] = '\x04';
  local_154[5] = '\x05';
  local_154[6] = '\x06';
  local_154[7] = '\a';
  local_138 = __LC339;
  uStack_130 = _UNK_0011d338;
  local_f8 = 0x73656d;
  local_128 = __LC340;
  uStack_120 = _UNK_0011d348;
  local_158 = 99;
  local_118 = __LC341;
  uStack_110 = _UNK_0011d358;
  local_108 = __LC342;
  uStack_100 = _UNK_0011d368;
  cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"ChaCha20-Poly1305",0);
  uVar1 = test_ptr("test/evp_extra_test.c",0xfb7,
                   "cipher = EVP_CIPHER_fetch(testctx, \"ChaCha20-Poly1305\", testpropq)",cipher);
  if (uVar1 != 0) {
    ctx = EVP_CIPHER_CTX_new();
    iVar2 = test_ptr("test/evp_extra_test.c",0xfb8,"ctx = EVP_CIPHER_CTX_new()",ctx);
    if (iVar2 != 0) {
      iVar2 = EVP_EncryptInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)&local_148,local_154);
      iVar2 = test_true("test/evp_extra_test.c",0xfb9,
                        "EVP_EncryptInit_ex(ctx, cipher, NULL, key, iv)",iVar2 != 0);
      if (iVar2 != 0) {
        EVP_EncryptUpdate(ctx,local_e8,&local_160,(uchar *)&local_128,10);
        iVar2 = test_true("test/evp_extra_test.c",0xfbb,
                          "EVP_EncryptUpdate(ctx, ciphertext, &ctlen, msg, enc_offset)");
        if (iVar2 != 0) {
          iVar2 = EVP_EncryptUpdate(ctx,local_e8 + local_160,&local_158,(uchar *)0x0,0);
          iVar2 = test_true("test/evp_extra_test.c",0xfbe,
                            "EVP_EncryptUpdate(ctx, ciphertext + ctlen, &tmp, NULL, 0)",iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = test_int_eq("test/evp_extra_test.c",0xfc0,&_LC45,&_LC5,local_158,0);
            if (iVar2 != 0) {
              iVar2 = EVP_EncryptUpdate(ctx,local_e8 + local_160,&local_158,
                                        (uchar *)((long)&uStack_120 + 2),0x2a);
              iVar2 = test_true("test/evp_extra_test.c",0xfc1,
                                "EVP_EncryptUpdate(ctx, ciphertext + ctlen, &tmp, msg + enc_offset, sizeof(msg) - enc_offset)"
                                ,iVar2 != 0);
              if (iVar2 != 0) {
                local_160 = local_158 + local_160;
                iVar2 = test_int_eq("test/evp_extra_test.c",0xfc4,"ctlen += tmp","sizeof(msg)",
                                    local_160,0x34);
                if (iVar2 != 0) {
                  iVar2 = EVP_EncryptFinal(ctx,local_e8 + local_160,&local_158);
                  iVar2 = test_true("test/evp_extra_test.c",0xfc5,
                                    "EVP_EncryptFinal(ctx, ciphertext + ctlen, &tmp)",iVar2 != 0);
                  if (iVar2 != 0) {
                    iVar2 = test_int_eq("test/evp_extra_test.c",0xfc6,&_LC45,&_LC5,local_158,0);
                    if (iVar2 != 0) {
                      local_158 = 99;
                      iVar2 = EVP_DecryptInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)&local_148,
                                                 local_154);
                      iVar2 = test_true("test/evp_extra_test.c",0xfcb,
                                        "EVP_DecryptInit_ex(ctx, cipher, NULL, key, iv)",iVar2 != 0)
                      ;
                      if (iVar2 != 0) {
                        EVP_DecryptUpdate(ctx,local_98,&local_15c,local_e8,0x14);
                        iVar2 = test_true("test/evp_extra_test.c",0xfcc,
                                          "EVP_DecryptUpdate(ctx, plaintext, &ptlen, ciphertext, dec_offset)"
                                         );
                        if (iVar2 != 0) {
                          iVar2 = EVP_DecryptUpdate(ctx,local_98 + local_15c,&local_158,(uchar *)0x0
                                                    ,0);
                          iVar2 = test_true("test/evp_extra_test.c",0xfd2,
                                            "EVP_DecryptUpdate(ctx, plaintext + ptlen, &tmp, NULL, 0)"
                                            ,iVar2 != 0);
                          if (iVar2 != 0) {
                            iVar2 = test_int_eq("test/evp_extra_test.c",0xfd4,&_LC45,&_LC5,local_158
                                                ,0);
                            if (iVar2 != 0) {
                              iVar2 = EVP_DecryptUpdate(ctx,local_98 + local_15c,&local_158,local_d4
                                                        ,local_160 + -0x14);
                              iVar2 = test_true("test/evp_extra_test.c",0xfd5,
                                                "EVP_DecryptUpdate(ctx, plaintext + ptlen, &tmp, ciphertext + dec_offset, ctlen - dec_offset)"
                                                ,iVar2 != 0);
                              if (iVar2 != 0) {
                                local_15c = local_158 + local_15c;
                                iVar2 = test_int_eq("test/evp_extra_test.c",0xfd8,"ptlen += tmp",
                                                    "sizeof(msg)",local_15c,0x34);
                                if (iVar2 != 0) {
                                  iVar2 = EVP_DecryptFinal(ctx,local_98 + local_15c,&local_158);
                                  iVar2 = test_true("test/evp_extra_test.c",0xfd9,
                                                    "EVP_DecryptFinal(ctx, plaintext + ptlen, &tmp)"
                                                    ,iVar2 != 0);
                                  if (iVar2 != 0) {
                                    iVar2 = test_int_eq("test/evp_extra_test.c",0xfda,&_LC45,&_LC5,
                                                        local_158,0);
                                    if (iVar2 != 0) {
                                      iVar2 = test_mem_eq("test/evp_extra_test.c",0xfdb,&_LC338,
                                                          "plaintext",&local_128,0x34,local_98,
                                                          (long)local_15c);
                                      uVar1 = (uint)(iVar2 != 0);
                                      goto LAB_00106ed3;
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
    uVar1 = 0;
  }
LAB_00106ed3:
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(cipher);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_RSA_legacy(void)

{
  int iVar1;
  uint uVar2;
  EVP_MD *type;
  ulong uVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  RSA *r;
  EVP_MD_CTX *ctx;
  EVP_PKEY *local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  
  type = EVP_sha256();
  if (nullprov != 0) {
    uVar3 = test_skip("test/evp_extra_test.c",0xf71,
                      "Test does not support a non-default library context");
    return uVar3;
  }
  pBVar4 = BN_value_one();
  pBVar4 = BN_dup(pBVar4);
  iVar1 = test_ptr("test/evp_extra_test.c",0xf73,"p = BN_dup(BN_value_one())",pBVar4);
  ctx = (EVP_MD_CTX *)0x0;
  if (iVar1 == 0) {
    local_60 = (EVP_PKEY *)0x0;
    r = (RSA *)0x0;
    pBVar6 = (BIGNUM *)0x0;
    pBVar5 = (BIGNUM *)0x0;
    local_50 = (BIGNUM *)0x0;
    local_58 = (BIGNUM *)0x0;
    uVar2 = 0;
  }
  else {
    pBVar5 = BN_value_one();
    pBVar5 = BN_dup(pBVar5);
    iVar1 = test_ptr("test/evp_extra_test.c",0xf74,"q = BN_dup(BN_value_one())",pBVar5);
    if (iVar1 == 0) {
      local_60 = (EVP_PKEY *)0x0;
      r = (RSA *)0x0;
      pBVar6 = (BIGNUM *)0x0;
      local_50 = (BIGNUM *)0x0;
      local_58 = (BIGNUM *)0x0;
      uVar2 = 0;
    }
    else {
      pBVar6 = BN_value_one();
      pBVar6 = BN_dup(pBVar6);
      iVar1 = test_ptr("test/evp_extra_test.c",0xf75,"n = BN_dup(BN_value_one())",pBVar6);
      if (iVar1 == 0) {
        local_60 = (EVP_PKEY *)0x0;
        r = (RSA *)0x0;
        local_50 = (BIGNUM *)0x0;
        local_58 = (BIGNUM *)0x0;
        uVar2 = 0;
      }
      else {
        pBVar7 = BN_value_one();
        local_58 = BN_dup(pBVar7);
        iVar1 = test_ptr("test/evp_extra_test.c",0xf76,"e = BN_dup(BN_value_one())",local_58);
        if (iVar1 == 0) {
          local_60 = (EVP_PKEY *)0x0;
          r = (RSA *)0x0;
          local_50 = (BIGNUM *)0x0;
          uVar2 = 0;
        }
        else {
          pBVar7 = BN_value_one();
          local_50 = BN_dup(pBVar7);
          iVar1 = test_ptr("test/evp_extra_test.c",0xf77,"d = BN_dup(BN_value_one())",local_50);
          if (iVar1 == 0) {
            local_60 = (EVP_PKEY *)0x0;
            r = (RSA *)0x0;
            uVar2 = 0;
          }
          else {
            r = RSA_new();
            uVar2 = test_ptr("test/evp_extra_test.c",0xf7a,"rsa = RSA_new()",r);
            local_60 = (EVP_PKEY *)0x0;
            if (uVar2 != 0) {
              local_60 = EVP_PKEY_new();
              uVar2 = test_ptr("test/evp_extra_test.c",0xf7b,"pkey = EVP_PKEY_new()",local_60);
              if (uVar2 != 0) {
                ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
                uVar2 = test_ptr("test/evp_extra_test.c",0xf7c,"ctx = EVP_MD_CTX_new()",ctx);
                if (uVar2 != 0) {
                  iVar1 = RSA_set0_factors(r,pBVar4,pBVar5);
                  uVar2 = test_true("test/evp_extra_test.c",0xf7f,"RSA_set0_factors(rsa, p, q)",
                                    iVar1 != 0);
                  if (uVar2 != 0) {
                    iVar1 = RSA_set0_key(r,pBVar6,local_58,local_50);
                    uVar2 = test_true("test/evp_extra_test.c",0xf84,"RSA_set0_key(rsa, n, e, d)",
                                      iVar1 != 0);
                    if (uVar2 != 0) {
                      EVP_PKEY_assign(local_60,6,r);
                      iVar1 = test_true("test/evp_extra_test.c",0xf8a,
                                        "EVP_PKEY_assign_RSA(pkey, rsa)");
                      if (iVar1 != 0) {
                        EVP_DigestSignInit(ctx,(EVP_PKEY_CTX **)0x0,type,(ENGINE *)0x0,local_60);
                        iVar1 = test_true("test/evp_extra_test.c",0xf8f,
                                          "EVP_DigestSignInit(ctx, NULL, md, NULL, pkey)");
                        r = (RSA *)0x0;
                        pBVar6 = (BIGNUM *)0x0;
                        local_50 = (BIGNUM *)0x0;
                        uVar2 = (uint)(iVar1 != 0);
                        pBVar5 = (BIGNUM *)0x0;
                        pBVar4 = (BIGNUM *)0x0;
                        local_58 = (BIGNUM *)0x0;
                        goto LAB_00107434;
                      }
                      pBVar6 = (BIGNUM *)0x0;
                      local_50 = (BIGNUM *)0x0;
                      local_58 = (BIGNUM *)0x0;
                      uVar2 = 0;
                    }
                    pBVar5 = (BIGNUM *)0x0;
                    pBVar4 = (BIGNUM *)0x0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00107434:
  RSA_free(r);
  EVP_MD_CTX_free(ctx);
  EVP_PKEY_free(local_60);
  BN_free(pBVar4);
  BN_free(pBVar5);
  BN_free(pBVar6);
  BN_free(local_58);
  BN_free(local_50);
  return (ulong)uVar2;
}



uint test_X509_PUBKEY_dup(void)

{
  int iVar1;
  uint uVar2;
  X509_PUBKEY *pXVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  X509_PUBKEY *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (X509_PUBKEY *)0x0;
  local_48 = kExampleECPubKeyDER;
  local_50 = (X509_PUBKEY *)X509_PUBKEY_new_ex(testctx,0);
  iVar1 = test_ptr("test/evp_extra_test.c",0xe11,&_LC353,local_50);
  if (iVar1 != 0) {
    pXVar3 = d2i_X509_PUBKEY(&local_50,&local_48,0x5b);
    iVar1 = test_ptr("test/evp_extra_test.c",0xe12,"d2i_X509_PUBKEY(&xp, &p, input_len)",pXVar3);
    if (iVar1 != 0) {
      pXVar3 = (X509_PUBKEY *)X509_PUBKEY_dup(local_50);
      iVar1 = test_ptr("test/evp_extra_test.c",0xe13,"xq = X509_PUBKEY_dup(xp)",pXVar3);
      if (iVar1 != 0) {
        iVar1 = test_ptr_ne("test/evp_extra_test.c",0xe14,&_LC353,&_LC356,local_50,pXVar3);
        if (iVar1 != 0) {
          uVar4 = X509_PUBKEY_get0(pXVar3);
          iVar1 = test_ptr("test/evp_extra_test.c",0xe17,"X509_PUBKEY_get0(xq)",uVar4);
          if (iVar1 != 0) {
            uVar4 = X509_PUBKEY_get0(local_50);
            iVar1 = test_ptr("test/evp_extra_test.c",0xe18,"X509_PUBKEY_get0(xp)",uVar4);
            if (iVar1 != 0) {
              uVar4 = X509_PUBKEY_get0(local_50);
              uVar5 = X509_PUBKEY_get0(pXVar3);
              iVar1 = test_ptr_ne("test/evp_extra_test.c",0xe19,"X509_PUBKEY_get0(xq)",
                                  "X509_PUBKEY_get0(xp)",uVar5,uVar4);
              if (iVar1 != 0) {
                X509_PUBKEY_free(pXVar3);
                local_48 = kExampleBadECPubKeyDER;
                local_50 = d2i_X509_PUBKEY(&local_50,&local_48,0x5b);
                iVar1 = test_ptr("test/evp_extra_test.c",0xe21,
                                 "xp = d2i_X509_PUBKEY(&xp, &p, input_len)",local_50);
                if (iVar1 != 0) {
                  pXVar3 = (X509_PUBKEY *)X509_PUBKEY_dup(local_50);
                  uVar2 = test_ptr("test/evp_extra_test.c",0xe22,"xq = X509_PUBKEY_dup(xp)",pXVar3);
                  if (uVar2 != 0) {
                    X509_PUBKEY_free(local_50);
                    local_50 = (X509_PUBKEY *)0x0;
                    lVar6 = X509_PUBKEY_get0(pXVar3);
                    iVar1 = test_true("test/evp_extra_test.c",0xe27,"X509_PUBKEY_get0(xq) == NULL",
                                      lVar6 == 0);
                    uVar2 = (uint)(iVar1 != 0);
                  }
                  goto LAB_001077b4;
                }
                goto LAB_001077af;
              }
            }
          }
        }
      }
      uVar2 = 0;
      goto LAB_001077b4;
    }
  }
LAB_001077af:
  pXVar3 = (X509_PUBKEY *)0x0;
  uVar2 = 0;
LAB_001077b4:
  X509_PUBKEY_free(local_50);
  X509_PUBKEY_free(pXVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_X509_PUBKEY_inplace(void)

{
  int iVar1;
  X509_PUBKEY *pXVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  X509_PUBKEY *local_30;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = (X509_PUBKEY *)X509_PUBKEY_new_ex(testctx,0);
  local_28 = kExampleECPubKeyDER;
  iVar1 = test_ptr("test/evp_extra_test.c",0xdf1,&_LC353,local_30);
  if (iVar1 != 0) {
    pXVar2 = d2i_X509_PUBKEY(&local_30,&local_28,0x5b);
    iVar1 = test_ptr("test/evp_extra_test.c",0xdf3,"d2i_X509_PUBKEY(&xp, &p, input_len)",pXVar2);
    if (iVar1 != 0) {
      uVar3 = X509_PUBKEY_get0(local_30);
      iVar1 = test_ptr("test/evp_extra_test.c",0xdf6,"X509_PUBKEY_get0(xp)",uVar3);
      if (iVar1 != 0) {
        local_28 = kExampleBadECPubKeyDER;
        local_30 = d2i_X509_PUBKEY(&local_30,&local_28,0x5b);
        iVar1 = test_ptr("test/evp_extra_test.c",0xdfc,"xp = d2i_X509_PUBKEY(&xp, &p, input_len)",
                         local_30);
        if (iVar1 != 0) {
          lVar4 = X509_PUBKEY_get0(local_30);
          iVar1 = test_true("test/evp_extra_test.c",0xdff,"X509_PUBKEY_get0(xp) == NULL",lVar4 == 0)
          ;
          bVar5 = iVar1 != 0;
          goto LAB_00107a2f;
        }
      }
    }
  }
  bVar5 = false;
LAB_00107a2f:
  X509_PUBKEY_free(local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool get_cmac_val(undefined8 param_1,uchar *param_2)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar2;
  size_t local_48;
  undefined8 local_3c;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  local_34 = 0x646c72;
  local_3c = 0x6f57206f6c6c6548;
  local_48 = 0x10;
  iVar1 = test_ptr("test/evp_extra_test.c",0xd23,"mdctx",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_DigestSignInit_ex(ctx,0,0,testctx,0,param_1);
    iVar1 = test_true("test/evp_extra_test.c",0xd24,
                      "EVP_DigestSignInit_ex(mdctx, NULL, NULL, testctx, testpropq, pkey, NULL)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = EVP_DigestSignUpdate(ctx,&local_3c,0xc,0x107ba5);
      iVar1 = test_true("test/evp_extra_test.c",0xd26,
                        "EVP_DigestSignUpdate(mdctx, msg, sizeof(msg))",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EVP_DigestSignFinal(ctx,param_2,&local_48);
        iVar1 = test_true("test/evp_extra_test.c",0xd27,"EVP_DigestSignFinal(mdctx, mac, &maclen)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_size_t_eq("test/evp_extra_test.c",0xd28,"maclen","AES_BLOCK_SIZE",local_48,
                                 0x10);
          bVar2 = iVar1 != 0;
          goto LAB_00107bab;
        }
      }
    }
  }
  bVar2 = false;
LAB_00107bab:
  EVP_MD_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_CMAC_keygen(void)

{
  uint uVar1;
  int iVar2;
  EVP_PKEY_CTX *ctx;
  EVP_CIPHER *pEVar3;
  long in_FS_OFFSET;
  EVP_PKEY *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (EVP_PKEY *)0x0;
  if (nullprov != 0) {
    uVar1 = test_skip("test/evp_extra_test.c",0xd3f,
                      "Test does not support a non-default library context");
    goto LAB_00107d0b;
  }
  ctx = EVP_PKEY_CTX_new_id(0x37e,(ENGINE *)0x0);
  iVar2 = EVP_PKEY_keygen_init(ctx);
  iVar2 = test_int_gt("test/evp_extra_test.c",0xd48,"EVP_PKEY_keygen_init(kctx)",&_LC5,iVar2,0);
  if (iVar2 == 0) {
LAB_00107db9:
    uVar1 = 0;
  }
  else {
    pEVar3 = EVP_aes_256_cbc();
    iVar2 = EVP_PKEY_CTX_ctrl(ctx,-1,4,0xc,0,pEVar3);
    iVar2 = test_int_gt("test/evp_extra_test.c",0xd49,
                        "EVP_PKEY_CTX_ctrl(kctx, -1, EVP_PKEY_OP_KEYGEN, EVP_PKEY_CTRL_CIPHER, 0, (void *)EVP_aes_256_cbc())"
                        ,&_LC5,iVar2,0);
    if (iVar2 == 0) goto LAB_00107db9;
    iVar2 = EVP_PKEY_CTX_ctrl(ctx,-1,4,6,0x20,key_1);
    iVar2 = test_int_gt("test/evp_extra_test.c",0xd4c,
                        "EVP_PKEY_CTX_ctrl(kctx, -1, EVP_PKEY_OP_KEYGEN, EVP_PKEY_CTRL_SET_MAC_KEY, sizeof(key), (void *)key)"
                        ,&_LC5,iVar2,0);
    if (iVar2 == 0) goto LAB_00107db9;
    iVar2 = EVP_PKEY_keygen(ctx,&local_60);
    iVar2 = test_int_gt("test/evp_extra_test.c",0xd4f,"EVP_PKEY_keygen(kctx, &pkey)",&_LC5,iVar2,0);
    if (iVar2 == 0) goto LAB_00107db9;
    iVar2 = test_ptr("test/evp_extra_test.c",0xd50,&_LC13,local_60);
    if (iVar2 == 0) goto LAB_00107db9;
    iVar2 = get_cmac_val(local_60,local_58);
    iVar2 = test_true("test/evp_extra_test.c",0xd51,"get_cmac_val(pkey, mac)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00107db9;
    EVP_PKEY_free(local_60);
    pEVar3 = EVP_aes_256_cbc();
    local_60 = (EVP_PKEY *)EVP_PKEY_new_CMAC_key(0,key_1,0x20,pEVar3);
    iVar2 = test_ptr("test/evp_extra_test.c",0xd5c,&_LC13,local_60);
    if (iVar2 == 0) goto LAB_00107db9;
    iVar2 = get_cmac_val(local_60,local_48);
    iVar2 = test_true("test/evp_extra_test.c",0xd5d,"get_cmac_val(pkey, mac2)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00107db9;
    iVar2 = test_mem_eq("test/evp_extra_test.c",0xd5e,&_LC374,&_LC373,local_58,0x10,local_48,0x10);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_PKEY_free(local_60);
  EVP_PKEY_CTX_free(ctx);
LAB_00107d0b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_EVP_SM2_verify(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  BIO *a;
  EVP_PKEY *pkey;
  EVP_MD_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  long in_FS_OFFSET;
  EVP_MD *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined6 uStack_50;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = __LC388;
  uStack_80 = _UNK_0011d378;
  local_78 = __LC389;
  uStack_70 = _UNK_0011d388;
  local_68 = __LC390;
  uStack_60 = _UNK_0011d398;
  local_58 = __LC391;
  uStack_50 = (undefined6)_UNK_0011d3a8;
  uStack_4a = 0x4ff;
  uStack_48 = 0x70a49f71a0c7;
  a = BIO_new_mem_buf("-----BEGIN PUBLIC KEY-----\nMFkwEwYHKoZIzj0CAQYIKoEcz1UBgi0DQgAEp1KLWq1ZE2jmoAnnBJE1LBGxVr18\nYvvqECWCpXfAQ9qUJ+UmthnUPf0iM3SaXKHe6PlLIDyNlWMWb9RUh/yU3g==\n-----END PUBLIC KEY-----\n"
                      ,0xb2);
  iVar1 = test_true("test/evp_extra_test.c",0x9c2,"bio != NULL",a != (BIO *)0x0);
  if (iVar1 == 0) {
    uVar2 = 0;
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    ctx = (EVP_MD_CTX *)0x0;
    pkey = (EVP_PKEY *)0x0;
    local_90 = (EVP_MD *)0x0;
  }
  else {
    pkey = (EVP_PKEY *)PEM_read_bio_PUBKEY_ex(a,0,0,0,testctx,0);
    uVar2 = test_true("test/evp_extra_test.c",0x9c6,"pkey != NULL",pkey != (EVP_PKEY *)0x0);
    if (uVar2 != 0) {
      iVar1 = EVP_PKEY_is_a(pkey,&_LC218);
      uVar2 = test_true("test/evp_extra_test.c",0x9c9,"EVP_PKEY_is_a(pkey, \"SM2\")",iVar1 != 0);
      if (uVar2 != 0) {
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        iVar1 = test_ptr("test/evp_extra_test.c",0x9cc,"mctx = EVP_MD_CTX_new()",ctx);
        if (iVar1 == 0) {
          local_90 = (EVP_MD *)0x0;
          ctx_00 = (EVP_PKEY_CTX *)0x0;
          uVar2 = 0;
        }
        else {
          ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(testctx,pkey,0);
          uVar2 = test_ptr("test/evp_extra_test.c",0x9cf,
                           "pctx = EVP_PKEY_CTX_new_from_pkey(testctx, pkey, testpropq)",ctx_00);
          local_90 = (EVP_MD *)0x0;
          if (uVar2 != 0) {
            EVP_MD_CTX_set_pkey_ctx(ctx,ctx_00);
            local_90 = (EVP_MD *)EVP_MD_fetch(testctx,&_LC380,0);
            iVar1 = test_ptr("test/evp_extra_test.c",0x9d4,
                             "sm3 = EVP_MD_fetch(testctx, \"sm3\", testpropq)");
            if (iVar1 != 0) {
              iVar1 = EVP_DigestVerifyInit(ctx,(EVP_PKEY_CTX **)0x0,local_90,(ENGINE *)0x0,pkey);
              iVar1 = test_true("test/evp_extra_test.c",0x9d7,
                                "EVP_DigestVerifyInit(mctx, NULL, sm3, NULL, pkey)",iVar1 != 0);
              if (iVar1 != 0) {
                uVar3 = EVP_PKEY_CTX_set1_id(ctx_00,"ALICE123@YAHOO.COM",0x12);
                iVar1 = test_int_gt("test/evp_extra_test.c",0x9da,
                                    "EVP_PKEY_CTX_set1_id(pctx, id, strlen(id))",&_LC5,uVar3,0);
                if (iVar1 != 0) {
                  iVar1 = EVP_DigestVerifyUpdate(ctx,"message digest",0xe);
                  iVar1 = test_true("test/evp_extra_test.c",0x9dd,
                                    "EVP_DigestVerifyUpdate(mctx, msg, strlen(msg))",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = EVP_DigestVerifyFinal(ctx,(uchar *)&local_88,0x46);
                    iVar1 = test_int_gt("test/evp_extra_test.c",0x9e0,
                                        "EVP_DigestVerifyFinal(mctx, signature, sizeof(signature))",
                                        &_LC5,iVar1,0);
                    uVar2 = (uint)(iVar1 != 0);
                    goto LAB_00108014;
                  }
                }
              }
            }
            uVar2 = 0;
          }
        }
        goto LAB_00108014;
      }
    }
    local_90 = (EVP_MD *)0x0;
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    ctx = (EVP_MD_CTX *)0x0;
  }
LAB_00108014:
  BIO_free(a);
  EVP_PKEY_free(pkey);
  EVP_PKEY_CTX_free(ctx_00);
  EVP_MD_CTX_free(ctx);
  EVP_MD_free(local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_EVP_SM2(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  EVP_MD_CTX *ctx_01;
  EVP_MD_CTX *ctx_02;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  EVP_PKEY_CTX *ctx_03;
  long in_FS_OFFSET;
  byte bVar7;
  uchar *local_298;
  EVP_MD *local_290;
  EVP_PKEY_CTX *local_288;
  long local_278;
  undefined4 local_238 [14];
  EVP_PKEY *local_200;
  EVP_PKEY *local_1f8;
  size_t local_1f0;
  size_t local_1e8;
  size_t local_1e0;
  char *local_1d8 [2];
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
  int local_11a [2];
  undefined8 local_112;
  undefined2 local_10a;
  undefined1 local_108 [64];
  uchar local_c8 [136];
  long local_40;
  
  bVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c8 = (undefined1  [16])0x0;
  local_112 = 0x7474656c04030201;
  local_10a = 0x7265;
  local_1b8 = (undefined1  [16])0x0;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_168 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_200 = (EVP_PKEY *)0x0;
  local_1f8 = (EVP_PKEY *)0x0;
  local_1f0 = 0;
  local_1e8 = 0x80;
  local_1e0 = 8;
  local_138 = (undefined1  [16])0x0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(testctx,&_LC218,0);
  iVar2 = test_ptr("test/evp_extra_test.c",0xa09,
                   "pctx = EVP_PKEY_CTX_new_from_name(testctx, \"SM2\", testpropq)",ctx);
  if (iVar2 != 0) {
    iVar2 = EVP_PKEY_paramgen_init(ctx);
    iVar2 = test_true("test/evp_extra_test.c",0xa0d,"EVP_PKEY_paramgen_init(pctx) == 1",iVar2 == 1);
    if (iVar2 != 0) {
      uVar3 = EVP_PKEY_CTX_set_ec_paramgen_curve_nid(ctx,0x494);
      iVar2 = test_int_gt("test/evp_extra_test.c",0xa10,
                          "EVP_PKEY_CTX_set_ec_paramgen_curve_nid(pctx, NID_sm2)",&_LC5,uVar3,0);
      if (iVar2 != 0) {
        iVar2 = EVP_PKEY_paramgen(ctx,&local_1f8);
        iVar2 = test_true("test/evp_extra_test.c",0xa13,"EVP_PKEY_paramgen(pctx, &pkeyparams)",
                          iVar2 != 0);
        if (iVar2 != 0) {
          ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(testctx,local_1f8,0);
          iVar2 = test_ptr("test/evp_extra_test.c",0xa16,
                           "kctx = EVP_PKEY_CTX_new_from_pkey(testctx, pkeyparams, testpropq)",
                           ctx_00);
          if (iVar2 != 0) {
            iVar2 = EVP_PKEY_keygen_init(ctx_00);
            iVar2 = test_int_gt("test/evp_extra_test.c",0xa1a,"EVP_PKEY_keygen_init(kctx)",&_LC5,
                                iVar2,0);
            if (iVar2 == 0) {
              local_290 = (EVP_MD *)0x0;
              ctx_03 = (EVP_PKEY_CTX *)0x0;
              ctx_02 = (EVP_MD_CTX *)0x0;
              ctx_01 = (EVP_MD_CTX *)0x0;
              local_298 = (uchar *)0x0;
              local_288 = (EVP_PKEY_CTX *)0x0;
              iVar2 = 0;
              goto LAB_001083f0;
            }
            iVar2 = EVP_PKEY_keygen(ctx_00,&local_200);
            iVar2 = test_true("test/evp_extra_test.c",0xa1d,"EVP_PKEY_keygen(kctx, &pkey)",
                              iVar2 != 0);
            if (iVar2 != 0) {
              ctx_01 = (EVP_MD_CTX *)EVP_MD_CTX_new();
              iVar2 = test_ptr("test/evp_extra_test.c",0xa20,"md_ctx = EVP_MD_CTX_new()",ctx_01);
              if (iVar2 == 0) {
                local_290 = (EVP_MD *)0x0;
                ctx_03 = (EVP_PKEY_CTX *)0x0;
                ctx_02 = (EVP_MD_CTX *)0x0;
                local_298 = (uchar *)0x0;
                local_288 = (EVP_PKEY_CTX *)0x0;
                iVar2 = 0;
              }
              else {
                ctx_02 = (EVP_MD_CTX *)EVP_MD_CTX_new();
                iVar2 = test_ptr("test/evp_extra_test.c",0xa23,"md_ctx_verify = EVP_MD_CTX_new()",
                                 ctx_02);
                if (iVar2 == 0) {
                  local_290 = (EVP_MD *)0x0;
                  ctx_03 = (EVP_PKEY_CTX *)0x0;
                  local_298 = (uchar *)0x0;
                  local_288 = (EVP_PKEY_CTX *)0x0;
                  iVar2 = 0;
                }
                else {
                  local_288 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(testctx,local_200,0);
                  iVar2 = test_ptr("test/evp_extra_test.c",0xa26,
                                   "sctx = EVP_PKEY_CTX_new_from_pkey(testctx, pkey, testpropq)");
                  if (iVar2 == 0) {
                    ctx_03 = (EVP_PKEY_CTX *)0x0;
                    local_290 = (EVP_MD *)0x0;
                    local_298 = (uchar *)0x0;
                    iVar2 = 0;
                  }
                  else {
                    EVP_MD_CTX_set_pkey_ctx(ctx_01,local_288);
                    EVP_MD_CTX_set_pkey_ctx(ctx_02,local_288);
                    local_290 = (EVP_MD *)EVP_MD_fetch(testctx,&_LC380,0);
                    iVar2 = test_ptr("test/evp_extra_test.c",0xa2c,
                                     "check_md = EVP_MD_fetch(testctx, \"sm3\", testpropq)");
                    if (iVar2 != 0) {
                      iVar2 = EVP_DigestSignInit(ctx_01,(EVP_PKEY_CTX **)0x0,local_290,(ENGINE *)0x0
                                                 ,local_200);
                      iVar2 = test_true("test/evp_extra_test.c",0xa2f,
                                        "EVP_DigestSignInit(md_ctx, NULL, check_md, NULL, pkey)",
                                        iVar2 != 0);
                      if (iVar2 == 0) {
                        ctx_03 = (EVP_PKEY_CTX *)0x0;
                        local_298 = (uchar *)0x0;
                        iVar2 = 0;
                        goto LAB_001083f0;
                      }
                      uVar3 = EVP_PKEY_CTX_set1_id(local_288,&local_112,10);
                      iVar2 = test_int_gt("test/evp_extra_test.c",0xa32,
                                          "EVP_PKEY_CTX_set1_id(sctx, sm2_id, sizeof(sm2_id))",&_LC5
                                          ,uVar3,0);
                      if (iVar2 != 0) {
                        iVar2 = EVP_DigestSignUpdate(ctx_01,&kMsg,4);
                        iVar2 = test_true("test/evp_extra_test.c",0xa35,
                                          "EVP_DigestSignUpdate(md_ctx, kMsg, sizeof(kMsg))",
                                          iVar2 != 0);
                        if (iVar2 != 0) {
                          iVar2 = EVP_DigestSignFinal(ctx_01,(uchar *)0x0,&local_1f0);
                          iVar2 = test_true("test/evp_extra_test.c",0xa39,
                                            "EVP_DigestSignFinal(md_ctx, NULL, &sig_len)",iVar2 != 0
                                           );
                          if (iVar2 != 0) {
                            local_298 = (uchar *)CRYPTO_malloc((int)local_1f0,
                                                               "test/evp_extra_test.c",0xa3c);
                            iVar2 = test_ptr("test/evp_extra_test.c",0xa3c,
                                             "sig = OPENSSL_malloc(sig_len)",local_298);
                            if (iVar2 != 0) {
                              EVP_DigestSignFinal(ctx_01,local_298,&local_1f0);
                              ctx_03 = (EVP_PKEY_CTX *)0x0;
                              iVar2 = test_true("test/evp_extra_test.c",0xa3f,
                                                "EVP_DigestSignFinal(md_ctx, sig, &sig_len)");
                              if (iVar2 == 0) goto LAB_001083f0;
                              iVar2 = EVP_DigestVerifyInit
                                                (ctx_02,(EVP_PKEY_CTX **)0x0,local_290,(ENGINE *)0x0
                                                 ,local_200);
                              iVar2 = test_true("test/evp_extra_test.c",0xa44,
                                                "EVP_DigestVerifyInit(md_ctx_verify, NULL, check_md, NULL, pkey)"
                                                ,iVar2 != 0);
                              if (iVar2 != 0) {
                                uVar3 = EVP_PKEY_CTX_set1_id(local_288,&local_112,10);
                                iVar2 = test_int_gt("test/evp_extra_test.c",0xa48,
                                                                                                        
                                                  "EVP_PKEY_CTX_set1_id(sctx, sm2_id, sizeof(sm2_id))"
                                                  ,&_LC5,uVar3,0);
                                if (iVar2 != 0) {
                                  iVar2 = EVP_DigestVerifyUpdate(ctx_02,&kMsg,4);
                                  iVar2 = test_true("test/evp_extra_test.c",0xa4b,
                                                                                                        
                                                  "EVP_DigestVerifyUpdate(md_ctx_verify, kMsg, sizeof(kMsg))"
                                                  ,iVar2 != 0);
                                  if (iVar2 != 0) {
                                    iVar2 = EVP_DigestVerifyFinal(ctx_02,local_298,local_1f0);
                                    iVar2 = test_int_gt("test/evp_extra_test.c",0xa4e,
                                                                                                                
                                                  "EVP_DigestVerifyFinal(md_ctx_verify, sig, sig_len)"
                                                  ,&_LC5,iVar2,0);
                                    if (iVar2 != 0) {
                                      iVar2 = EVP_DigestVerifyInit
                                                        (ctx_02,(EVP_PKEY_CTX **)0x0,local_290,
                                                         (ENGINE *)0x0,local_200);
                                      iVar2 = test_true("test/evp_extra_test.c",0xa56,
                                                                                                                
                                                  "EVP_DigestVerifyInit(md_ctx_verify, NULL, check_md, NULL, pkey)"
                                                  ,iVar2 != 0);
                                      if (iVar2 != 0) {
                                        uVar3 = EVP_PKEY_CTX_set1_id(local_288,0,0);
                                        iVar2 = test_int_gt("test/evp_extra_test.c",0xa5a,
                                                            "EVP_PKEY_CTX_set1_id(sctx, NULL, 0)",
                                                            &_LC5,uVar3,0);
                                        if (iVar2 != 0) {
                                          iVar2 = EVP_DigestVerifyUpdate(ctx_02,&kMsg,4);
                                          iVar2 = test_true("test/evp_extra_test.c",0xa5d,
                                                                                                                        
                                                  "EVP_DigestVerifyUpdate(md_ctx_verify, kMsg, sizeof(kMsg))"
                                                  ,iVar2 != 0);
                                          if (iVar2 != 0) {
                                            iVar2 = EVP_DigestVerifyFinal
                                                              (ctx_02,local_298,local_1f0);
                                            iVar2 = test_int_eq("test/evp_extra_test.c",0xa60,
                                                                                                                                
                                                  "EVP_DigestVerifyFinal(md_ctx_verify, sig, sig_len)"
                                                  ,&_LC5,iVar2,0);
                                            if (iVar2 != 0) {
                                              OSSL_PARAM_construct_utf8_string
                                                        (local_238,"digest",local_108,0x32);
                                              ctx_03 = (EVP_PKEY_CTX *)0x0;
                                              puVar5 = local_238;
                                              puVar6 = (undefined4 *)local_178;
                                              for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
                                                *puVar6 = *puVar5;
                                                puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
                                                puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
                                              }
                                              local_278 = 0;
                                              while( true ) {
                                                local_1d8[0] = "SM3";
                                                local_1d8[1] = "SHA2-256";
                                                EVP_PKEY_CTX_free(ctx_03);
                                                pcVar1 = local_1d8[local_278];
                                                if (pcVar1 != (char *)0x0) {
                                                  OSSL_PARAM_construct_utf8_string
                                                            (local_238,"digest",pcVar1,0);
                                                  puVar5 = local_238;
                                                  puVar6 = (undefined4 *)local_1c8;
                                                  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
                                                    *puVar6 = *puVar5;
                                                    puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
                                                    puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
                                                  }
                                                  ctx_03 = (EVP_PKEY_CTX *)
                                                           EVP_PKEY_CTX_new_from_pkey
                                                                     (testctx,local_200,0);
                                                  iVar2 = test_ptr("test/evp_extra_test.c",0xa78,
                                                                                                                                      
                                                  "cctx = EVP_PKEY_CTX_new_from_pkey(testctx, pkey, testpropq)"
                                                  ,ctx_03);
                                                  if (iVar2 == 0) goto LAB_001083ee;
                                                  iVar2 = EVP_PKEY_encrypt_init(ctx_03);
                                                  iVar2 = test_true("test/evp_extra_test.c",0xa7c,
                                                                    "EVP_PKEY_encrypt_init(cctx)",
                                                                    iVar2 != 0);
                                                  if (iVar2 == 0) goto LAB_001083ee;
                                                  iVar2 = EVP_PKEY_CTX_set_params(ctx_03,local_1c8);
                                                  iVar2 = test_true("test/evp_extra_test.c",0xa7f,
                                                                                                                                        
                                                  "EVP_PKEY_CTX_set_params(cctx, sparams)",
                                                  iVar2 != 0);
                                                  if (iVar2 == 0) goto LAB_001083ee;
                                                  iVar2 = EVP_PKEY_encrypt(ctx_03,local_c8,
                                                                           &local_1e8,
                                                                           "\x01\x02\x03\x04",4);
                                                  iVar2 = test_true("test/evp_extra_test.c",0xa82,
                                                                                                                                        
                                                  "EVP_PKEY_encrypt(cctx, ciphertext, &ctext_len, kMsg, sizeof(kMsg))"
                                                  ,iVar2 != 0);
                                                  if (iVar2 == 0) goto LAB_001083ee;
                                                  iVar2 = EVP_PKEY_decrypt_init(ctx_03);
                                                  iVar2 = test_int_gt("test/evp_extra_test.c",0xa86,
                                                                      "EVP_PKEY_decrypt_init(cctx)",
                                                                      &_LC5,iVar2,0);
                                                  if (iVar2 == 0) goto LAB_001083ee;
                                                  iVar2 = EVP_PKEY_CTX_set_params(ctx_03,local_1c8);
                                                  iVar2 = test_true("test/evp_extra_test.c",0xa89,
                                                                                                                                        
                                                  "EVP_PKEY_CTX_set_params(cctx, sparams)",
                                                  iVar2 != 0);
                                                  if (iVar2 == 0) goto LAB_001083ee;
                                                  iVar2 = EVP_PKEY_decrypt(ctx_03,(uchar *)local_11a
                                                                           ,&local_1e0,local_c8,
                                                                           local_1e8);
                                                  iVar2 = test_int_gt("test/evp_extra_test.c",0xa8c,
                                                                                                                                            
                                                  "EVP_PKEY_decrypt(cctx, plaintext, &ptext_len, ciphertext, ctext_len)"
                                                  ,&_LC5,iVar2,0);
                                                  if (iVar2 == 0) goto LAB_001083ee;
                                                  iVar2 = EVP_PKEY_CTX_get_params(ctx_03,local_178);
                                                  iVar2 = test_true("test/evp_extra_test.c",0xa90,
                                                                                                                                        
                                                  "EVP_PKEY_CTX_get_params(cctx, gparams)",
                                                  iVar2 != 0);
                                                  if (iVar2 == 0) goto LAB_001083ee;
                                                  EVP_MD_free(local_290);
                                                  local_290 = (EVP_MD *)
                                                              EVP_MD_fetch(testctx,local_108,0);
                                                  iVar2 = test_ptr("test/evp_extra_test.c",0xa99,
                                                                                                                                      
                                                  "check_md = EVP_MD_fetch(testctx, mdname, testpropq)"
                                                  ,local_290);
                                                  if (iVar2 == 0) goto LAB_001083ee;
                                                  iVar2 = EVP_MD_is_a(local_290,pcVar1);
                                                  iVar2 = test_true("test/evp_extra_test.c",0xa9b,
                                                                                                                                        
                                                  "EVP_MD_is_a(check_md, mdnames[i])",iVar2 != 0);
                                                  if (iVar2 == 0) {
                                                    test_info("test/evp_extra_test.c",0xa9c,
                                                              "Fetched md %s isn\'t %s",local_108,
                                                              pcVar1);
                                                    goto LAB_001083ee;
                                                  }
                                                  iVar2 = test_true("test/evp_extra_test.c",0xaa0,
                                                                    "ptext_len == sizeof(kMsg)",
                                                                    local_1e0 == 4);
                                                  if ((iVar2 == 0) ||
                                                     (iVar2 = test_true("test/evp_extra_test.c",
                                                                        0xaa3,
                                                  "memcmp(plaintext, kMsg, sizeof(kMsg)) == 0",
                                                  local_11a[0] == 0x4030201), iVar2 == 0))
                                                  goto LAB_001083ee;
                                                }
                                                if (local_278 != 0) break;
                                                local_278 = 1;
                                              }
                                              iVar2 = 1;
                                              goto LAB_001083f0;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            ctx_03 = (EVP_PKEY_CTX *)0x0;
                            iVar2 = 0;
                            goto LAB_001083f0;
                          }
                        }
                      }
                    }
                    ctx_03 = (EVP_PKEY_CTX *)0x0;
                    iVar2 = 0;
                    local_298 = (uchar *)0x0;
                  }
                }
              }
              goto LAB_001083f0;
            }
          }
          ctx_03 = (EVP_PKEY_CTX *)0x0;
          ctx_02 = (EVP_MD_CTX *)0x0;
          ctx_01 = (EVP_MD_CTX *)0x0;
          iVar2 = 0;
          local_290 = (EVP_MD *)0x0;
          local_298 = (uchar *)0x0;
          local_288 = (EVP_PKEY_CTX *)0x0;
          goto LAB_001083f0;
        }
      }
    }
  }
  ctx_03 = (EVP_PKEY_CTX *)0x0;
  ctx_02 = (EVP_MD_CTX *)0x0;
  ctx_01 = (EVP_MD_CTX *)0x0;
  ctx_00 = (EVP_PKEY_CTX *)0x0;
  local_290 = (EVP_MD *)0x0;
  local_298 = (uchar *)0x0;
  local_288 = (EVP_PKEY_CTX *)0x0;
LAB_001083ee:
  iVar2 = 0;
LAB_001083f0:
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_CTX_free(ctx_00);
  EVP_PKEY_CTX_free(local_288);
  EVP_PKEY_CTX_free(ctx_03);
  EVP_PKEY_free(local_200);
  EVP_PKEY_free(local_1f8);
  EVP_MD_CTX_free(ctx_01);
  EVP_MD_CTX_free(ctx_02);
  EVP_MD_free(local_290);
  CRYPTO_free(local_298);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



uint test_EC_keygen_with_enc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  long in_FS_OFFSET;
  undefined4 local_44;
  EVP_PKEY *local_40;
  EVP_PKEY *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (EVP_PKEY *)0x0;
  local_38 = (EVP_PKEY *)0x0;
  uVar1 = *(undefined4 *)(ec_encodings + (long)param_1 * 0x10);
  local_44 = uVar1;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(testctx,&_LC262,0);
  iVar2 = test_ptr("test/evp_extra_test.c",0x984,
                   "pctx = EVP_PKEY_CTX_new_from_name(testctx, \"EC\", NULL)",ctx);
  if (iVar2 != 0) {
    iVar2 = EVP_PKEY_paramgen_init(ctx);
    iVar2 = test_int_gt("test/evp_extra_test.c",0x985,"EVP_PKEY_paramgen_init(pctx)",&_LC5,iVar2,0);
    if (iVar2 != 0) {
      uVar3 = EVP_PKEY_CTX_set_group_name(ctx,"P-256");
      iVar2 = test_int_gt("test/evp_extra_test.c",0x986,
                          "EVP_PKEY_CTX_set_group_name(pctx, \"P-256\")",&_LC5,uVar3,0);
      if (iVar2 != 0) {
        uVar3 = EVP_PKEY_CTX_set_ec_param_enc(ctx,local_44);
        iVar2 = test_int_gt("test/evp_extra_test.c",0x987,"EVP_PKEY_CTX_set_ec_param_enc(pctx, enc)"
                            ,&_LC5,uVar3,0);
        if (iVar2 != 0) {
          iVar2 = EVP_PKEY_paramgen(ctx,&local_40);
          iVar2 = test_true("test/evp_extra_test.c",0x988,"EVP_PKEY_paramgen(pctx, &params)",
                            iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = test_ptr("test/evp_extra_test.c",0x989,"params",local_40);
            if (iVar2 != 0) {
              ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(testctx,local_40,0);
              iVar2 = test_ptr("test/evp_extra_test.c",0x98d,
                               "kctx = EVP_PKEY_CTX_new_from_pkey(testctx, params, NULL)",ctx_00);
              if (iVar2 != 0) {
                iVar2 = EVP_PKEY_keygen_init(ctx_00);
                iVar2 = test_int_gt("test/evp_extra_test.c",0x98e,"EVP_PKEY_keygen_init(kctx)",&_LC5
                                    ,iVar2,0);
                if (iVar2 != 0) {
                  iVar2 = EVP_PKEY_keygen(ctx_00,&local_38);
                  uVar4 = test_true("test/evp_extra_test.c",0x98f,"EVP_PKEY_keygen(kctx, &key)",
                                    iVar2 != 0);
                  if (uVar4 == 0) goto LAB_00108f09;
                  iVar2 = test_ptr("test/evp_extra_test.c",0x990,&_LC433,local_38);
                  if (iVar2 != 0) {
                    iVar2 = evp_keymgmt_util_export
                                      (local_38,0x87,ec_export_get_encoding_cb,&local_44);
                    iVar2 = test_true("test/evp_extra_test.c",0x994,
                                      "evp_keymgmt_util_export(key, OSSL_KEYMGMT_SELECT_ALL, ec_export_get_encoding_cb, &enc)"
                                      ,iVar2 != 0);
                    if (iVar2 != 0) {
                      iVar2 = test_int_eq("test/evp_extra_test.c",0x996,&_LC436,
                                          "ec_encodings[idx].encoding",local_44,uVar1);
                      uVar4 = (uint)(iVar2 != 0);
                      goto LAB_00108f09;
                    }
                  }
                }
              }
              uVar4 = 0;
              goto LAB_00108f09;
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
  ctx_00 = (EVP_PKEY_CTX *)0x0;
LAB_00108f09:
  EVP_PKEY_free(local_38);
  EVP_PKEY_free(local_40);
  EVP_PKEY_CTX_free(ctx_00);
  EVP_PKEY_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ec_export_get_encoding_cb(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = -1;
  local_28 = 0;
  uVar2 = OSSL_PARAM_locate_const(param_1,"encoding");
  iVar1 = test_ptr("test/evp_extra_test.c",0x96b,
                   "p = OSSL_PARAM_locate_const(params, OSSL_PKEY_PARAM_EC_ENCODING)",uVar2);
  if (iVar1 != 0) {
    iVar1 = OSSL_PARAM_get_utf8_string_ptr(uVar2,&local_28);
    iVar1 = test_true("test/evp_extra_test.c",0x96d,"OSSL_PARAM_get_utf8_string_ptr(p, &enc_name)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = OPENSSL_strcasecmp(local_28,"explicit");
      if (iVar1 != 0) {
        iVar1 = OPENSSL_strcasecmp(local_28,"named_curve");
        if (iVar1 != 0) {
          bVar3 = *param_2 != -1;
          goto LAB_001091d0;
        }
        iVar1 = 1;
      }
      *param_2 = iVar1;
      bVar3 = true;
      goto LAB_001091d0;
    }
  }
  bVar3 = false;
LAB_001091d0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_EVP_PKCS82PKEY(void)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  bool bVar2;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = kExampleBadECKeyDER;
  p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_28,0x68);
  iVar1 = test_ptr("test/evp_extra_test.c",0x8e8,
                   "p8inf = d2i_PKCS8_PRIV_KEY_INFO(NULL, &derp, sizeof(kExampleBadECKeyDER))",p8);
  if (iVar1 != 0) {
    iVar1 = test_ptr_eq("test/evp_extra_test.c",0x8ec,&_LC444,
                        "kExampleBadECKeyDER + sizeof(kExampleBadECKeyDER)",local_28,&DAT_0011ad48);
    if (iVar1 != 0) {
      pkey = EVP_PKCS82PKEY(p8);
      iVar1 = test_ptr_null("test/evp_extra_test.c",0x8f0,"pkey = EVP_PKCS82PKEY(p8inf)",pkey);
      bVar2 = iVar1 != 0;
      goto LAB_001092ce;
    }
  }
  pkey = (EVP_PKEY *)0x0;
  bVar2 = false;
LAB_001092ce:
  PKCS8_PRIV_KEY_INFO_free(p8);
  EVP_PKEY_free(pkey);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_EVP_PKCS82PKEY_v2(int param_1)

{
  long len;
  uchar *puVar1;
  uint uVar2;
  int iVar3;
  PKCS8_PRIV_KEY_INFO *a;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  len = *(long *)(keydata_v2 + (long)param_1 * 0x30 + 8);
  puVar1 = *(uchar **)(keydata_v2 + (long)param_1 * 0x30);
  local_38 = puVar1;
  a = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_38,len);
  uVar2 = test_ptr("test/evp_extra_test.c",0x90a,"p8inf",a);
  if (uVar2 != 0) {
    iVar3 = test_true("test/evp_extra_test.c",0x90b,"p == input + input_len",
                      local_38 == puVar1 + len);
    uVar2 = (uint)(iVar3 != 0);
  }
  PKCS8_PRIV_KEY_INFO_free(a);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_d2i_AutoPrivateKey(int param_1)

{
  undefined4 uVar1;
  long length;
  uchar *puVar2;
  int iVar3;
  undefined4 uVar4;
  EVP_PKEY *pkey;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  uchar *local_38;
  long local_30;
  
  lVar5 = (long)param_1 * 0x30;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  length = *(long *)(keydata + lVar5 + 8);
  puVar2 = *(uchar **)(keydata + lVar5);
  uVar1 = *(undefined4 *)(keydata + lVar5 + 0x18);
  local_38 = puVar2;
  pkey = d2i_AutoPrivateKey((EVP_PKEY **)0x0,&local_38,length);
  iVar3 = test_ptr("test/evp_extra_test.c",0x89c,"pkey = d2i_AutoPrivateKey(NULL, &p, input_len)",
                   pkey);
  if (iVar3 != 0) {
    iVar3 = test_ptr_eq("test/evp_extra_test.c",0x89d,&_LC288,"input + input_len",local_38,
                        puVar2 + length);
    if (iVar3 != 0) {
      uVar4 = EVP_PKEY_get_id(pkey);
      iVar3 = test_int_eq("test/evp_extra_test.c",0x89e,"EVP_PKEY_get_id(pkey)","expected_id",uVar4,
                          uVar1);
      bVar6 = iVar3 != 0;
      goto LAB_001094a8;
    }
  }
  bVar6 = false;
LAB_001094a8:
  EVP_PKEY_free(pkey);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_EVP_md_null(void)

{
  uint uVar1;
  int iVar2;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = EVP_md_null();
  local_7c = 0x40;
  if (nullprov != 0) {
    uVar1 = test_skip("test/evp_extra_test.c",0x87d,
                      "Test does not support a non-default library context");
    goto LAB_00109593;
  }
  uVar1 = test_ptr("test/evp_extra_test.c",0x87f,"md_null",type);
  ctx = (EVP_MD_CTX *)0x0;
  if (uVar1 != 0) {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    uVar1 = test_ptr("test/evp_extra_test.c",0x880,"md_ctx = EVP_MD_CTX_new()",ctx);
    if (uVar1 != 0) {
      iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
      iVar2 = test_true("test/evp_extra_test.c",0x883,"EVP_DigestInit_ex(md_ctx, md_null, NULL)",
                        iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = EVP_DigestUpdate(ctx,&_LC4,4);
        iVar2 = test_true("test/evp_extra_test.c",0x884,"EVP_DigestUpdate(md_ctx, \"test\", 4)",
                          iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = EVP_DigestFinal_ex(ctx,local_78,&local_7c);
          iVar2 = test_true("test/evp_extra_test.c",0x885,
                            "EVP_DigestFinal_ex(md_ctx, md_value, &md_len)",iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = test_uint_eq("test/evp_extra_test.c",0x888,"md_len",&_LC5,local_7c,0);
            uVar1 = (uint)(iVar2 != 0);
            goto LAB_00109604;
          }
        }
      }
      uVar1 = 0;
    }
  }
LAB_00109604:
  EVP_MD_CTX_free(ctx);
LAB_00109593:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_EVP_Digest(void)

{
  int iVar1;
  uint uVar2;
  EVP_MD_CTX *ctx;
  EVP_MD *type;
  EVP_MD *type_00;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  iVar1 = test_ptr("test/evp_extra_test.c",0x84a,"md_ctx = EVP_MD_CTX_new()",ctx);
  if (iVar1 == 0) {
    uVar2 = 0;
    type_00 = (EVP_MD *)0x0;
    type = (EVP_MD *)0x0;
  }
  else {
    type_00 = (EVP_MD *)0x0;
    type = (EVP_MD *)EVP_MD_fetch(testctx,"sha256",0);
    uVar2 = test_ptr("test/evp_extra_test.c",0x84d,
                     "sha256 = EVP_MD_fetch(testctx, \"sha256\", testpropq)",type);
    if (uVar2 != 0) {
      type_00 = (EVP_MD *)EVP_MD_fetch(testctx,"shake256",0);
      iVar1 = test_ptr("test/evp_extra_test.c",0x84e,
                       "shake256 = EVP_MD_fetch(testctx, \"shake256\", testpropq)",type_00);
      if (iVar1 != 0) {
        iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
        iVar1 = test_true("test/evp_extra_test.c",0x851,"EVP_DigestInit_ex(md_ctx, sha256, NULL)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = EVP_DigestUpdate(ctx,&kMsg,4);
          iVar1 = test_true("test/evp_extra_test.c",0x852,
                            "EVP_DigestUpdate(md_ctx, kMsg, sizeof(kMsg))",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = EVP_DigestFinal(ctx,local_88,(uint *)0x0);
            iVar1 = test_true("test/evp_extra_test.c",0x853,"EVP_DigestFinal(md_ctx, md, NULL)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              uVar3 = EVP_MD_CTX_get0_md(ctx);
              iVar1 = test_ptr_eq("test/evp_extra_test.c",0x855,"EVP_MD_CTX_get0_md(md_ctx)",&_LC463
                                  ,uVar3,0);
              if (iVar1 != 0) {
                iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
                iVar1 = test_true("test/evp_extra_test.c",0x858,
                                  "EVP_DigestInit_ex(md_ctx, sha256, NULL)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = EVP_DigestUpdate(ctx,&kMsg,4);
                  iVar1 = test_true("test/evp_extra_test.c",0x859,
                                    "EVP_DigestUpdate(md_ctx, kMsg, sizeof(kMsg))",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = EVP_DigestFinal_ex(ctx,local_88,(uint *)0x0);
                    iVar1 = test_true("test/evp_extra_test.c",0x85a,
                                      "EVP_DigestFinal_ex(md_ctx, md, NULL)",iVar1 != 0);
                    if (iVar1 != 0) {
                      uVar3 = EVP_MD_CTX_get0_md(ctx);
                      iVar1 = test_ptr("test/evp_extra_test.c",0x85c,"EVP_MD_CTX_get0_md(md_ctx)",
                                       uVar3);
                      if (iVar1 != 0) {
                        iVar1 = EVP_DigestInit_ex(ctx,(EVP_MD *)0x0,(ENGINE *)0x0);
                        iVar1 = test_true("test/evp_extra_test.c",0x861,
                                          "EVP_DigestInit_ex(md_ctx, NULL, NULL)",iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = EVP_DigestInit_ex(ctx,type_00,(ENGINE *)0x0);
                          iVar1 = test_true("test/evp_extra_test.c",0x864,
                                            "EVP_DigestInit_ex(md_ctx, shake256, NULL)",iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = EVP_DigestUpdate(ctx,&kMsg,4);
                            iVar1 = test_true("test/evp_extra_test.c",0x865,
                                              "EVP_DigestUpdate(md_ctx, kMsg, sizeof(kMsg))",
                                              iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = EVP_DigestFinalXOF(ctx,local_88,0x40);
                              iVar1 = test_true("test/evp_extra_test.c",0x866,
                                                "EVP_DigestFinalXOF(md_ctx, md, sizeof(md))",
                                                iVar1 != 0);
                              if (iVar1 != 0) {
                                uVar3 = EVP_MD_CTX_get0_md(ctx);
                                iVar1 = test_ptr("test/evp_extra_test.c",0x868,
                                                 "EVP_MD_CTX_get0_md(md_ctx)",uVar3);
                                if (iVar1 != 0) {
                                  iVar1 = EVP_DigestInit_ex(ctx,(EVP_MD *)0x0,(ENGINE *)0x0);
                                  iVar1 = test_true("test/evp_extra_test.c",0x869,
                                                    "EVP_DigestInit_ex(md_ctx, NULL, NULL)",
                                                    iVar1 != 0);
                                  uVar2 = (uint)(iVar1 != 0);
                                  goto LAB_00109734;
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
    }
  }
LAB_00109734:
  EVP_MD_CTX_free(ctx);
  EVP_MD_free(type);
  EVP_MD_free(type_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_EVP_set_default_properties(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *ptr;
  long in_FS_OFFSET;
  char local_88 [8];
  char acStack_80 [8];
  undefined2 local_78;
  char local_68 [8];
  undefined3 uStack_60;
  undefined5 uStack_5d;
  undefined3 uStack_58;
  char acStack_55 [21];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (char  [8])_LC480._0_8_;
  acStack_80 = (char  [8])_LC480._8_8_;
  local_78 = 0x67;
  local_68 = (char  [8])_LC480._16_8_;
  uStack_60 = (undefined3)_LC480._24_8_;
  uStack_5d = (undefined5)_LC480._32_8_;
  uStack_58 = SUB83(_LC480._32_8_,5);
  acStack_55._0_8_ = _LC480._40_8_;
  uVar3 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/evp_extra_test.c",999,"ctx = OSSL_LIB_CTX_new()",uVar3);
  if (iVar1 != 0) {
    ptr = (void *)0x0;
    uVar4 = EVP_MD_fetch(uVar3,"sha256",0);
    uVar2 = test_ptr("test/evp_extra_test.c",1000,"md = EVP_MD_fetch(ctx, \"sha256\", NULL)",uVar4);
    if (uVar2 == 0) goto LAB_00109b25;
    EVP_MD_free(uVar4);
    iVar1 = EVP_set_default_properties(uVar3,local_88);
    iVar1 = test_true("test/evp_extra_test.c",0x3ed,"EVP_set_default_properties(ctx, test_propq)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      uVar4 = EVP_MD_fetch(uVar3,"sha256",0);
      uVar2 = test_ptr_null("test/evp_extra_test.c",0x3ee,"md = EVP_MD_fetch(ctx, \"sha256\", NULL)"
                            ,uVar4);
      if (uVar2 == 0) goto LAB_00109b25;
      uVar5 = EVP_MD_fetch(uVar3,"sha256","-provider");
      uVar2 = test_ptr("test/evp_extra_test.c",0x3ef,
                       "md = EVP_MD_fetch(ctx, \"sha256\", \"-provider\")",uVar5);
      uVar4 = uVar5;
      if (uVar2 == 0) goto LAB_00109b25;
      uVar4 = 0;
      EVP_MD_free(uVar5);
      ptr = (void *)EVP_get1_default_properties(uVar3);
      uVar2 = test_ptr("test/evp_extra_test.c",0x3f5,"fetched_properties",ptr);
      if (uVar2 == 0) goto LAB_00109b25;
      uVar2 = test_str_eq("test/evp_extra_test.c",0x3f6,"fetched_properties","test_propq",ptr,
                          local_88);
      if (uVar2 == 0) goto LAB_00109b25;
      CRYPTO_free(ptr);
      iVar1 = EVP_default_properties_enable_fips(uVar3,1);
      iVar1 = test_true("test/evp_extra_test.c",0x3fb,"EVP_default_properties_enable_fips(ctx, 1)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        ptr = (void *)EVP_get1_default_properties(uVar3);
        uVar2 = test_ptr("test/evp_extra_test.c",0x3fe,"fetched_properties",ptr);
        if (uVar2 == 0) goto LAB_00109b25;
        uVar2 = test_str_eq("test/evp_extra_test.c",0x3ff,"fetched_properties","test_fips_propq",ptr
                            ,local_68);
        if (uVar2 == 0) goto LAB_00109b25;
        CRYPTO_free(ptr);
        iVar1 = EVP_default_properties_enable_fips(uVar3,0);
        iVar1 = test_true("test/evp_extra_test.c",0x404,"EVP_default_properties_enable_fips(ctx, 0)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = EVP_set_default_properties(uVar3,0);
          iVar1 = test_true("test/evp_extra_test.c",0x407,"EVP_set_default_properties(ctx, NULL)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            uVar4 = EVP_MD_fetch(uVar3,"sha256",0);
            iVar1 = test_ptr("test/evp_extra_test.c",0x408,
                             "md = EVP_MD_fetch(ctx, \"sha256\", NULL)",uVar4);
            uVar2 = (uint)(iVar1 != 0);
            ptr = (void *)0x0;
            goto LAB_00109b25;
          }
        }
      }
    }
  }
  ptr = (void *)0x0;
  uVar2 = 0;
  uVar4 = 0;
LAB_00109b25:
  CRYPTO_free(ptr);
  EVP_MD_free(uVar4);
  OSSL_LIB_CTX_free(uVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_EVP_set_config_properties(void)

{
  int iVar1;
  undefined8 uVar2;
  void *ptr;
  void *ptr_00;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined7 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = __LC483;
  uStack_30 = (undefined7)_UNK_0011d3e8;
  uStack_29 = 0x75;
  uStack_28 = 0x7a7a69667a7a;
  uVar2 = OSSL_LIB_CTX_get0_global_default();
  ptr = (void *)EVP_get1_default_properties(uVar2);
  iVar1 = test_ptr("test/evp_extra_test.c",0x3d2,"fetched_properties",ptr);
  if (iVar1 != 0) {
    iVar1 = test_str_eq("test/evp_extra_test.c",0x3d3,"fetched_properties","test_propq",ptr,
                        &local_38);
    if (iVar1 != 0) {
      ptr_00 = (void *)0x0;
      CRYPTO_free(ptr);
      uVar2 = 1;
      goto LAB_00109e6f;
    }
  }
  uVar2 = 0;
  ptr_00 = ptr;
LAB_00109e6f:
  CRYPTO_free(ptr_00);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_evp_cipher_pipeline(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *pEVar11;
  void *pvVar12;
  long *plVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint num;
  int num_00;
  undefined4 *puVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long in_FS_OFFSET;
  byte bVar25;
  EVP_CIPHER *local_ac8;
  void *local_ab8;
  long local_aa0;
  ulong local_a98;
  long *local_a68;
  uchar *local_a60;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  int local_9c4;
  undefined8 *local_9c0;
  undefined1 local_9b8 [16];
  undefined1 local_9a8 [16];
  undefined1 local_998 [16];
  undefined1 local_988 [16];
  undefined1 local_978 [16];
  undefined8 local_968 [31];
  undefined8 auStack_870 [32];
  long alStack_770 [32];
  long alStack_670 [33];
  long local_568 [31];
  ulong auStack_470 [32];
  long alStack_370 [32];
  long alStack_270 [32];
  ulong auStack_170 [33];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  bVar25 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = auStack_870 + 1;
  local_9b8 = (undefined1  [16])0x0;
  local_9a8 = (undefined1  [16])0x0;
  local_998 = (undefined1  [16])0x0;
  local_988 = (undefined1  [16])0x0;
  local_978 = (undefined1  [16])0x0;
  local_9c0 = puVar2;
  uVar9 = fake_pipeline_start(testctx);
  iVar8 = test_ptr("test/evp_extra_test.c",0x1971,"fake_pipeline = fake_pipeline_start(testctx)",
                   uVar9);
  if (iVar8 == 0) goto LAB_00109f77;
  uVar10 = EVP_CIPHER_fetch(testctx,"AES-256-GCM","provider=fake-pipeline");
  iVar8 = test_ptr("test/evp_extra_test.c",0x1973,
                   "pipeline_cipher = EVP_CIPHER_fetch(testctx, \"AES-256-GCM\", \"provider=fake-pipeline\")"
                   ,uVar10);
  if (iVar8 == 0) {
    local_ac8 = (EVP_CIPHER *)0x0;
    ctx = (EVP_CIPHER_CTX *)0x0;
    iVar8 = 0;
  }
  else {
    ctx = (EVP_CIPHER_CTX *)0x0;
    local_ac8 = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"AES-256-GCM","provider!=fake-pipeline");
    iVar8 = test_ptr("test/evp_extra_test.c",0x1975,
                     "cipher = EVP_CIPHER_fetch(testctx, \"AES-256-GCM\", \"provider!=fake-pipeline\")"
                     ,local_ac8);
    if (iVar8 != 0) {
      ctx = EVP_CIPHER_CTX_new();
      iVar8 = test_ptr("test/evp_extra_test.c",0x1977,"ctx = EVP_CIPHER_CTX_new()",ctx);
      if (iVar8 != 0) {
        local_68 = __LC490;
        uStack_60 = _UNK_0011d3f8;
        local_58 = __LC490;
        uStack_50 = _UNK_0011d3f8;
        iVar8 = EVP_CIPHER_can_pipeline(local_ac8,1);
        iVar8 = test_false("test/evp_extra_test.c",0x197c,"EVP_CIPHER_can_pipeline(cipher, 1)",
                           iVar8 != 0);
        if (iVar8 != 0) {
          pEVar11 = EVP_aes_256_gcm();
          iVar8 = EVP_CIPHER_can_pipeline(pEVar11,1);
          iVar8 = test_false("test/evp_extra_test.c",0x197e,
                             "EVP_CIPHER_can_pipeline(EVP_aes_256_gcm(), 1)",iVar8 != 0);
          if (iVar8 != 0) {
            iVar8 = EVP_CipherPipelineEncryptInit(ctx,uVar10,&local_68,0x20,0x21,0,0);
            iVar8 = test_false("test/evp_extra_test.c",0x1980,
                               "EVP_CipherPipelineEncryptInit(ctx, pipeline_cipher, key, keylen, EVP_MAX_PIPES + 1, NULL, 0)"
                               ,iVar8 != 0);
            if (iVar8 != 0) {
              plVar3 = alStack_770 + 1;
              plVar4 = alStack_670 + 1;
              local_a98 = 2;
              local_aa0 = 1;
              do {
                uVar18 = 0x21;
                do {
                  uVar1 = uVar18 - 0x20;
                  uVar19 = 1;
                  puVar20 = local_968;
                  for (lVar15 = 0x20; lVar15 != 0; lVar15 = lVar15 + -1) {
                    *puVar20 = 0;
                    puVar20 = puVar20 + (ulong)bVar25 * -2 + 1;
                  }
                  local_9c4 = 0;
                  plVar22 = plVar3;
                  for (lVar15 = 0x20; lVar15 != 0; lVar15 = lVar15 + -1) {
                    *plVar22 = 0;
                    plVar22 = plVar22 + (ulong)bVar25 * -2 + 1;
                  }
                  plVar22 = plVar4;
                  for (lVar15 = 0x20; lVar15 != 0; lVar15 = lVar15 + -1) {
                    *plVar22 = 0;
                    plVar22 = plVar22 + (ulong)bVar25 * -2 + 1;
                  }
                  puVar20 = puVar2;
                  for (lVar15 = 0x20; lVar15 != 0; lVar15 = lVar15 + -1) {
                    *puVar20 = 0;
                    puVar20 = puVar20 + (ulong)bVar25 * -2 + 1;
                  }
                  do {
                    pvVar12 = CRYPTO_malloc(0xc,"test/evp_extra_test.c",0x1996);
                    *(void **)(local_978 + uVar19 * 8 + 8) = pvVar12;
                    iVar8 = test_ptr("test/evp_extra_test.c",0x1996,
                                     "iv_array[i] = OPENSSL_malloc(ivlen)",pvVar12);
                    if (iVar8 == 0) {
LAB_0010a3b4:
                      local_ab8 = (void *)0x0;
                      local_a68 = (long *)0x0;
                      local_a60 = (uchar *)0x0;
                      goto LAB_0010a3de;
                    }
                    num = (uint)uVar1;
                    pvVar12 = CRYPTO_malloc(num,"test/evp_extra_test.c",0x1997);
                    alStack_770[uVar19] = (long)pvVar12;
                    iVar8 = test_ptr("test/evp_extra_test.c",0x1997,
                                     "plaintext_array[i] = OPENSSL_malloc(plaintextlen)",pvVar12);
                    if (iVar8 == 0) goto LAB_0010a3b4;
                    num_00 = (int)uVar18;
                    pvVar12 = CRYPTO_malloc(num_00,"test/evp_extra_test.c",0x1999);
                    alStack_670[uVar19] = (long)pvVar12;
                    iVar8 = test_ptr("test/evp_extra_test.c",0x1998,
                                     "ciphertext_array_p[i] = OPENSSL_malloc(plaintextlen + EVP_MAX_BLOCK_LENGTH)"
                                    );
                    if (iVar8 == 0) goto LAB_0010a3b4;
                    pvVar12 = CRYPTO_malloc(0x10,"test/evp_extra_test.c",0x199a);
                    auStack_870[uVar19] = pvVar12;
                    iVar8 = test_ptr("test/evp_extra_test.c",0x199a,
                                     "tag_array[i] = OPENSSL_malloc(taglen)");
                    if (iVar8 == 0) goto LAB_0010a3b4;
                    plVar22 = *(long **)(local_978 + uVar19 * 8 + 8);
                    lVar15 = (ulong)((int)uVar19 + 0x20U & 0xff) * 0x101010101010101;
                    *plVar22 = lVar15;
                    *(int *)(plVar22 + 1) = (int)lVar15;
                    plVar22 = (long *)alStack_770[uVar19];
                    lVar15 = (uVar19 & 0xff) * 0x101010101010101;
                    if (num < 8) {
                      if ((uVar1 & 4) == 0) {
                        if ((num != 0) && (*(char *)plVar22 = (char)lVar15, (uVar1 & 2) != 0)) {
                          *(short *)((long)plVar22 + ((uVar1 & 0xffffffff) - 2)) = (short)lVar15;
                        }
                      }
                      else {
                        *(int *)plVar22 = (int)lVar15;
                        *(int *)((long)plVar22 + ((uVar1 & 0xffffffff) - 4)) = (int)lVar15;
                      }
                    }
                    else {
                      *plVar22 = lVar15;
                      *(long *)((long)plVar22 + ((uVar1 & 0xffffffff) - 8)) = lVar15;
                      uVar16 = (ulong)(num + ((int)plVar22 -
                                             (int)(long *)((ulong)(plVar22 + 1) & 0xfffffffffffffff8
                                                          )) >> 3);
                      plVar22 = (long *)((ulong)(plVar22 + 1) & 0xfffffffffffffff8);
                      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                        *plVar22 = lVar15;
                        plVar22 = plVar22 + (ulong)bVar25 * -2 + 1;
                      }
                    }
                    auStack_170[uVar19] = uVar1;
                    puVar7 = auStack_170 + 1;
                    plVar22 = alStack_370 + 1;
                    plVar5 = alStack_270 + 1;
                    puVar6 = auStack_470 + 1;
                    alStack_370[uVar19] = 0;
                    alStack_270[uVar19] = 0;
                    auStack_470[uVar19] = uVar18;
                    uVar19 = uVar19 + 1;
                  } while (local_a98 != uVar19);
                  local_a60 = (uchar *)CRYPTO_malloc(num_00,"test/evp_extra_test.c",0x19a5);
                  iVar8 = test_ptr("test/evp_extra_test.c",0x19a4,
                                   "ciphertext = OPENSSL_malloc(plaintextlen + EVP_MAX_BLOCK_LENGTH)"
                                   ,local_a60);
                  if (iVar8 == 0) {
                    local_ab8 = (void *)0x0;
                    local_a68 = (long *)0x0;
LAB_0010a3de:
                    lVar15 = 0;
                    do {
                      CRYPTO_free((void *)local_968[lVar15]);
                      CRYPTO_free((void *)plVar3[lVar15]);
                      CRYPTO_free((void *)plVar4[lVar15]);
                      puVar20 = puVar2 + lVar15;
                      lVar15 = lVar15 + 1;
                      CRYPTO_free((void *)*puVar20);
                    } while (local_aa0 != lVar15);
                    iVar8 = 0;
                    CRYPTO_free(local_a68);
                    CRYPTO_free(local_a60);
                    CRYPTO_free(local_ab8);
                    goto LAB_0010a024;
                  }
                  local_ab8 = CRYPTO_malloc(0x10,"test/evp_extra_test.c",0x19a6);
                  iVar8 = test_ptr("test/evp_extra_test.c",0x19a6,"tag = OPENSSL_malloc(taglen)",
                                   local_ab8);
                  if (iVar8 == 0) {
                    local_a68 = (long *)0x0;
                    goto LAB_0010a3de;
                  }
                  local_a68 = (long *)CRYPTO_malloc(num,"test/evp_extra_test.c",0x19a7);
                  iVar8 = test_ptr("test/evp_extra_test.c",0x19a7,
                                   "exp_plaintext = OPENSSL_malloc(plaintextlen)",local_a68);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  iVar8 = EVP_CIPHER_CTX_reset(ctx);
                  iVar8 = test_true("test/evp_extra_test.c",0x19ab,"EVP_CIPHER_CTX_reset(ctx)",
                                    iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  iVar8 = EVP_CIPHER_can_pipeline(uVar10,1);
                  iVar8 = test_true("test/evp_extra_test.c",0x19ac,
                                    "EVP_CIPHER_can_pipeline(pipeline_cipher, 1)",iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  iVar8 = EVP_CipherPipelineEncryptInit
                                    (ctx,uVar10,&local_68,0x20,local_aa0,local_968,0xc);
                  iVar8 = test_true("test/evp_extra_test.c",0x19ad,
                                    "EVP_CipherPipelineEncryptInit(ctx, pipeline_cipher, key, keylen, numpipes, (const unsigned char **)iv_array, ivlen)"
                                    ,iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  iVar8 = EVP_CipherPipelineUpdate(ctx,0,plVar22,0,plVar3,puVar7);
                  iVar8 = test_true("test/evp_extra_test.c",0x19b2,
                                    "EVP_CipherPipelineUpdate(ctx, NULL, outlen_array, NULL, (const unsigned char **)plaintext_array, inlen_array)"
                                    ,iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  iVar8 = EVP_CipherPipelineUpdate(ctx,plVar4,plVar22,puVar6,plVar3,puVar7);
                  iVar8 = test_true("test/evp_extra_test.c",0x19b5,
                                    "EVP_CipherPipelineUpdate(ctx, ciphertext_array_p, outlen_array, outsize_array, (const unsigned char **)plaintext_array, inlen_array)"
                                    ,iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  lVar15 = 0;
                  do {
                    lVar23 = plVar22[lVar15];
                    lVar24 = plVar4[lVar15];
                    puVar6[lVar15] = puVar6[lVar15] - lVar23;
                    plVar5[lVar15] = lVar23;
                    local_568[lVar15] = lVar24 + lVar23;
                    lVar15 = lVar15 + 1;
                  } while (local_aa0 != lVar15);
                  iVar8 = EVP_CipherPipelineFinal(ctx,local_568,plVar22,puVar6);
                  iVar8 = test_true("test/evp_extra_test.c",0x19c1,
                                    "EVP_CipherPipelineFinal(ctx, temp, outlen_array, outsize_array)"
                                    ,iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  plVar13 = plVar5;
                  plVar17 = plVar22;
                  do {
                    *plVar13 = *plVar13 + *plVar17;
                    plVar13 = plVar13 + 1;
                    plVar17 = plVar17 + 1;
                  } while (plVar5 + local_aa0 != plVar13);
                  OSSL_PARAM_construct_octet_ptr(&local_9f8,"pipeline-tag",&local_9c0,0x10);
                  local_998._0_8_ = local_9d8;
                  local_9b8._8_8_ = uStack_9f0;
                  local_9b8._0_8_ = local_9f8;
                  local_9a8._8_8_ = uStack_9e0;
                  local_9a8._0_8_ = local_9e8;
                  iVar8 = EVP_CIPHER_CTX_get_params(ctx,local_9b8);
                  iVar8 = test_true("test/evp_extra_test.c",0x19c9,
                                    "EVP_CIPHER_CTX_get_params(ctx, params)",iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  iVar8 = EVP_CIPHER_CTX_reset(ctx);
                  iVar8 = test_true("test/evp_extra_test.c",0x19cd,"EVP_CIPHER_CTX_reset(ctx)",
                                    iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  lVar15 = 0;
                  do {
                    iVar8 = EVP_EncryptInit(ctx,local_ac8,(uchar *)&local_68,
                                            (uchar *)local_968[lVar15]);
                    iVar8 = test_true("test/evp_extra_test.c",0x19d1,
                                      "EVP_EncryptInit(ctx, cipher, key, iv_array[i])",iVar8 != 0);
                    if (iVar8 == 0) goto LAB_0010a3de;
                    iVar8 = EVP_EncryptUpdate(ctx,(uchar *)0x0,&local_9c4,(uchar *)plVar3[lVar15],
                                              num_00 + -0x20);
                    iVar8 = test_true("test/evp_extra_test.c",0x19d2,
                                      "EVP_EncryptUpdate(ctx, NULL, &outlen, plaintext_array[i], plaintextlen)"
                                      ,iVar8 != 0);
                    if (iVar8 == 0) goto LAB_0010a3de;
                    iVar8 = EVP_EncryptUpdate(ctx,local_a60,&local_9c4,(uchar *)plVar3[lVar15],
                                              num_00 + -0x20);
                    iVar8 = test_true("test/evp_extra_test.c",0x19d5,
                                      "EVP_EncryptUpdate(ctx, ciphertext, &outlen, plaintext_array[i], plaintextlen)"
                                      ,iVar8 != 0);
                    if (iVar8 == 0) goto LAB_0010a3de;
                    lVar23 = (long)local_9c4;
                    iVar8 = EVP_EncryptFinal_ex(ctx,local_a60 + lVar23,&local_9c4);
                    iVar8 = test_true("test/evp_extra_test.c",0x19db,
                                      "EVP_EncryptFinal_ex(ctx, ciphertext + outlen, &outlen)",
                                      iVar8 != 0);
                    if (iVar8 == 0) goto LAB_0010a3de;
                    lVar24 = (long)local_9c4;
                    OSSL_PARAM_construct_octet_string(&local_9f8,&_LC131,local_ab8,0x10);
                    local_998._0_8_ = local_9d8;
                    local_9b8._8_8_ = uStack_9f0;
                    local_9b8._0_8_ = local_9f8;
                    local_9a8._8_8_ = uStack_9e0;
                    local_9a8._0_8_ = local_9e8;
                    iVar8 = EVP_CIPHER_CTX_get_params(ctx,local_9b8);
                    iVar8 = test_true("test/evp_extra_test.c",0x19e1,
                                      "EVP_CIPHER_CTX_get_params(ctx, params)",iVar8 != 0);
                    if (((iVar8 == 0) ||
                        (iVar8 = test_mem_eq("test/evp_extra_test.c",0x19e4,"ciphertext_array_p[i]",
                                             "ciphertext",plVar4[lVar15],plVar5[lVar15],local_a60,
                                             lVar24 + lVar23), iVar8 == 0)) ||
                       (iVar8 = test_mem_eq("test/evp_extra_test.c",0x19e6,"tag_array[i]",&_LC131,
                                            puVar2[lVar15],0x10,local_ab8,0x10), iVar8 == 0))
                    goto LAB_0010a3de;
                    lVar15 = lVar15 + 1;
                  } while (local_aa0 != lVar15);
                  puVar14 = puVar6;
                  if ((local_aa0 * 8 & 8U) == 0) goto LAB_0010ab1f;
                  puVar14 = auStack_470;
                  auStack_470[1] = uVar1;
                  while (puVar14 = puVar14 + 2, puVar6 + local_aa0 != puVar14) {
LAB_0010ab1f:
                    *puVar14 = uVar1;
                    puVar14[1] = uVar1;
                  }
                  OSSL_PARAM_construct_octet_ptr(&local_9f8,"pipeline-tag",&local_9c0,0x10);
                  puVar20 = &local_9f8;
                  puVar21 = (undefined4 *)local_9b8;
                  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
                    *puVar21 = *(undefined4 *)puVar20;
                    puVar20 = (undefined8 *)((long)puVar20 + (ulong)bVar25 * -8 + 4);
                    puVar21 = puVar21 + (ulong)bVar25 * -2 + 1;
                  }
                  iVar8 = EVP_CIPHER_CTX_reset(ctx);
                  iVar8 = test_true("test/evp_extra_test.c",0x19f0,"EVP_CIPHER_CTX_reset(ctx)",
                                    iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  iVar8 = EVP_CIPHER_can_pipeline(uVar10,0);
                  iVar8 = test_true("test/evp_extra_test.c",0x19f1,
                                    "EVP_CIPHER_can_pipeline(pipeline_cipher, 0)",iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  iVar8 = EVP_CipherPipelineDecryptInit
                                    (ctx,uVar10,&local_68,0x20,local_aa0,local_968);
                  iVar8 = test_true("test/evp_extra_test.c",0x19f2,
                                    "EVP_CipherPipelineDecryptInit(ctx, pipeline_cipher, key, keylen, numpipes, (const unsigned char **)iv_array, ivlen)"
                                    ,iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  iVar8 = EVP_CIPHER_CTX_set_params(ctx,local_9b8);
                  iVar8 = test_true("test/evp_extra_test.c",0x19f6,
                                    "EVP_CIPHER_CTX_set_params(ctx, params)",iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  iVar8 = EVP_CipherPipelineUpdate(ctx,0,plVar22,0,plVar3,puVar7);
                  iVar8 = test_true("test/evp_extra_test.c",0x19f7,
                                    "EVP_CipherPipelineUpdate(ctx, NULL, outlen_array, NULL, (const unsigned char **)plaintext_array, inlen_array)"
                                    ,iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  iVar8 = EVP_CipherPipelineUpdate(ctx,plVar3,plVar22,puVar6,plVar4,plVar5);
                  iVar8 = test_true("test/evp_extra_test.c",0x19fa,
                                    "EVP_CipherPipelineUpdate(ctx, plaintext_array, outlen_array, outsize_array, (const unsigned char **)ciphertext_array_p, ciphertextlen_array)"
                                    ,iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  lVar15 = 0;
                  do {
                    lVar23 = plVar22[lVar15];
                    lVar24 = plVar3[lVar15];
                    puVar6[lVar15] = puVar6[lVar15] - lVar23;
                    local_568[lVar15] = lVar24 + lVar23;
                    lVar15 = lVar15 + 1;
                  } while (local_aa0 != lVar15);
                  iVar8 = EVP_CipherPipelineFinal(ctx,local_568,plVar22,puVar6);
                  iVar8 = test_true("test/evp_extra_test.c",0x1a05,
                                    "EVP_CipherPipelineFinal(ctx, temp, outlen_array, outsize_array)"
                                    ,iVar8 != 0);
                  if (iVar8 == 0) goto LAB_0010a3de;
                  uVar19 = 1;
                  do {
                    lVar15 = (uVar19 & 0xff) * 0x101010101010101;
                    if (num < 8) {
                      if ((uVar1 & 4) == 0) {
                        if ((num != 0) && (*(char *)local_a68 = (char)lVar15, (uVar1 & 2) != 0)) {
                          *(short *)((long)local_a68 + ((uVar1 & 0xffffffff) - 2)) = (short)lVar15;
                        }
                      }
                      else {
                        *(int *)local_a68 = (int)lVar15;
                        *(int *)((long)local_a68 + ((uVar1 & 0xffffffff) - 4)) = (int)lVar15;
                      }
                    }
                    else {
                      *local_a68 = lVar15;
                      *(long *)((long)local_a68 + ((uVar1 & 0xffffffff) - 8)) = lVar15;
                      plVar22 = (long *)((ulong)(local_a68 + 1) & 0xfffffffffffffff8);
                      for (uVar16 = (ulong)(((int)local_a68 -
                                            (int)(long *)((ulong)(local_a68 + 1) &
                                                         0xfffffffffffffff8)) + num >> 3);
                          uVar16 != 0; uVar16 = uVar16 - 1) {
                        *plVar22 = lVar15;
                        plVar22 = plVar22 + (ulong)bVar25 * -2 + 1;
                      }
                    }
                    iVar8 = test_mem_eq("test/evp_extra_test.c",0x1a0a,"plaintext_array[i]",
                                        "exp_plaintext",alStack_770[uVar19],uVar1,local_a68,uVar1);
                    if (iVar8 == 0) goto LAB_0010a3de;
                    uVar19 = uVar19 + 1;
                  } while (local_a98 != uVar19);
                  lVar15 = 0;
                  do {
                    CRYPTO_free((void *)local_968[lVar15]);
                    CRYPTO_free((void *)plVar3[lVar15]);
                    CRYPTO_free((void *)plVar4[lVar15]);
                    puVar20 = puVar2 + lVar15;
                    lVar15 = lVar15 + 1;
                    CRYPTO_free((void *)*puVar20);
                  } while (local_aa0 != lVar15);
                  uVar18 = uVar18 + 1;
                  CRYPTO_free(local_a68);
                  CRYPTO_free(local_a60);
                  CRYPTO_free(local_ab8);
                } while (uVar18 != 0x121);
                local_aa0 = local_aa0 + 1;
                local_a98 = local_a98 + 1;
              } while (local_aa0 != 0x21);
              iVar8 = 1;
              goto LAB_0010a024;
            }
          }
        }
      }
      iVar8 = 0;
    }
  }
LAB_0010a024:
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(local_ac8);
  EVP_CIPHER_free(uVar10);
  fake_pipeline_finish(uVar9);
LAB_00109f77:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_siphash_digestsign(void)

{
  uint uVar1;
  int iVar2;
  EVP_PKEY *pkey;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  EVP_PKEY_CTX *local_70;
  size_t local_68 [2];
  uchar local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (EVP_PKEY_CTX *)0x0;
  local_68[0] = 8;
  local_50 = 0xe2fef12fc2543e6d;
  if (nullprov != 0) {
    uVar1 = test_skip("test/evp_extra_test.c",0x81c,
                      "Test does not support a non-default library context");
    goto LAB_0010af77;
  }
  local_68[1] = 0;
  local_48 = __LC490;
  uStack_40 = _UNK_0011d3f8;
  pkey = (EVP_PKEY *)EVP_PKEY_new_raw_private_key(0x426,0,&local_48,0x10);
  uVar1 = test_ptr("test/evp_extra_test.c",0x820,
                   "pkey = EVP_PKEY_new_raw_private_key(EVP_PKEY_SIPHASH, NULL, key, 16)",pkey);
  ctx = (EVP_MD_CTX *)0x0;
  if (uVar1 != 0) {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    iVar2 = test_ptr("test/evp_extra_test.c",0x824,"mdctx = EVP_MD_CTX_create()");
    if (iVar2 != 0) {
      iVar2 = EVP_DigestSignInit(ctx,&local_70,(EVP_MD *)0x0,(ENGINE *)0x0,pkey);
      uVar1 = test_true("test/evp_extra_test.c",0x827,
                        "EVP_DigestSignInit(mdctx, &ctx, NULL, NULL, pkey)",iVar2 != 0);
      if (uVar1 == 0) goto LAB_0010b01d;
      iVar2 = EVP_PKEY_CTX_ctrl(local_70,-1,0x80,0xe,8,(void *)0x0);
      iVar2 = test_int_eq("test/evp_extra_test.c",0x829,
                          "EVP_PKEY_CTX_ctrl(ctx, -1, EVP_PKEY_OP_SIGNCTX, EVP_PKEY_CTRL_SET_DIGEST_SIZE, 8, NULL)"
                          ,&_LC53,iVar2,1);
      if (iVar2 != 0) {
        iVar2 = EVP_DigestSignInit(ctx,(EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,
                                   (EVP_PKEY *)0x0);
        iVar2 = test_true("test/evp_extra_test.c",0x82e,
                          "EVP_DigestSignInit(mdctx, NULL, NULL, NULL, NULL)",iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = EVP_DigestSignUpdate(ctx,local_68 + 1,8);
          iVar2 = test_true("test/evp_extra_test.c",0x830,"EVP_DigestSignUpdate(mdctx, buf, 8)",
                            iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = EVP_DigestSignFinal(ctx,local_58,local_68);
            iVar2 = test_true("test/evp_extra_test.c",0x832,
                              "EVP_DigestSignFinal(mdctx, digest, &len)",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = test_mem_eq("test/evp_extra_test.c",0x834,"digest","expected",local_58,
                                  local_68[0],&local_50,8);
              uVar1 = (uint)(iVar2 != 0);
              goto LAB_0010b01d;
            }
          }
        }
      }
    }
    uVar1 = 0;
  }
LAB_0010b01d:
  EVP_PKEY_free(pkey);
  EVP_MD_CTX_free(ctx);
LAB_0010af77:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_rand_agglomeration(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_fc = 7;
  iVar1 = test_int_ne("test/evp_extra_test.c",0x10b2,"sizeof(seed) % step",&_LC5,2,0);
  if (iVar1 != 0) {
    uVar2 = EVP_RAND_fetch(testctx,"TEST-RAND",0);
    iVar1 = test_ptr("test/evp_extra_test.c",0x10b3,
                     "rand = EVP_RAND_fetch(testctx, \"TEST-RAND\", testpropq)",uVar2);
    if (iVar1 != 0) {
      uVar3 = EVP_RAND_CTX_new(uVar2,0);
      EVP_RAND_free(uVar2);
      iVar1 = test_ptr("test/evp_extra_test.c",0x10b7,&_LC162,uVar3);
      if (iVar1 != 0) {
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        local_48 = (undefined1  [16])0x0;
        local_38 = 0;
        OSSL_PARAM_construct_octet_string(&local_138,"test_entropy",seed_2,0x41);
        local_f8 = local_138;
        uStack_f0 = uStack_130;
        local_e8 = local_128;
        uStack_e0 = uStack_120;
        local_d8 = local_118;
        OSSL_PARAM_construct_uint(&local_138,"max_request",&local_fc);
        local_b0 = local_118;
        local_d0 = local_138;
        uStack_c8 = uStack_130;
        local_c0 = local_128;
        uStack_b8 = uStack_120;
        OSSL_PARAM_construct_end(&local_138);
        local_a8 = local_138;
        uStack_a0 = uStack_130;
        local_88 = local_118;
        local_98 = local_128;
        uStack_90 = uStack_120;
        iVar1 = EVP_RAND_CTX_set_params(uVar3,&local_f8);
        iVar1 = test_true("test/evp_extra_test.c",0x10bf,"EVP_RAND_CTX_set_params(ctx, params)",
                          iVar1 != 0);
        if (iVar1 == 0) {
LAB_0010b3a5:
          bVar4 = false;
        }
        else {
          iVar1 = EVP_RAND_generate(uVar3,local_78,0x41,0,1,0,0);
          iVar1 = test_true("test/evp_extra_test.c",0x10c0,
                            "EVP_RAND_generate(ctx, out, sizeof(out), 0, 1, NULL, 0)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_0010b3a5;
          iVar1 = test_mem_eq("test/evp_extra_test.c",0x10c1,&_LC538,&_LC537,seed_2,0x41,local_78,
                              0x41);
          bVar4 = iVar1 != 0;
        }
        EVP_RAND_CTX_free(uVar3);
        goto LAB_0010b1ff;
      }
    }
  }
  bVar4 = false;
LAB_0010b1ff:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_empty_salt_info_HKDF(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  EVP_MD *pEVar3;
  long in_FS_OFFSET;
  bool bVar4;
  size_t local_a8;
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_58 [8];
  undefined7 uStack_50;
  char cStack_49;
  undefined7 uStack_48;
  char acStack_41 [17];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_9a = 0;
  local_58 = (char  [8])_LC547._0_8_;
  uStack_50 = (undefined7)_LC547._8_8_;
  local_99 = 0;
  cStack_49 = (char)_LC547._16_8_;
  uStack_48 = SUB87(_LC547._16_8_,1);
  acStack_41._0_8_ = _LC547._24_8_;
  local_68 = 0x6e05f52;
  local_78 = __LC549;
  uStack_70 = _UNK_0011d428;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(testctx,&_LC539,0);
  iVar1 = test_ptr("test/evp_extra_test.c",0xdcf,
                   "pctx = EVP_PKEY_CTX_new_from_name(testctx, \"HKDF\", testpropq)",ctx);
  if (iVar1 != 0) {
    local_a8 = 0x14;
    local_88 = 0;
    local_98 = (undefined1  [16])0x0;
    iVar1 = EVP_PKEY_derive_init(ctx);
    iVar1 = test_int_gt("test/evp_extra_test.c",0xdd5,"EVP_PKEY_derive_init(pctx)",&_LC5,iVar1,0);
    if (iVar1 != 0) {
      pEVar3 = EVP_sha256();
      uVar2 = EVP_PKEY_CTX_set_hkdf_md(ctx,pEVar3);
      iVar1 = test_int_gt("test/evp_extra_test.c",0xdd6,
                          "EVP_PKEY_CTX_set_hkdf_md(pctx, EVP_sha256())",&_LC5,uVar2,0);
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_CTX_set1_hkdf_salt(ctx,&local_9a,0);
        iVar1 = test_int_gt("test/evp_extra_test.c",0xdd7,
                            "EVP_PKEY_CTX_set1_hkdf_salt(pctx, salt, sizeof(salt) - 1)",&_LC5,uVar2,
                            0);
        if (iVar1 != 0) {
          uVar2 = EVP_PKEY_CTX_set1_hkdf_key(ctx,local_58,0x1e);
          iVar1 = test_int_gt("test/evp_extra_test.c",0xdd9,
                              "EVP_PKEY_CTX_set1_hkdf_key(pctx, key, sizeof(key) - 1)",&_LC5,uVar2,0
                             );
          if (iVar1 != 0) {
            uVar2 = EVP_PKEY_CTX_add1_hkdf_info(ctx,&local_99,0);
            iVar1 = test_int_gt("test/evp_extra_test.c",0xddb,
                                "EVP_PKEY_CTX_add1_hkdf_info(pctx, info, sizeof(info) - 1)",&_LC5,
                                uVar2,0);
            if (iVar1 != 0) {
              iVar1 = EVP_PKEY_derive(ctx,local_98,&local_a8);
              iVar1 = test_int_gt("test/evp_extra_test.c",0xddd,
                                  "EVP_PKEY_derive(pctx, out, &outlen)",&_LC5,iVar1,0);
              if (iVar1 != 0) {
                iVar1 = test_mem_eq("test/evp_extra_test.c",0xdde,&_LC537,"expected",local_98,
                                    local_a8,&local_78,0x14);
                bVar4 = iVar1 != 0;
                goto LAB_0010b4d6;
              }
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_0010b4d6:
  EVP_PKEY_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_emptyikm_HKDF(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  EVP_MD *pEVar3;
  long in_FS_OFFSET;
  bool bVar4;
  size_t local_88;
  undefined1 local_7f;
  undefined7 local_7e;
  undefined4 uStack_77;
  undefined7 local_73;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7f = 0;
  local_38 = 0x30158266;
  local_48 = __LC550;
  uStack_40 = _UNK_0011d438;
  local_7e = 0x33343536373839;
  local_73 = 0x69676e69727473;
  uStack_77 = 0x303132;
  uStack_6c = 0x6f666e;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(testctx,&_LC539,0);
  iVar1 = test_ptr("test/evp_extra_test.c",0xda6,
                   "pctx = EVP_PKEY_CTX_new_from_name(testctx, \"HKDF\", testpropq)",ctx);
  if (iVar1 != 0) {
    local_88 = 0x14;
    local_58 = 0;
    local_68 = (undefined1  [16])0x0;
    iVar1 = EVP_PKEY_derive_init(ctx);
    iVar1 = test_int_gt("test/evp_extra_test.c",0xdac,"EVP_PKEY_derive_init(pctx)",&_LC5,iVar1,0);
    if (iVar1 != 0) {
      pEVar3 = EVP_sha256();
      uVar2 = EVP_PKEY_CTX_set_hkdf_md(ctx,pEVar3);
      iVar1 = test_int_gt("test/evp_extra_test.c",0xdad,
                          "EVP_PKEY_CTX_set_hkdf_md(pctx, EVP_sha256())",&_LC5,uVar2,0);
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_CTX_set1_hkdf_salt(ctx,&local_7e,10);
        iVar1 = test_int_gt("test/evp_extra_test.c",0xdae,
                            "EVP_PKEY_CTX_set1_hkdf_salt(pctx, salt, sizeof(salt) - 1)",&_LC5,uVar2,
                            0);
        if (iVar1 != 0) {
          uVar2 = EVP_PKEY_CTX_set1_hkdf_key(ctx,&local_7f,0);
          iVar1 = test_int_gt("test/evp_extra_test.c",0xdb0,
                              "EVP_PKEY_CTX_set1_hkdf_key(pctx, key, sizeof(key) - 1)",&_LC5,uVar2,0
                             );
          if (iVar1 != 0) {
            uVar2 = EVP_PKEY_CTX_add1_hkdf_info(ctx,&local_73,10);
            iVar1 = test_int_gt("test/evp_extra_test.c",0xdb2,
                                "EVP_PKEY_CTX_add1_hkdf_info(pctx, info, sizeof(info) - 1)",&_LC5,
                                uVar2,0);
            if (iVar1 != 0) {
              iVar1 = EVP_PKEY_derive(ctx,local_68,&local_88);
              iVar1 = test_int_gt("test/evp_extra_test.c",0xdb4,
                                  "EVP_PKEY_derive(pctx, out, &outlen)",&_LC5,iVar1,0);
              if (iVar1 != 0) {
                iVar1 = test_mem_eq("test/evp_extra_test.c",0xdb5,&_LC537,"expected",local_68,
                                    local_88,&local_48,0x14);
                bVar4 = iVar1 != 0;
                goto LAB_0010b740;
              }
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_0010b740:
  EVP_PKEY_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_HKDF(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  EVP_PKEY_CTX *ctx;
  EVP_MD *pEVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  size_t local_c8;
  undefined7 local_be;
  undefined4 uStack_b7;
  undefined7 local_b3;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  char local_68 [8];
  undefined7 uStack_60;
  char cStack_59;
  undefined7 uStack_58;
  char acStack_51 [17];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0xcaed6b03;
  local_68 = (char  [8])_LC547._0_8_;
  uStack_60 = (undefined7)_LC547._8_8_;
  cStack_59 = (char)_LC547._16_8_;
  uStack_58 = SUB87(_LC547._16_8_,1);
  acStack_51._0_8_ = _LC547._24_8_;
  local_88 = __LC551;
  uStack_80 = _UNK_0011d448;
  local_be = 0x36353433323130;
  local_b3 = 0x7274736f666e69;
  uStack_b7 = 0x393837;
  uStack_ac = 0x676e69;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(testctx,&_LC539,0);
  iVar1 = test_ptr("test/evp_extra_test.c",0xd7a,
                   "pctx = EVP_PKEY_CTX_new_from_name(testctx, \"HKDF\", testpropq)",ctx);
  if (iVar1 != 0) {
    iVar1 = 2;
    while( true ) {
      local_c8 = 0x14;
      local_98 = 0;
      local_a8 = (undefined1  [16])0x0;
      iVar2 = EVP_PKEY_derive_init(ctx);
      iVar2 = test_int_gt("test/evp_extra_test.c",0xd82,"EVP_PKEY_derive_init(pctx)",&_LC5,iVar2,0);
      if (iVar2 == 0) break;
      pEVar4 = EVP_sha256();
      uVar3 = EVP_PKEY_CTX_set_hkdf_md(ctx,pEVar4);
      iVar2 = test_int_gt("test/evp_extra_test.c",0xd83,
                          "EVP_PKEY_CTX_set_hkdf_md(pctx, EVP_sha256())",&_LC5,uVar3,0);
      if (iVar2 == 0) break;
      uVar3 = EVP_PKEY_CTX_set1_hkdf_salt(ctx,&local_be,10);
      iVar2 = test_int_gt("test/evp_extra_test.c",0xd84,
                          "EVP_PKEY_CTX_set1_hkdf_salt(pctx, salt, sizeof(salt) - 1)",&_LC5,uVar3,0)
      ;
      if (iVar2 == 0) break;
      uVar3 = EVP_PKEY_CTX_set1_hkdf_key(ctx,local_68,0x1e);
      iVar2 = test_int_gt("test/evp_extra_test.c",0xd86,
                          "EVP_PKEY_CTX_set1_hkdf_key(pctx, key, sizeof(key) - 1)",&_LC5,uVar3,0);
      if (iVar2 == 0) break;
      uVar3 = EVP_PKEY_CTX_add1_hkdf_info(ctx,&local_b3,10);
      iVar2 = test_int_gt("test/evp_extra_test.c",0xd88,
                          "EVP_PKEY_CTX_add1_hkdf_info(pctx, info, sizeof(info) - 1)",&_LC5,uVar3,0)
      ;
      if (iVar2 == 0) break;
      iVar2 = EVP_PKEY_derive(ctx,local_a8,&local_c8);
      iVar2 = test_int_gt("test/evp_extra_test.c",0xd8a,"EVP_PKEY_derive(pctx, out, &outlen)",&_LC5,
                          iVar2,0);
      if (iVar2 == 0) break;
      iVar2 = test_mem_eq("test/evp_extra_test.c",0xd8b,&_LC537,"expected",local_a8,local_c8,
                          &local_88,0x14);
      if (iVar2 == 0) break;
      if (iVar1 == 1) {
        uVar5 = 1;
        goto LAB_0010bb7a;
      }
      iVar1 = 1;
    }
  }
  uVar5 = 0;
LAB_0010bb7a:
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_custom_ciph_meth(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  EVP_CIPHER *cipher;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher_00;
  
  if (testctx != 0) {
    uVar3 = test_skip("test/evp_extra_test.c",0x16e9,"Non-default libctx");
    return uVar3;
  }
  cipher = (EVP_CIPHER *)0x0;
  custom_ciph_cleanup_called = 0;
  custom_ciph_init_called = 0;
  iVar1 = OBJ_create("1.3.6.1.4.1.16604.998866.2","custom-ciph","custom-ciph");
  uVar2 = test_int_ne("test/evp_extra_test.c",0x16ee,&_LC44,"NID_undef",iVar1,0);
  uVar3 = (ulong)uVar2;
  ctx = (EVP_CIPHER_CTX *)0x0;
  if (uVar2 != 0) {
    cipher = (EVP_CIPHER *)EVP_CIPHER_meth_new(iVar1,0x10,0x10);
    iVar1 = test_ptr("test/evp_extra_test.c",0x16f1,&_LC45,cipher);
    if (iVar1 != 0) {
      iVar1 = EVP_CIPHER_meth_set_init(cipher,custom_ciph_init);
      iVar1 = test_true("test/evp_extra_test.c",0x16f4,
                        "EVP_CIPHER_meth_set_init(tmp, custom_ciph_init)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EVP_CIPHER_meth_set_flags(cipher,0x20);
        iVar1 = test_true("test/evp_extra_test.c",0x16f5,
                          "EVP_CIPHER_meth_set_flags(tmp, EVP_CIPH_ALWAYS_CALL_INIT)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = EVP_CIPHER_meth_set_cleanup(cipher,custom_ciph_cleanup);
          iVar1 = test_true("test/evp_extra_test.c",0x16f6,
                            "EVP_CIPHER_meth_set_cleanup(tmp, custom_ciph_cleanup)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(cipher,4);
            iVar1 = test_true("test/evp_extra_test.c",0x16f7,
                              "EVP_CIPHER_meth_set_impl_ctx_size(tmp, sizeof(custom_ciph_ctx))",
                              iVar1 != 0);
            if (iVar1 != 0) {
              ctx = EVP_CIPHER_CTX_new();
              iVar1 = test_ptr("test/evp_extra_test.c",0x16fc,"ciphctx");
              if (iVar1 != 0) {
                EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,1);
                iVar1 = test_true("test/evp_extra_test.c",0x1702,
                                  "EVP_CipherInit_ex(ciphctx, tmp, NULL, NULL, NULL, 1)");
                if (iVar1 != 0) {
                  cipher_00 = EVP_aes_128_cbc();
                  iVar1 = EVP_CipherInit_ex(ctx,cipher_00,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,1)
                  ;
                  iVar1 = test_true("test/evp_extra_test.c",0x1703,
                                    "EVP_CipherInit_ex(ciphctx, EVP_aes_128_cbc(), NULL, NULL, NULL, 1)"
                                    ,iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = test_int_eq("test/evp_extra_test.c",0x1705,"custom_ciph_init_called",
                                        &_LC53,custom_ciph_init_called,1);
                    if (iVar1 != 0) {
                      iVar1 = test_int_eq("test/evp_extra_test.c",0x1706,
                                          "custom_ciph_cleanup_called",&_LC53,
                                          custom_ciph_cleanup_called,1);
                      uVar3 = (ulong)(iVar1 != 0);
                      goto LAB_0010bc90;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar3 = 0;
  }
LAB_0010bc90:
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_meth_free(cipher);
  return uVar3;
}



uint test_EVP_PKEY_CTX_get_set_params(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar4;
  undefined8 uVar5;
  EVP_MD *pEVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  byte bVar11;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8 [12];
  undefined1 local_78;
  undefined2 uStack_77;
  undefined4 uStack_75;
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(testctx,param_1,0);
  iVar1 = test_ptr("test/evp_extra_test.c",0xe41,&_LC162,ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_sign_init(ctx);
    iVar1 = test_int_gt("test/evp_extra_test.c",0xe42,"EVP_PKEY_sign_init(ctx)",&_LC5,iVar1,0);
    if (iVar1 != 0) {
      uVar4 = EVP_PKEY_CTX_settable_params(ctx);
      iVar1 = test_ptr("test/evp_extra_test.c",0xe49,"params",uVar4);
      if (iVar1 != 0) {
        uVar4 = OSSL_PARAM_locate_const(uVar4,"digest");
        iVar1 = test_ptr("test/evp_extra_test.c",0xe4a,
                         "OSSL_PARAM_locate_const(params, OSSL_SIGNATURE_PARAM_DIGEST)",uVar4);
        if (iVar1 != 0) {
          uVar4 = EVP_PKEY_CTX_gettable_params(ctx);
          iVar1 = test_ptr("test/evp_extra_test.c",0xe4f,"params",uVar4);
          if (iVar1 != 0) {
            uVar5 = OSSL_PARAM_locate_const(uVar4,"algorithm-id");
            iVar1 = test_ptr("test/evp_extra_test.c",0xe50,
                             "OSSL_PARAM_locate_const(params, OSSL_SIGNATURE_PARAM_ALGORITHM_ID)",
                             uVar5);
            if (iVar1 != 0) {
              uVar4 = OSSL_PARAM_locate_const(uVar4,"digest");
              iVar1 = test_ptr("test/evp_extra_test.c",0xe52,
                               "OSSL_PARAM_locate_const(params, OSSL_SIGNATURE_PARAM_DIGEST)",uVar4)
              ;
              if (iVar1 != 0) {
                local_78 = 0x53;
                uStack_77 = 0x4148;
                uStack_75 = 0x323135;
                OSSL_PARAM_construct_utf8_string(&local_138,"digest",&local_78,0);
                local_f8 = local_138;
                uStack_f0 = uStack_130;
                local_d8 = local_118;
                local_e8 = local_128;
                uStack_e0 = uStack_120;
                OSSL_PARAM_construct_end(&local_138);
                local_d0 = local_138;
                uStack_c8 = uStack_130;
                local_b0 = local_118;
                local_c0 = local_128;
                uStack_b8 = uStack_120;
                iVar1 = EVP_PKEY_CTX_set_params(ctx,&local_f8);
                iVar1 = test_true("test/evp_extra_test.c",0xe60,
                                  "EVP_PKEY_CTX_set_params(ctx, ourparams)",iVar1 != 0);
                if (iVar1 != 0) {
                  local_78 = 0;
                  OSSL_PARAM_construct_utf8_string(&local_138,"digest",&local_78,0x32);
                  local_f8 = local_138;
                  uStack_f0 = uStack_130;
                  local_d8 = local_118;
                  local_e8 = local_128;
                  uStack_e0 = uStack_120;
                  iVar1 = EVP_PKEY_CTX_get_params(ctx,&local_f8);
                  iVar1 = test_true("test/evp_extra_test.c",0xe66,
                                    "EVP_PKEY_CTX_get_params(ctx, ourparams)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = test_str_eq("test/evp_extra_test.c",0xe67,"mdname","\"SHA512\"",
                                        &local_78,"SHA512");
                    if (iVar1 != 0) {
                      pEVar6 = EVP_sha256();
                      uVar2 = EVP_PKEY_CTX_set_signature_md(ctx,pEVar6);
                      iVar1 = test_int_gt("test/evp_extra_test.c",0xe6e,
                                          "EVP_PKEY_CTX_set_signature_md(ctx, EVP_sha256())",&_LC5,
                                          uVar2,0);
                      if (iVar1 != 0) {
                        uVar2 = EVP_PKEY_CTX_get_signature_md(ctx,&local_100);
                        iVar1 = test_int_gt("test/evp_extra_test.c",0xe6f,
                                            "EVP_PKEY_CTX_get_signature_md(ctx, &md)",&_LC5,uVar2,0)
                        ;
                        if (iVar1 != 0) {
                          pEVar6 = EVP_sha256();
                          iVar1 = test_ptr_eq("test/evp_extra_test.c",0xe70,&_LC63,"EVP_sha256()",
                                              local_100,pEVar6);
                          if (iVar1 != 0) {
                            uVar4 = EVP_MD_CTX_new();
                            uVar3 = test_ptr("test/evp_extra_test.c",0xe77,"mdctx",uVar4);
                            if (uVar3 != 0) {
                              iVar1 = EVP_DigestSignInit_ex(uVar4,0,&_LC575,testctx,0,param_1);
                              iVar1 = test_true("test/evp_extra_test.c",0xe78,
                                                "EVP_DigestSignInit_ex(mdctx, NULL, \"SHA1\", testctx, testpropq, pkey, NULL)"
                                                ,iVar1 != 0);
                              if (iVar1 != 0) {
                                puVar7 = (undefined8 *)EVP_MD_CTX_settable_params(uVar4);
                                iVar1 = test_ptr("test/evp_extra_test.c",0xe81,"params",puVar7);
                                if (iVar1 != 0) {
                                  iVar1 = strcmp((char *)*puVar7,"ssl3-ms");
                                  iVar1 = test_int_eq("test/evp_extra_test.c",0xe82,
                                                                                                            
                                                  "strcmp(params[0].key, OSSL_DIGEST_PARAM_SSL3_MS)"
                                                  ,&_LC5,iVar1,0);
                                  if (iVar1 != 0) {
                                    iVar1 = test_ptr_null("test/evp_extra_test.c",0xe84,
                                                          "params[1].key",puVar7[5]);
                                    if (iVar1 != 0) {
                                      puVar9 = local_a8;
                                      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                                        *puVar9 = 0;
                                        puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
                                      }
                                      OSSL_PARAM_construct_octet_string
                                                (&local_138,"ssl3-ms",local_a8,0x30);
                                      puVar7 = &local_138;
                                      puVar10 = &local_f8;
                                      for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
                                        *(undefined4 *)puVar10 = *(undefined4 *)puVar7;
                                        puVar7 = (undefined8 *)
                                                 ((long)puVar7 + (ulong)bVar11 * -8 + 4);
                                        puVar10 = (undefined8 *)
                                                  ((long)puVar10 + (ulong)bVar11 * -8 + 4);
                                      }
                                      OSSL_PARAM_construct_end(&local_138);
                                      puVar7 = &local_138;
                                      puVar10 = &local_d0;
                                      for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
                                        *(undefined4 *)puVar10 = *(undefined4 *)puVar7;
                                        puVar7 = (undefined8 *)
                                                 ((long)puVar7 + (ulong)bVar11 * -8 + 4);
                                        puVar10 = (undefined8 *)
                                                  ((long)puVar10 + (ulong)bVar11 * -8 + 4);
                                      }
                                      iVar1 = EVP_MD_CTX_set_params(uVar4,&local_f8);
                                      iVar1 = test_true("test/evp_extra_test.c",0xe8d,
                                                        "EVP_MD_CTX_set_params(mdctx, ourparams)",
                                                        iVar1 != 0);
                                      uVar3 = (uint)(iVar1 != 0);
                                      goto LAB_0010bee3;
                                    }
                                  }
                                }
                              }
                              uVar3 = 0;
                            }
                            goto LAB_0010bee3;
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
  uVar3 = 0;
  uVar4 = 0;
LAB_0010bee3:
  EVP_MD_CTX_free(uVar4);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_RSA_get_set_params(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  long in_FS_OFFSET;
  undefined8 local_50;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(testctx,&_LC9,0);
  iVar1 = test_ptr("test/evp_extra_test.c",0xeea,
                   "pctx = EVP_PKEY_CTX_new_from_name(testctx, \"RSA\", NULL)",ctx);
  if (iVar1 == 0) {
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    uVar3 = 0;
    local_50 = 0;
    iVar1 = 0;
  }
  else {
    uVar3 = OSSL_PARAM_BLD_new();
    iVar1 = test_ptr("test/evp_extra_test.c",0xeeb,"bld = OSSL_PARAM_BLD_new()",uVar3);
    if (iVar1 == 0) {
      local_50 = 0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      a = (BIGNUM *)0x0;
      iVar1 = 0;
    }
    else {
      a = BN_new();
      iVar1 = test_ptr("test/evp_extra_test.c",0xeec,"n = BN_new()",a);
      if (iVar1 == 0) {
        local_50 = 0;
        a_01 = (BIGNUM *)0x0;
        a_00 = (BIGNUM *)0x0;
        iVar1 = 0;
      }
      else {
        a_00 = BN_new();
        iVar1 = test_ptr("test/evp_extra_test.c",0xeed,"e = BN_new()",a_00);
        if (iVar1 == 0) {
          local_50 = 0;
          a_01 = (BIGNUM *)0x0;
          iVar1 = 0;
        }
        else {
          a_01 = BN_new();
          iVar1 = test_ptr("test/evp_extra_test.c",0xeee,"d = BN_new()",a_01);
          if (iVar1 != 0) {
            iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC585,a);
            iVar1 = test_true("test/evp_extra_test.c",0xef0,
                              "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_N, n)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC587,a_00);
              iVar1 = test_true("test/evp_extra_test.c",0xef1,
                                "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_E, e)",iVar1 != 0);
              local_50 = 0;
              if (iVar1 == 0) goto LAB_0010c469;
              iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC589,a_01);
              iVar1 = test_true("test/evp_extra_test.c",0xef2,
                                "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_D, d)",iVar1 != 0);
              if (iVar1 != 0) {
                local_50 = OSSL_PARAM_BLD_to_param(uVar3);
                iVar1 = test_ptr("test/evp_extra_test.c",0xef4,
                                 "params = OSSL_PARAM_BLD_to_param(bld)",local_50);
                if (iVar1 != 0) {
                  uVar2 = EVP_PKEY_fromdata_init(ctx);
                  iVar1 = test_int_gt("test/evp_extra_test.c",0xef7,"EVP_PKEY_fromdata_init(pctx)",
                                      &_LC5,uVar2,0);
                  if (iVar1 != 0) {
                    uVar2 = EVP_PKEY_fromdata(ctx,&local_48,0x87,local_50);
                    iVar1 = test_int_gt("test/evp_extra_test.c",0xef8,
                                        "EVP_PKEY_fromdata(pctx, &pkey, EVP_PKEY_KEYPAIR, params)",
                                        &_LC5,uVar2,0);
                    if (iVar1 == 0) goto LAB_0010c469;
                    iVar1 = test_ptr("test/evp_extra_test.c",0xefc,&_LC13,local_48);
                    if (iVar1 != 0) {
                      iVar1 = test_EVP_PKEY_CTX_get_set_params(local_48);
                      goto LAB_0010c469;
                    }
                  }
                }
                iVar1 = 0;
                goto LAB_0010c469;
              }
            }
          }
          local_50 = 0;
          iVar1 = 0;
        }
      }
    }
  }
LAB_0010c469:
  EVP_PKEY_free(local_48);
  EVP_PKEY_CTX_free(ctx);
  OSSL_PARAM_free(local_50);
  OSSL_PARAM_BLD_free(uVar3);
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_DSA_get_set_params(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  long in_FS_OFFSET;
  BIGNUM *local_60;
  BIGNUM *local_58;
  undefined8 local_50;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(testctx,&_LC300,0);
  iVar1 = test_ptr("test/evp_extra_test.c",0xea7,
                   "pctx = EVP_PKEY_CTX_new_from_name(testctx, \"DSA\", NULL)",ctx);
  if (iVar1 == 0) {
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    uVar3 = 0;
    local_58 = (BIGNUM *)0x0;
    local_60 = (BIGNUM *)0x0;
    local_50 = 0;
    iVar1 = 0;
  }
  else {
    uVar3 = OSSL_PARAM_BLD_new();
    iVar1 = test_ptr("test/evp_extra_test.c",0xea8,"bld = OSSL_PARAM_BLD_new()",uVar3);
    if (iVar1 == 0) {
      local_58 = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      a = (BIGNUM *)0x0;
      local_60 = (BIGNUM *)0x0;
      local_50 = 0;
      iVar1 = 0;
    }
    else {
      a = BN_new();
      iVar1 = test_ptr("test/evp_extra_test.c",0xea9,"p = BN_new()",a);
      if (iVar1 == 0) {
        local_58 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        a_00 = (BIGNUM *)0x0;
        local_60 = (BIGNUM *)0x0;
        local_50 = 0;
        iVar1 = 0;
      }
      else {
        a_00 = BN_new();
        iVar1 = test_ptr("test/evp_extra_test.c",0xeaa,"q = BN_new()",a_00);
        if (iVar1 == 0) {
          local_58 = (BIGNUM *)0x0;
          a_01 = (BIGNUM *)0x0;
          local_60 = (BIGNUM *)0x0;
          local_50 = 0;
          iVar1 = 0;
        }
        else {
          a_01 = BN_new();
          iVar1 = test_ptr("test/evp_extra_test.c",0xeab,"g = BN_new()",a_01);
          if (iVar1 == 0) {
            local_58 = (BIGNUM *)0x0;
            local_60 = (BIGNUM *)0x0;
            local_50 = 0;
            iVar1 = 0;
          }
          else {
            local_60 = BN_new();
            iVar1 = test_ptr("test/evp_extra_test.c",0xeac,"pub = BN_new()",local_60);
            if (iVar1 == 0) {
              local_58 = (BIGNUM *)0x0;
              local_50 = 0;
              iVar1 = 0;
            }
            else {
              local_58 = BN_new();
              iVar1 = test_ptr("test/evp_extra_test.c",0xead,"priv = BN_new()",local_58);
              if (iVar1 != 0) {
                iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC288,a);
                iVar1 = test_true("test/evp_extra_test.c",0xeaf,
                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_P, p)",iVar1 != 0
                                 );
                if (iVar1 != 0) {
                  iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC290,a_00);
                  iVar1 = test_true("test/evp_extra_test.c",0xeb0,
                                    "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_Q, q)",
                                    iVar1 != 0);
                  local_50 = 0;
                  if (iVar1 == 0) goto LAB_0010c7cf;
                  iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC292,a_01);
                  iVar1 = test_true("test/evp_extra_test.c",0xeb1,
                                    "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_G, g)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC257,local_60);
                    iVar1 = test_true("test/evp_extra_test.c",0xeb2,
                                      "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PUB_KEY, pub)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC259,local_58);
                      iVar1 = test_true("test/evp_extra_test.c",0xeb4,
                                        "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PRIV_KEY, priv)"
                                        ,iVar1 != 0);
                      if (iVar1 != 0) {
                        local_50 = OSSL_PARAM_BLD_to_param(uVar3);
                        iVar1 = test_ptr("test/evp_extra_test.c",0xeb7,
                                         "params = OSSL_PARAM_BLD_to_param(bld)",local_50);
                        if (iVar1 != 0) {
                          uVar2 = EVP_PKEY_fromdata_init(ctx);
                          iVar1 = test_int_gt("test/evp_extra_test.c",0xeba,
                                              "EVP_PKEY_fromdata_init(pctx)",&_LC5,uVar2,0);
                          if (iVar1 != 0) {
                            uVar2 = EVP_PKEY_fromdata(ctx,&local_48,0x87,local_50);
                            iVar1 = test_int_gt("test/evp_extra_test.c",0xebb,
                                                "EVP_PKEY_fromdata(pctx, &pkey, EVP_PKEY_KEYPAIR, params)"
                                                ,&_LC5,uVar2,0);
                            if (iVar1 == 0) goto LAB_0010c7cf;
                            iVar1 = test_ptr("test/evp_extra_test.c",0xebf,&_LC13,local_48);
                            if (iVar1 != 0) {
                              iVar1 = test_EVP_PKEY_CTX_get_set_params(local_48);
                              goto LAB_0010c7cf;
                            }
                          }
                        }
                        iVar1 = 0;
                        goto LAB_0010c7cf;
                      }
                    }
                  }
                }
              }
              local_50 = 0;
              iVar1 = 0;
            }
          }
        }
      }
    }
  }
LAB_0010c7cf:
  EVP_PKEY_free(local_48);
  EVP_PKEY_CTX_free(ctx);
  OSSL_PARAM_free(local_50);
  OSSL_PARAM_BLD_free(uVar3);
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(local_60);
  BN_free(local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool rc4_decrypt_constprop_0(void)

{
  int iVar1;
  EVP_CIPHER_CTX *ctx;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  int local_494;
  undefined8 local_490;
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  uchar local_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_488 = (undefined1  [16])0x0;
  local_490 = 5;
  local_478 = (undefined1  [16])0x0;
  local_468 = (undefined1  [16])0x0;
  local_458 = (undefined1  [16])0x0;
  local_448 = (undefined1  [16])0x0;
  ctx = EVP_CIPHER_CTX_new();
  if (ctx != (EVP_CIPHER_CTX *)0x0) {
    lVar2 = EVP_CIPHER_fetch(testctx,&_LC593,&_LC223);
    if (lVar2 != 0) {
      OSSL_PARAM_construct_size_t(&local_4c8,"keylen",&local_490);
      local_488._8_8_ = uStack_4c0;
      local_488._0_8_ = local_4c8;
      local_468._0_8_ = local_4a8;
      local_478._8_8_ = uStack_4b0;
      local_478._0_8_ = local_4b8;
      iVar1 = EVP_DecryptInit_ex2(ctx,lVar2,rc4_key_25,0,local_488);
      iVar1 = test_true("test/evp_extra_test.c",0x1918,
                        "EVP_DecryptInit_ex2(ctx, cipher, rc4_key, NULL, params)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EVP_DecryptUpdate(ctx,local_438,&local_494,rc4_ct_23,0x10);
        iVar1 = test_true("test/evp_extra_test.c",0x1919,
                          "EVP_DecryptUpdate(ctx, outbuf, &outlen, rc4_ct, rc4_ct_s)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_mem_eq("test/evp_extra_test.c",0x191b,"outbuf","rc4_pt",local_438,
                              (long)local_494,rc4_pt_24,0x10);
          bVar3 = iVar1 != 0;
          goto LAB_0010cced;
        }
      }
      bVar3 = false;
      goto LAB_0010cced;
    }
  }
  lVar2 = 0;
  bVar3 = false;
LAB_0010cced:
  EVP_CIPHER_free(lVar2);
  EVP_CIPHER_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint rc4_encrypt_constprop_0(void)

{
  uint uVar1;
  int iVar2;
  EVP_CIPHER_CTX *ctx;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  int local_498;
  int local_494;
  undefined8 local_490;
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  uchar local_438 [1032];
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_488 = (undefined1  [16])0x0;
  local_478 = (undefined1  [16])0x0;
  local_468 = (undefined1  [16])0x0;
  local_458 = (undefined1  [16])0x0;
  local_448 = (undefined1  [16])0x0;
  local_490 = 5;
  ctx = EVP_CIPHER_CTX_new();
  uVar1 = test_ptr("test/evp_extra_test.c",0x18ea,"ctx = EVP_CIPHER_CTX_new()",ctx);
  if (uVar1 != 0) {
    uVar3 = EVP_CIPHER_fetch(testctx,&_LC593,&_LC223);
    uVar1 = test_ptr("test/evp_extra_test.c",0x18eb,
                     "cipher = EVP_CIPHER_fetch(testctx, \"RC4\", \"\")",uVar3);
    if (uVar1 != 0) {
      OSSL_PARAM_construct_size_t(&local_4c8,"keylen",&local_490);
      local_488._8_8_ = uStack_4c0;
      local_488._0_8_ = local_4c8;
      local_468._0_8_ = local_4a8;
      local_478._8_8_ = uStack_4b0;
      local_478._0_8_ = local_4b8;
      iVar2 = EVP_EncryptInit_ex2(ctx,uVar3,rc4_key_25,0,local_488);
      iVar2 = test_true("test/evp_extra_test.c",0x18f1,
                        "EVP_EncryptInit_ex2(ctx, cipher, rc4_key, NULL, params)",iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = EVP_EncryptUpdate(ctx,local_438,&local_498,rc4_pt_24,0x10);
        iVar2 = test_true("test/evp_extra_test.c",0x18f2,
                          "EVP_EncryptUpdate(ctx, outbuf, &outlen, rc4_pt, rc4_pt_s)",iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = EVP_EncryptFinal_ex(ctx,local_438,&local_494);
          iVar2 = test_true("test/evp_extra_test.c",0x18f4,
                            "EVP_EncryptFinal_ex(ctx, outbuf, &tmplen)",iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = test_mem_eq("test/evp_extra_test.c",0x18f7,"outbuf","rc4_ct",local_438,
                                (long)local_498,rc4_ct_23,0x10);
            uVar1 = (uint)(iVar2 != 0);
            goto LAB_0010ce38;
          }
        }
      }
      uVar1 = 0;
    }
  }
LAB_0010ce38:
  EVP_CIPHER_free(uVar3);
  EVP_CIPHER_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_aes_rc4_keylen_change_cve_2023_5363(void)

{
  int iVar1;
  ulong uVar2;
  
  if (lgcyprov == 0) {
    uVar2 = test_skip("test/evp_extra_test.c",0x193e,"Test requires legacy provider to be loaded");
    return uVar2;
  }
  uVar2 = rc4_encrypt_constprop_0();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = rc4_decrypt_constprop_0();
  return (ulong)(iVar1 != 0);
}



uint aes_gcm_decrypt_constprop_0(void)

{
  int iVar1;
  uint uVar2;
  EVP_CIPHER_CTX *ctx;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  int local_4a4;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  uchar local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_498 = 0;
  uStack_490 = 0;
  local_4a0 = 0x80;
  local_488 = 0;
  uStack_480 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = (undefined1  [16])0x0;
  local_458 = (undefined1  [16])0x0;
  ctx = EVP_CIPHER_CTX_new();
  if (ctx != (EVP_CIPHER_CTX *)0x0) {
    lVar3 = EVP_CIPHER_fetch(testctx,"AES-256-GCM",&_LC223);
    if (lVar3 != 0) {
      OSSL_PARAM_construct_size_t(&local_4d8,"ivlen",&local_4a0);
      local_478 = local_4b8;
      local_498 = local_4d8;
      uStack_490 = uStack_4d0;
      local_488 = local_4c8;
      uStack_480 = uStack_4c0;
      iVar1 = EVP_DecryptInit_ex2(ctx,lVar3,gcm_key_22,gcm_iv_21,&local_498);
      iVar1 = test_true("test/evp_extra_test.c",0x189a,
                        "EVP_DecryptInit_ex2(ctx, cipher, gcm_key, gcm_iv, params)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EVP_DecryptUpdate(ctx,local_448,&local_4a4,gcm_ct_19,0x10);
        uVar2 = test_true("test/evp_extra_test.c",0x189e,
                          "EVP_DecryptUpdate(ctx, outbuf, &outlen, gcm_ct, gcm_ct_s)",iVar1 != 0);
        if (uVar2 == 0) goto LAB_0010d1de;
        iVar1 = test_mem_eq("test/evp_extra_test.c",0x18a0,"outbuf","gcm_pt",local_448,
                            (long)local_4a4,gcm_pt_20,0x10);
        if (iVar1 != 0) {
          OSSL_PARAM_construct_octet_string(&local_4d8,&_LC131,gcm_tag_18,0x10);
          local_478 = local_4b8;
          local_498 = local_4d8;
          uStack_490 = uStack_4d0;
          local_488 = local_4c8;
          uStack_480 = uStack_4c0;
          iVar1 = EVP_CIPHER_CTX_set_params(ctx,&local_498);
          iVar1 = test_true("test/evp_extra_test.c",0x18a6,"EVP_CIPHER_CTX_set_params(ctx, params)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = EVP_DecryptFinal_ex(ctx,local_448,&local_4a4);
            iVar1 = test_true("test/evp_extra_test.c",0x18a7,
                              "EVP_DecryptFinal_ex(ctx, outbuf, &outlen)",iVar1 != 0);
            uVar2 = (uint)(iVar1 != 0);
            goto LAB_0010d1de;
          }
        }
      }
      uVar2 = 0;
      goto LAB_0010d1de;
    }
  }
  lVar3 = 0;
  uVar2 = 0;
LAB_0010d1de:
  EVP_CIPHER_free(lVar3);
  EVP_CIPHER_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint aes_gcm_encrypt_constprop_0(void)

{
  uint uVar1;
  int iVar2;
  EVP_CIPHER_CTX *ctx;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  int local_4b8;
  int local_4b4;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  uchar local_448 [1032];
  long local_40;
  
  uVar3 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_478 = (undefined1  [16])0x0;
  local_468 = (undefined1  [16])0x0;
  local_4b0 = 0x80;
  ctx = EVP_CIPHER_CTX_new();
  uVar1 = test_ptr("test/evp_extra_test.c",0x1861,"ctx = EVP_CIPHER_CTX_new()",ctx);
  if (uVar1 != 0) {
    uVar3 = EVP_CIPHER_fetch(testctx,"AES-256-GCM",&_LC223);
    iVar2 = test_ptr("test/evp_extra_test.c",0x1862,
                     "cipher = EVP_CIPHER_fetch(testctx, \"AES-256-GCM\", \"\")",uVar3);
    if (iVar2 != 0) {
      OSSL_PARAM_construct_size_t(&local_4e8,"ivlen",&local_4b0);
      local_488 = local_4c8;
      local_4a8 = local_4e8;
      uStack_4a0 = uStack_4e0;
      local_498 = local_4d8;
      uStack_490 = uStack_4d0;
      iVar2 = EVP_EncryptInit_ex2(ctx,uVar3,gcm_key_22,gcm_iv_21,&local_4a8);
      iVar2 = test_true("test/evp_extra_test.c",0x1868,
                        "EVP_EncryptInit_ex2(ctx, cipher, gcm_key, gcm_iv, params)",iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = EVP_EncryptUpdate(ctx,local_448,&local_4b8,gcm_pt_20,0x10);
        iVar2 = test_true("test/evp_extra_test.c",0x186c,
                          "EVP_EncryptUpdate(ctx, outbuf, &outlen, gcm_pt, gcm_pt_s)",iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = EVP_EncryptFinal_ex(ctx,local_448,&local_4b4);
          iVar2 = test_true("test/evp_extra_test.c",0x186e,
                            "EVP_EncryptFinal_ex(ctx, outbuf, &tmplen)",iVar2 != 0);
          if (iVar2 != 0) {
            OSSL_PARAM_construct_octet_string(&local_4e8,&_LC131,local_458,0x10);
            local_488 = local_4c8;
            local_4a8 = local_4e8;
            uStack_4a0 = uStack_4e0;
            local_498 = local_4d8;
            uStack_490 = uStack_4d0;
            iVar2 = EVP_CIPHER_CTX_get_params(ctx,&local_4a8);
            iVar2 = test_true("test/evp_extra_test.c",0x1874,
                              "EVP_CIPHER_CTX_get_params(ctx, params)",iVar2 != 0);
            if ((iVar2 != 0) &&
               (iVar2 = test_mem_eq("test/evp_extra_test.c",0x1875,"outbuf","gcm_ct",local_448,
                                    (long)local_4b8,gcm_ct_19,0x10), iVar2 != 0)) {
              iVar2 = test_mem_eq("test/evp_extra_test.c",0x1876,"outtag","gcm_tag",local_458,0x10,
                                  gcm_tag_18,0x10);
              uVar1 = (uint)(iVar2 != 0);
              goto LAB_0010d34f;
            }
          }
        }
      }
    }
    uVar1 = 0;
  }
LAB_0010d34f:
  EVP_CIPHER_free(uVar3);
  EVP_CIPHER_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



ulong test_aes_gcm_ivlen_change_cve_2023_5363(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = aes_gcm_encrypt_constprop_0();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = aes_gcm_decrypt_constprop_0();
  return (ulong)(iVar1 != 0);
}



/* WARNING: Type propagation algorithm not settling */

uint test_set_get_raw_keys_int(int param_1,uint param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  EVP_PKEY *pkey;
  void *ptr;
  char *pcVar5;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  bool bVar9;
  char *local_118;
  char *local_110;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulong local_c8;
  ulong local_c0 [2];
  undefined1 *local_b0;
  EVP_PKEY *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0[0] = 0;
  local_c0[1] = 1;
  local_b0 = (undefined1 *)0x0;
  if (param_2 == 0) {
    lVar1 = (long)param_1 * 0x28;
    local_118 = *(char **)(keys + lVar1 + 0x18);
    if (local_118 == (char *)0x0) {
      local_110 = OBJ_nid2sn(*(int *)(keys + lVar1));
      uVar7 = (ulong)*(int *)(keys + lVar1 + 0x20);
      puVar8 = *(undefined1 **)(keys + lVar1 + 8);
      if (puVar8 == ml_kem_seed) goto LAB_0010da29;
      bVar9 = false;
      local_c8 = uVar7;
LAB_0010d9a3:
      if (((param_3 & 1) != 0) || (bVar9)) {
        local_118 = local_110;
LAB_0010d696:
        pkey = (EVP_PKEY *)EVP_PKEY_new_raw_private_key_ex(testctx,local_118,0,puVar8,local_c8);
      }
      else {
        pkey = (EVP_PKEY *)
               EVP_PKEY_new_raw_private_key
                         (*(undefined4 *)(keys + (long)param_1 * 0x28),0,puVar8,local_c8);
      }
      goto LAB_0010d6b1;
    }
    uVar7 = (ulong)*(int *)(keys + lVar1 + 0x20);
    puVar8 = *(undefined1 **)(keys + lVar1 + 8);
    local_110 = local_118;
    local_c8 = uVar7;
    if (puVar8 != ml_kem_seed) goto LAB_0010d696;
LAB_0010da29:
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_a8 = (EVP_PKEY *)0x0;
    local_a0 = 0;
    local_c8 = uVar7;
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(testctx,local_110,0);
    iVar2 = test_ptr("test/evp_extra_test.c",0xc47,&_LC162);
    if (iVar2 == 0) {
LAB_0010dab7:
      bVar9 = false;
    }
    else {
      uVar3 = EVP_PKEY_fromdata_init(ctx);
      iVar2 = test_int_gt("test/evp_extra_test.c",0xc48,"EVP_PKEY_fromdata_init(ctx)",&_LC5,uVar3,0)
      ;
      if (iVar2 == 0) goto LAB_0010dab7;
      OSSL_PARAM_construct_octet_string(&local_f8,&_LC538,ml_kem_seed,uVar7);
      local_98._8_8_ = uStack_f0;
      local_98._0_8_ = local_f8;
      local_78._0_8_ = local_d8;
      local_88._8_8_ = uStack_e0;
      local_88._0_8_ = local_e8;
      uVar3 = EVP_PKEY_fromdata(ctx,&local_a8,1,local_98);
      iVar2 = test_int_gt("test/evp_extra_test.c",0xc4c,
                          "EVP_PKEY_fromdata(ctx, &pkey, selection, parr)",&_LC5,uVar3,0);
      if (iVar2 == 0) goto LAB_0010dab7;
      EVP_PKEY_todata(local_a8,1,&local_a0);
      iVar2 = test_true("test/evp_extra_test.c",0xc50,
                        "EVP_PKEY_todata(pkey, OSSL_KEYMGMT_SELECT_PRIVATE_KEY, &params)");
      if (iVar2 == 0) goto LAB_0010dab7;
      uVar6 = OSSL_PARAM_locate_const(local_a0,&_LC259);
      iVar2 = test_ptr("test/evp_extra_test.c",0xc54,&_LC288);
      if (iVar2 == 0) goto LAB_0010dab7;
      iVar2 = OSSL_PARAM_get_octet_string(uVar6,&local_b0,0,&local_c8);
      iVar2 = test_true("test/evp_extra_test.c",0xc55,
                        "OSSL_PARAM_get_octet_string(p, (void **)ret, 0, retlen)",iVar2 != 0);
      bVar9 = iVar2 != 0;
    }
    EVP_PKEY_free(local_a8);
    OSSL_PARAM_free(local_a0);
    EVP_PKEY_CTX_free(ctx);
    iVar2 = test_true("test/evp_extra_test.c",0xc8b,
                      "ml_kem_seed_to_priv(name, in, inlen, &privalloc, &inlen)",bVar9);
    if (iVar2 != 0) {
      bVar9 = local_118 != (char *)0x0;
      puVar8 = local_b0;
      goto LAB_0010d9a3;
    }
    pkey = (EVP_PKEY *)0x0;
    ptr = (void *)0x0;
    uVar4 = 0;
    goto LAB_0010d6d5;
  }
  lVar1 = (long)param_1 * 0x28;
  puVar8 = *(undefined1 **)(keys + lVar1 + 0x10);
  if (puVar8 == (undefined1 *)0x0) goto LAB_0010d705;
  pcVar5 = *(char **)(keys + lVar1 + 0x18);
  if (pcVar5 == (char *)0x0) {
    iVar2 = *(int *)(keys + lVar1);
    pcVar5 = OBJ_nid2sn(iVar2);
    local_c8 = (ulong)*(int *)(keys + lVar1 + 0x24);
    if (param_3 == 0) {
      pkey = (EVP_PKEY *)EVP_PKEY_new_raw_public_key(iVar2,0,puVar8,local_c8);
      goto LAB_0010d6b1;
    }
  }
  else {
    local_c8 = (ulong)*(int *)(keys + lVar1 + 0x24);
  }
  pkey = (EVP_PKEY *)EVP_PKEY_new_raw_public_key_ex(testctx,pcVar5,0,puVar8);
LAB_0010d6b1:
  iVar2 = test_ptr("test/evp_extra_test.c",0xca0,&_LC13,pkey);
  if (iVar2 == 0) {
LAB_0010d6d0:
    ptr = (void *)0x0;
    uVar4 = 0;
  }
  else {
    uVar3 = EVP_PKEY_eq(pkey,pkey);
    iVar2 = test_int_eq("test/evp_extra_test.c",0xca1,"EVP_PKEY_eq(pkey, pkey)",&_LC53,uVar3,1);
    if (iVar2 == 0) goto LAB_0010d6d0;
    if (param_2 == 0) {
      iVar2 = EVP_PKEY_get_raw_private_key(pkey,0,local_c0);
      ptr = (void *)0x0;
      iVar2 = test_true("test/evp_extra_test.c",0xca2,
                        "EVP_PKEY_get_raw_private_key(pkey, NULL, &len)",iVar2 != 0);
      if (iVar2 == 0) {
        uVar4 = 0;
        goto LAB_0010d6d5;
      }
    }
    else {
      iVar2 = EVP_PKEY_get_raw_public_key();
      iVar2 = test_true("test/evp_extra_test.c",0xca3,
                        "EVP_PKEY_get_raw_public_key(pkey, NULL, &len)",iVar2 != 0);
      if (iVar2 == 0) goto LAB_0010d6d0;
    }
    iVar2 = test_true("test/evp_extra_test.c",0xca4,"len == inlen",local_c0[0] == local_c8);
    if (iVar2 == 0) goto LAB_0010d6d0;
    if (param_1 == 1) {
      uVar7 = local_c0[0];
      if (local_c0[0] < 0x50) {
        uVar7 = 0x50;
      }
      ptr = (void *)CRYPTO_zalloc(uVar7,"test/evp_extra_test.c",0xcb1);
      uVar4 = test_ptr("test/evp_extra_test.c",0xcb1,"buf = OPENSSL_zalloc(len <= 80 ? 80 : len)",
                       ptr);
      if (uVar4 != 0) {
        if (param_2 == 0) {
LAB_0010db78:
          iVar2 = EVP_PKEY_get_raw_private_key(pkey,ptr,local_c0);
          iVar2 = test_true("test/evp_extra_test.c",0xcb3,
                            "EVP_PKEY_get_raw_private_key(pkey, buf, &len)",iVar2 != 0);
          if (iVar2 != 0) goto LAB_0010d8ec;
          uVar4 = 0;
        }
        else {
LAB_0010d8ba:
          iVar2 = EVP_PKEY_get_raw_public_key(pkey,ptr,local_c0);
          uVar4 = test_true("test/evp_extra_test.c",0xcb4,
                            "EVP_PKEY_get_raw_public_key(pkey, buf, &len)",iVar2 != 0);
          if (uVar4 != 0) {
LAB_0010d8ec:
            iVar2 = test_mem_eq("test/evp_extra_test.c",0xcb5,&_LC627,&_LC626,puVar8,local_c8,ptr,
                                local_c0[0]);
            uVar4 = (uint)(iVar2 != 0);
          }
        }
      }
    }
    else if (param_2 == 0) {
      iVar2 = EVP_PKEY_get_raw_private_key(pkey,&local_41,local_c0 + 1);
      iVar2 = test_false("test/evp_extra_test.c",0xcab,
                         "EVP_PKEY_get_raw_private_key(pkey, shortbuf, &shortlen)",iVar2 != 0);
      if (iVar2 == 0) goto LAB_0010d6d0;
      uVar7 = local_c0[0];
      if (local_c0[0] < 0x50) {
        uVar7 = 0x50;
      }
      ptr = (void *)CRYPTO_zalloc(uVar7,"test/evp_extra_test.c",0xcb1);
      uVar4 = test_ptr("test/evp_extra_test.c",0xcb1,"buf = OPENSSL_zalloc(len <= 80 ? 80 : len)",
                       ptr);
      if (uVar4 != 0) goto LAB_0010db78;
    }
    else {
      iVar2 = EVP_PKEY_get_raw_public_key();
      ptr = (void *)0x0;
      uVar4 = test_false("test/evp_extra_test.c",0xcad,
                         "EVP_PKEY_get_raw_public_key(pkey, shortbuf, &shortlen)",iVar2 != 0);
      if (uVar4 != 0) {
        uVar7 = local_c0[0];
        if (local_c0[0] < 0x50) {
          uVar7 = 0x50;
        }
        ptr = (void *)CRYPTO_zalloc(uVar7,"test/evp_extra_test.c",0xcb1);
        uVar4 = test_ptr("test/evp_extra_test.c",0xcb1,"buf = OPENSSL_zalloc(len <= 80 ? 80 : len)",
                         ptr);
        if (uVar4 != 0) goto LAB_0010d8ba;
      }
    }
  }
LAB_0010d6d5:
  CRYPTO_free(local_b0);
  CRYPTO_free(ptr);
  EVP_PKEY_free(pkey);
  param_2 = uVar4;
LAB_0010d705:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}



bool test_set_get_raw_keys(ulong param_1)

{
  int iVar1;
  
  if ((((nullprov != 0) || (iVar1 = test_set_get_raw_keys_int(param_1,0,0), iVar1 != 0)) &&
      (iVar1 = test_set_get_raw_keys_int(param_1 & 0xffffffff,0,1), iVar1 != 0)) &&
     ((nullprov != 0 || (iVar1 = test_set_get_raw_keys_int(param_1 & 0xffffffff,1,0), iVar1 != 0))))
  {
    iVar1 = test_set_get_raw_keys_int(param_1 & 0xffffffff,1,1);
    return iVar1 != 0;
  }
  return false;
}



undefined8 pkey_custom_param_check(void)

{
  return 0xbeef;
}



undefined8 pkey_custom_pub_check(void)

{
  return 0xbeef;
}



bool test_EVP_rsa_invalid_key(void)

{
  EVP_PKEY *pkey;
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 *local_38;
  undefined8 local_30;
  EVP_PKEY *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0x82a;
  local_28 = (EVP_PKEY *)0x0;
  local_38 = kInvalidRSAKeyDER;
  uVar2 = OSSL_DECODER_CTX_new_for_pkey(&local_28,&_LC628,0,&_LC9,0,testctx,0);
  OSSL_DECODER_from_data(uVar2,&local_38,&local_30);
  OSSL_DECODER_CTX_free(uVar2);
  pkey = local_28;
  iVar1 = test_ptr("test/evp_extra_test.c",0x1271,&_LC13,local_28);
  EVP_PKEY_free(pkey);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_invalide_ec_char2_pub_range_decode(int param_1)

{
  long lVar1;
  EVP_PKEY *pkey;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_38;
  undefined8 local_30;
  EVP_PKEY *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (EVP_PKEY *)0x0;
  lVar1 = (long)param_1 * 0x18;
  local_38 = *(undefined8 *)(ec_der_pub_keys + lVar1);
  local_30 = *(undefined8 *)(ec_der_pub_keys + lVar1 + 8);
  uVar3 = OSSL_DECODER_CTX_new_for_pkey(&local_28,&_LC628,0,&_LC262,0,testctx,0);
  OSSL_DECODER_from_data(uVar3,&local_38,&local_30);
  OSSL_DECODER_CTX_free(uVar3);
  pkey = local_28;
  if ((*(int *)(ec_der_pub_keys + lVar1 + 0x10) == 0) ||
     (iVar2 = test_ptr("test/evp_extra_test.c",0x8db,&_LC13,local_28), iVar2 == 0)) {
    iVar2 = test_ptr_null("test/evp_extra_test.c",0x8dc,&_LC13,pkey);
    bVar4 = iVar2 != 0;
  }
  else {
    bVar4 = true;
  }
  EVP_PKEY_free(pkey);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



uint test_RSA_OAEP_set_null_label(void)

{
  EVP_PKEY *pkey;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  EVP_PKEY_CTX *ctx;
  char *pcVar4;
  long in_FS_OFFSET;
  undefined8 uStack_50;
  undefined1 *local_48;
  undefined8 local_40;
  EVP_PKEY *local_38;
  long local_30;
  
  ctx = (EVP_PKEY_CTX *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0x260;
  local_38 = (EVP_PKEY *)0x0;
  local_48 = kExampleRSAKeyDER;
  uVar3 = OSSL_DECODER_CTX_new_for_pkey(&local_38,&_LC628,0,&_LC9,0,testctx,0);
  OSSL_DECODER_from_data(uVar3,&local_48,&local_40);
  OSSL_DECODER_CTX_free(uVar3);
  pkey = local_38;
  uVar1 = test_ptr("test/evp_extra_test.c",0xf4b,"key = load_example_rsa_key()",local_38);
  if (uVar1 != 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(testctx,pkey,0,uStack_50);
    iVar2 = test_ptr("test/evp_extra_test.c",0xf4c,
                     "key_ctx = EVP_PKEY_CTX_new_from_pkey(testctx, key, NULL)",ctx);
    if (iVar2 != 0) {
      iVar2 = EVP_PKEY_encrypt_init(ctx);
      iVar2 = test_true("test/evp_extra_test.c",0xf4d,"EVP_PKEY_encrypt_init(key_ctx)",iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = EVP_PKEY_CTX_set_rsa_padding(ctx,4);
        iVar2 = test_true("test/evp_extra_test.c",0xf50,
                          "EVP_PKEY_CTX_set_rsa_padding(key_ctx, RSA_PKCS1_OAEP_PADDING)",iVar2 != 0
                         );
        if (iVar2 != 0) {
          pcVar4 = CRYPTO_strdup("foo","test/evp_extra_test.c",0xf53);
          iVar2 = EVP_PKEY_CTX_set0_rsa_oaep_label(ctx,pcVar4,0);
          iVar2 = test_true("test/evp_extra_test.c",0xf53,
                            "EVP_PKEY_CTX_set0_rsa_oaep_label(key_ctx, OPENSSL_strdup(\"foo\"), 0)",
                            iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = EVP_PKEY_CTX_set0_rsa_oaep_label(ctx,0,0);
            iVar2 = test_true("test/evp_extra_test.c",0xf56,
                              "EVP_PKEY_CTX_set0_rsa_oaep_label(key_ctx, NULL, 0)",iVar2 != 0);
            uVar1 = (uint)(iVar2 != 0);
            goto LAB_0010e0ee;
          }
        }
      }
    }
    uVar1 = 0;
  }
LAB_0010e0ee:
  EVP_PKEY_free(pkey);
  EVP_PKEY_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_EVP_rsa_pss_set_saltlen(void)

{
  EVP_PKEY *pkey;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  undefined8 uStack_60;
  undefined4 local_54;
  EVP_PKEY_CTX *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  EVP_PKEY *local_38;
  long local_30;
  
  ctx = (EVP_MD_CTX *)0x0;
  type = (EVP_MD *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (EVP_PKEY_CTX *)0x0;
  local_54 = 9999;
  local_48 = kExampleRSAKeyDER;
  local_40 = 0x260;
  local_38 = (EVP_PKEY *)0x0;
  uVar4 = OSSL_DECODER_CTX_new_for_pkey(&local_38,&_LC628,0,&_LC9,0,testctx,0);
  OSSL_DECODER_from_data(uVar4,&local_48,&local_40);
  OSSL_DECODER_CTX_free(uVar4);
  pkey = local_38;
  uVar1 = test_ptr("test/evp_extra_test.c",0x125a,"pkey = load_example_rsa_key()",local_38);
  if (uVar1 != 0) {
    type = (EVP_MD *)EVP_MD_fetch(testctx,"sha256",0,uStack_60);
    uVar1 = test_ptr("test/evp_extra_test.c",0x125b,
                     "sha256 = EVP_MD_fetch(testctx, \"sha256\", NULL)",type);
    if (uVar1 != 0) {
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      iVar2 = test_ptr("test/evp_extra_test.c",0x125c,"sha256_ctx = EVP_MD_CTX_new()");
      if (iVar2 != 0) {
        iVar2 = EVP_DigestSignInit(ctx,&local_50,type,(ENGINE *)0x0,pkey);
        iVar2 = test_true("test/evp_extra_test.c",0x125d,
                          "EVP_DigestSignInit(sha256_ctx, &pkey_ctx, sha256, NULL, pkey)",iVar2 != 0
                         );
        if (iVar2 != 0) {
          iVar2 = EVP_PKEY_CTX_set_rsa_padding(local_50,6);
          iVar2 = test_true("test/evp_extra_test.c",0x125e,
                            "EVP_PKEY_CTX_set_rsa_padding(pkey_ctx, RSA_PKCS1_PSS_PADDING)",
                            iVar2 != 0);
          if (iVar2 != 0) {
            uVar3 = EVP_PKEY_CTX_set_rsa_pss_saltlen(local_50,0x20);
            iVar2 = test_int_gt("test/evp_extra_test.c",0x125f,
                                "EVP_PKEY_CTX_set_rsa_pss_saltlen(pkey_ctx, test_value)",&_LC5,uVar3
                                ,0);
            if (iVar2 != 0) {
              uVar3 = EVP_PKEY_CTX_get_rsa_pss_saltlen(local_50,&local_54);
              iVar2 = test_int_gt("test/evp_extra_test.c",0x1260,
                                  "EVP_PKEY_CTX_get_rsa_pss_saltlen(pkey_ctx, &saltlen)",&_LC5,uVar3
                                  ,0);
              if (iVar2 != 0) {
                iVar2 = test_int_eq("test/evp_extra_test.c",0x1261,"saltlen","test_value",local_54,
                                    0x20);
                uVar1 = (uint)(iVar2 != 0);
                goto LAB_0010e2f6;
              }
            }
          }
        }
      }
      uVar1 = 0;
    }
  }
LAB_0010e2f6:
  EVP_MD_CTX_free(ctx);
  EVP_PKEY_free(pkey);
  EVP_MD_free(type);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_RSA_OAEP_set_get_params_part_0(void)

{
  EVP_PKEY *pkey;
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 *local_140;
  undefined8 local_138;
  EVP_PKEY *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
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
  undefined1 local_88 [14];
  undefined2 uStack_7a;
  undefined1 auStack_78 [14];
  undefined1 local_68 [14];
  undefined2 uStack_5a;
  undefined1 auStack_58 [14];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_138 = 0x260;
  local_130 = (EVP_PKEY *)0x0;
  local_140 = kExampleRSAKeyDER;
  uVar3 = OSSL_DECODER_CTX_new_for_pkey(&local_130,&_LC628,0,&_LC9,0,testctx,0);
  OSSL_DECODER_from_data(uVar3,&local_140,&local_138);
  ctx = (EVP_PKEY_CTX *)0x0;
  OSSL_DECODER_CTX_free(uVar3);
  pkey = local_130;
  iVar1 = test_ptr("test/evp_extra_test.c",0xf16,"key = load_example_rsa_key()",local_130);
  if (iVar1 != 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,pkey,0,uStack_190);
    iVar1 = test_ptr("test/evp_extra_test.c",0xf17,"key_ctx = EVP_PKEY_CTX_new_from_pkey(0, key, 0)"
                     ,ctx);
    if (iVar1 != 0) {
      local_130 = (EVP_PKEY *)CONCAT44(local_130._4_4_,4);
      OSSL_PARAM_construct_int(&local_178,"pad-mode",&local_130);
      local_128 = local_178;
      uStack_120 = uStack_170;
      local_118 = local_168;
      uStack_110 = uStack_160;
      local_108 = local_158;
      OSSL_PARAM_construct_utf8_string(&local_178,"digest","SHA2-256",0);
      local_100 = local_178;
      uStack_f8 = uStack_170;
      local_f0 = local_168;
      uStack_e8 = uStack_160;
      local_e0 = local_158;
      OSSL_PARAM_construct_utf8_string(&local_178,"mgf1-digest",&_LC575,0);
      local_b8 = local_158;
      local_d8 = local_178;
      uStack_d0 = uStack_170;
      local_c8 = local_168;
      uStack_c0 = uStack_160;
      OSSL_PARAM_construct_end(&local_178);
      local_90 = local_158;
      local_b0 = local_178;
      uStack_a8 = uStack_170;
      local_a0 = local_168;
      uStack_98 = uStack_160;
      uVar2 = EVP_PKEY_encrypt_init_ex(ctx,&local_128);
      iVar1 = test_int_gt("test/evp_extra_test.c",0xf25,"EVP_PKEY_encrypt_init_ex(key_ctx, params)",
                          &_LC5,uVar2,0);
      if (iVar1 != 0) {
        local_88 = SUB1614((undefined1  [16])0x0,0);
        local_68 = SUB1614((undefined1  [16])0x0,0);
        uStack_7a = 0;
        auStack_78 = SUB1614((undefined1  [16])0x0,2);
        uStack_5a = 0;
        auStack_58 = SUB1614((undefined1  [16])0x0,2);
        OSSL_PARAM_construct_utf8_string(&local_178,"digest",local_88,0x1e);
        local_108 = local_158;
        local_128 = local_178;
        uStack_120 = uStack_170;
        local_118 = local_168;
        uStack_110 = uStack_160;
        OSSL_PARAM_construct_utf8_string(&local_178,"mgf1-digest",local_68,0x1e);
        local_e0 = local_158;
        local_100 = local_178;
        uStack_f8 = uStack_170;
        local_f0 = local_168;
        uStack_e8 = uStack_160;
        OSSL_PARAM_construct_end(&local_178);
        local_d8 = local_178;
        uStack_d0 = uStack_170;
        local_b8 = local_158;
        local_c8 = local_168;
        uStack_c0 = uStack_160;
        iVar1 = EVP_PKEY_CTX_get_params(ctx,&local_128);
        iVar1 = test_true("test/evp_extra_test.c",0xf33,"EVP_PKEY_CTX_get_params(key_ctx, params)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_str_eq("test/evp_extra_test.c",0xf36,"oaepmd","OSSL_DIGEST_NAME_SHA2_256",
                              local_88,"SHA2-256");
          if (iVar1 != 0) {
            iVar1 = test_str_eq("test/evp_extra_test.c",0xf37,"mgf1md","OSSL_DIGEST_NAME_SHA1",
                                local_68,&_LC575);
            if (iVar1 != 0) {
              iVar1 = 1;
              goto LAB_0010e568;
            }
          }
        }
      }
    }
    iVar1 = 0;
  }
LAB_0010e568:
  EVP_PKEY_free(pkey);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_RSA_OAEP_set_get_params(void)

{
  if (nullprov != 0) {
    test_skip("test/evp_extra_test.c",0xf14,"Test does not support a non-default library context");
    return;
  }
  test_RSA_OAEP_set_get_params_part_0();
  return;
}



uint test_EVP_PKEY_check(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  EVP_PKEY *local_48;
  long local_40;
  
  lVar10 = (long)param_1 * 0x30;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (EVP_PKEY *)0x0;
  local_50 = *(undefined8 *)(keycheckdata + lVar10 + 8);
  uVar7 = *(undefined4 *)(keycheckdata + lVar10 + 0x24);
  uVar6 = *(undefined4 *)(keycheckdata + lVar10 + 0x18);
  uVar1 = *(undefined4 *)(keycheckdata + lVar10 + 0x1c);
  uVar2 = *(undefined4 *)(keycheckdata + lVar10 + 0x20);
  iVar5 = *(int *)(keycheckdata + lVar10 + 0x28);
  local_58 = *(undefined8 *)(keycheckdata + lVar10);
  uVar9 = OSSL_DECODER_CTX_new_for_pkey
                    (&local_48,&_LC628,0,*(undefined8 *)(keycheckdata + lVar10 + 0x10),0,testctx,0);
  OSSL_DECODER_from_data(uVar9,&local_58,&local_50);
  OSSL_DECODER_CTX_free(uVar9);
  pkey = local_48;
  iVar3 = test_ptr("test/evp_extra_test.c",0xcec,
                   "pkey = load_example_key(ak->keytype, input, input_len)",local_48);
  if (iVar3 == 0) {
LAB_0010eb10:
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    uVar8 = 0;
  }
  else {
    if (iVar5 == 0) {
      uVar4 = EVP_PKEY_get_id(pkey);
      iVar5 = test_int_eq("test/evp_extra_test.c",0xcef,"EVP_PKEY_get_id(pkey)","expected_id",uVar4,
                          uVar6);
      if (iVar5 == 0) goto LAB_0010eb10;
    }
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(testctx,pkey,0);
    iVar5 = test_ptr("test/evp_extra_test.c",0xcf2,
                     "ctx = EVP_PKEY_CTX_new_from_pkey(testctx, pkey, testpropq)",ctx);
    if (iVar5 != 0) {
      uVar6 = EVP_PKEY_check(ctx);
      iVar5 = test_int_eq("test/evp_extra_test.c",0xcf5,"EVP_PKEY_check(ctx)","expected_check",uVar6
                          ,uVar1);
      if (iVar5 != 0) {
        uVar6 = EVP_PKEY_public_check(ctx);
        iVar5 = test_int_eq("test/evp_extra_test.c",0xcf8,"EVP_PKEY_public_check(ctx)",
                            "expected_pub_check",uVar6,uVar2);
        if (iVar5 != 0) {
          uVar6 = EVP_PKEY_param_check(ctx);
          iVar5 = test_int_eq("test/evp_extra_test.c",0xcfb,"EVP_PKEY_param_check(ctx)",
                              "expected_param_check",uVar6,uVar7);
          if (iVar5 != 0) {
            ctx_00 = EVP_PKEY_CTX_new_id(0xdefaced,(ENGINE *)0x0);
            iVar5 = EVP_PKEY_up_ref(pkey);
            if (iVar5 != 0) {
              *(EVP_PKEY **)(ctx_00 + 0x88) = pkey;
              uVar7 = EVP_PKEY_check(ctx_00);
              iVar5 = test_int_eq("test/evp_extra_test.c",0xd06,"EVP_PKEY_check(ctx2)","0xbeef",
                                  uVar7,0xbeef);
              if (iVar5 != 0) {
                uVar7 = EVP_PKEY_public_check(ctx_00);
                uVar8 = test_int_eq("test/evp_extra_test.c",0xd09,"EVP_PKEY_public_check(ctx2)",
                                    "0xbeef",uVar7,0xbeef);
                if (uVar8 != 0) {
                  uVar7 = EVP_PKEY_param_check(ctx_00);
                  iVar5 = test_int_eq("test/evp_extra_test.c",0xd0c,"EVP_PKEY_param_check(ctx2)",
                                      "0xbeef",uVar7,0xbeef);
                  uVar8 = (uint)(iVar5 != 0);
                }
                goto LAB_0010ea14;
              }
            }
            uVar8 = 0;
            goto LAB_0010ea14;
          }
        }
      }
    }
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    uVar8 = 0;
  }
LAB_0010ea14:
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_CTX_free(ctx_00);
  EVP_PKEY_free(pkey);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_ecdsa_digestsign_keccak(void)

{
  EVP_PKEY *pkey;
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  undefined1 *local_48;
  undefined8 local_40;
  EVP_PKEY *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (nullprov == 0) {
    type = (EVP_MD *)0x0;
    local_48 = kExampleECKeyDER;
    local_40 = 0x79;
    local_38 = (EVP_PKEY *)0x0;
    uVar4 = OSSL_DECODER_CTX_new_for_pkey(&local_38,&_LC628,0,&_LC262,0,testctx,0);
    OSSL_DECODER_from_data(uVar4,&local_48,&local_40);
    OSSL_DECODER_CTX_free(uVar4);
    pkey = local_38;
    uVar1 = test_ptr("test/evp_extra_test.c",0x7f0,&_LC13,local_38);
    uVar3 = (ulong)uVar1;
    ctx = (EVP_MD_CTX *)0x0;
    if (uVar1 != 0) {
      type = (EVP_MD *)EVP_MD_fetch(0,"KECCAK-256",0);
      uVar1 = test_ptr("test/evp_extra_test.c",0x7f5,&_LC63,type);
      uVar3 = (ulong)uVar1;
      if (uVar1 != 0) {
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        uVar1 = test_ptr("test/evp_extra_test.c",0x7f9,&_LC162);
        uVar3 = (ulong)uVar1;
        if (uVar1 != 0) {
          iVar2 = EVP_DigestSignInit(ctx,(EVP_PKEY_CTX **)0x0,type,(ENGINE *)0x0,pkey);
          iVar2 = test_true("test/evp_extra_test.c",0x7ff,
                            "EVP_DigestSignInit(ctx, NULL, md, NULL, pkey)",iVar2 != 0);
          uVar3 = (ulong)(iVar2 != 0);
        }
      }
    }
    EVP_MD_CTX_free(ctx);
    EVP_PKEY_free(pkey);
    EVP_MD_free(type);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar3;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar3 = test_skip("test/evp_extra_test.c",0x7ed,
                      "Test does not support a non-default library context");
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_privatekey_to_pkcs8(void)

{
  uint uVar1;
  int iVar2;
  BIO_METHOD *type;
  BIO *bp;
  undefined8 uVar3;
  ulong uVar4;
  EVP_PKEY *x;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  EVP_PKEY *local_48;
  long local_40;
  
  x = (EVP_PKEY *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  type = BIO_s_mem();
  bp = BIO_new(type);
  uVar1 = test_ptr("test/evp_extra_test.c",0x940,"membio = BIO_new(BIO_s_mem())",bp);
  if (uVar1 != 0) {
    local_58 = kExampleRSAKeyDER;
    local_50 = 0x260;
    local_48 = (EVP_PKEY *)0x0;
    uVar3 = OSSL_DECODER_CTX_new_for_pkey(&local_48,&_LC628,0,&_LC9,0,testctx,0);
    OSSL_DECODER_from_data(uVar3,&local_58,&local_50);
    OSSL_DECODER_CTX_free(uVar3);
    x = local_48;
    iVar2 = test_ptr("test/evp_extra_test.c",0x941,"pkey = load_example_rsa_key()");
    if (iVar2 != 0) {
      iVar2 = i2d_PKCS8PrivateKey_bio
                        (bp,x,(EVP_CIPHER *)0x0,(char *)0x0,0,(undefined1 *)0x0,(void *)0x0);
      uVar1 = test_int_gt("test/evp_extra_test.c",0x942,
                          "i2d_PKCS8PrivateKey_bio(membio, pkey, NULL, NULL, 0, NULL, NULL)",&_LC5,
                          iVar2,0);
      if (uVar1 == 0) goto LAB_0010ee12;
      uVar4 = BIO_ctrl(bp,3,0,&local_60);
      iVar2 = test_int_gt("test/evp_extra_test.c",0x945,
                          "membuf_len = BIO_get_mem_data(membio, &membuf)",&_LC5,uVar4 & 0xffffffff,
                          0);
      if (iVar2 != 0) {
        iVar2 = test_ptr("test/evp_extra_test.c",0x946,"membuf",local_60);
        if (iVar2 != 0) {
          uVar3 = 0x27a;
          iVar2 = test_mem_eq("test/evp_extra_test.c",0x947,"membuf");
          if (iVar2 != 0) {
            uVar5 = 0;
            iVar2 = PEM_write_bio_PKCS8PrivateKey
                              (bp,x,(EVP_CIPHER *)0x0,(char *)0x0,0,(undefined1 *)0x0,(void *)0x0);
            iVar2 = test_int_gt("test/evp_extra_test.c",0x94d,
                                "PEM_write_bio_PKCS8PrivateKey(membio, pkey, NULL, NULL, 0, NULL, NULL)"
                                ,&_LC5,iVar2,0,uVar5,uVar3);
            uVar1 = (uint)(iVar2 != 0);
            goto LAB_0010ee12;
          }
        }
      }
    }
    uVar1 = 0;
  }
LAB_0010ee12:
  EVP_PKEY_free(x);
  BIO_free_all(bp);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_EVP_DigestVerifyInit(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  EVP_MD_CTX *ctx;
  undefined8 uVar4;
  EVP_MD *type;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  undefined1 *local_58;
  undefined8 local_50;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (nullprov != 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = test_skip("test/evp_extra_test.c",0x7ca,
                        "Test does not support a non-default library context");
      return uVar3;
    }
    goto LAB_0010f2cd;
  }
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  uVar1 = test_ptr("test/evp_extra_test.c",0x7cc,"md_ctx = EVP_MD_CTX_new()",ctx);
  uVar3 = (ulong)uVar1;
  pkey = (EVP_PKEY *)0x0;
  if (uVar1 != 0) {
    local_58 = kExampleRSAKeyDER;
    local_50 = 0x260;
    local_48 = (EVP_PKEY *)0x0;
    uVar4 = OSSL_DECODER_CTX_new_for_pkey(&local_48,&_LC628,0,&_LC9,0,testctx);
    OSSL_DECODER_from_data(uVar4,&local_58,&local_50);
    OSSL_DECODER_CTX_free(uVar4);
    pkey = local_48;
    iVar2 = test_ptr("test/evp_extra_test.c",0x7cd,"pkey = load_example_rsa_key()",local_48);
    if (iVar2 != 0) {
      type = EVP_sha256();
      iVar2 = EVP_DigestVerifyInit(ctx,(EVP_PKEY_CTX **)0x0,type,(ENGINE *)0x0,pkey);
      iVar2 = test_true("test/evp_extra_test.c",2000,
                        "EVP_DigestVerifyInit(md_ctx, NULL, EVP_sha256(), NULL, pkey)",iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = EVP_DigestVerifyUpdate(ctx,&kMsg,4);
        iVar2 = test_true("test/evp_extra_test.c",0x7d1,
                          "EVP_DigestVerifyUpdate(md_ctx, kMsg, sizeof(kMsg))",iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = EVP_DigestVerifyFinal(ctx,kSignature,0x80);
          iVar2 = test_int_gt("test/evp_extra_test.c",0x7d2,
                              "EVP_DigestVerifyFinal(md_ctx, kSignature, sizeof(kSignature))",&_LC5,
                              iVar2,0);
          if (iVar2 != 0) {
            iVar2 = EVP_DigestVerifyInit
                              (ctx,(EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,(EVP_PKEY *)0x0)
            ;
            iVar2 = test_true("test/evp_extra_test.c",0x7d7,
                              "EVP_DigestVerifyInit(md_ctx, NULL, NULL, NULL, NULL)",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = EVP_DigestVerifyUpdate(ctx,&kMsg,4);
              iVar2 = test_true("test/evp_extra_test.c",0x7d8,
                                "EVP_DigestVerifyUpdate(md_ctx, kMsg, sizeof(kMsg))",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = EVP_DigestVerifyFinal(ctx,kSignature,0x80);
                iVar2 = test_int_gt("test/evp_extra_test.c",0x7d9,
                                    "EVP_DigestVerifyFinal(md_ctx, kSignature, sizeof(kSignature))",
                                    &_LC5,iVar2,0);
                uVar3 = (ulong)(iVar2 != 0);
                goto LAB_0010f13b;
              }
            }
          }
        }
      }
    }
    uVar3 = 0;
  }
LAB_0010f13b:
  EVP_MD_CTX_free(ctx);
  EVP_PKEY_free(pkey);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_0010f2cd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_EVP_Enveloped(int param_1)

{
  uint uVar1;
  int iVar2;
  EVP_CIPHER *type;
  undefined8 uVar3;
  EVP_CIPHER_CTX *ctx;
  long in_FS_OFFSET;
  int local_b4;
  EVP_PKEY *local_b0;
  uchar *local_a8;
  undefined1 *local_a0;
  int local_98 [2];
  EVP_PKEY *local_90;
  uchar local_88 [16];
  uchar local_78 [16];
  uchar local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (EVP_PKEY *)0x0;
  local_a8 = (uchar *)0x0;
  if (nullprov != 0) {
    uVar1 = test_skip("test/evp_extra_test.c",0x6e5,
                      "Test does not support a non-default library context");
    goto LAB_0010f47c;
  }
  ctx = (EVP_CIPHER_CTX *)0x0;
  if (param_1 == 0) {
    type = EVP_aes_256_cbc();
LAB_0010f375:
    local_a0 = kExampleRSAKeyDER;
    local_98[0] = 0x260;
    local_98[1] = 0;
    local_90 = (EVP_PKEY *)0x0;
    uVar3 = OSSL_DECODER_CTX_new_for_pkey(&local_90,&_LC628,0,&_LC9,0,testctx);
    OSSL_DECODER_from_data(uVar3,&local_a0,local_98);
    OSSL_DECODER_CTX_free(uVar3);
    local_b0 = local_90;
    iVar2 = test_ptr("test/evp_extra_test.c",0x6ed,"keypair = load_example_rsa_key()");
    if (iVar2 == 0) {
LAB_0010f44d:
      uVar1 = 0;
    }
    else {
      iVar2 = EVP_PKEY_get_size(local_b0);
      local_a8 = (uchar *)CRYPTO_zalloc((long)iVar2,"test/evp_extra_test.c",0x6ee);
      iVar2 = test_ptr("test/evp_extra_test.c",0x6ee,
                       "kek = OPENSSL_zalloc(EVP_PKEY_get_size(keypair))",local_a8);
      if (iVar2 == 0) goto LAB_0010f44d;
      ctx = EVP_CIPHER_CTX_new();
      iVar2 = test_ptr("test/evp_extra_test.c",0x6ef,"ctx = EVP_CIPHER_CTX_new()",ctx);
      if (iVar2 == 0) goto LAB_0010f44d;
      iVar2 = EVP_SealInit(ctx,type,&local_a8,(int *)&local_a0,local_88,&local_b0,1);
      iVar2 = test_true("test/evp_extra_test.c",0x6f0,
                        "EVP_SealInit(ctx, type, &kek, &kek_len, iv, &keypair, 1)",iVar2 != 0);
      if (iVar2 == 0) goto LAB_0010f44d;
      iVar2 = EVP_EncryptUpdate(ctx,local_68,local_98,(uchar *)&msg_0,8);
      iVar2 = test_true("test/evp_extra_test.c",0x6f2,
                        "EVP_SealUpdate(ctx, ciphertext, &ciphertext_len, msg, sizeof(msg))",
                        iVar2 != 0);
      if (iVar2 == 0) goto LAB_0010f44d;
      iVar2 = EVP_SealFinal(ctx,local_68 + local_98[0],&local_b4);
      iVar2 = test_true("test/evp_extra_test.c",0x6f4,
                        "EVP_SealFinal(ctx, ciphertext + ciphertext_len, &len)",iVar2 != 0);
      if (iVar2 == 0) goto LAB_0010f44d;
      local_98[0] = local_98[0] + local_b4;
      iVar2 = EVP_OpenInit(ctx,type,local_a8,(int)local_a0,local_88,local_b0);
      iVar2 = test_true("test/evp_extra_test.c",0x6fa,
                        "EVP_OpenInit(ctx, type, kek, kek_len, iv, keypair)",iVar2 != 0);
      if (iVar2 == 0) goto LAB_0010f44d;
      iVar2 = EVP_DecryptUpdate(ctx,local_78,(int *)&local_90,local_68,local_98[0]);
      iVar2 = test_true("test/evp_extra_test.c",0x6fb,
                        "EVP_OpenUpdate(ctx, plaintext, &plaintext_len, ciphertext, ciphertext_len)"
                        ,iVar2 != 0);
      if (iVar2 == 0) goto LAB_0010f44d;
      iVar2 = EVP_OpenFinal(ctx,local_78 + (int)local_90,&local_b4);
      iVar2 = test_true("test/evp_extra_test.c",0x6fd,
                        "EVP_OpenFinal(ctx, plaintext + plaintext_len, &len)",iVar2 != 0);
      if (iVar2 == 0) goto LAB_0010f44d;
      local_b4 = local_b4 + (int)local_90;
      local_90 = (EVP_PKEY *)CONCAT44(local_90._4_4_,local_b4);
      iVar2 = test_mem_eq("test/evp_extra_test.c",0x701,&_LC338,"plaintext",&msg_0,8,local_78,
                          (long)local_b4);
      uVar1 = (uint)(iVar2 != 0);
    }
    if (param_1 != 0) goto LAB_0010f4e8;
  }
  else {
    type = (EVP_CIPHER *)EVP_CIPHER_fetch(testctx,"AES-256-CBC",0);
    uVar1 = test_ptr("test/evp_extra_test.c",0x6e9,
                     "type = EVP_CIPHER_fetch(testctx, \"AES-256-CBC\", testpropq)",type);
    if (uVar1 != 0) goto LAB_0010f375;
LAB_0010f4e8:
    EVP_CIPHER_free(type);
  }
  CRYPTO_free(local_a8);
  EVP_PKEY_free(local_b0);
  EVP_CIPHER_CTX_free(ctx);
LAB_0010f47c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_EVP_PKEY_sign_with_app_method(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  DSA_METHOD *pDVar4;
  RSA_METHOD *pRVar5;
  rsa_st *rsa;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pkey;
  dsa_st *dsa;
  long in_FS_OFFSET;
  uchar *local_98;
  size_t local_80 [2];
  undefined1 *local_70;
  undefined8 local_68;
  EVP_PKEY *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0x13121110;
  local_80[0] = 0;
  local_80[1] = 1;
  local_58 = __LC33;
  uStack_50 = _UNK_0011d2b8;
  if (param_1 == 0) {
    local_70 = kExampleRSAKeyDER;
    local_68 = 0x260;
    local_60 = (EVP_PKEY *)0x0;
    uVar3 = OSSL_DECODER_CTX_new_for_pkey(&local_60,&_LC628,0,&_LC9,0,testctx,0);
    OSSL_DECODER_from_data(uVar3,&local_70,&local_68);
    OSSL_DECODER_CTX_free(uVar3);
    pkey = local_60;
    uVar1 = test_ptr("test/evp_extra_test.c",0x696,"pkey = load_example_rsa_key()",local_60);
    if (uVar1 != 0) {
      pRVar5 = RSA_get_default_method();
      pRVar5 = (RSA_METHOD *)RSA_meth_dup(pRVar5);
      iVar2 = test_ptr("test/evp_extra_test.c",0x698,
                       "rsa_meth = RSA_meth_dup(RSA_get_default_method())",pRVar5);
      if (iVar2 == 0) {
        ctx = (EVP_PKEY_CTX *)0x0;
        pDVar4 = (DSA_METHOD *)0x0;
        dsa = (DSA *)0x0;
        rsa = (RSA *)0x0;
        local_98 = (uchar *)0x0;
        uVar1 = 0;
        goto LAB_0010f7fb;
      }
      rsa = EVP_PKEY_get1_RSA(pkey);
      uVar1 = test_ptr("test/evp_extra_test.c",0x69b,"rsa = EVP_PKEY_get1_RSA(pkey)",rsa);
      if (uVar1 != 0) {
        iVar2 = RSA_set_method(rsa,pRVar5);
        uVar1 = test_int_gt("test/evp_extra_test.c",0x69c,"RSA_set_method(rsa, rsa_meth)",&_LC5,
                            iVar2,0);
        if (uVar1 != 0) {
          pDVar4 = (DSA_METHOD *)0x0;
          iVar2 = EVP_PKEY_assign(pkey,6,rsa);
          uVar1 = test_int_gt("test/evp_extra_test.c",0x69d,"EVP_PKEY_assign_RSA(pkey, rsa)",&_LC5,
                              iVar2,0);
          if (uVar1 != 0) {
LAB_0010fad8:
            ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(testctx,pkey,0);
            iVar2 = test_ptr("test/evp_extra_test.c",0x6b3,&_LC162,ctx);
            if (iVar2 != 0) {
              iVar2 = EVP_PKEY_sign_init(ctx);
              iVar2 = test_int_gt("test/evp_extra_test.c",0x6b4,"EVP_PKEY_sign_init(ctx)",&_LC5,
                                  iVar2,0);
              if (iVar2 == 0) {
                local_98 = (uchar *)0x0;
                dsa = (DSA *)0x0;
                rsa = (RSA *)0x0;
                uVar1 = 0;
                goto LAB_0010f7fb;
              }
              iVar2 = EVP_PKEY_sign(ctx,(uchar *)0x0,local_80,(uchar *)&local_58,0x14);
              iVar2 = test_int_gt("test/evp_extra_test.c",0x6b5,
                                  "EVP_PKEY_sign(ctx, NULL, &sig_len, tbs, sizeof(tbs))",&_LC5,iVar2
                                  ,0);
              if (iVar2 != 0) {
                local_98 = (uchar *)CRYPTO_malloc((int)local_80[0],"test/evp_extra_test.c",0x6b8);
                iVar2 = test_ptr("test/evp_extra_test.c",0x6b9,&_LC696,local_98);
                if (iVar2 != 0) {
                  iVar2 = EVP_PKEY_sign(ctx,local_98,local_80 + 1,(uchar *)&local_58,0x14);
                  iVar2 = test_int_le("test/evp_extra_test.c",0x6bb,
                                      "EVP_PKEY_sign(ctx, sig, &shortsig_len, tbs, sizeof(tbs))",
                                      &_LC5,iVar2,0);
                  if (iVar2 != 0) {
                    iVar2 = EVP_PKEY_sign(ctx,local_98,local_80,(uchar *)&local_58,0x14);
                    iVar2 = test_int_gt("test/evp_extra_test.c",0x6bd,
                                        "EVP_PKEY_sign(ctx, sig, &sig_len, tbs, sizeof(tbs))",&_LC5,
                                        iVar2,0);
                    if (iVar2 != 0) {
                      iVar2 = EVP_PKEY_verify_init(ctx);
                      iVar2 = test_int_gt("test/evp_extra_test.c",0x6c0,"EVP_PKEY_verify_init(ctx)",
                                          &_LC5,iVar2,0);
                      if (iVar2 != 0) {
                        iVar2 = EVP_PKEY_verify(ctx,local_98,local_80[0],(uchar *)&local_58,0x14);
                        iVar2 = test_int_gt("test/evp_extra_test.c",0x6c1,
                                            "EVP_PKEY_verify(ctx, sig, sig_len, tbs, sizeof(tbs))",
                                            &_LC5,iVar2,0);
                        dsa = (DSA *)0x0;
                        rsa = (RSA *)0x0;
                        uVar1 = (uint)(iVar2 != 0);
                        goto LAB_0010f7fb;
                      }
                    }
                  }
                }
                dsa = (DSA *)0x0;
                rsa = (RSA *)0x0;
                uVar1 = 0;
                goto LAB_0010f7fb;
              }
            }
            local_98 = (uchar *)0x0;
            dsa = (DSA *)0x0;
            rsa = (RSA *)0x0;
            uVar1 = 0;
            goto LAB_0010f7fb;
          }
        }
      }
      local_98 = (uchar *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      pDVar4 = (DSA_METHOD *)0x0;
      dsa = (DSA *)0x0;
      goto LAB_0010f7fb;
    }
  }
  else {
    local_70 = kExampleDSAKeyDER;
    local_68 = 0x1be;
    local_60 = (EVP_PKEY *)0x0;
    uVar3 = OSSL_DECODER_CTX_new_for_pkey(&local_60,&_LC628,0,&_LC300,0,testctx,0);
    OSSL_DECODER_from_data(uVar3,&local_70,&local_68);
    OSSL_DECODER_CTX_free(uVar3);
    pkey = local_60;
    uVar1 = test_ptr("test/evp_extra_test.c",0x6a2,"pkey = load_example_dsa_key()",local_60);
    if (uVar1 != 0) {
      pDVar4 = DSA_get_default_method();
      pDVar4 = (DSA_METHOD *)DSA_meth_dup(pDVar4);
      iVar2 = test_ptr("test/evp_extra_test.c",0x6a4,
                       "dsa_meth = DSA_meth_dup(DSA_get_default_method())",pDVar4);
      if (iVar2 == 0) {
        ctx = (EVP_PKEY_CTX *)0x0;
        dsa = (DSA *)0x0;
        pRVar5 = (RSA_METHOD *)0x0;
        rsa = (RSA *)0x0;
        local_98 = (uchar *)0x0;
        uVar1 = 0;
        goto LAB_0010f7fb;
      }
      dsa = EVP_PKEY_get1_DSA(pkey);
      iVar2 = test_ptr("test/evp_extra_test.c",0x6a7,"dsa = EVP_PKEY_get1_DSA(pkey)",dsa);
      if (iVar2 != 0) {
        iVar2 = DSA_set_method(dsa,pDVar4);
        iVar2 = test_int_gt("test/evp_extra_test.c",0x6a8,"DSA_set_method(dsa, dsa_meth)",&_LC5,
                            iVar2,0);
        if (iVar2 == 0) {
          local_98 = (uchar *)0x0;
          ctx = (EVP_PKEY_CTX *)0x0;
          pRVar5 = (RSA_METHOD *)0x0;
          rsa = (RSA *)0x0;
          uVar1 = 0;
          goto LAB_0010f7fb;
        }
        iVar2 = EVP_PKEY_assign(pkey,0x74,dsa);
        iVar2 = test_int_gt("test/evp_extra_test.c",0x6a9,"EVP_PKEY_assign_DSA(pkey, dsa)",&_LC5,
                            iVar2,0);
        if (iVar2 != 0) {
          pRVar5 = (RSA_METHOD *)0x0;
          goto LAB_0010fad8;
        }
      }
      ctx = (EVP_PKEY_CTX *)0x0;
      pRVar5 = (RSA_METHOD *)0x0;
      rsa = (RSA *)0x0;
      uVar1 = 0;
      local_98 = (uchar *)0x0;
      goto LAB_0010f7fb;
    }
  }
  ctx = (EVP_PKEY_CTX *)0x0;
  pDVar4 = (DSA_METHOD *)0x0;
  dsa = (DSA *)0x0;
  pRVar5 = (RSA_METHOD *)0x0;
  local_98 = (uchar *)0x0;
  rsa = (RSA *)0x0;
LAB_0010f7fb:
  EVP_PKEY_CTX_free(ctx);
  CRYPTO_free(local_98);
  EVP_PKEY_free(pkey);
  RSA_free(rsa);
  RSA_meth_free(pRVar5);
  DSA_free(dsa);
  DSA_meth_free(pDVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_EVP_PKCS82PKEY_wrong_tag(void)

{
  int iVar1;
  uint uVar2;
  BIO_METHOD *type;
  BIO *bp;
  undefined8 uVar3;
  ulong uVar4;
  PKCS8_PRIV_KEY_INFO *p8;
  EVP_PKEY *pkey;
  EVP_PKEY *x;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  EVP_PKEY *local_48;
  long local_40;
  
  uVar2 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  if (testctx == 0) {
    type = BIO_s_mem();
    bp = BIO_new(type);
    iVar1 = test_ptr("test/evp_extra_test.c",0x922,"membio = BIO_new(BIO_s_mem())",bp);
    pkey = (EVP_PKEY *)0x0;
    if (iVar1 == 0) {
      p8 = (PKCS8_PRIV_KEY_INFO *)0x0;
      x = (EVP_PKEY *)0x0;
      uVar2 = 0;
    }
    else {
      p8 = (PKCS8_PRIV_KEY_INFO *)0x0;
      local_58 = kExampleRSAKeyDER;
      local_50 = 0x260;
      local_48 = (EVP_PKEY *)0x0;
      uVar3 = OSSL_DECODER_CTX_new_for_pkey(&local_48,&_LC628,0,&_LC9,0,testctx,0);
      OSSL_DECODER_from_data(uVar3,&local_58,&local_50);
      OSSL_DECODER_CTX_free(uVar3);
      x = local_48;
      uVar2 = test_ptr("test/evp_extra_test.c",0x923,"pkey = load_example_rsa_key()",local_48);
      if (uVar2 != 0) {
        iVar1 = i2d_PKCS8PrivateKey_bio
                          (bp,x,(EVP_CIPHER *)0x0,(char *)0x0,0,(undefined1 *)0x0,(void *)0x0);
        uVar2 = test_int_gt("test/evp_extra_test.c",0x924,
                            "i2d_PKCS8PrivateKey_bio(membio, pkey, NULL, NULL, 0, NULL, NULL)",&_LC5
                            ,iVar1,0);
        if (uVar2 != 0) {
          uVar4 = BIO_ctrl(bp,3,0,&local_60);
          uVar2 = test_int_gt("test/evp_extra_test.c",0x927,"BIO_get_mem_data(membio, &membuf)",
                              &_LC5,uVar4 & 0xffffffff,0);
          if (uVar2 != 0) {
            p8 = d2i_PKCS8_PRIV_KEY_INFO_bio(bp,(PKCS8_PRIV_KEY_INFO **)0x0);
            uVar2 = test_ptr("test/evp_extra_test.c",0x928,
                             "p8inf = d2i_PKCS8_PRIV_KEY_INFO_bio(membio, NULL)",p8);
            if (uVar2 != 0) {
              pkey = EVP_PKCS82PKEY(p8);
              uVar2 = test_ptr("test/evp_extra_test.c",0x929,"pkey2 = EVP_PKCS82PKEY(p8inf)",pkey);
              if (uVar2 != 0) {
                uVar4 = ERR_peek_last_error();
                iVar1 = test_int_eq("test/evp_extra_test.c",0x92a,"ERR_peek_last_error()",&_LC5,
                                    uVar4 & 0xffffffff,0);
                uVar2 = (uint)(iVar1 != 0);
              }
            }
          }
        }
      }
    }
    EVP_PKEY_free(x);
    EVP_PKEY_free(pkey);
    PKCS8_PRIV_KEY_INFO_free(p8);
    BIO_free_all(bp);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_EVP_PKEY_sign(int param_1)

{
  EVP_PKEY *pkey;
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  EVP_PKEY_CTX *ctx;
  uchar *sig;
  char *pcVar4;
  long in_FS_OFFSET;
  size_t local_80 [2];
  undefined1 *local_70;
  undefined8 local_68;
  EVP_PKEY *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0x13121110;
  local_80[0] = 0;
  local_80[1] = 1;
  local_58 = __LC33;
  uStack_50 = _UNK_0011d2b8;
  if (param_1 == 0) {
    local_70 = kExampleRSAKeyDER;
    local_68 = 0x260;
    local_60 = (EVP_PKEY *)0x0;
    uVar3 = OSSL_DECODER_CTX_new_for_pkey(&local_60,&_LC628,0,&_LC9,0,testctx,0);
    OSSL_DECODER_from_data(uVar3,&local_70,&local_68);
    OSSL_DECODER_CTX_free(uVar3);
    uVar3 = 0x653;
    pcVar4 = "pkey = load_example_rsa_key()";
  }
  else if (param_1 == 1) {
    local_70 = kExampleDSAKeyDER;
    local_68 = 0x1be;
    local_60 = (EVP_PKEY *)0x0;
    uVar3 = OSSL_DECODER_CTX_new_for_pkey(&local_60,&_LC628,0,&_LC300,0,testctx,0);
    OSSL_DECODER_from_data(uVar3,&local_70,&local_68);
    OSSL_DECODER_CTX_free(uVar3);
    uVar3 = 0x657;
    pcVar4 = "pkey = load_example_dsa_key()";
  }
  else {
    local_70 = kExampleECKeyDER;
    local_68 = 0x79;
    local_60 = (EVP_PKEY *)0x0;
    uVar3 = OSSL_DECODER_CTX_new_for_pkey(&local_60,&_LC628,0,&_LC262,0,testctx,0);
    OSSL_DECODER_from_data(uVar3,&local_70,&local_68);
    OSSL_DECODER_CTX_free(uVar3);
    uVar3 = 0x65f;
    pcVar4 = "pkey = load_example_ec_key()";
  }
  pkey = local_60;
  iVar1 = test_ptr("test/evp_extra_test.c",uVar3,pcVar4,local_60);
  if (iVar1 == 0) {
    ctx = (EVP_PKEY_CTX *)0x0;
    sig = (uchar *)0x0;
    uVar2 = 0;
  }
  else {
    sig = (uchar *)0x0;
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(testctx,pkey,0);
    uVar2 = test_ptr("test/evp_extra_test.c",0x668,&_LC162,ctx);
    if (uVar2 != 0) {
      iVar1 = EVP_PKEY_sign_init(ctx);
      uVar2 = test_int_gt("test/evp_extra_test.c",0x669,"EVP_PKEY_sign_init(ctx)",&_LC5,iVar1,0);
      if (uVar2 != 0) {
        iVar1 = EVP_PKEY_sign(ctx,(uchar *)0x0,local_80,(uchar *)&local_58,0x14);
        uVar2 = test_int_gt("test/evp_extra_test.c",0x66a,
                            "EVP_PKEY_sign(ctx, NULL, &sig_len, tbs, sizeof(tbs))",&_LC5,iVar1,0);
        if (uVar2 != 0) {
          sig = (uchar *)CRYPTO_malloc((int)local_80[0],"test/evp_extra_test.c",0x66d);
          iVar1 = test_ptr("test/evp_extra_test.c",0x66e,&_LC696,sig);
          if (iVar1 != 0) {
            iVar1 = EVP_PKEY_sign(ctx,sig,local_80 + 1,(uchar *)&local_58,0x14);
            iVar1 = test_int_le("test/evp_extra_test.c",0x670,
                                "EVP_PKEY_sign(ctx, sig, &shortsig_len, tbs, sizeof(tbs))",&_LC5,
                                iVar1,0);
            if (iVar1 != 0) {
              iVar1 = EVP_PKEY_sign(ctx,sig,local_80,(uchar *)&local_58,0x14);
              iVar1 = test_int_gt("test/evp_extra_test.c",0x672,
                                  "EVP_PKEY_sign(ctx, sig, &sig_len, tbs, sizeof(tbs))",&_LC5,iVar1,
                                  0);
              if (iVar1 != 0) {
                iVar1 = EVP_PKEY_verify_init(ctx);
                iVar1 = test_int_gt("test/evp_extra_test.c",0x675,"EVP_PKEY_verify_init(ctx)",&_LC5,
                                    iVar1,0);
                if (iVar1 != 0) {
                  iVar1 = EVP_PKEY_verify(ctx,sig,local_80[0],(uchar *)&local_58,0x14);
                  iVar1 = test_int_gt("test/evp_extra_test.c",0x676,
                                      "EVP_PKEY_verify(ctx, sig, sig_len, tbs, sizeof(tbs))",&_LC5,
                                      iVar1,0);
                  uVar2 = (uint)(iVar1 != 0);
                  goto LAB_00110150;
                }
              }
            }
          }
          uVar2 = 0;
        }
      }
    }
  }
LAB_00110150:
  EVP_PKEY_CTX_free(ctx);
  CRYPTO_free(sig);
  EVP_PKEY_free(pkey);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_custom_pmeth(int param_1)

{
  bool bVar1;
  EVP_PKEY *pkey;
  int iVar2;
  uint uVar3;
  EVP_MD *type;
  undefined8 uVar4;
  uchar *puVar5;
  EVP_MD_CTX *ctx;
  char *pcVar6;
  long in_FS_OFFSET;
  int local_9c;
  undefined1 **local_98;
  int *local_90;
  EVP_PKEY **local_88;
  EVP_PKEY_CTX *local_70;
  EVP_PKEY *local_68;
  undefined1 *local_60;
  int local_58 [2];
  EVP_PKEY *local_50;
  undefined4 local_45;
  undefined1 local_41;
  long local_40;
  
  uVar3 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_45 = 0x6c6c6548;
  local_70 = (EVP_PKEY_CTX *)0x0;
  local_68 = (EVP_PKEY *)0x0;
  local_41 = 0x6f;
  type = EVP_sha256();
  ctrl_called = 0;
  if (testctx != 0) goto LAB_001104a4;
  switch(param_1) {
  case 0:
  case 6:
    local_60 = kExampleRSAKeyDER;
    local_58[0] = 0x260;
    local_58[1] = 0;
    local_50 = (EVP_PKEY *)0x0;
    uVar4 = OSSL_DECODER_CTX_new_for_pkey(&local_50,&_LC628,0,&_LC9,0,0,0);
    OSSL_DECODER_from_data(uVar4,&local_60);
    OSSL_DECODER_CTX_free(uVar4);
    local_9c = 6;
    break;
  case 1:
  case 7:
    local_60 = kExampleDSAKeyDER;
    local_58[0] = 0x1be;
    local_58[1] = 0;
    local_50 = (EVP_PKEY *)0x0;
    uVar4 = OSSL_DECODER_CTX_new_for_pkey(&local_50,&_LC628,0,&_LC300,0,0,0);
    OSSL_DECODER_from_data(uVar4,&local_60);
    OSSL_DECODER_CTX_free(uVar4);
    local_9c = 0x74;
    break;
  case 2:
  case 8:
    local_60 = kExampleECKeyDER;
    local_58[0] = 0x79;
    local_58[1] = 0;
    local_50 = (EVP_PKEY *)0x0;
    uVar4 = OSSL_DECODER_CTX_new_for_pkey(&local_50,&_LC628,0,&_LC262,0,0,0);
    OSSL_DECODER_from_data(uVar4,&local_60);
    OSSL_DECODER_CTX_free(uVar4);
    local_9c = 0x198;
    break;
  case 3:
  case 9:
    local_60 = kExampleED25519KeyDER;
    local_58[0] = 0x30;
    local_58[1] = 0;
    local_50 = (EVP_PKEY *)0x0;
    uVar4 = OSSL_DECODER_CTX_new_for_pkey(&local_50,&_LC628,0,"ED25519",0,0,0);
    OSSL_DECODER_from_data(uVar4,&local_60);
    type = (EVP_MD *)0x0;
    OSSL_DECODER_CTX_free(uVar4);
    local_9c = 0x43f;
    break;
  case 4:
  case 10:
    local_60 = kExampleDHKeyDER;
    local_58[0] = 0x125;
    local_58[1] = 0;
    local_50 = (EVP_PKEY *)0x0;
    uVar4 = OSSL_DECODER_CTX_new_for_pkey(&local_50,&_LC628,0,&_LC299,0,0,0);
    OSSL_DECODER_from_data(uVar4,&local_60);
    OSSL_DECODER_CTX_free(uVar4);
    local_9c = 0x1c;
    goto LAB_00110572;
  case 5:
  case 0xb:
    local_60 = kExampleX25519KeyDER;
    local_58[0] = 0x30;
    local_58[1] = 0;
    local_50 = (EVP_PKEY *)0x0;
    uVar4 = OSSL_DECODER_CTX_new_for_pkey(&local_50,&_LC628,0,"X25519",0,0,0);
    OSSL_DECODER_from_data(uVar4,&local_60);
    OSSL_DECODER_CTX_free(uVar4);
    local_9c = 0x40a;
LAB_00110572:
    local_68 = local_50;
    bVar1 = true;
    iVar2 = test_ptr("test/evp_extra_test.c",0x15e8,&_LC13);
    if (iVar2 != 0) goto LAB_001105a3;
    CRYPTO_free((void *)0x0);
    EVP_MD_CTX_free(0);
    goto LAB_0011063f;
  default:
    puVar5 = (uchar *)0x0;
    uVar3 = 0;
    test_error("test/evp_extra_test.c",0x15e4,"Should not happen");
    ctx = (EVP_MD_CTX *)0x0;
    goto LAB_001109f7;
  }
  bVar1 = false;
  local_68 = local_50;
  iVar2 = test_ptr("test/evp_extra_test.c",0x15e8,&_LC13);
  if (iVar2 == 0) {
    CRYPTO_free((void *)0x0);
    EVP_MD_CTX_free(0);
LAB_00110722:
    uVar3 = 0;
  }
  else {
LAB_001105a3:
    pkey = local_68;
    local_88 = &local_50;
    local_90 = local_58;
    local_98 = &local_60;
    if (param_1 < 6) {
      iVar2 = test_true("test/evp_extra_test.c",0x15ec,"evp_pkey_is_provided(pkey)",
                        *(long *)&local_68[1].save_parameters != 0);
      pkey = local_68;
      if (iVar2 == 0) goto LAB_00110620;
LAB_001105d3:
      orig_pmeth = EVP_PKEY_meth_find(local_9c);
      iVar2 = test_ptr("test/evp_extra_test.c",0x1600,"orig_pmeth = EVP_PKEY_meth_find(id)",
                       orig_pmeth);
      pkey = local_68;
      if ((iVar2 == 0) ||
         (iVar2 = test_ptr("test/evp_extra_test.c",0x1601,&_LC13,local_68), pkey = local_68,
         iVar2 == 0)) goto LAB_00110620;
      EVP_PKEY_meth_get0_info((int *)local_98,local_90,orig_pmeth);
      iVar2 = test_int_eq("test/evp_extra_test.c",0x1605,"orig_id",&_LC713,
                          (ulong)local_60 & 0xffffffff);
      pkey = local_68;
      if (iVar2 == 0) goto LAB_00110620;
      custom_pmeth = EVP_PKEY_meth_new(local_9c,local_58[0]);
      iVar2 = test_ptr("test/evp_extra_test.c",0x1606,
                       "custom_pmeth = EVP_PKEY_meth_new(id, orig_flags)",custom_pmeth);
      pkey = local_68;
      if (iVar2 == 0) goto LAB_00110620;
      if (local_9c == 0x43f) {
        EVP_PKEY_meth_set_digestsign();
LAB_00110dee:
        EVP_PKEY_meth_set_sign(custom_pmeth,(sign_init *)0x0,custom_pmeth_sign);
      }
      else {
        if ((local_9c != 0x1c) && (local_9c != 0x40a)) goto LAB_00110dee;
        EVP_PKEY_meth_set_derive(custom_pmeth,(derive_init *)0x0,custom_pmeth_derive);
      }
      if ((local_9c != 0x43f) && (local_9c != 0x40a)) {
        EVP_PKEY_meth_set_init(custom_pmeth,custom_pmeth_init);
        EVP_PKEY_meth_set_cleanup(custom_pmeth,custom_pmeth_cleanup);
        EVP_PKEY_meth_set_copy(custom_pmeth,custom_pmeth_copy);
      }
      EVP_PKEY_meth_set_ctrl(custom_pmeth,custom_pmeth_ctrl,(ctrl_str *)0x0);
      iVar2 = EVP_PKEY_meth_add0(custom_pmeth);
      iVar2 = test_true("test/evp_extra_test.c",0x1616,"EVP_PKEY_meth_add0(custom_pmeth)",iVar2 != 0
                       );
      pkey = local_68;
      if (iVar2 == 0) goto LAB_00110620;
      if (bVar1) {
        local_70 = EVP_PKEY_CTX_new(local_68,(ENGINE *)0x0);
        iVar2 = test_ptr("test/evp_extra_test.c",0x161b,&_LC224,local_70);
        if (iVar2 == 0) {
LAB_00110f98:
          uVar3 = 0;
          puVar5 = (uchar *)0x0;
        }
        else {
          EVP_PKEY_derive_init(local_70);
          iVar2 = test_int_eq("test/evp_extra_test.c",0x161c,"EVP_PKEY_derive_init(pctx)",&_LC53);
          if (iVar2 == 0) goto LAB_00110f98;
          iVar2 = EVP_PKEY_CTX_ctrl(local_70,-1,-1,9999,0,(void *)0x0);
          iVar2 = test_int_ge("test/evp_extra_test.c",0x161d,
                              "EVP_PKEY_CTX_ctrl(pctx, -1, -1, EVP_PKEY_CTRL_MY_COMMAND, 0, NULL)",
                              &_LC53,iVar2,1);
          if ((iVar2 == 0) ||
             (iVar2 = test_int_eq("test/evp_extra_test.c",0x1620,"ctrl_called",&_LC53,ctrl_called,1)
             , iVar2 == 0)) goto LAB_00110f98;
          iVar2 = EVP_PKEY_derive_set_peer(local_70,local_68);
          iVar2 = test_int_ge("test/evp_extra_test.c",0x1621,"EVP_PKEY_derive_set_peer(pctx, pkey)",
                              &_LC53,iVar2,1);
          if (iVar2 == 0) goto LAB_00110f98;
          iVar2 = EVP_PKEY_derive(local_70,(uchar *)0x0,(size_t *)local_88);
          iVar2 = test_int_ge("test/evp_extra_test.c",0x1622,"EVP_PKEY_derive(pctx, NULL, &reslen)",
                              &_LC53,iVar2,1);
          if (iVar2 == 0) goto LAB_00110f98;
          puVar5 = (uchar *)CRYPTO_malloc((int)local_50,"test/evp_extra_test.c",0x1623);
          uVar3 = test_ptr("test/evp_extra_test.c",0x1623,"res = OPENSSL_malloc(reslen)",puVar5);
          if (uVar3 != 0) {
            iVar2 = EVP_PKEY_derive(local_70,puVar5,(size_t *)local_88);
            iVar2 = test_int_ge("test/evp_extra_test.c",0x1624,"EVP_PKEY_derive(pctx, res, &reslen)"
                                ,&_LC53,iVar2,1);
            uVar3 = (uint)(iVar2 != 0);
          }
        }
        CRYPTO_free(puVar5);
        EVP_MD_CTX_free(0);
        goto LAB_00110642;
      }
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      iVar2 = EVP_PKEY_get_size(local_68);
      local_50 = (EVP_PKEY *)(long)iVar2;
      puVar5 = (uchar *)CRYPTO_malloc(iVar2,"test/evp_extra_test.c",0x1629);
      iVar2 = test_ptr("test/evp_extra_test.c",0x162a,&_LC162,ctx);
      uVar3 = 0;
      if ((iVar2 != 0) && (iVar2 = test_ptr("test/evp_extra_test.c",0x162b,&_LC723), iVar2 != 0)) {
        iVar2 = EVP_DigestSignInit(ctx,&local_70,type,(ENGINE *)0x0,local_68);
        iVar2 = test_true("test/evp_extra_test.c",0x162c,
                          "EVP_DigestSignInit(ctx, &pctx, md, NULL, pkey)",iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = EVP_PKEY_CTX_ctrl(local_70,-1,-1,9999,0,(void *)0x0);
          iVar2 = test_int_ge("test/evp_extra_test.c",0x162d,
                              "EVP_PKEY_CTX_ctrl(pctx, -1, -1, EVP_PKEY_CTRL_MY_COMMAND, 0, NULL)",
                              &_LC53,iVar2,1);
          if ((iVar2 != 0) &&
             (iVar2 = test_int_eq("test/evp_extra_test.c",0x1630,"ctrl_called",&_LC53,ctrl_called,1)
             , iVar2 != 0)) {
            if (local_9c == 0x43f) {
              iVar2 = EVP_DigestSign(ctx,puVar5,local_88,&local_45,5);
              uVar4 = 0x1634;
              pcVar6 = "EVP_DigestSign(ctx, res, &reslen, msg, sizeof(msg))";
            }
            else {
              iVar2 = EVP_DigestUpdate(ctx,&local_45,5);
              iVar2 = test_true("test/evp_extra_test.c",0x1637,
                                "EVP_DigestUpdate(ctx, msg, sizeof(msg))",iVar2 != 0);
              if (iVar2 == 0) goto LAB_001109f7;
              iVar2 = EVP_DigestSignFinal(ctx,puVar5,(size_t *)local_88);
              uVar4 = 0x1638;
              pcVar6 = "EVP_DigestSignFinal(ctx, res, &reslen)";
            }
            iVar2 = test_true("test/evp_extra_test.c",uVar4,pcVar6,iVar2 != 0);
            uVar3 = (uint)(iVar2 != 0);
          }
        }
      }
LAB_001109f7:
      CRYPTO_free(puVar5);
      EVP_MD_CTX_free(ctx);
    }
    else {
      local_68 = EVP_PKEY_new();
      iVar2 = test_ptr("test/evp_extra_test.c",0x15f3,&_LC13,local_68);
      if (iVar2 != 0) {
        iVar2 = evp_pkey_copy_downgraded(&local_68,pkey);
        iVar2 = test_true("test/evp_extra_test.c",0x15f7,"evp_pkey_copy_downgraded(&pkey, tmp)",
                          iVar2 != 0);
        if (iVar2 == 0) {
          EVP_PKEY_free(pkey);
          pkey = local_68;
        }
        else {
          EVP_PKEY_free(pkey);
          uVar3 = local_68->type;
          if (uVar3 != 0) {
            uVar3 = (uint)(*(long *)&local_68[1].save_parameters == 0);
          }
          iVar2 = test_true("test/evp_extra_test.c",0x15fc,"evp_pkey_is_legacy(pkey)",uVar3);
          pkey = local_68;
          if (iVar2 != 0) goto LAB_001105d3;
        }
      }
LAB_00110620:
      local_68 = pkey;
      CRYPTO_free((void *)0x0);
      EVP_MD_CTX_free(0);
      if (!bVar1) goto LAB_00110722;
LAB_0011063f:
      uVar3 = 0;
LAB_00110642:
      EVP_PKEY_CTX_free(local_70);
    }
  }
  EVP_PKEY_free(local_68);
  EVP_PKEY_meth_remove(custom_pmeth);
  EVP_PKEY_meth_free(custom_pmeth);
  custom_pmeth = (EVP_PKEY_METHOD *)0x0;
LAB_001104a4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_EVP_DigestSignInit(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  BIO_METHOD *pBVar5;
  ulong uVar6;
  EVP_PKEY *pkey;
  uchar *sigret;
  undefined8 uVar7;
  uchar *sigret_00;
  int iVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  BIO *local_f0;
  BIO *local_e8;
  EVP_MD_CTX *local_e0;
  EVP_MD_CTX *local_d8;
  EVP_MD *local_d0;
  EVP_MD *local_b8;
  size_t local_a8;
  size_t local_a0;
  size_t local_98;
  EVP_MD_CTX *local_90;
  EVP_MD_CTX *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  EVP_PKEY *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 1;
  local_90 = (EVP_MD_CTX *)0x0;
  local_88 = (EVP_MD_CTX *)0x0;
  if (nullprov != 0) {
    uVar3 = test_skip("test/evp_extra_test.c",0x72f,
                      "Test does not support a non-default library context");
    goto LAB_00111137;
  }
  bVar1 = 0xe < param_1;
  if (bVar1) {
    param_1 = param_1 + -0xf;
  }
  uVar2 = param_1 - 6;
  sigret_00 = (uchar *)0x0;
  if (2 < uVar2) {
    local_e0 = (EVP_MD_CTX *)EVP_MD_CTX_new();
    local_90 = local_e0;
    iVar8 = test_ptr("test/evp_extra_test.c",0x73f,"a_md_ctx = md_ctx = EVP_MD_CTX_new()",local_e0);
    if (iVar8 == 0) {
      local_d0 = (EVP_MD *)0x0;
      sigret = (uchar *)0x0;
      pkey = (EVP_PKEY *)0x0;
      local_e8 = (BIO *)0x0;
      local_f0 = (BIO *)0x0;
      local_d8 = (EVP_MD_CTX *)0x0;
      uVar3 = 0;
    }
    else {
      local_d8 = (EVP_MD_CTX *)EVP_MD_CTX_new();
      local_88 = local_d8;
      iVar8 = test_ptr("test/evp_extra_test.c",0x740,
                       "a_md_ctx_verify = md_ctx_verify = EVP_MD_CTX_new()",local_d8);
      if (iVar8 != 0) {
        local_e8 = (BIO *)0x0;
        local_f0 = (BIO *)0x0;
        goto LAB_001112c3;
      }
      local_d0 = (EVP_MD *)0x0;
      sigret = (uchar *)0x0;
      pkey = (EVP_PKEY *)0x0;
      local_e8 = (BIO *)0x0;
      local_f0 = (BIO *)0x0;
      uVar3 = 0;
    }
    goto LAB_001110dd;
  }
  pBVar5 = BIO_s_mem();
  local_e8 = BIO_new(pBVar5);
  pBVar5 = BIO_f_md();
  local_f0 = BIO_new(pBVar5);
  uVar3 = test_ptr("test/evp_extra_test.c",0x739,"membio",local_e8);
  if ((uVar3 == 0) || (uVar3 = test_ptr("test/evp_extra_test.c",0x739,"mdbio",local_f0), uVar3 == 0)
     ) {
LAB_001110bc:
    local_d0 = (EVP_MD *)0x0;
    sigret = (uchar *)0x0;
    pkey = (EVP_PKEY *)0x0;
    local_d8 = (EVP_MD_CTX *)0x0;
    local_e0 = (EVP_MD_CTX *)0x0;
  }
  else {
    BIO_push(local_f0,local_e8);
    uVar6 = BIO_ctrl(local_f0,0x78,0,&local_90);
    uVar3 = test_int_gt("test/evp_extra_test.c",0x73c,"BIO_get_md_ctx(mdbio, &md_ctx)",&_LC5,
                        uVar6 & 0xffffffff,0);
    if (uVar3 == 0) goto LAB_001110bc;
    local_d8 = (EVP_MD_CTX *)0x0;
    local_e0 = (EVP_MD_CTX *)0x0;
LAB_001112c3:
    iVar8 = param_1 % 3;
    if (iVar8 == 0) {
      local_78 = 0x260;
      local_80 = kExampleRSAKeyDER;
      local_70 = (EVP_PKEY *)0x0;
      uVar7 = OSSL_DECODER_CTX_new_for_pkey(&local_70,&_LC628,0,&_LC9,0,testctx,0);
      OSSL_DECODER_from_data(uVar7,&local_80,&local_78);
      OSSL_DECODER_CTX_free(uVar7);
      uVar7 = 0x745;
      pcVar9 = "pkey = load_example_rsa_key()";
LAB_00111554:
      pkey = local_70;
      iVar4 = test_ptr("test/evp_extra_test.c",uVar7,pcVar9);
    }
    else {
      if (iVar8 == 1) {
        local_78 = 0x1be;
        local_80 = kExampleDSAKeyDER;
        local_70 = (EVP_PKEY *)0x0;
        uVar7 = OSSL_DECODER_CTX_new_for_pkey(&local_70,&_LC628,0,&_LC300,0,testctx,0);
        OSSL_DECODER_from_data(uVar7,&local_80,&local_78);
        OSSL_DECODER_CTX_free(uVar7);
        uVar7 = 0x749;
        pcVar9 = "pkey = load_example_dsa_key()";
        goto LAB_00111554;
      }
      local_68 = __LC33;
      uStack_60 = _UNK_0011d2b8;
      local_58 = __LC39;
      uStack_50 = _UNK_0011d2c8;
      pkey = (EVP_PKEY *)EVP_PKEY_new_raw_private_key_ex(testctx,&_LC733,0,&local_68,0x20);
      iVar4 = test_ptr("test/evp_extra_test.c",0x3c5,&_LC13,pkey);
      if (iVar4 == 0) {
        pkey = (EVP_PKEY *)0x0;
      }
      iVar4 = test_ptr("test/evp_extra_test.c",0x750,"pkey = load_example_hmac_key()");
    }
    if (iVar4 == 0) {
      local_d0 = (EVP_MD *)0x0;
      sigret = (uchar *)0x0;
      uVar3 = 0;
      goto LAB_001110dd;
    }
    if (param_1 - 3U < 3) {
      local_d0 = (EVP_MD *)EVP_MD_fetch(0,"SHA256",0);
      local_b8 = local_d0;
    }
    else {
      local_b8 = EVP_sha256();
      local_d0 = (EVP_MD *)0x0;
    }
    EVP_DigestSignInit(local_90,(EVP_PKEY_CTX **)0x0,local_b8,(ENGINE *)0x0,pkey);
    iVar4 = test_true("test/evp_extra_test.c",0x759,
                      "EVP_DigestSignInit(md_ctx, NULL, md, NULL, pkey)");
    if (iVar4 == 0) {
LAB_001119a0:
      sigret = (uchar *)0x0;
      uVar3 = 0;
    }
    else {
      if (bVar1) {
        iVar4 = EVP_DigestSignInit(local_90,(EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,
                                   (EVP_PKEY *)0x0);
        sigret = (uchar *)0x0;
        iVar4 = test_true("test/evp_extra_test.c",0x75c,
                          "EVP_DigestSignInit(md_ctx, NULL, NULL, NULL, NULL)",iVar4 != 0);
        if (iVar4 == 0) {
          uVar3 = 0;
          goto LAB_001110dd;
        }
      }
      if (uVar2 < 3) {
        iVar4 = BIO_write_ex(local_f0,&kMsg,4,&local_70);
joined_r0x001116d0:
        if (iVar4 == 0) goto LAB_001119a0;
        iVar4 = EVP_DigestSignFinal(local_90,(uchar *)0x0,&local_a8);
        sigret = (uchar *)0x0;
        uVar3 = test_true("test/evp_extra_test.c",0x77e,
                          "EVP_DigestSignFinal(md_ctx, NULL, &sig_len)",iVar4 != 0);
        if (uVar3 != 0) {
          sigret = (uchar *)CRYPTO_malloc((int)local_a8,"test/evp_extra_test.c",0x77f);
          iVar4 = test_ptr("test/evp_extra_test.c",0x77f,"sig = OPENSSL_malloc(sig_len)",sigret);
          if (iVar4 != 0) {
            iVar4 = EVP_DigestSignFinal(local_90,sigret,&local_98);
            uVar3 = test_false("test/evp_extra_test.c",0x784,
                               "EVP_DigestSignFinal(md_ctx, sig, &shortsig_len)",iVar4 != 0);
            if (uVar3 == 0) goto LAB_001110dd;
            EVP_DigestSignFinal(local_90,sigret,&local_a8);
            iVar4 = test_true("test/evp_extra_test.c",0x785,
                              "EVP_DigestSignFinal(md_ctx, sig, &sig_len)");
            if (iVar4 != 0) {
              if (iVar8 == 2) goto LAB_00111a7a;
              if (2 < uVar2) goto LAB_001119f8;
              uVar6 = BIO_ctrl(local_f0,1,0,(void *)0x0);
              iVar8 = test_int_gt("test/evp_extra_test.c",0x78f,"BIO_reset(mdbio)",&_LC5,
                                  uVar6 & 0xffffffff,0);
              if (iVar8 != 0) {
                uVar6 = BIO_ctrl(local_f0,0x78,0,&local_88);
                uVar3 = test_int_gt("test/evp_extra_test.c",0x790,
                                    "BIO_get_md_ctx(mdbio, &md_ctx_verify)",&_LC5,uVar6 & 0xffffffff
                                    ,0);
                if (uVar3 != 0) {
                  iVar8 = EVP_DigestVerifyInit
                                    (local_88,(EVP_PKEY_CTX **)0x0,local_b8,(ENGINE *)0x0,pkey);
                  uVar3 = test_true("test/evp_extra_test.c",0x794,
                                    "EVP_DigestVerifyInit(md_ctx_verify, NULL, md, NULL, pkey)",
                                    iVar8 != 0);
                  if (uVar3 != 0) {
                    iVar8 = BIO_write_ex(local_f0,&kMsg,4,&local_70);
                    iVar8 = test_true("test/evp_extra_test.c",0x799,
                                      "BIO_write_ex(mdbio, kMsg, sizeof(kMsg), &written)",iVar8 != 0
                                     );
                    if (iVar8 != 0) goto LAB_001118e1;
                    goto LAB_001119b0;
                  }
                }
                goto LAB_001110dd;
              }
            }
          }
LAB_001119b0:
          uVar3 = 0;
        }
      }
      else {
        if (param_1 < 6) {
          iVar4 = EVP_DigestSignUpdate(local_90,&kMsg,4);
          iVar4 = test_true("test/evp_extra_test.c",0x763,
                            "EVP_DigestSignUpdate(md_ctx, kMsg, sizeof(kMsg))",iVar4 != 0);
          goto joined_r0x001116d0;
        }
        iVar4 = EVP_DigestSign(local_90,0,&local_a8,&kMsg,4);
        iVar4 = test_true("test/evp_extra_test.c",0x769,
                          "EVP_DigestSign(md_ctx, NULL, &sig_len, kMsg, sizeof(kMsg))",iVar4 != 0);
        if (iVar4 == 0) goto LAB_001119a0;
        sigret = (uchar *)CRYPTO_malloc((int)local_a8,"test/evp_extra_test.c",0x76b);
        iVar4 = test_ptr("test/evp_extra_test.c",0x76b,"sig = OPENSSL_malloc(sig_len)",sigret);
        if (iVar4 == 0) goto LAB_001119b0;
        if (param_1 < 0xc) {
          iVar8 = EVP_DigestSign(local_90,sigret,&local_98,&kMsg,4);
          iVar8 = test_false("test/evp_extra_test.c",0x76f,
                             "EVP_DigestSign(md_ctx, sig, &shortsig_len, kMsg, sizeof(kMsg))",
                             iVar8 != 0);
          uVar3 = (uint)(iVar8 != 0);
          goto LAB_001110dd;
        }
        EVP_DigestSign(local_90,sigret,&local_a8,&kMsg,4);
        iVar4 = test_true("test/evp_extra_test.c",0x779,
                          "EVP_DigestSign(md_ctx, sig, &sig_len, kMsg, sizeof(kMsg))");
        if (iVar4 == 0) goto LAB_001119b0;
        if (iVar8 == 2) {
LAB_00111a7a:
          iVar8 = EVP_DigestSignFinal(local_90,(uchar *)0x0,&local_a0);
          uVar3 = test_true("test/evp_extra_test.c",0x7ab,
                            "EVP_DigestSignFinal(md_ctx, NULL, &sig2_len)",iVar8 != 0);
          if (uVar3 != 0) {
            sigret_00 = (uchar *)CRYPTO_malloc((int)local_a0,"test/evp_extra_test.c",0x7ac);
            uVar3 = test_ptr("test/evp_extra_test.c",0x7ac,"sig2 = OPENSSL_malloc(sig2_len)",
                             sigret_00);
            if (uVar3 != 0) {
              iVar8 = EVP_DigestSignFinal(local_90,sigret_00,&local_a0);
              uVar3 = test_true("test/evp_extra_test.c",0x7ad,
                                "EVP_DigestSignFinal(md_ctx, sig2, &sig2_len)",iVar8 != 0);
              if (uVar3 != 0) {
                iVar8 = test_mem_eq("test/evp_extra_test.c",0x7b0,&_LC696,&_LC748,sigret,local_a8,
                                    sigret_00,local_a0);
                uVar3 = (uint)(iVar8 != 0);
              }
            }
          }
        }
        else {
LAB_001119f8:
          iVar8 = EVP_DigestVerifyInit(local_88,(EVP_PKEY_CTX **)0x0,local_b8,(ENGINE *)0x0,pkey);
          uVar3 = test_true("test/evp_extra_test.c",0x794,
                            "EVP_DigestVerifyInit(md_ctx_verify, NULL, md, NULL, pkey)",iVar8 != 0);
          if (uVar3 != 0) {
            iVar8 = EVP_DigestVerifyUpdate(local_88,&kMsg,4);
            uVar3 = test_true("test/evp_extra_test.c",0x79c,
                              "EVP_DigestVerifyUpdate(md_ctx_verify, kMsg, sizeof(kMsg))",iVar8 != 0
                             );
            if (uVar3 != 0) {
LAB_001118e1:
              iVar8 = EVP_DigestVerifyFinal(local_88,sigret,local_a8);
              uVar3 = test_int_gt("test/evp_extra_test.c",0x7a0,
                                  "EVP_DigestVerifyFinal(md_ctx_verify, sig, sig_len)",&_LC5,iVar8,0
                                 );
              if (uVar3 != 0) {
                iVar8 = EVP_DigestVerifyFinal(local_88,sigret,local_a8);
                iVar8 = test_int_gt("test/evp_extra_test.c",0x7a4,
                                    "EVP_DigestVerifyFinal(md_ctx_verify, sig, sig_len)",&_LC5,iVar8
                                    ,0);
                uVar3 = (uint)(iVar8 != 0);
              }
            }
          }
        }
      }
    }
  }
LAB_001110dd:
  BIO_free(local_e8);
  BIO_free(local_f0);
  EVP_MD_CTX_free(local_e0);
  EVP_MD_CTX_free(local_d8);
  EVP_PKEY_free(pkey);
  CRYPTO_free(sigret);
  CRYPTO_free(sigret_00);
  EVP_MD_free(local_d0);
LAB_00111137:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return options_26;
}



undefined8 setup_tests(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
LAB_00111b7c:
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        if (lVar2 == 0) {
          add_test("test_EVP_set_default_properties",test_EVP_set_default_properties);
          add_all_tests("test_EVP_DigestSignInit",test_EVP_DigestSignInit,0x1e,1);
          add_test("test_EVP_DigestVerifyInit",test_EVP_DigestVerifyInit);
          add_test("test_ecdsa_digestsign_keccak",test_ecdsa_digestsign_keccak);
          add_test("test_siphash_digestsign",test_siphash_digestsign);
          add_test("test_EVP_Digest",test_EVP_Digest);
          add_test("test_EVP_md_null",test_EVP_md_null);
          add_all_tests("test_EVP_PKEY_sign",test_EVP_PKEY_sign,3,1);
          add_all_tests("test_EVP_PKEY_sign_with_app_method",test_EVP_PKEY_sign_with_app_method,2,1)
          ;
          add_all_tests("test_EVP_Enveloped",test_EVP_Enveloped,2,1);
          add_all_tests("test_d2i_AutoPrivateKey",test_d2i_AutoPrivateKey,3,1);
          add_test("test_privatekey_to_pkcs8",test_privatekey_to_pkcs8);
          add_test("test_EVP_PKCS82PKEY_wrong_tag",test_EVP_PKCS82PKEY_wrong_tag);
          add_all_tests("test_EVP_PKCS82PKEY_v2",test_EVP_PKCS82PKEY_v2,2,1);
          add_test("test_EVP_PKCS82PKEY",test_EVP_PKCS82PKEY);
          add_all_tests("test_EC_keygen_with_enc",test_EC_keygen_with_enc,2,1);
          add_test("test_EVP_SM2",test_EVP_SM2);
          add_test("test_EVP_SM2_verify",test_EVP_SM2_verify);
          add_all_tests("test_set_get_raw_keys",test_set_get_raw_keys,0xb,1);
          custom_pmeth = EVP_PKEY_meth_new(0xdefaced,0);
          iVar1 = test_ptr("test/evp_extra_test.c",0x1a7e,"custom_pmeth",custom_pmeth);
          if (iVar1 == 0) {
            return 0;
          }
          EVP_PKEY_meth_set_check(custom_pmeth,0x100000);
          EVP_PKEY_meth_set_public_check(custom_pmeth,pkey_custom_pub_check);
          EVP_PKEY_meth_set_param_check(custom_pmeth,pkey_custom_param_check);
          iVar1 = EVP_PKEY_meth_add0(custom_pmeth);
          iVar1 = test_int_eq("test/evp_extra_test.c",0x1a83,"EVP_PKEY_meth_add0(custom_pmeth)",
                              &_LC53,iVar1,1);
          if (iVar1 == 0) {
            return 0;
          }
          add_all_tests("test_EVP_PKEY_check",test_EVP_PKEY_check,8,1);
          add_test("test_CMAC_keygen",test_CMAC_keygen);
          add_test("test_HKDF",test_HKDF);
          add_test("test_emptyikm_HKDF",test_emptyikm_HKDF);
          add_test("test_empty_salt_info_HKDF",test_empty_salt_info_HKDF);
          add_test("test_X509_PUBKEY_inplace",test_X509_PUBKEY_inplace);
          add_test("test_X509_PUBKEY_dup",test_X509_PUBKEY_dup);
          add_all_tests("test_invalide_ec_char2_pub_range_decode",
                        test_invalide_ec_char2_pub_range_decode,3,1);
          add_test("test_DSA_get_set_params",test_DSA_get_set_params);
          add_test("test_DSA_priv_pub",test_DSA_priv_pub);
          add_test("test_RSA_get_set_params",test_RSA_get_set_params);
          add_test("test_RSA_OAEP_set_get_params",test_RSA_OAEP_set_get_params);
          add_test("test_RSA_OAEP_set_null_label",test_RSA_OAEP_set_null_label);
          add_test("test_RSA_legacy",test_RSA_legacy);
          add_test("test_decrypt_null_chunks",test_decrypt_null_chunks);
          add_test("test_DH_priv_pub",test_DH_priv_pub);
          add_test("test_EVP_PKEY_set1_DH",test_EVP_PKEY_set1_DH);
          add_test("test_EC_priv_pub",test_EC_priv_pub);
          add_test("test_evp_get_ec_pub",test_evp_get_ec_pub);
          add_test("test_EC_priv_only_legacy",test_EC_priv_only_legacy);
          add_test("test_evp_get_ec_pub_legacy",test_evp_get_ec_pub_legacy);
          add_all_tests("test_keygen_with_empty_template",test_keygen_with_empty_template,2,1);
          add_all_tests("test_pkey_ctx_fail_without_provider",test_pkey_ctx_fail_without_provider,2,
                        1);
          add_test("test_rand_agglomeration",test_rand_agglomeration);
          add_all_tests("test_evp_iv_aes",test_evp_iv_aes,0xc,1);
          add_all_tests("test_evp_iv_des",test_evp_iv_des,6,1);
          add_all_tests("test_evp_bf_default_keylen",test_evp_bf_default_keylen,4,1);
          add_test("test_EVP_rsa_pss_with_keygen_bits",test_EVP_rsa_pss_with_keygen_bits);
          add_test("test_EVP_rsa_pss_set_saltlen",test_EVP_rsa_pss_set_saltlen);
          add_test("test_EVP_rsa_invalid_key",test_EVP_rsa_invalid_key);
          add_all_tests("test_ecpub",test_ecpub,0xd,1);
          add_test("test_names_do_all",test_names_do_all);
          add_all_tests("test_evp_init_seq",test_evp_init_seq,8,1);
          add_all_tests("test_evp_reset",test_evp_reset,2,1);
          add_all_tests("test_evp_reinit_seq",test_evp_reinit_seq,4,1);
          add_all_tests("test_gcm_reinit",test_gcm_reinit,2,1);
          add_all_tests("test_evp_updated_iv",test_evp_updated_iv,0xc,1);
          add_all_tests("test_ivlen_change",test_ivlen_change,3,1);
          add_all_tests("test_keylen_change",test_keylen_change,4,1);
          add_all_tests("test_custom_pmeth",test_custom_pmeth,0xc,1);
          add_test("test_evp_md_cipher_meth",test_evp_md_cipher_meth);
          add_test("test_custom_md_meth",test_custom_md_meth);
          add_test("test_custom_ciph_meth",test_custom_ciph_meth);
          if (testctx == 0) {
            add_all_tests("test_signatures_with_engine",test_signatures_with_engine,3,1);
            add_test("test_cipher_with_engine",test_cipher_with_engine);
          }
          add_all_tests("test_ecx_short_keys",test_ecx_short_keys,4,1);
          add_all_tests("test_ecx_not_private_key",test_ecx_not_private_key,0xb,1);
          add_test("test_sign_continuation",test_sign_continuation);
          add_test("test_aes_gcm_ivlen_change_cve_2023_5363",test_aes_gcm_ivlen_change_cve_2023_5363
                  );
          add_test("test_aes_rc4_keylen_change_cve_2023_5363",
                   test_aes_rc4_keylen_change_cve_2023_5363);
          add_test("test_invalid_ctx_for_digest",test_invalid_ctx_for_digest);
          add_test("test_evp_cipher_pipeline",test_evp_cipher_pipeline);
        }
        else {
          add_test("test_EVP_set_config_properties",test_EVP_set_config_properties);
        }
        return 1;
      }
      if (iVar1 == 2) {
        lVar2 = opt_arg();
        iVar1 = test_get_libctx(&testctx,&nullprov,lVar2,0,0);
        if (iVar1 == 0) {
          return 0;
        }
        goto LAB_00111b7c;
      }
      if (2 < iVar1) break;
      if (iVar1 != 1) {
        return 0;
      }
      testctx = OSSL_LIB_CTX_new();
      iVar1 = test_ptr("test/evp_extra_test.c",0x1a3a,"testctx");
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = OSSL_PROVIDER_add_builtin(testctx,"legacy",&ossl_legacy_provider_init);
      if (iVar1 == 0) {
        return 0;
      }
      nullprov = OSSL_PROVIDER_load(0,&_LC220);
      deflprov = OSSL_PROVIDER_load(testctx,"default");
      lgcyprov = OSSL_PROVIDER_load(testctx,"legacy");
      iVar1 = opt_next();
    }
    if (5 < iVar1 - 500U) {
      return 0;
    }
  } while( true );
}



void cleanup_tests(void)

{
  OSSL_PROVIDER_unload(nullprov);
  OSSL_PROVIDER_unload(deflprov);
  OSSL_PROVIDER_unload(lgcyprov);
  OSSL_LIB_CTX_free(testctx);
  return;
}



undefined8 test_evp_iv_des_cold(void)

{
  long in_FS_OFFSET;
  long in_stack_00000058;
  
  if (in_stack_00000058 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



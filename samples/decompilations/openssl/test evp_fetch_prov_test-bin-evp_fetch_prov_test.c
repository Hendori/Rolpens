
bool test_legacy_provider_unloaded(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/evp_fetch_prov_test.c",0x82,&_LC0,uVar3);
  if (iVar1 != 0) {
    iVar1 = OSSL_LIB_CTX_load_config(uVar3,config_file);
    iVar1 = test_true("test/evp_fetch_prov_test.c",0x85,"OSSL_LIB_CTX_load_config(ctx, config_file)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      uVar2 = OSSL_PROVIDER_available(uVar3,"legacy");
      iVar1 = test_int_eq("test/evp_fetch_prov_test.c",0x88,
                          "OSSL_PROVIDER_available(ctx, \"legacy\")",&_LC4,uVar2,0);
      bVar4 = iVar1 != 0;
      goto LAB_00100036;
    }
  }
  bVar4 = false;
LAB_00100036:
  OSSL_LIB_CTX_free(uVar3);
  return bVar4;
}



ulong test_cipher(EVP_CIPHER *param_1)

{
  int iVar1;
  ulong uVar2;
  EVP_CIPHER_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar3;
  int local_ec;
  int local_e8;
  uchar local_e4 [12];
  undefined1 local_d8 [16];
  uchar local_c8 [64];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_memcpy(local_e4 + 8,"rld",4);
  builtin_memcpy(local_e4,"Hello wo",8);
  uVar2 = test_ptr("test/evp_fetch_prov_test.c",0x123,"cipher",param_1);
  if ((int)uVar2 == 0) goto LAB_0010011e;
  local_d8 = (undefined1  [16])0x0;
  ctx = EVP_CIPHER_CTX_new();
  iVar1 = test_ptr("test/evp_fetch_prov_test.c",0x10f,"ctx = EVP_CIPHER_CTX_new()",ctx);
  if (iVar1 == 0) {
LAB_00100181:
    bVar3 = false;
  }
  else {
    iVar1 = EVP_CipherInit_ex(ctx,param_1,(ENGINE *)0x0,local_d8,(uchar *)0x0,1);
    iVar1 = test_true("test/evp_fetch_prov_test.c",0x110,
                      "EVP_CipherInit_ex(ctx, cipher, NULL, key, NULL, 1)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100181;
    iVar1 = EVP_CipherUpdate(ctx,local_c8,&local_ec,local_e4,0xc);
    iVar1 = test_true("test/evp_fetch_prov_test.c",0x111,
                      "EVP_CipherUpdate(ctx, ct, &ctlen, msg, len)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100181;
    iVar1 = EVP_CipherFinal_ex(ctx,local_c8,&local_ec);
    iVar1 = test_true("test/evp_fetch_prov_test.c",0x112,"EVP_CipherFinal_ex(ctx, ct, &ctlen)",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100181;
    iVar1 = EVP_CipherInit_ex(ctx,param_1,(ENGINE *)0x0,local_d8,(uchar *)0x0,0);
    iVar1 = test_true("test/evp_fetch_prov_test.c",0x113,
                      "EVP_CipherInit_ex(ctx, cipher, NULL, key, NULL, 0)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100181;
    iVar1 = EVP_CipherUpdate(ctx,local_88,&local_e8,local_c8,local_ec);
    iVar1 = test_true("test/evp_fetch_prov_test.c",0x114,
                      "EVP_CipherUpdate(ctx, pt, &ptlen, ct, ctlen)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100181;
    iVar1 = EVP_CipherFinal_ex(ctx,local_88,&local_e8);
    iVar1 = test_true("test/evp_fetch_prov_test.c",0x115,"EVP_CipherFinal_ex(ctx, pt, &ptlen)",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100181;
    iVar1 = test_mem_eq("test/evp_fetch_prov_test.c",0x116,&_LC15,&_LC14,local_88,(long)local_e8,
                        local_e4,0xc);
    bVar3 = iVar1 != 0;
  }
  EVP_CIPHER_CTX_free(ctx);
  iVar1 = test_true("test/evp_fetch_prov_test.c",0x124,
                    "encrypt_decrypt(cipher, testmsg, sizeof(testmsg))",bVar3);
  uVar2 = (ulong)(iVar1 != 0);
LAB_0010011e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 load_providers_constprop_0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar2 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/evp_fetch_prov_test.c",0x56,&_LC0,uVar2);
  if (iVar1 != 0) {
    iVar1 = OSSL_LIB_CTX_load_config(uVar2,config_file);
    iVar1 = test_true("test/evp_fetch_prov_test.c",0x59,"OSSL_LIB_CTX_load_config(ctx, config_file)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      uVar3 = test_get_argument_count();
      uVar6 = 0;
      if (uVar3 < 3) {
        lVar4 = test_get_argument_count();
        if (lVar4 != 0) {
          do {
            uVar5 = test_get_argument(uVar6);
            uVar5 = OSSL_PROVIDER_load(uVar2,uVar5);
            *(undefined8 *)(param_2 + uVar6 * 8) = uVar5;
            iVar1 = test_ptr("test/evp_fetch_prov_test.c",0x61,"prov[i]",uVar5);
            if (iVar1 == 0) goto LAB_0010039e;
            uVar6 = uVar6 + 1;
            uVar3 = test_get_argument_count();
          } while (uVar6 < uVar3);
        }
        *param_1 = uVar2;
        return 1;
      }
    }
  }
LAB_0010039e:
  OSSL_LIB_CTX_free(uVar2);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_md(EVP_MD *param_1)

{
  int iVar1;
  undefined4 uVar2;
  EVP_MD_CTX *ctx;
  EVP_MD *pEVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uchar local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0x646c72;
  local_78 = __LC33;
  uStack_70 = _UNK_001019f8;
  local_68 = __LC34;
  uStack_60 = _UNK_00101a08;
  local_84 = 0x6f77206f6c6c6548;
  iVar1 = test_ptr("test/evp_fetch_prov_test.c",0xaa,&_LC18,param_1);
  if (iVar1 != 0) {
    iVar1 = EVP_MD_is_a(param_1,"SHA256");
    iVar1 = test_true("test/evp_fetch_prov_test.c",0xab,"EVP_MD_is_a(md, \"SHA256\")",iVar1 != 0);
    if (iVar1 != 0) {
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      iVar1 = test_ptr("test/evp_fetch_prov_test.c",0x40,"ctx = EVP_MD_CTX_new()",ctx);
      if (iVar1 == 0) {
LAB_00100571:
        bVar4 = false;
      }
      else {
        iVar1 = EVP_DigestInit_ex(ctx,param_1,(ENGINE *)0x0);
        iVar1 = test_true("test/evp_fetch_prov_test.c",0x41,"EVP_DigestInit_ex(ctx, md, NULL)",
                          iVar1 != 0);
        if (iVar1 == 0) goto LAB_00100571;
        iVar1 = EVP_DigestUpdate(ctx,&local_84,0xc);
        iVar1 = test_true("test/evp_fetch_prov_test.c",0x42,"EVP_DigestUpdate(ctx, msg, len)",
                          iVar1 != 0);
        if (iVar1 == 0) goto LAB_00100571;
        iVar1 = EVP_DigestFinal_ex(ctx,local_58,(uint *)0x0);
        iVar1 = test_true("test/evp_fetch_prov_test.c",0x43,"EVP_DigestFinal_ex(ctx, out, NULL)",
                          iVar1 != 0);
        if (iVar1 == 0) goto LAB_00100571;
        iVar1 = test_mem_eq("test/evp_fetch_prov_test.c",0x44,&_LC26,"exptd",local_58,0x20);
        if (iVar1 == 0) goto LAB_00100571;
        pEVar3 = (EVP_MD *)EVP_MD_CTX_get0_md(ctx);
        iVar1 = test_true("test/evp_fetch_prov_test.c",0x46,"md == EVP_MD_CTX_get0_md(ctx)",
                          param_1 == pEVar3);
        bVar4 = iVar1 != 0;
      }
      EVP_MD_CTX_free(ctx);
      iVar1 = test_true("test/evp_fetch_prov_test.c",0xac,
                        "calculate_digest(md, testmsg, sizeof(testmsg), exptd)",bVar4);
      if (iVar1 != 0) {
        uVar2 = EVP_MD_get_size(param_1);
        iVar1 = test_int_eq("test/evp_fetch_prov_test.c",0xad,"EVP_MD_get_size(md)",
                            "SHA256_DIGEST_LENGTH",uVar2,0x20);
        if (iVar1 != 0) {
          uVar2 = EVP_MD_get_block_size(param_1);
          iVar1 = test_int_eq("test/evp_fetch_prov_test.c",0xae,"EVP_MD_get_block_size(md)",
                              "SHA256_CBLOCK",uVar2,0x40);
          bVar4 = iVar1 != 0;
          goto LAB_001004d0;
        }
      }
    }
  }
  bVar4 = false;
LAB_001004d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_explicit_EVP_MD_fetch(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_40 = 0;
  if ((use_default_ctx == 0) && (iVar1 = load_providers_constprop_0(&local_40,local_38), iVar1 == 0)
     ) {
    uVar3 = 0;
    uVar2 = 0;
    lVar4 = local_40;
  }
  else {
    lVar4 = local_40;
    uVar3 = EVP_MD_fetch(local_40,param_1,fetch_property);
    if (expected_fetch_result == 0) {
      iVar1 = test_ptr_null("test/evp_fetch_prov_test.c",0xd3,&_LC18,uVar3);
      uVar2 = (uint)(iVar1 != 0);
    }
    else {
      uVar2 = test_md(uVar3);
      if (uVar2 != 0) {
        iVar1 = EVP_MD_up_ref(uVar3);
        uVar2 = test_true("test/evp_fetch_prov_test.c",0xce,"EVP_MD_up_ref(md)",iVar1 != 0);
        if (uVar2 != 0) {
          uVar2 = 1;
          EVP_MD_free(uVar3);
        }
      }
    }
  }
  EVP_MD_free(uVar3);
  if (local_38._0_8_ != 0) {
    OSSL_PROVIDER_unload();
  }
  if (local_38._8_8_ != 0) {
    OSSL_PROVIDER_unload();
  }
  if (lVar4 != 0) {
    OPENSSL_thread_stop_ex(lVar4);
    OSSL_LIB_CTX_free(lVar4);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



void test_explicit_EVP_MD_fetch_by_name(void)

{
  test_explicit_EVP_MD_fetch("SHA256");
  return;
}



bool test_implicit_EVP_CIPHER_fetch(void)

{
  int iVar1;
  EVP_CIPHER *pEVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_50 = 0;
  if (use_default_ctx == 0) {
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    iVar1 = load_providers_constprop_0(&local_50,local_48);
    lVar4 = local_48._8_8_;
    lVar5 = local_48._0_8_;
    if (iVar1 == 0) {
      bVar6 = false;
      lVar3 = local_50;
      goto LAB_001008ec;
    }
  }
  lVar3 = local_50;
  pEVar2 = EVP_aes_128_cbc();
  iVar1 = test_cipher(pEVar2);
  bVar6 = iVar1 != 0;
LAB_001008ec:
  if (lVar5 != 0) {
    OSSL_PROVIDER_unload(lVar5);
  }
  if (lVar4 != 0) {
    OSSL_PROVIDER_unload(lVar4);
  }
  if (lVar3 != 0) {
    OPENSSL_thread_stop_ex(lVar3);
    OSSL_LIB_CTX_free(lVar3);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



bool test_implicit_EVP_MD_fetch(void)

{
  int iVar1;
  EVP_MD *pEVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_50 = 0;
  if (use_default_ctx == 0) {
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    iVar1 = load_providers_constprop_0(&local_50,local_48);
    lVar4 = local_48._8_8_;
    lVar5 = local_48._0_8_;
    if (iVar1 == 0) {
      bVar6 = false;
      lVar3 = local_50;
      goto LAB_001009dc;
    }
  }
  lVar3 = local_50;
  pEVar2 = EVP_sha256();
  iVar1 = test_md(pEVar2);
  bVar6 = iVar1 != 0;
LAB_001009dc:
  if (lVar5 != 0) {
    OSSL_PROVIDER_unload(lVar5);
  }
  if (lVar4 != 0) {
    OSSL_PROVIDER_unload(lVar4);
  }
  if (lVar3 != 0) {
    OPENSSL_thread_stop_ex(lVar3);
    OSSL_LIB_CTX_free(lVar3);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



uint test_explicit_EVP_CIPHER_fetch(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_40 = 0;
  if ((use_default_ctx == 0) && (iVar1 = load_providers_constprop_0(&local_40,local_38), iVar1 == 0)
     ) {
    uVar3 = 0;
    uVar2 = 0;
    lVar4 = local_40;
  }
  else {
    lVar4 = local_40;
    uVar3 = EVP_CIPHER_fetch(local_40,param_1,fetch_property);
    if (expected_fetch_result == 0) {
      iVar1 = test_ptr_null("test/evp_fetch_prov_test.c",0x148,"cipher",uVar3);
      uVar2 = (uint)(iVar1 != 0);
    }
    else {
      uVar2 = test_cipher(uVar3);
      if (uVar2 != 0) {
        iVar1 = EVP_CIPHER_up_ref(uVar3);
        uVar2 = test_true("test/evp_fetch_prov_test.c",0x143,"EVP_CIPHER_up_ref(cipher)",iVar1 != 0)
        ;
        if (uVar2 != 0) {
          uVar2 = 1;
          EVP_CIPHER_free(uVar3);
        }
      }
    }
  }
  EVP_CIPHER_free(uVar3);
  if (local_38._0_8_ != 0) {
    OSSL_PROVIDER_unload();
  }
  if (local_38._8_8_ != 0) {
    OSSL_PROVIDER_unload();
  }
  if (lVar4 != 0) {
    OPENSSL_thread_stop_ex(lVar4);
    OSSL_LIB_CTX_free(lVar4);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined4 test_explicit_EVP_CIPHER_fetch_by_X509_ALGOR(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  X509_ALGOR *alg;
  ASN1_OBJECT *aobj;
  long in_FS_OFFSET;
  ASN1_OBJECT *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined2 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  alg = X509_ALGOR_new();
  iVar1 = test_ptr("test/evp_fetch_prov_test.c",0x95,"algor = X509_ALGOR_new()");
  if (iVar1 == 0) {
LAB_00100d48:
    X509_ALGOR_free(alg);
  }
  else {
    aobj = OBJ_nid2obj(0x1a3);
    iVar1 = X509_ALGOR_set0(alg,aobj,-1,(void *)0x0);
    iVar1 = test_true("test/evp_fetch_prov_test.c",0x96,
                      "X509_ALGOR_set0(algor, OBJ_nid2obj(nid), V_ASN1_UNDEF, NULL)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100d48;
    local_28 = 0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    local_38 = (undefined1  [16])0x0;
    if (alg != (X509_ALGOR *)0x0) {
      X509_ALGOR_get0(&local_60,(int *)0x0,(void **)0x0,alg);
      if (param_1 == 0) {
        iVar1 = OBJ_obj2txt(local_58,0x32,local_60,0);
        iVar1 = test_int_gt("test/evp_fetch_prov_test.c",0x168,"OBJ_obj2txt(id, sizeof(id), obj, 0)"
                            ,&_LC4,iVar1,0);
        if (iVar1 != 0) goto LAB_00100cc9;
LAB_00100d3e:
        uVar2 = 0;
      }
      else {
        if (param_1 == 1) {
          iVar1 = OBJ_obj2txt(local_58,0x32,local_60,1);
          iVar1 = test_int_gt("test/evp_fetch_prov_test.c",0x16c,
                              "OBJ_obj2txt(id, sizeof(id), obj, 1)",&_LC4,iVar1,0);
          if (iVar1 == 0) goto LAB_00100d3e;
        }
LAB_00100cc9:
        uVar2 = test_explicit_EVP_CIPHER_fetch(local_58);
      }
      X509_ALGOR_free(alg);
      goto LAB_00100cdb;
    }
  }
  uVar2 = 0;
LAB_00100cdb:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_explicit_EVP_CIPHER_fetch_by_name(void)

{
  test_explicit_EVP_CIPHER_fetch("AES-128-CBC");
  return;
}



undefined4 test_explicit_EVP_MD_fetch_by_X509_ALGOR(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  X509_ALGOR *alg;
  ASN1_OBJECT *aobj;
  long in_FS_OFFSET;
  ASN1_OBJECT *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined2 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  alg = X509_ALGOR_new();
  iVar1 = test_ptr("test/evp_fetch_prov_test.c",0x95,"algor = X509_ALGOR_new()");
  if (iVar1 == 0) {
LAB_00100ef8:
    X509_ALGOR_free(alg);
  }
  else {
    aobj = OBJ_nid2obj(0x2a0);
    iVar1 = X509_ALGOR_set0(alg,aobj,-1,(void *)0x0);
    iVar1 = test_true("test/evp_fetch_prov_test.c",0x96,
                      "X509_ALGOR_set0(algor, OBJ_nid2obj(nid), V_ASN1_UNDEF, NULL)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100ef8;
    local_28 = 0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    local_38 = (undefined1  [16])0x0;
    if (alg != (X509_ALGOR *)0x0) {
      X509_ALGOR_get0(&local_60,(int *)0x0,(void **)0x0,alg);
      if (param_1 == 0) {
        iVar1 = OBJ_obj2txt(local_58,0x32,local_60,0);
        iVar1 = test_int_gt("test/evp_fetch_prov_test.c",0xf4,"OBJ_obj2txt(id, sizeof(id), obj, 0)",
                            &_LC4,iVar1,0);
        if (iVar1 != 0) goto LAB_00100e79;
LAB_00100eee:
        uVar2 = 0;
      }
      else {
        if (param_1 == 1) {
          iVar1 = OBJ_obj2txt(local_58,0x32,local_60,1);
          iVar1 = test_int_gt("test/evp_fetch_prov_test.c",0xf8,
                              "OBJ_obj2txt(id, sizeof(id), obj, 1)",&_LC4,iVar1,0);
          if (iVar1 == 0) goto LAB_00100eee;
        }
LAB_00100e79:
        uVar2 = test_explicit_EVP_MD_fetch(local_58);
      }
      X509_ALGOR_free(alg);
      goto LAB_00100e8b;
    }
  }
  uVar2 = 0;
LAB_00100e8b:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return test_options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
LAB_00100f30:
  iVar1 = opt_next();
  do {
    if (iVar1 == 0) {
      add_test("test_legacy_provider_unloaded",0x100000);
      iVar1 = strcmp(alg,"digest");
      if (iVar1 == 0) {
        add_test("test_implicit_EVP_MD_fetch",test_implicit_EVP_MD_fetch);
        add_test("test_explicit_EVP_MD_fetch_by_name",test_explicit_EVP_MD_fetch_by_name);
        add_all_tests("test_explicit_EVP_MD_fetch_by_X509_ALGOR",
                      test_explicit_EVP_MD_fetch_by_X509_ALGOR,2,0);
      }
      else {
        add_test("test_implicit_EVP_CIPHER_fetch",test_implicit_EVP_CIPHER_fetch);
        add_test("test_explicit_EVP_CIPHER_fetch_by_name",test_explicit_EVP_CIPHER_fetch_by_name);
        add_all_tests("test_explicit_EVP_CIPHER_fetch_by_X509_ALGOR",
                      test_explicit_EVP_CIPHER_fetch_by_X509_ALGOR,2,0);
      }
      return 1;
    }
    if (5 < iVar1) {
      if (5 < iVar1 - 500U) {
        return 0;
      }
      goto LAB_00100f30;
    }
    if (iVar1 < 1) {
      return 0;
    }
    switch(iVar1) {
    default:
      goto switchD_00100f5c_caseD_1;
    case 2:
      fetch_property = opt_arg();
      goto LAB_00100f30;
    case 3:
      expected_fetch_result = 0;
      goto LAB_00100f30;
    case 4:
      use_default_ctx = 1;
      iVar1 = opt_next();
      break;
    case 5:
      config_file = opt_arg();
      goto LAB_00100f30;
    }
  } while( true );
switchD_00100f5c_caseD_1:
  alg = (undefined *)opt_arg();
  goto LAB_00100f30;
}




undefined8 *
construct_hkdf_params
          (long param_1,undefined8 param_2,undefined8 param_3,char *param_4,char *param_5)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)CRYPTO_malloc(200,"test/evp_kdf_test.c",0xc4);
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
    if (param_1 != 0) {
      OSSL_PARAM_construct_utf8_string(&local_78,"digest",param_1,0);
      *puVar1 = local_78;
      puVar1[1] = uStack_70;
      puVar1[2] = local_68;
      puVar1[3] = uStack_60;
      puVar1[4] = local_58;
      puVar3 = puVar1 + 5;
    }
    sVar2 = strlen(param_4);
    OSSL_PARAM_construct_octet_string(&local_78,&_LC2,param_4,sVar2);
    *puVar3 = local_78;
    puVar3[1] = uStack_70;
    puVar3[2] = local_68;
    puVar3[3] = uStack_60;
    puVar3[4] = local_58;
    OSSL_PARAM_construct_octet_string(&local_78,&_LC3,param_2,param_3);
    puVar3[5] = local_78;
    puVar3[6] = uStack_70;
    puVar3[7] = local_68;
    puVar3[8] = uStack_60;
    puVar3[9] = local_58;
    if (param_5 == (char *)0x0) {
      OSSL_PARAM_construct_utf8_string(&local_78,&_LC6,"EXTRACT_ONLY",0);
      puVar3[10] = local_78;
      puVar3[0xb] = uStack_70;
      puVar3[0xc] = local_68;
      puVar3[0xd] = uStack_60;
      puVar3[0xe] = local_58;
    }
    else {
      sVar2 = strlen(param_5);
      OSSL_PARAM_construct_octet_string(&local_78,&_LC4,param_5,sVar2);
      puVar3[10] = local_78;
      puVar3[0xb] = uStack_70;
      puVar3[0xc] = local_68;
      puVar3[0xd] = uStack_60;
      puVar3[0xe] = local_58;
    }
    OSSL_PARAM_construct_end(&local_78);
    puVar3[0xf] = local_78;
    puVar3[0x10] = uStack_70;
    puVar3[0x11] = local_68;
    puVar3[0x12] = uStack_60;
    puVar3[0x13] = local_58;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar1;
}



undefined8 * construct_tls1_prf_params(undefined8 param_1,char *param_2,char *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)CRYPTO_malloc(0xa0,"test/evp_kdf_test.c",0x28);
  if (puVar1 != (undefined8 *)0x0) {
    OSSL_PARAM_construct_utf8_string(&local_68,"digest",param_1,0);
    *puVar1 = local_68;
    puVar1[1] = uStack_60;
    puVar1[2] = local_58;
    puVar1[3] = uStack_50;
    puVar1[4] = local_48;
    sVar2 = strlen(param_2);
    OSSL_PARAM_construct_octet_string(&local_68,"secret",param_2,sVar2);
    puVar1[5] = local_68;
    puVar1[6] = uStack_60;
    puVar1[7] = local_58;
    puVar1[8] = uStack_50;
    puVar1[9] = local_48;
    sVar2 = strlen(param_3);
    OSSL_PARAM_construct_octet_string(&local_68,&_LC8,param_3,sVar2);
    puVar1[10] = local_68;
    puVar1[0xb] = uStack_60;
    puVar1[0xc] = local_58;
    puVar1[0xd] = uStack_50;
    puVar1[0xe] = local_48;
    OSSL_PARAM_construct_end(&local_68);
    puVar1[0xf] = local_68;
    puVar1[0x10] = uStack_60;
    puVar1[0x11] = local_58;
    puVar1[0x12] = uStack_50;
    puVar1[0x13] = local_48;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_kdfs_same(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_1 == param_2) {
    return 1;
  }
  uVar2 = EVP_KDF_get0_provider(param_2);
  uVar3 = EVP_KDF_get0_provider(param_1);
  uVar4 = test_ptr_eq("test/evp_kdf_test.c",0x6db,"EVP_KDF_get0_provider(kdf1)",
                      "EVP_KDF_get0_provider(kdf2)",uVar3,uVar2);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  uVar2 = EVP_KDF_get0_name(param_2);
  uVar3 = EVP_KDF_get0_name(param_1);
  iVar1 = test_str_eq("test/evp_kdf_test.c",0x6dc,"EVP_KDF_get0_name(kdf1)",
                      "EVP_KDF_get0_name(kdf2)",uVar3,uVar2);
  return (ulong)(iVar1 != 0);
}



uint test_kdf_get_kdf(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ASN1_OBJECT *o;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = 0;
  uVar4 = 0;
  o = OBJ_nid2obj(0x45);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x6e5,"obj = OBJ_nid2obj(NID_id_pbkdf2)",o);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,"PBKDF2",0);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x6e6,
                     "kdf1 = EVP_KDF_fetch(NULL, OSSL_KDF_NAME_PBKDF2, NULL)",uVar4);
    if (uVar1 != 0) {
      iVar3 = OBJ_obj2nid(o);
      pcVar5 = OBJ_nid2sn(iVar3);
      uVar6 = EVP_KDF_fetch(0,pcVar5,0);
      uVar1 = test_ptr("test/evp_kdf_test.c",0x6e7,
                       "kdf2 = EVP_KDF_fetch(NULL, OBJ_nid2sn(OBJ_obj2nid(obj)), NULL)",uVar6);
      if (uVar1 != 0) {
        iVar3 = test_kdfs_same(uVar4,uVar6);
        uVar1 = (uint)(iVar3 != 0);
      }
    }
  }
  uVar7 = 0;
  EVP_KDF_free(uVar4);
  EVP_KDF_free(uVar6);
  uVar4 = EVP_KDF_fetch(0,"TLS1-PRF",0);
  uVar2 = test_ptr("test/evp_kdf_test.c",0x6f0,"kdf1 = EVP_KDF_fetch(NULL, SN_tls1_prf, NULL)",uVar4
                  );
  if (uVar2 != 0) {
    uVar7 = EVP_KDF_fetch(0,"tls1-prf",0);
    iVar3 = test_ptr("test/evp_kdf_test.c",0x6f1,"kdf2 = EVP_KDF_fetch(NULL, LN_tls1_prf, NULL)",
                     uVar7);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      iVar3 = test_kdfs_same(uVar4,uVar7);
      uVar2 = uVar1;
      if (iVar3 == 0) {
        uVar2 = 0;
      }
    }
  }
  EVP_KDF_free(uVar7);
  pcVar5 = OBJ_nid2sn(0x3fd);
  uVar6 = EVP_KDF_fetch(0,pcVar5,0);
  iVar3 = test_ptr("test/evp_kdf_test.c",0x6f8,
                   "kdf2 = EVP_KDF_fetch(NULL, OBJ_nid2sn(NID_tls1_prf), NULL)",uVar6);
  if ((iVar3 == 0) || (iVar3 = test_kdfs_same(uVar4,uVar6), iVar3 == 0)) {
    uVar2 = 0;
  }
  EVP_KDF_free(uVar4);
  EVP_KDF_free(uVar6);
  return uVar2;
}



undefined8 *
construct_kbkdf_params_constprop_0
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)CRYPTO_malloc(0x140,"test/evp_kdf_test.c",0x468);
  if (puVar1 != (undefined8 *)0x0) {
    OSSL_PARAM_construct_utf8_string(&local_78,"digest",param_1,0);
    *puVar1 = local_78;
    puVar1[1] = uStack_70;
    puVar1[2] = local_68;
    puVar1[3] = uStack_60;
    puVar1[4] = local_58;
    OSSL_PARAM_construct_utf8_string(&local_78,&_LC22,param_2,0);
    puVar1[5] = local_78;
    puVar1[6] = uStack_70;
    puVar1[7] = local_68;
    puVar1[8] = uStack_60;
    puVar1[9] = local_58;
    OSSL_PARAM_construct_utf8_string(&local_78,&_LC6,"COUNTER",0);
    puVar1[10] = local_78;
    puVar1[0xb] = uStack_70;
    puVar1[0xc] = local_68;
    puVar1[0xd] = uStack_60;
    puVar1[0xe] = local_58;
    OSSL_PARAM_construct_octet_string(&local_78,&_LC3,param_3,param_4);
    puVar1[0xf] = local_78;
    puVar1[0x10] = uStack_70;
    puVar1[0x11] = local_68;
    puVar1[0x12] = uStack_60;
    puVar1[0x13] = local_58;
    OSSL_PARAM_construct_octet_string(&local_78,&_LC2,&_LC24,3);
    puVar1[0x14] = local_78;
    puVar1[0x15] = uStack_70;
    puVar1[0x16] = local_68;
    puVar1[0x17] = uStack_60;
    puVar1[0x18] = local_58;
    OSSL_PARAM_construct_octet_string(&local_78,&_LC4,&_LC25,4);
    puVar1[0x19] = local_78;
    puVar1[0x1a] = uStack_70;
    puVar1[0x1b] = local_68;
    puVar1[0x1c] = uStack_60;
    puVar1[0x1d] = local_58;
    OSSL_PARAM_construct_int(&local_78,&_LC26,param_5);
    puVar1[0x1e] = local_78;
    puVar1[0x1f] = uStack_70;
    puVar1[0x20] = local_68;
    puVar1[0x21] = uStack_60;
    puVar1[0x22] = local_58;
    OSSL_PARAM_construct_end(&local_78);
    puVar1[0x23] = local_78;
    puVar1[0x24] = uStack_70;
    puVar1[0x25] = local_68;
    puVar1[0x26] = uStack_60;
    puVar1[0x27] = local_58;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 *
construct_pbkdf2_params_constprop_0
          (undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)CRYPTO_malloc(0xf0,"test/evp_kdf_test.c",599);
  if (puVar1 != (undefined8 *)0x0) {
    OSSL_PARAM_construct_octet_string(&local_78,&_LC28,"passwordPASSWORDpassword",0x18);
    *puVar1 = local_78;
    puVar1[1] = uStack_70;
    puVar1[2] = local_68;
    puVar1[3] = uStack_60;
    puVar1[4] = local_58;
    sVar2 = strlen(param_2);
    OSSL_PARAM_construct_octet_string(&local_78,&_LC2,param_2,sVar2);
    puVar1[5] = local_78;
    puVar1[6] = uStack_70;
    puVar1[7] = local_68;
    puVar1[8] = uStack_60;
    puVar1[9] = local_58;
    OSSL_PARAM_construct_uint(&local_78,&_LC29,param_3);
    puVar1[10] = local_78;
    puVar1[0xb] = uStack_70;
    puVar1[0xc] = local_68;
    puVar1[0xd] = uStack_60;
    puVar1[0xe] = local_58;
    OSSL_PARAM_construct_utf8_string(&local_78,"digest",param_1,0);
    puVar1[0xf] = local_78;
    puVar1[0x10] = uStack_70;
    puVar1[0x11] = local_68;
    puVar1[0x12] = uStack_60;
    puVar1[0x13] = local_58;
    OSSL_PARAM_construct_int(&local_78,"pkcs5",param_4);
    puVar1[0x14] = local_78;
    puVar1[0x15] = uStack_70;
    puVar1[0x16] = local_68;
    puVar1[0x17] = uStack_60;
    puVar1[0x18] = local_58;
    OSSL_PARAM_construct_end(&local_78);
    puVar1[0x19] = local_78;
    puVar1[0x1a] = uStack_70;
    puVar1[0x1b] = local_68;
    puVar1[0x1c] = uStack_60;
    puVar1[0x1d] = local_58;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * construct_pbkdf1_params_constprop_0(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)CRYPTO_malloc(200,"test/evp_kdf_test.c",0x1df);
  if (puVar1 != (undefined8 *)0x0) {
    OSSL_PARAM_construct_octet_string(&local_58,&_LC28,"passwordPASSWORDpassword",0x18);
    *puVar1 = local_58;
    puVar1[1] = uStack_50;
    puVar1[2] = local_48;
    puVar1[3] = uStack_40;
    puVar1[4] = local_38;
    OSSL_PARAM_construct_octet_string(&local_58,&_LC2,"saltSALTsaltSALTsaltSALTsaltSALTsalt",0x24);
    puVar1[5] = local_58;
    puVar1[6] = uStack_50;
    puVar1[7] = local_48;
    puVar1[8] = uStack_40;
    puVar1[9] = local_38;
    OSSL_PARAM_construct_uint(&local_58,&_LC29,param_1);
    puVar1[10] = local_58;
    puVar1[0xb] = uStack_50;
    puVar1[0xc] = local_48;
    puVar1[0xd] = uStack_40;
    puVar1[0xe] = local_38;
    OSSL_PARAM_construct_utf8_string(&local_58,"digest","sha256",0);
    puVar1[0xf] = local_58;
    puVar1[0x10] = uStack_50;
    puVar1[0x11] = local_48;
    puVar1[0x12] = uStack_40;
    puVar1[0x13] = local_38;
    OSSL_PARAM_construct_end(&local_58);
    puVar1[0x14] = local_58;
    puVar1[0x15] = uStack_50;
    puVar1[0x16] = local_48;
    puVar1[0x17] = uStack_40;
    puVar1[0x18] = local_38;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_kdf_pbkdf1(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  void *ptr;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0x1000;
  local_68 = __LC46;
  uStack_60 = (undefined1)_UNK_00109178;
  uStack_5f = (undefined7)__LC47;
  uStack_58 = (undefined1)((ulong)__LC47 >> 0x38);
  uStack_57 = _UNK_00109188;
  uVar4 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/evp_kdf_test.c",0x201,"libctx = OSSL_LIB_CTX_new()",uVar4);
  if (iVar1 == 0) {
    uVar2 = 0;
    uVar6 = 0;
    lVar5 = 0;
    ptr = (void *)0x0;
    uVar8 = 0;
  }
  else {
    lVar5 = OSSL_PROVIDER_load(uVar4,"legacy");
    if (lVar5 == 0) {
      OSSL_LIB_CTX_free(uVar4);
      uVar2 = test_skip("test/evp_kdf_test.c",0x208,"PBKDF1 only available in legacy provider");
      goto LAB_00100bec;
    }
    uVar6 = OSSL_PROVIDER_load(uVar4,"default");
    iVar1 = test_ptr("test/evp_kdf_test.c",0x20b,"defprov = OSSL_PROVIDER_load(libctx, \"default\")"
                     ,uVar6);
    if (iVar1 == 0) {
      ptr = (void *)0x0;
      uVar8 = 0;
      uVar2 = 0;
    }
    else {
      ptr = (void *)construct_pbkdf1_params_constprop_0(&local_8c);
      uVar2 = test_ptr("test/evp_kdf_test.c",0x212,"params",ptr);
      uVar8 = 0;
      if (uVar2 != 0) {
        uVar7 = EVP_KDF_fetch(uVar4,"PBKDF1",0);
        uVar8 = EVP_KDF_CTX_new(uVar7);
        EVP_KDF_free(uVar7);
        iVar1 = test_ptr("test/evp_kdf_test.c",0x213,
                         "kctx = get_kdfbyname_libctx(libctx, OSSL_KDF_NAME_PBKDF1)",uVar8);
        if (iVar1 == 0) {
LAB_00100cec:
          uVar2 = 0;
        }
        else {
          iVar1 = EVP_KDF_CTX_set_params(uVar8,ptr);
          uVar2 = test_true("test/evp_kdf_test.c",0x214,"EVP_KDF_CTX_set_params(kctx, params)",
                            iVar1 != 0);
          if (uVar2 != 0) {
            uVar3 = EVP_KDF_derive(uVar8,local_88,0x19,0);
            iVar1 = test_int_gt("test/evp_kdf_test.c",0x215,
                                "EVP_KDF_derive(kctx, out, sizeof(out), NULL)",&_LC42,uVar3,0);
            if (iVar1 == 0) goto LAB_00100cec;
            iVar1 = test_mem_eq("test/evp_kdf_test.c",0x216,&_LC45,"expected",local_88,0x19,
                                &local_68,0x19);
            uVar2 = (uint)(iVar1 != 0);
          }
        }
      }
    }
  }
  EVP_KDF_CTX_free(uVar8);
  CRYPTO_free(ptr);
  OSSL_PROVIDER_unload(uVar6);
  OSSL_PROVIDER_unload(lVar5);
  OSSL_LIB_CTX_free(uVar4);
LAB_00100bec:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_kdf_kbkdf_6803_128(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_58 [16];
  long local_40;
  
  puVar6 = outputs_0;
  puVar5 = constants_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  do {
    OSSL_PARAM_construct_utf8_string(&local_1a8,"cipher","CAMELLIA-128-CBC",0);
    local_178 = local_1a8;
    uStack_170 = uStack_1a0;
    local_168 = local_198;
    uStack_160 = uStack_190;
    local_158 = local_188;
    OSSL_PARAM_construct_utf8_string(&local_1a8,&_LC22,&_LC50,0);
    local_150 = local_1a8;
    uStack_148 = uStack_1a0;
    local_140 = local_198;
    uStack_138 = uStack_190;
    local_130 = local_188;
    OSSL_PARAM_construct_utf8_string(&local_1a8,&_LC6,"FEEDBACK",0);
    local_128 = local_1a8;
    uStack_120 = uStack_1a0;
    local_118 = local_198;
    uStack_110 = uStack_190;
    local_108 = local_188;
    OSSL_PARAM_construct_octet_string(&local_1a8,&_LC3,input_key_3,0x10);
    local_e0 = local_188;
    local_100 = local_1a8;
    uStack_f8 = uStack_1a0;
    local_f0 = local_198;
    uStack_e8 = uStack_190;
    OSSL_PARAM_construct_octet_string(&local_1a8,&_LC2,puVar5,5);
    local_d8 = local_1a8;
    uStack_d0 = uStack_1a0;
    local_c8 = local_198;
    uStack_c0 = uStack_190;
    local_b8 = local_188;
    OSSL_PARAM_construct_octet_string(&local_1a8,&_LC8,iv_1,0x10);
    local_b0 = local_1a8;
    uStack_a8 = uStack_1a0;
    local_a0 = local_198;
    uStack_98 = uStack_190;
    local_90 = local_188;
    OSSL_PARAM_construct_end(&local_1a8);
    local_88 = local_1a8;
    uStack_80 = uStack_1a0;
    local_78 = local_198;
    uStack_70 = uStack_190;
    local_68 = local_188;
    uVar3 = EVP_KDF_fetch(0,"KBKDF",0);
    uVar4 = EVP_KDF_CTX_new(uVar3);
    EVP_KDF_free(uVar3);
    iVar1 = test_ptr("test/evp_kdf_test.c",0x415,&_LC53,uVar4);
    if (iVar1 == 0) {
LAB_00101080:
      EVP_KDF_CTX_free(uVar4);
      uVar3 = 0;
      goto LAB_00101087;
    }
    uVar2 = EVP_KDF_derive(uVar4,local_58,0x10,&local_178);
    iVar1 = test_int_gt("test/evp_kdf_test.c",0x416,
                        "EVP_KDF_derive(kctx, result, sizeof(result), params)",&_LC42,uVar2,0);
    if ((iVar1 == 0) ||
       (iVar1 = test_mem_eq("test/evp_kdf_test.c",0x418,"result","outputs[i]",local_58,0x10,puVar6,
                            0x10), iVar1 == 0)) goto LAB_00101080;
    EVP_KDF_CTX_free(uVar4);
    puVar5 = puVar5 + 5;
    puVar6 = puVar6 + 0x10;
  } while (puVar5 != &DAT_001075ff);
  uVar3 = 1;
LAB_00101087:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 test_kdf_kbkdf_6803_256(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
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
  
  puVar6 = outputs_4;
  puVar5 = constants_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  do {
    OSSL_PARAM_construct_utf8_string(&local_1b8,"cipher","CAMELLIA-256-CBC",0);
    local_188 = local_1b8;
    uStack_180 = uStack_1b0;
    local_178 = local_1a8;
    uStack_170 = uStack_1a0;
    local_168 = local_198;
    OSSL_PARAM_construct_utf8_string(&local_1b8,&_LC22,&_LC50,0);
    local_160 = local_1b8;
    uStack_158 = uStack_1b0;
    local_150 = local_1a8;
    uStack_148 = uStack_1a0;
    local_140 = local_198;
    OSSL_PARAM_construct_utf8_string(&local_1b8,&_LC6,"FEEDBACK",0);
    local_138 = local_1b8;
    uStack_130 = uStack_1b0;
    local_128 = local_1a8;
    uStack_120 = uStack_1a0;
    local_118 = local_198;
    OSSL_PARAM_construct_octet_string(&local_1b8,&_LC3,input_key_7,0x20);
    local_f0 = local_198;
    local_110 = local_1b8;
    uStack_108 = uStack_1b0;
    local_100 = local_1a8;
    uStack_f8 = uStack_1a0;
    OSSL_PARAM_construct_octet_string(&local_1b8,&_LC2,puVar5,5);
    local_e8 = local_1b8;
    uStack_e0 = uStack_1b0;
    local_d8 = local_1a8;
    uStack_d0 = uStack_1a0;
    local_c8 = local_198;
    OSSL_PARAM_construct_octet_string(&local_1b8,&_LC8,iv_5,0x10);
    local_c0 = local_1b8;
    uStack_b8 = uStack_1b0;
    local_b0 = local_1a8;
    uStack_a8 = uStack_1a0;
    local_a0 = local_198;
    OSSL_PARAM_construct_end(&local_1b8);
    local_98 = local_1b8;
    uStack_90 = uStack_1b0;
    local_88 = local_1a8;
    uStack_80 = uStack_1a0;
    local_78 = local_198;
    uVar3 = EVP_KDF_fetch(0,"KBKDF",0);
    uVar4 = EVP_KDF_CTX_new(uVar3);
    EVP_KDF_free(uVar3);
    iVar1 = test_ptr("test/evp_kdf_test.c",0x457,&_LC53,uVar4);
    if (iVar1 == 0) {
LAB_001013a8:
      EVP_KDF_CTX_free(uVar4);
      uVar3 = 0;
      goto LAB_001013af;
    }
    uVar2 = EVP_KDF_derive(uVar4,local_68,0x20,&local_188);
    iVar1 = test_int_gt("test/evp_kdf_test.c",0x458,
                        "EVP_KDF_derive(kctx, result, sizeof(result), params)",&_LC42,uVar2,0);
    if ((iVar1 == 0) ||
       (iVar1 = test_mem_eq("test/evp_kdf_test.c",0x45a,"result","outputs[i]",local_68,0x20,puVar6,
                            0x20), iVar1 == 0)) goto LAB_001013a8;
    EVP_KDF_CTX_free(uVar4);
    puVar5 = puVar5 + 5;
    puVar6 = puVar6 + 0x20;
  } while (puVar5 != &DAT_0010768f);
  uVar3 = 1;
LAB_001013af:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



uint test_kdf_hkdf_derive_set_params_fail(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_8c;
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
  undefined1 local_2a [10];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  uVar4 = EVP_KDF_fetch(0,&_LC58,0);
  uVar5 = EVP_KDF_CTX_new(uVar4);
  EVP_KDF_free(uVar4);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x146,"kctx = get_kdfbyname(OSSL_KDF_NAME_HKDF)",uVar5);
  if (uVar1 != 0) {
    OSSL_PARAM_construct_int(&local_c8,"digest",&local_8c);
    local_88 = local_c8;
    uStack_80 = uStack_c0;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    local_68 = local_a8;
    OSSL_PARAM_construct_end(&local_c8);
    local_60 = local_c8;
    uStack_58 = uStack_c0;
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    local_40 = local_a8;
    uVar2 = EVP_KDF_derive(uVar5,local_2a,10,&local_88);
    iVar3 = test_int_eq("test/evp_kdf_test.c",0x14e,"EVP_KDF_derive(kctx, out, sizeof(out), params)"
                        ,&_LC42,uVar2,0);
    uVar1 = (uint)(iVar3 != 0);
  }
  EVP_KDF_CTX_free(uVar5);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint do_kdf_hkdf_set_invalid_param(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_32 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = EVP_KDF_fetch(0,&_LC58,0);
  uVar5 = EVP_KDF_CTX_new(uVar4);
  EVP_KDF_free(uVar4);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x175,"kctx = get_kdfbyname(OSSL_KDF_NAME_HKDF)",uVar5);
  if (uVar1 != 0) {
    if (param_2 == 4) {
      OSSL_PARAM_construct_utf8_string(&local_b8,param_1,&_LC61,0);
    }
    else {
      OSSL_PARAM_construct_octet_string(&local_b8,param_1,local_32,2);
    }
    OSSL_PARAM_construct_end(&local_b8);
    local_60 = local_b8;
    uStack_58 = uStack_b0;
    local_50 = local_a8;
    uStack_48 = uStack_a0;
    local_40 = local_98;
    uVar2 = EVP_KDF_CTX_set_params(uVar5,local_88);
    iVar3 = test_int_eq("test/evp_kdf_test.c",0x17d,"EVP_KDF_CTX_set_params(kctx, params)",&_LC42,
                        uVar2,0);
    uVar1 = (uint)(iVar3 != 0);
  }
  EVP_KDF_CTX_free(uVar5);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_kdf_hkdf_set_ctx_param_fail(void)

{
  int iVar1;
  
  iVar1 = do_kdf_hkdf_set_invalid_param(&_LC6,5);
  if (((iVar1 != 0) && (iVar1 = do_kdf_hkdf_set_invalid_param(&_LC3,4), iVar1 != 0)) &&
     (iVar1 = do_kdf_hkdf_set_invalid_param(&_LC2,4), iVar1 != 0)) {
    iVar1 = do_kdf_hkdf_set_invalid_param(&_LC4,4);
    return iVar1 != 0;
  }
  return false;
}



bool test_kdf_hkdf_set_invalid_mode(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 100;
  uVar3 = EVP_KDF_fetch(0,&_LC58,0);
  uVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x15c,"kctx = get_kdfbyname(OSSL_KDF_NAME_HKDF)",uVar4);
  if (iVar1 != 0) {
    OSSL_PARAM_construct_utf8_string(&local_d8,&_LC6,"BADMODE",0);
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
    uVar2 = EVP_KDF_CTX_set_params(uVar4,&local_98);
    iVar1 = test_int_eq("test/evp_kdf_test.c",0x161,"EVP_KDF_CTX_set_params(kctx, params)",&_LC42,
                        uVar2,0);
    if (iVar1 != 0) {
      OSSL_PARAM_construct_int(&local_d8,&_LC6,&local_9c);
      local_98 = local_d8;
      uStack_90 = uStack_d0;
      local_88 = local_c8;
      uStack_80 = uStack_c0;
      local_78 = local_b8;
      uVar2 = EVP_KDF_CTX_set_params(uVar4,&local_98);
      iVar1 = test_int_eq("test/evp_kdf_test.c",0x165,"EVP_KDF_CTX_set_params(kctx, params)",&_LC42,
                          uVar2,0);
      bVar5 = iVar1 != 0;
      goto LAB_0010180a;
    }
  }
  bVar5 = false;
LAB_0010180a:
  EVP_KDF_CTX_free(uVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_kdf_x942_asn1(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  OSSL_PARAM_construct_utf8_string(&local_108,"digest",&_LC63,0);
  local_d8 = local_108;
  uStack_d0 = uStack_100;
  local_c8 = local_f8;
  uStack_c0 = uStack_f0;
  local_b8 = local_e8;
  OSSL_PARAM_construct_octet_string(&local_108,&_LC3,z_51,0x14);
  local_b0 = local_108;
  uStack_a8 = uStack_100;
  local_a0 = local_f8;
  uStack_98 = uStack_f0;
  local_90 = local_e8;
  OSSL_PARAM_construct_utf8_string(&local_108,"cekalg","id-smime-alg-CMS3DESwrap",0);
  local_88 = local_108;
  uStack_80 = uStack_100;
  local_78 = local_f8;
  uStack_70 = uStack_f0;
  local_68 = local_e8;
  OSSL_PARAM_construct_end(&local_108);
  local_60 = local_108;
  uStack_58 = uStack_100;
  local_50 = local_f8;
  uStack_48 = uStack_f0;
  local_40 = local_e8;
  uVar3 = EVP_KDF_fetch(0,"X942KDF-ASN1",0);
  uVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x71f,"kctx = get_kdfbyname(OSSL_KDF_NAME_X942KDF_ASN1)",
                   uVar4);
  if (iVar1 != 0) {
    uVar2 = EVP_KDF_derive(uVar4,local_38,0x18,&local_d8);
    iVar1 = test_int_gt("test/evp_kdf_test.c",0x720,"EVP_KDF_derive(kctx, out, sizeof(out), params)"
                        ,&_LC42,uVar2,0);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/evp_kdf_test.c",0x721,&_LC45,"expected",local_38,0x18,expected_50,
                          0x18);
      bVar5 = iVar1 != 0;
      goto LAB_00101aa0;
    }
  }
  bVar5 = false;
LAB_00101aa0:
  EVP_KDF_CTX_free(uVar4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_kdf_krb5kdf(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  OSSL_PARAM_construct_utf8_string(&local_108,"cipher","AES-128-CBC",0);
  local_d8 = local_108;
  uStack_d0 = uStack_100;
  local_c8 = local_f8;
  uStack_c0 = uStack_f0;
  local_b8 = local_e8;
  OSSL_PARAM_construct_octet_string(&local_108,&_LC3,key_54,0x10);
  local_b0 = local_108;
  uStack_a8 = uStack_100;
  local_a0 = local_f8;
  uStack_98 = uStack_f0;
  local_90 = local_e8;
  OSSL_PARAM_construct_octet_string(&local_108,"constant",&constant_53,5);
  local_88 = local_108;
  uStack_80 = uStack_100;
  local_78 = local_f8;
  uStack_70 = uStack_f0;
  local_68 = local_e8;
  OSSL_PARAM_construct_end(&local_108);
  local_60 = local_108;
  uStack_58 = uStack_100;
  local_50 = local_f8;
  uStack_48 = uStack_f0;
  local_40 = local_e8;
  uVar3 = EVP_KDF_fetch(0,"KRB5KDF",0);
  uVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x743,"kctx = get_kdfbyname(OSSL_KDF_NAME_KRB5KDF)",uVar4);
  if (iVar1 != 0) {
    uVar2 = EVP_KDF_derive(uVar4,local_38,0x10,&local_d8);
    iVar1 = test_int_gt("test/evp_kdf_test.c",0x744,"EVP_KDF_derive(kctx, out, sizeof(out), params)"
                        ,&_LC42,uVar2,0);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/evp_kdf_test.c",0x745,&_LC45,"expected",local_38,0x10,expected_52,
                          0x10);
      bVar5 = iVar1 != 0;
      goto LAB_00101cb3;
    }
  }
  bVar5 = false;
LAB_00101cb3:
  EVP_KDF_CTX_free(uVar4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_kdf_ss_hash(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  OSSL_PARAM_construct_utf8_string(&local_108,"digest","sha224",0);
  local_d8 = local_108;
  uStack_d0 = uStack_100;
  local_c8 = local_f8;
  uStack_c0 = uStack_f0;
  local_b8 = local_e8;
  OSSL_PARAM_construct_octet_string(&local_108,&_LC3,z_34,0x38);
  local_b0 = local_108;
  uStack_a8 = uStack_100;
  local_a0 = local_f8;
  uStack_98 = uStack_f0;
  local_90 = local_e8;
  OSSL_PARAM_construct_octet_string(&local_108,&_LC4,other_33,0x2f);
  local_88 = local_108;
  uStack_80 = uStack_100;
  local_78 = local_f8;
  uStack_70 = uStack_f0;
  local_68 = local_e8;
  OSSL_PARAM_construct_end(&local_108);
  local_60 = local_108;
  uStack_58 = uStack_100;
  local_50 = local_f8;
  uStack_48 = uStack_f0;
  local_40 = local_e8;
  uVar3 = EVP_KDF_fetch(0,"SSKDF",0);
  uVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x3a9,"kctx = get_kdfbyname(OSSL_KDF_NAME_SSKDF)",uVar4);
  if (iVar1 != 0) {
    uVar2 = EVP_KDF_derive(uVar4,local_2e,0xe,&local_d8);
    iVar1 = test_int_gt("test/evp_kdf_test.c",0x3aa,"EVP_KDF_derive(kctx, out, sizeof(out), params)"
                        ,&_LC42,uVar2,0);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/evp_kdf_test.c",0x3ab,&_LC45,"expected",local_2e,0xe,expected_32,0xe
                         );
      bVar5 = iVar1 != 0;
      goto LAB_00101ec3;
    }
  }
  bVar5 = false;
LAB_00101ec3:
  EVP_KDF_CTX_free(uVar4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_kdf_x963(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
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
  undefined1 local_a8 [136];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  OSSL_PARAM_construct_utf8_string(&local_178,"digest","sha512",0);
  local_148 = local_178;
  uStack_140 = uStack_170;
  local_138 = local_168;
  uStack_130 = uStack_160;
  local_128 = local_158;
  OSSL_PARAM_construct_octet_string(&local_178,&_LC3,z_49,0x42);
  local_120 = local_178;
  uStack_118 = uStack_170;
  local_110 = local_168;
  uStack_108 = uStack_160;
  local_100 = local_158;
  OSSL_PARAM_construct_octet_string(&local_178,&_LC4,shared_48,0x10);
  local_f8 = local_178;
  uStack_f0 = uStack_170;
  local_e8 = local_168;
  uStack_e0 = uStack_160;
  local_d8 = local_158;
  OSSL_PARAM_construct_end(&local_178);
  local_d0 = local_178;
  uStack_c8 = uStack_170;
  local_c0 = local_168;
  uStack_b8 = uStack_160;
  local_b0 = local_158;
  uVar3 = EVP_KDF_fetch(0,"X963KDF",0);
  uVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x3de,"kctx = get_kdfbyname(OSSL_KDF_NAME_X963KDF)",uVar4);
  if (iVar1 != 0) {
    uVar2 = EVP_KDF_derive(uVar4,local_a8,0x80,&local_148);
    iVar1 = test_int_gt("test/evp_kdf_test.c",0x3df,"EVP_KDF_derive(kctx, out, sizeof(out), params)"
                        ,&_LC42,uVar2,0);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/evp_kdf_test.c",0x3e0,&_LC45,"expected",local_a8,0x80,expected_47,
                          0x80);
      bVar5 = iVar1 != 0;
      goto LAB_001020d3;
    }
  }
  bVar5 = false;
LAB_001020d3:
  EVP_KDF_CTX_free(uVar4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_kdf_ss_hmac(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
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
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  OSSL_PARAM_construct_utf8_string(&local_158,&_LC22,&_LC78,0);
  local_128 = local_158;
  uStack_120 = uStack_150;
  local_118 = local_148;
  uStack_110 = uStack_140;
  local_108 = local_138;
  OSSL_PARAM_construct_utf8_string(&local_158,"digest","sha256",0);
  local_100 = local_158;
  uStack_f8 = uStack_150;
  local_f0 = local_148;
  uStack_e8 = uStack_140;
  local_e0 = local_138;
  OSSL_PARAM_construct_octet_string(&local_158,&_LC3,z_38,0xe);
  local_d8 = local_158;
  uStack_d0 = uStack_150;
  local_c8 = local_148;
  uStack_c0 = uStack_140;
  local_b8 = local_138;
  OSSL_PARAM_construct_octet_string(&local_158,&_LC4,other_37,0xc);
  local_b0 = local_158;
  uStack_a8 = uStack_150;
  local_a0 = local_148;
  uStack_98 = uStack_140;
  local_90 = local_138;
  OSSL_PARAM_construct_octet_string(&local_158,&_LC2,salt_36,0x10);
  local_88 = local_158;
  uStack_80 = uStack_150;
  local_78 = local_148;
  uStack_70 = uStack_140;
  local_68 = local_138;
  OSSL_PARAM_construct_end(&local_158);
  local_60 = local_158;
  uStack_58 = uStack_150;
  local_50 = local_148;
  uStack_48 = uStack_140;
  local_40 = local_138;
  uVar3 = EVP_KDF_fetch(0,"SSKDF",0);
  uVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x65b,"kctx = get_kdfbyname(OSSL_KDF_NAME_SSKDF)",uVar4);
  if (iVar1 != 0) {
    uVar2 = EVP_KDF_derive(uVar4,local_38,0x10,&local_128);
    iVar1 = test_int_gt("test/evp_kdf_test.c",0x65c,"EVP_KDF_derive(kctx, out, sizeof(out), params)"
                        ,&_LC42,uVar2,0);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/evp_kdf_test.c",0x65d,&_LC45,"expected",local_38,0x10,expected_35,
                          0x10);
      bVar5 = iVar1 != 0;
      goto LAB_00102366;
    }
  }
  bVar5 = false;
LAB_00102366:
  EVP_KDF_CTX_free(uVar4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_kdf_sshkdf(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_119;
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
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
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
  undefined1 local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_119 = 0x41;
  OSSL_PARAM_construct_utf8_string(&local_158,"digest","sha256",0);
  local_118 = local_158;
  uStack_110 = uStack_150;
  local_108 = local_148;
  uStack_100 = uStack_140;
  local_f8 = local_138;
  OSSL_PARAM_construct_octet_string(&local_158,&_LC3,key_46,0x85);
  local_f0 = local_158;
  uStack_e8 = uStack_150;
  local_e0 = local_148;
  uStack_d8 = uStack_140;
  local_d0 = local_138;
  OSSL_PARAM_construct_octet_string(&local_158,"xcghash",xcghash_45,0x20);
  local_c8 = local_158;
  uStack_c0 = uStack_150;
  local_b8 = local_148;
  uStack_b0 = uStack_140;
  local_a8 = local_138;
  OSSL_PARAM_construct_octet_string(&local_158,"session_id",sessid_44,0x20);
  local_a0 = local_158;
  uStack_98 = uStack_150;
  local_90 = local_148;
  uStack_88 = uStack_140;
  local_80 = local_138;
  OSSL_PARAM_construct_utf8_string(&local_158,&_LC81,&local_119,1);
  local_78 = local_158;
  uStack_70 = uStack_150;
  local_68 = local_148;
  uStack_60 = uStack_140;
  local_58 = local_138;
  OSSL_PARAM_construct_end(&local_158);
  local_50 = local_158;
  uStack_48 = uStack_150;
  local_40 = local_148;
  uStack_38 = uStack_140;
  local_30 = local_138;
  uVar3 = EVP_KDF_fetch(0,"SSHKDF",0);
  uVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x6c8,"kctx = get_kdfbyname(OSSL_KDF_NAME_SSHKDF)",uVar4);
  if (iVar1 != 0) {
    uVar2 = EVP_KDF_derive(uVar4,local_28,8,&local_118);
    iVar1 = test_int_gt("test/evp_kdf_test.c",0x6c9,"EVP_KDF_derive(kctx, out, sizeof(out), params)"
                        ,&_LC42,uVar2,0);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/evp_kdf_test.c",0x6ca,&_LC45,"expected",local_28,8,&expected_43,8);
      bVar5 = iVar1 != 0;
      goto LAB_001025ff;
    }
  }
  bVar5 = false;
LAB_001025ff:
  EVP_KDF_CTX_free(uVar4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_kdf_hmac_drbg_gettables(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_10c;
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
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_10c = 0;
  uVar3 = EVP_KDF_fetch(0,"HMAC-DRBG-KDF",0);
  uVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x7a0,"kctx = get_kdfbyname(OSSL_KDF_NAME_HMACDRBGKDF)",
                   uVar4);
  if (iVar1 != 0) {
    plVar5 = (long *)EVP_KDF_CTX_gettable_params(uVar4);
    iVar1 = test_ptr("test/evp_kdf_test.c",0x7a1,
                     "gettableparams = EVP_KDF_CTX_gettable_params(kctx)",plVar5);
    if (iVar1 != 0) {
      OSSL_PARAM_construct_end(&local_148);
      local_e0 = local_148;
      uStack_d8 = uStack_140;
      lVar6 = *plVar5;
      local_c0 = local_128;
      local_d0 = local_138;
      uStack_c8 = uStack_130;
      if (lVar6 != 0) {
        plVar8 = plVar5 + 5;
        plVar7 = plVar8;
        do {
          OSSL_PARAM_construct_int(&local_148,lVar6,&local_10c);
          local_e8 = local_128;
          local_108 = local_148;
          uStack_100 = uStack_140;
          local_f8 = local_138;
          uStack_f0 = uStack_130;
          uVar2 = EVP_KDF_CTX_get_params(uVar4,&local_108);
          iVar1 = test_int_le("test/evp_kdf_test.c",0x7a7,"EVP_KDF_CTX_get_params(kctx, params)",
                              &_LC42,uVar2,0);
          if (iVar1 == 0) goto LAB_00102738;
          lVar6 = *plVar7;
          plVar7 = plVar7 + 5;
        } while (lVar6 != 0);
        lVar6 = *plVar5;
        if (lVar6 != 0) {
          do {
            OSSL_PARAM_construct_utf8_string(&local_148,lVar6,local_88,0x40);
            local_e8 = local_128;
            local_108 = local_148;
            uStack_100 = uStack_140;
            local_f8 = local_138;
            uStack_f0 = uStack_130;
            uVar2 = EVP_KDF_CTX_get_params(uVar4,&local_108);
            iVar1 = test_int_le("test/evp_kdf_test.c",0x7ae,"EVP_KDF_CTX_get_params(kctx, params)",
                                &_LC42,uVar2,0);
            if (iVar1 == 0) goto LAB_00102738;
            lVar6 = *plVar8;
            plVar8 = plVar8 + 5;
          } while (lVar6 != 0);
        }
      }
      uVar3 = 1;
      goto LAB_0010273a;
    }
  }
LAB_00102738:
  uVar3 = 0;
LAB_0010273a:
  EVP_KDF_CTX_free(uVar4);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



bool test_kdf_kbkdf_8009_prf1(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
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
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  OSSL_PARAM_construct_utf8_string(&local_168,"digest","sha256",0);
  local_128 = local_158;
  uStack_120 = uStack_150;
  local_138 = local_168;
  uStack_130 = uStack_160;
  local_118 = local_148;
  OSSL_PARAM_construct_utf8_string(&local_168,&_LC22,&_LC78,0);
  local_100 = local_158;
  uStack_f8 = uStack_150;
  local_110 = local_168;
  uStack_108 = uStack_160;
  local_f0 = local_148;
  OSSL_PARAM_construct_octet_string(&local_168,&_LC3,input_key_15,0x10);
  local_d8 = local_158;
  uStack_d0 = uStack_150;
  local_e8 = local_168;
  uStack_e0 = uStack_160;
  local_c8 = local_148;
  OSSL_PARAM_construct_octet_string(&local_168,&_LC2,&_LC24,3);
  local_c0 = local_168;
  uStack_b8 = uStack_160;
  local_b0 = local_158;
  uStack_a8 = uStack_150;
  local_a0 = local_148;
  OSSL_PARAM_construct_octet_string(&local_168,&_LC4,&_LC25,4);
  local_98 = local_168;
  uStack_90 = uStack_160;
  local_88 = local_158;
  uStack_80 = uStack_150;
  local_78 = local_148;
  OSSL_PARAM_construct_end(&local_168);
  local_70 = local_168;
  uStack_68 = uStack_160;
  local_60 = local_158;
  uStack_58 = uStack_150;
  local_50 = local_148;
  uVar3 = EVP_KDF_fetch(0,"KBKDF",0);
  uVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x532,&_LC53,uVar4);
  if (iVar1 != 0) {
    uVar2 = EVP_KDF_derive(uVar4,local_48,0x20,&local_138);
    iVar1 = test_int_gt("test/evp_kdf_test.c",0x533,
                        "EVP_KDF_derive(kctx, result, sizeof(result), params)",&_LC42,uVar2,0);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/evp_kdf_test.c",0x534,"result","output",local_48,0x20,output_14,0x20
                         );
      bVar5 = iVar1 != 0;
      goto LAB_00102b0a;
    }
  }
  bVar5 = false;
LAB_00102b0a:
  EVP_KDF_CTX_free(uVar4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_kdf_kbkdf_8009_prf2(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
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
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  OSSL_PARAM_construct_utf8_string(&local_178,"digest","sha384",0);
  local_138 = local_168;
  uStack_130 = uStack_160;
  local_148 = local_178;
  uStack_140 = uStack_170;
  local_128 = local_158;
  OSSL_PARAM_construct_utf8_string(&local_178,&_LC22,&_LC78,0);
  local_110 = local_168;
  uStack_108 = uStack_160;
  local_120 = local_178;
  uStack_118 = uStack_170;
  local_100 = local_158;
  OSSL_PARAM_construct_octet_string(&local_178,&_LC3,input_key_17,0x20);
  local_e8 = local_168;
  uStack_e0 = uStack_160;
  local_f8 = local_178;
  uStack_f0 = uStack_170;
  local_d8 = local_158;
  OSSL_PARAM_construct_octet_string(&local_178,&_LC2,&_LC24,3);
  local_d0 = local_178;
  uStack_c8 = uStack_170;
  local_c0 = local_168;
  uStack_b8 = uStack_160;
  local_b0 = local_158;
  OSSL_PARAM_construct_octet_string(&local_178,&_LC4,&_LC25,4);
  local_a8 = local_178;
  uStack_a0 = uStack_170;
  local_98 = local_168;
  uStack_90 = uStack_160;
  local_88 = local_158;
  OSSL_PARAM_construct_end(&local_178);
  local_80 = local_178;
  uStack_78 = uStack_170;
  local_70 = local_168;
  uStack_68 = uStack_160;
  local_60 = local_158;
  uVar3 = EVP_KDF_fetch(0,"KBKDF",0);
  uVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x55e,&_LC53,uVar4);
  if (iVar1 != 0) {
    uVar2 = EVP_KDF_derive(uVar4,local_58,0x30,&local_148);
    iVar1 = test_int_gt("test/evp_kdf_test.c",0x55f,
                        "EVP_KDF_derive(kctx, result, sizeof(result), params)",&_LC42,uVar2,0);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/evp_kdf_test.c",0x560,"result","output",local_58,0x30,output_16,0x30
                         );
      bVar5 = iVar1 != 0;
      goto LAB_00102dc2;
    }
  }
  bVar5 = false;
LAB_00102dc2:
  EVP_KDF_CTX_free(uVar4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_kdf_kbkdf_kmac(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = &local_158;
  for (lVar5 = 0x26; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  *(undefined1 *)((long)puVar6 + 4) = 0;
  OSSL_PARAM_construct_utf8_string(&local_258,&_LC22,"KMAC256");
  local_228 = local_258;
  uStack_220 = uStack_250;
  local_218 = local_248;
  uStack_210 = uStack_240;
  local_208 = local_238;
  OSSL_PARAM_construct_octet_string(&local_258,&_LC3,input_key_27,0x29);
  local_200 = local_258;
  uStack_1f8 = uStack_250;
  local_1f0 = local_248;
  uStack_1e8 = uStack_240;
  local_1e0 = local_238;
  OSSL_PARAM_construct_octet_string(&local_258,&_LC4,context_26,0x200);
  local_1d8 = local_258;
  uStack_1d0 = uStack_250;
  local_1c8 = local_248;
  uStack_1c0 = uStack_240;
  local_1b8 = local_238;
  OSSL_PARAM_construct_octet_string(&local_258,&_LC2,label_25,0x36);
  local_1b0 = local_258;
  uStack_1a8 = uStack_250;
  local_1a0 = local_248;
  uStack_198 = uStack_240;
  local_190 = local_238;
  OSSL_PARAM_construct_end(&local_258);
  local_188 = local_258;
  uStack_180 = uStack_250;
  local_178 = local_248;
  uStack_170 = uStack_240;
  local_168 = local_238;
  uVar3 = EVP_KDF_fetch(0,"KBKDF",0);
  uVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x631,&_LC53,uVar4);
  if (iVar1 != 0) {
    uVar3 = EVP_KDF_CTX_get_kdf_size(uVar4);
    iVar1 = test_size_t_eq("test/evp_kdf_test.c",0x632,"EVP_KDF_CTX_get_kdf_size(kctx)","SIZE_MAX",
                           uVar3,0xffffffffffffffff);
    if (iVar1 != 0) {
      uVar2 = EVP_KDF_derive(uVar4,&local_158,0x135,&local_228);
      iVar1 = test_int_gt("test/evp_kdf_test.c",0x633,
                          "EVP_KDF_derive(kctx, result, sizeof(result), params)",&_LC42,uVar2,0);
      if (iVar1 != 0) {
        iVar1 = test_mem_eq("test/evp_kdf_test.c",0x634,"result","output",&local_158,0x135,output_24
                            ,0x135);
        bVar7 = iVar1 != 0;
        goto LAB_00103031;
      }
    }
  }
  bVar7 = false;
LAB_00103031:
  EVP_KDF_CTX_free(uVar4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_kdf_kbkdf_fixedinfo(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
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
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_180 = 0;
  local_17c = 0;
  OSSL_PARAM_construct_utf8_string(&local_1b8,"cipher","AES128",0);
  local_178 = local_1b8;
  uStack_170 = uStack_1b0;
  local_168 = local_1a8;
  uStack_160 = uStack_1a0;
  local_158 = local_198;
  OSSL_PARAM_construct_utf8_string(&local_1b8,&_LC22,&_LC50,0);
  local_150 = local_1b8;
  uStack_148 = uStack_1b0;
  local_140 = local_1a8;
  uStack_138 = uStack_1a0;
  local_130 = local_198;
  OSSL_PARAM_construct_utf8_string(&local_1b8,&_LC6,"COUNTER",0);
  local_128 = local_1b8;
  uStack_120 = uStack_1b0;
  local_118 = local_1a8;
  uStack_110 = uStack_1a0;
  local_108 = local_198;
  OSSL_PARAM_construct_octet_string(&local_1b8,&_LC3,input_key_20,0x10);
  local_100 = local_1b8;
  uStack_f8 = uStack_1b0;
  local_f0 = local_1a8;
  uStack_e8 = uStack_1a0;
  local_e0 = local_198;
  OSSL_PARAM_construct_octet_string(&local_1b8,&_LC4,fixed_input_19,0x3c);
  local_d8 = local_1b8;
  uStack_d0 = uStack_1b0;
  local_c8 = local_1a8;
  uStack_c0 = uStack_1a0;
  local_b8 = local_198;
  OSSL_PARAM_construct_int(&local_1b8,"use-l",&local_180);
  local_b0 = local_1b8;
  uStack_a8 = uStack_1b0;
  local_a0 = local_1a8;
  uStack_98 = uStack_1a0;
  local_90 = local_198;
  OSSL_PARAM_construct_int(&local_1b8,"use-separator",&local_17c);
  local_88 = local_1b8;
  uStack_80 = uStack_1b0;
  local_78 = local_1a8;
  uStack_70 = uStack_1a0;
  local_68 = local_198;
  OSSL_PARAM_construct_end(&local_1b8);
  local_60 = local_1b8;
  uStack_58 = uStack_1b0;
  local_50 = local_1a8;
  uStack_48 = uStack_1a0;
  local_40 = local_198;
  uVar3 = EVP_KDF_fetch(0,"KBKDF",0);
  uVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x599,&_LC53,uVar4);
  if (iVar1 != 0) {
    uVar2 = EVP_KDF_derive(uVar4,local_38,0x10,&local_178);
    iVar1 = test_int_gt("test/evp_kdf_test.c",0x59a,
                        "EVP_KDF_derive(kctx, result, sizeof(result), params)",&_LC42,uVar2,0);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/evp_kdf_test.c",0x59b,"result","output",local_38,0x10,output_18,0x10
                         );
      bVar5 = iVar1 != 0;
      goto LAB_0010338a;
    }
  }
  bVar5 = false;
LAB_0010338a:
  EVP_KDF_CTX_free(uVar4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_pbkdf2_small_salt(void)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  uVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0x1000;
  local_34 = 0;
  ptr = (void *)construct_pbkdf2_params_constprop_0("sha256","saltSALT",&local_38,&local_34);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x2d0,"params",ptr);
  if (uVar1 != 0) {
    uVar3 = EVP_KDF_fetch(0,"PBKDF2",0);
    uVar4 = EVP_KDF_CTX_new(uVar3);
    EVP_KDF_free(uVar3);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x2d1,"kctx = get_kdfbyname(OSSL_KDF_NAME_PBKDF2)",uVar4)
    ;
    if (uVar1 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar4,ptr);
      iVar2 = test_false("test/evp_kdf_test.c",0x2d3,"EVP_KDF_CTX_set_params(kctx, params)",
                         iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
  }
  EVP_KDF_CTX_free(uVar4);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_pbkdf2_small_iterations(void)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  uVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 1;
  local_34 = 0;
  ptr = (void *)construct_pbkdf2_params_constprop_0
                          ("sha256","saltSALTsaltSALTsaltSALTsaltSALTsalt",&local_38,&local_34);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x2e9,"params",ptr);
  if (uVar1 != 0) {
    uVar3 = EVP_KDF_fetch(0,"PBKDF2",0);
    uVar4 = EVP_KDF_CTX_new(uVar3);
    EVP_KDF_free(uVar3);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x2ea,"kctx = get_kdfbyname(OSSL_KDF_NAME_PBKDF2)",uVar4)
    ;
    if (uVar1 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar4,ptr);
      iVar2 = test_false("test/evp_kdf_test.c",0x2ec,"EVP_KDF_CTX_set_params(kctx, params)",
                         iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
  }
  EVP_KDF_CTX_free(uVar4);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_pbkdf2_invalid_digest(void)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  uVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0x1000;
  local_34 = 0;
  ptr = (void *)construct_pbkdf2_params_constprop_0
                          (&_LC98,"saltSALTsaltSALTsaltSALTsaltSALTsalt",&local_38,&local_34);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x34c,"params",ptr);
  if (uVar1 != 0) {
    uVar3 = EVP_KDF_fetch(0,"PBKDF2",0);
    uVar4 = EVP_KDF_CTX_new(uVar3);
    EVP_KDF_free(uVar3);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x34d,"kctx = get_kdfbyname(OSSL_KDF_NAME_PBKDF2)",uVar4)
    ;
    if (uVar1 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar4,ptr);
      iVar2 = test_false("test/evp_kdf_test.c",0x34f,"EVP_KDF_CTX_set_params(kctx, params)",
                         iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
  }
  EVP_KDF_CTX_free(uVar4);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_pbkdf2_large_output(void)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  uVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0x1000;
  local_34 = 0;
  ptr = (void *)construct_pbkdf2_params_constprop_0
                          ("sha256","saltSALTsaltSALTsaltSALTsaltSALTsalt",&local_38,&local_34);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x2b6,"params",ptr);
  if (uVar1 != 0) {
    uVar3 = EVP_KDF_fetch(0,"PBKDF2",0);
    uVar4 = EVP_KDF_CTX_new(uVar3);
    EVP_KDF_free(uVar3);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x2b7,"kctx = get_kdfbyname(OSSL_KDF_NAME_PBKDF2)",uVar4)
    ;
    if (uVar1 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar4,ptr);
      iVar2 = test_true("test/evp_kdf_test.c",0x2b9,"EVP_KDF_CTX_set_params(kctx, params)",
                        iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
  }
  EVP_KDF_CTX_free(uVar4);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_kbkdf_invalid_digest(void)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0x20;
  ptr = (void *)construct_kbkdf_params_constprop_0(&_LC98,&_LC78,&key_8,1,&local_34);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x48b,"params",ptr);
  if (uVar1 != 0) {
    uVar3 = EVP_KDF_fetch(0,"KBKDF",0);
    uVar4 = EVP_KDF_CTX_new(uVar3);
    EVP_KDF_free(uVar3);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x490,&_LC53,uVar4);
    if (uVar1 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar4,ptr);
      iVar2 = test_false("test/evp_kdf_test.c",0x491,"EVP_KDF_CTX_set_params(kctx, params)",
                         iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
    EVP_KDF_CTX_free(uVar4);
    CRYPTO_free(ptr);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_kbkdf_invalid_mac(void)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0x20;
  ptr = (void *)construct_kbkdf_params_constprop_0("sha256",&_LC98,&key_9,1,&local_34);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x4a2,"params",ptr);
  if (uVar1 != 0) {
    uVar3 = EVP_KDF_fetch(0,"KBKDF",0);
    uVar4 = EVP_KDF_CTX_new(uVar3);
    EVP_KDF_free(uVar3);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x4a7,&_LC53,uVar4);
    if (uVar1 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar4,ptr);
      iVar2 = test_false("test/evp_kdf_test.c",0x4a8,"EVP_KDF_CTX_set_params(kctx, params)",
                         iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
    EVP_KDF_CTX_free(uVar4);
    CRYPTO_free(ptr);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_kbkdf_invalid_r(void)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0x1f;
  ptr = (void *)construct_kbkdf_params_constprop_0("sha256",&_LC78,&key_10,1,&local_34);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x4b9,"params",ptr);
  if (uVar1 != 0) {
    uVar3 = EVP_KDF_fetch(0,"KBKDF",0);
    uVar4 = EVP_KDF_CTX_new(uVar3);
    EVP_KDF_free(uVar3);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x4be,&_LC53,uVar4);
    if (uVar1 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar4,ptr);
      iVar2 = test_false("test/evp_kdf_test.c",0x4bf,"EVP_KDF_CTX_set_params(kctx, params)",
                         iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
    EVP_KDF_CTX_free(uVar4);
    CRYPTO_free(ptr);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_kbkdf_1byte_key(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_5c = 0x20;
  ptr = (void *)construct_kbkdf_params_constprop_0("sha256",&_LC78,&key_13,1,&local_5c);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x4eb,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,"KBKDF",0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x4ef,&_LC53,uVar5);
    if (uVar1 != 0) {
      uVar2 = EVP_KDF_derive(uVar5,local_58,0x20,ptr);
      iVar3 = test_int_gt("test/evp_kdf_test.c",0x4f0,
                          "EVP_KDF_derive(kctx, result, sizeof(result), params)",&_LC42,uVar2,0);
      uVar1 = (uint)(iVar3 != 0);
    }
    EVP_KDF_CTX_free(uVar5);
    CRYPTO_free(ptr);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_kbkdf_mac_change(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
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
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c4 = 0;
  local_1c0 = 0;
  local_1bc = 8;
  OSSL_PARAM_construct_utf8_string(&local_1f8,&_LC22,"KMAC128",0);
  local_1b8 = local_1f8;
  uStack_1b0 = uStack_1f0;
  local_1a8 = local_1e8;
  uStack_1a0 = uStack_1e0;
  local_198 = local_1d8;
  OSSL_PARAM_construct_end(&local_1f8);
  local_190 = local_1f8;
  uStack_188 = uStack_1f0;
  local_180 = local_1e8;
  uStack_178 = uStack_1e0;
  local_170 = local_1d8;
  uVar2 = EVP_KDF_fetch(0,"KBKDF",0);
  uVar3 = EVP_KDF_CTX_new(uVar2);
  EVP_KDF_free(uVar2);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x7d8,"kctx = get_kdfbyname(OSSL_KDF_NAME_KBKDF)",uVar3);
  if (iVar1 != 0) {
    iVar1 = EVP_KDF_CTX_set_params(uVar3,&local_1b8);
    iVar1 = test_true("test/evp_kdf_test.c",0x7d9,"EVP_KDF_CTX_set_params(kctx, params)",iVar1 != 0)
    ;
    if (iVar1 != 0) {
      OSSL_PARAM_construct_utf8_string(&local_1f8,&_LC6,"COUNTER",0);
      local_1b8 = local_1f8;
      uStack_1b0 = uStack_1f0;
      local_1a8 = local_1e8;
      uStack_1a0 = uStack_1e0;
      local_198 = local_1d8;
      OSSL_PARAM_construct_utf8_string(&local_1f8,&_LC22,&_LC78,0);
      local_190 = local_1f8;
      uStack_188 = uStack_1f0;
      local_180 = local_1e8;
      uStack_178 = uStack_1e0;
      local_170 = local_1d8;
      OSSL_PARAM_construct_utf8_string(&local_1f8,"digest","SHA256",0);
      local_168 = local_1f8;
      uStack_160 = uStack_1f0;
      local_158 = local_1e8;
      uStack_150 = uStack_1e0;
      local_148 = local_1d8;
      OSSL_PARAM_construct_int(&local_1f8,"use-l",&local_1c4);
      local_140 = local_1f8;
      uStack_138 = uStack_1f0;
      local_130 = local_1e8;
      uStack_128 = uStack_1e0;
      local_120 = local_1d8;
      OSSL_PARAM_construct_int(&local_1f8,"use-separator",&local_1c0);
      local_118 = local_1f8;
      uStack_110 = uStack_1f0;
      local_108 = local_1e8;
      uStack_100 = uStack_1e0;
      local_f8 = local_1d8;
      OSSL_PARAM_construct_int(&local_1f8,&_LC26,&local_1bc);
      local_f0 = local_1f8;
      uStack_e8 = uStack_1f0;
      local_e0 = local_1e8;
      uStack_d8 = uStack_1e0;
      local_d0 = local_1d8;
      OSSL_PARAM_construct_octet_string(&local_1f8,&_LC3,key_58,0x20);
      local_c8 = local_1f8;
      uStack_c0 = uStack_1f0;
      local_b8 = local_1e8;
      uStack_b0 = uStack_1e0;
      local_a8 = local_1d8;
      OSSL_PARAM_construct_octet_string(&local_1f8,&_LC4,info_57,0x3c);
      local_80 = local_1d8;
      local_a0 = local_1f8;
      uStack_98 = uStack_1f0;
      local_90 = local_1e8;
      uStack_88 = uStack_1e0;
      OSSL_PARAM_construct_end(&local_1f8);
      local_78 = local_1f8;
      uStack_70 = uStack_1f0;
      local_58 = local_1d8;
      local_68 = local_1e8;
      uStack_60 = uStack_1e0;
      iVar1 = EVP_KDF_derive(uVar3,local_48,0x10,&local_1b8);
      iVar1 = test_true("test/evp_kdf_test.c",0x7e7,"EVP_KDF_derive(kctx, out, sizeof(out), params)"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = test_mem_eq("test/evp_kdf_test.c",0x7e8,&_LC45,"output",local_48,0x10,output_56,0x10
                           );
        bVar4 = iVar1 != 0;
        goto LAB_00103f0f;
      }
    }
  }
  bVar4 = false;
LAB_00103f0f:
  EVP_KDF_CTX_free(uVar3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_kdf_ss_kmac(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a0;
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
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
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
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_1a0 = 0x14;
  OSSL_PARAM_construct_utf8_string(&local_1d8,&_LC22,"KMAC128",0);
  local_198 = local_1d8;
  uStack_190 = uStack_1d0;
  local_188 = local_1c8;
  uStack_180 = uStack_1c0;
  local_178 = local_1b8;
  OSSL_PARAM_construct_utf8_string(&local_1d8,"digest","SHA256",0);
  local_170 = local_1d8;
  uStack_168 = uStack_1d0;
  local_160 = local_1c8;
  uStack_158 = uStack_1c0;
  local_150 = local_1b8;
  OSSL_PARAM_construct_octet_string(&local_1d8,&_LC3,z_42,0xe);
  local_148 = local_1d8;
  uStack_140 = uStack_1d0;
  local_138 = local_1c8;
  uStack_130 = uStack_1c0;
  local_128 = local_1b8;
  OSSL_PARAM_construct_octet_string(&local_1d8,&_LC4,other_41,0xc);
  local_120 = local_1d8;
  uStack_118 = uStack_1d0;
  local_110 = local_1c8;
  uStack_108 = uStack_1c0;
  local_100 = local_1b8;
  OSSL_PARAM_construct_octet_string(&local_1d8,&_LC2,salt_40,0x10);
  local_f8 = local_1d8;
  uStack_f0 = uStack_1d0;
  local_e8 = local_1c8;
  uStack_e0 = uStack_1c0;
  local_d8 = local_1b8;
  OSSL_PARAM_construct_size_t(&local_1d8,"maclen",&local_1a0);
  local_d0 = local_1d8;
  uStack_c8 = uStack_1d0;
  local_c0 = local_1c8;
  uStack_b8 = uStack_1c0;
  local_b0 = local_1b8;
  OSSL_PARAM_construct_end(&local_1d8);
  local_a8 = local_1d8;
  uStack_a0 = uStack_1d0;
  local_98 = local_1c8;
  uStack_90 = uStack_1c0;
  local_88 = local_1b8;
  uVar3 = EVP_KDF_fetch(0,"SSKDF",0);
  uVar4 = EVP_KDF_CTX_new(uVar3);
  EVP_KDF_free(uVar3);
  iVar1 = test_ptr("test/evp_kdf_test.c",0x68a,"kctx = get_kdfbyname(OSSL_KDF_NAME_SSKDF)",uVar4);
  if (iVar1 != 0) {
    uVar3 = EVP_KDF_CTX_get_kdf_size(uVar4);
    iVar1 = test_size_t_eq("test/evp_kdf_test.c",0x68b,"EVP_KDF_CTX_get_kdf_size(kctx)",&_LC42,uVar3
                           ,0);
    if (iVar1 != 0) {
      uVar2 = EVP_KDF_CTX_set_params(uVar4,&local_198);
      iVar1 = test_int_eq("test/evp_kdf_test.c",0x68c,"EVP_KDF_CTX_set_params(kctx, params)",&_LC103
                          ,uVar2,1);
      if (iVar1 != 0) {
        iVar1 = fips_provider_version_lt(0,3,0,8);
        if (iVar1 == 0) {
          uVar3 = EVP_KDF_CTX_get_kdf_size(uVar4);
          iVar1 = test_size_t_eq("test/evp_kdf_test.c",0x68f,"EVP_KDF_CTX_get_kdf_size(kctx)",
                                 "SIZE_MAX",uVar3,0xffffffffffffffff);
          if (iVar1 == 0) goto LAB_0010442e;
        }
        uVar2 = EVP_KDF_derive(uVar4,local_78,0x40,0);
        iVar1 = test_int_gt("test/evp_kdf_test.c",0x690,
                            "EVP_KDF_derive(kctx, out, sizeof(out), NULL)",&_LC42,uVar2,0);
        if (iVar1 != 0) {
          iVar1 = test_mem_eq("test/evp_kdf_test.c",0x691,&_LC45,"expected",local_78,0x40,
                              expected_39,0x40);
          bVar5 = iVar1 != 0;
          goto LAB_00104430;
        }
      }
    }
  }
LAB_0010442e:
  bVar5 = false;
LAB_00104430:
  EVP_KDF_CTX_free(uVar4);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_pbkdf2_small_output(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [40];
  long local_30;
  
  uVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0x1000;
  local_5c = 0;
  ptr = (void *)construct_pbkdf2_params_constprop_0
                          ("sha256","saltSALTsaltSALTsaltSALTsaltSALTsalt",&local_60,&local_5c);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x297,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,"PBKDF2",0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x298,"kctx = get_kdfbyname(OSSL_KDF_NAME_PBKDF2)",uVar5)
    ;
    if (uVar1 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar5,ptr);
      uVar1 = test_true("test/evp_kdf_test.c",0x299,"EVP_KDF_CTX_set_params(kctx, params)",
                        iVar2 != 0);
      if (uVar1 != 0) {
        uVar3 = EVP_KDF_derive(uVar5,local_58,0xd,0);
        iVar2 = test_int_eq("test/evp_kdf_test.c",0x29b,
                            "EVP_KDF_derive(kctx, out, 112 / 8 - 1, NULL)",&_LC42,uVar3,0);
        uVar1 = (uint)(iVar2 != 0);
      }
    }
  }
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_kdf_pbkdf2(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  long local_30;
  
  uVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0x1000;
  local_58 = __LC105;
  uStack_50 = (undefined1)_UNK_00109198;
  local_7c = 0;
  uStack_4f = (undefined7)__LC106;
  uStack_48 = (undefined1)((ulong)__LC106 >> 0x38);
  uStack_47 = _UNK_001091a8;
  ptr = (void *)construct_pbkdf2_params_constprop_0
                          ("sha256","saltSALTsaltSALTsaltSALTsaltSALTsalt",&local_80,&local_7c);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x27d,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,"PBKDF2",0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x27e,"kctx = get_kdfbyname(OSSL_KDF_NAME_PBKDF2)",uVar5)
    ;
    if (uVar1 != 0) {
      uVar2 = EVP_KDF_derive(uVar5,local_78,0x19,ptr);
      uVar1 = test_int_gt("test/evp_kdf_test.c",0x27f,
                          "EVP_KDF_derive(kctx, out, sizeof(out), params)",&_LC42,uVar2,0);
      if (uVar1 != 0) {
        iVar3 = test_mem_eq("test/evp_kdf_test.c",0x280,&_LC45,"expected",local_78,0x19,&local_58,
                            0x19);
        uVar1 = (uint)(iVar3 != 0);
      }
    }
  }
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_kbkdf_empty_key(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_5c = 0x20;
  ptr = (void *)construct_kbkdf_params_constprop_0("sha256",&_LC78,&key_12,0,&local_5c);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x4d2,"params",ptr);
  if (uVar1 == 0) goto LAB_0010492c;
  uVar4 = EVP_KDF_fetch(0,"KBKDF",0);
  uVar5 = EVP_KDF_CTX_new(uVar4);
  EVP_KDF_free(uVar4);
  iVar2 = test_ptr("test/evp_kdf_test.c",0x4d7,&_LC53,uVar5);
  if (iVar2 == 0) {
LAB_00104991:
    uVar1 = 0;
  }
  else {
    iVar2 = EVP_KDF_CTX_set_params(uVar5,ptr);
    iVar2 = test_true("test/evp_kdf_test.c",0x4d8,"EVP_KDF_CTX_set_params(kctx, params)",iVar2 != 0)
    ;
    if (iVar2 == 0) goto LAB_00104991;
    uVar3 = EVP_KDF_derive(uVar5,local_58,0x20,0);
    iVar2 = test_int_eq("test/evp_kdf_test.c",0x4d9,
                        "EVP_KDF_derive(kctx, result, sizeof(result), NULL)",&_LC42,uVar3,0);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
LAB_0010492c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_kbkdf_zero_output_size(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_5c = 0x20;
  ptr = (void *)construct_kbkdf_params_constprop_0("sha256",&_LC78,&key_11,1,&local_5c);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x502,"params",ptr);
  if (uVar1 == 0) goto LAB_00104a9f;
  uVar4 = EVP_KDF_fetch(0,"KBKDF",0);
  uVar5 = EVP_KDF_CTX_new(uVar4);
  EVP_KDF_free(uVar4);
  iVar2 = test_ptr("test/evp_kdf_test.c",0x507,&_LC53,uVar5);
  if (iVar2 == 0) {
LAB_00104b01:
    uVar1 = 0;
  }
  else {
    iVar2 = EVP_KDF_CTX_set_params(uVar5,ptr);
    iVar2 = test_true("test/evp_kdf_test.c",0x508,"EVP_KDF_CTX_set_params(kctx, params)",iVar2 != 0)
    ;
    if (iVar2 == 0) goto LAB_00104b01;
    uVar3 = EVP_KDF_derive(uVar5,local_58,0,0);
    iVar2 = test_int_eq("test/evp_kdf_test.c",0x509,"EVP_KDF_derive(kctx, result, 0, NULL)",&_LC42,
                        uVar3,0);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
LAB_00104a9f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_tls1_prf_invalid_digest(void)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  ptr = (void *)construct_tls1_prf_params(&_LC98,"secret",&_LC8);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x5a,"params",ptr);
  if (uVar1 != 0) {
    uVar3 = EVP_KDF_fetch(0,"TLS1-PRF",0);
    uVar4 = EVP_KDF_CTX_new(uVar3);
    EVP_KDF_free(uVar3);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x5b,"kctx = get_kdfbyname(OSSL_KDF_NAME_TLS1_PRF)",uVar4
                    );
    if (uVar1 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar4,ptr);
      iVar2 = test_false("test/evp_kdf_test.c",0x5c,"EVP_KDF_CTX_set_params(kctx, params)",
                         iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
  }
  EVP_KDF_CTX_free(uVar4);
  CRYPTO_free(ptr);
  return uVar1;
}



bool test_kdf_scrypt(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  int local_1f4;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
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
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1b8 = 0x400;
  local_1b4 = 8;
  local_1b0 = 0x10;
  local_1ac = 0x10;
  OSSL_PARAM_construct_octet_string(&local_1e8,&_LC28,"password",8);
  local_1a8 = local_1e8;
  uStack_1a0 = uStack_1e0;
  local_198 = local_1d8;
  uStack_190 = uStack_1d0;
  local_188 = local_1c8;
  OSSL_PARAM_construct_octet_string(&local_1e8,&_LC2,&_LC111,4);
  local_180 = local_1e8;
  uStack_178 = uStack_1e0;
  local_170 = local_1d8;
  uStack_168 = uStack_1d0;
  local_160 = local_1c8;
  OSSL_PARAM_construct_uint(&local_1e8,&_LC112,&local_1b8);
  local_158 = local_1e8;
  uStack_150 = uStack_1e0;
  local_148 = local_1d8;
  uStack_140 = uStack_1d0;
  local_138 = local_1c8;
  OSSL_PARAM_construct_uint(&local_1e8,&_LC26,&local_1b4);
  local_130 = local_1e8;
  uStack_128 = uStack_1e0;
  local_120 = local_1d8;
  uStack_118 = uStack_1d0;
  local_110 = local_1c8;
  OSSL_PARAM_construct_uint(&local_1e8,&_LC113,&local_1b0);
  local_108 = local_1e8;
  uStack_100 = uStack_1e0;
  local_f8 = local_1d8;
  uStack_f0 = uStack_1d0;
  local_e8 = local_1c8;
  OSSL_PARAM_construct_uint(&local_1e8,"maxmem_bytes",&local_1ac);
  local_e0 = local_1e8;
  uStack_d8 = uStack_1e0;
  local_d0 = local_1d8;
  uStack_c8 = uStack_1d0;
  local_c0 = local_1c8;
  OSSL_PARAM_construct_end(&local_1e8);
  local_b8 = local_1e8;
  uStack_b0 = uStack_1e0;
  local_a8 = local_1d8;
  uStack_a0 = uStack_1d0;
  local_98 = local_1c8;
  uVar4 = EVP_KDF_fetch(0,"SCRYPT",0);
  uVar5 = EVP_KDF_CTX_new(uVar4);
  EVP_KDF_free(uVar4);
  iVar2 = test_ptr("test/evp_kdf_test.c",0x376,"kctx = get_kdfbyname(OSSL_KDF_NAME_SCRYPT)",uVar5);
  if (iVar2 == 0) {
LAB_00104f6c:
    bVar6 = false;
  }
  else {
    local_1f4 = 2;
    bVar1 = false;
    do {
      iVar2 = EVP_KDF_CTX_set_params(uVar5,&local_1a8);
      iVar2 = test_true("test/evp_kdf_test.c",0x379,"EVP_KDF_CTX_set_params(kctx, params)",
                        iVar2 != 0);
      if (iVar2 == 0) {
        if (!bVar1) {
          EVP_KDF_CTX_reset(uVar5);
        }
        goto LAB_00104f6c;
      }
      if (!bVar1) {
        uVar3 = EVP_KDF_derive(uVar5,local_88,0x40,0);
        iVar2 = test_int_le("test/evp_kdf_test.c",0x37c,
                            "EVP_KDF_derive(kctx, out, sizeof(out), NULL)",&_LC42,uVar3,0);
        if (iVar2 != 0) {
          iVar2 = OSSL_PARAM_set_uint(&local_e0,0xa00000);
          iVar2 = test_true("test/evp_kdf_test.c",0x37d,
                            "OSSL_PARAM_set_uint(p - 1, 10 * 1024 * 1024)",iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = EVP_KDF_CTX_set_params(uVar5,&local_e0);
            iVar2 = test_true("test/evp_kdf_test.c",0x37e,"EVP_KDF_CTX_set_params(kctx, p - 1)",
                              iVar2 != 0);
            if (iVar2 != 0) goto LAB_00104f97;
          }
        }
LAB_00104f64:
        EVP_KDF_CTX_reset(uVar5);
        goto LAB_00104f6c;
      }
LAB_00104f97:
      uVar3 = EVP_KDF_derive(uVar5,local_88,0x40,0);
      iVar2 = test_int_gt("test/evp_kdf_test.c",0x380,"EVP_KDF_derive(kctx, out, sizeof(out), NULL)"
                          ,&_LC42,uVar3,0);
      if (iVar2 == 0) {
        bVar6 = false;
        if (!bVar1) goto LAB_00104f64;
        goto LAB_00104fce;
      }
      iVar2 = test_mem_eq("test/evp_kdf_test.c",0x381,&_LC45,"expected",local_88,0x40,expected_31);
      if (local_1f4 == 1) {
        bVar6 = iVar2 != 0;
        goto LAB_00104fce;
      }
      bVar1 = true;
      EVP_KDF_CTX_reset(uVar5);
      local_1f4 = 1;
    } while (iVar2 != 0);
    bVar6 = false;
  }
LAB_00104fce:
  EVP_KDF_CTX_free(uVar5);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



uint test_kdf_hkdf_invalid_digest(void)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  ptr = (void *)construct_hkdf_params(&_LC98,"secret",6,&_LC2,"label");
  uVar1 = test_ptr("test/evp_kdf_test.c",0x136,"params",ptr);
  if (uVar1 != 0) {
    uVar3 = EVP_KDF_fetch(0,&_LC58,0);
    uVar4 = EVP_KDF_CTX_new(uVar3);
    EVP_KDF_free(uVar3);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x137,"kctx = get_kdfbyname(OSSL_KDF_NAME_HKDF)",uVar4);
    if (uVar1 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar4,ptr);
      iVar2 = test_false("test/evp_kdf_test.c",0x138,"EVP_KDF_CTX_set_params(kctx, params)",
                         iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
  }
  EVP_KDF_CTX_free(uVar4);
  CRYPTO_free(ptr);
  return uVar1;
}



uint test_kdf_tls1_prf_1byte_seed(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  uVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)construct_tls1_prf_params("sha256","secret",&_LC103);
  uVar1 = test_ptr("test/evp_kdf_test.c",0xb8,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,"TLS1-PRF",0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    uVar1 = test_ptr("test/evp_kdf_test.c",0xb9,"kctx = get_kdfbyname(OSSL_KDF_NAME_TLS1_PRF)",uVar5
                    );
    if (uVar1 != 0) {
      uVar2 = EVP_KDF_derive(uVar5,auStack_48,0x10,ptr);
      iVar3 = test_int_gt("test/evp_kdf_test.c",0xba,
                          "EVP_KDF_derive(kctx, out, sizeof(out), params)",&_LC42,uVar2,0);
      uVar1 = (uint)(iVar3 != 0);
    }
  }
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_tls1_prf_empty_secret(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  uVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)construct_tls1_prf_params("sha256",&_LC120,&_LC8);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x80,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,"TLS1-PRF",0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x81,"kctx = get_kdfbyname(OSSL_KDF_NAME_TLS1_PRF)",uVar5
                    );
    if (uVar1 != 0) {
      uVar2 = EVP_KDF_derive(uVar5,auStack_48,0x10,ptr);
      iVar3 = test_int_gt("test/evp_kdf_test.c",0x82,
                          "EVP_KDF_derive(kctx, out, sizeof(out), params)",&_LC42,uVar2,0);
      uVar1 = (uint)(iVar3 != 0);
    }
  }
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_tls1_prf_1byte_secret(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  uVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)construct_tls1_prf_params("sha256",&_LC103,&_LC8);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x92,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,"TLS1-PRF",0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x93,"kctx = get_kdfbyname(OSSL_KDF_NAME_TLS1_PRF)",uVar5
                    );
    if (uVar1 != 0) {
      uVar2 = EVP_KDF_derive(uVar5,auStack_48,0x10,ptr);
      iVar3 = test_int_gt("test/evp_kdf_test.c",0x94,
                          "EVP_KDF_derive(kctx, out, sizeof(out), params)",&_LC42,uVar2,0);
      uVar1 = (uint)(iVar3 != 0);
    }
  }
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_hkdf_empty_key(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_3a [10];
  long local_30;
  
  uVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)construct_hkdf_params("sha256",&_LC120,0,&_LC2,"label");
  uVar1 = test_ptr("test/evp_kdf_test.c",0x1af,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,&_LC58,0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x1b0,"kctx = get_kdfbyname(OSSL_KDF_NAME_HKDF)",uVar5);
    if (uVar1 != 0) {
      uVar2 = EVP_KDF_derive(uVar5,local_3a,10,ptr);
      iVar3 = test_int_gt("test/evp_kdf_test.c",0x1b1,
                          "EVP_KDF_derive(kctx, out, sizeof(out), params)",&_LC42,uVar2,0);
      uVar1 = (uint)(iVar3 != 0);
    }
  }
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_hkdf_1byte_key(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_3a [10];
  long local_30;
  
  uVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)construct_hkdf_params("sha256",&_LC103,1,&_LC2,"label");
  uVar1 = test_ptr("test/evp_kdf_test.c",0x1c1,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,&_LC58,0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x1c2,"kctx = get_kdfbyname(OSSL_KDF_NAME_HKDF)",uVar5);
    if (uVar1 != 0) {
      uVar2 = EVP_KDF_derive(uVar5,local_3a,10,ptr);
      iVar3 = test_int_gt("test/evp_kdf_test.c",0x1c3,
                          "EVP_KDF_derive(kctx, out, sizeof(out), params)",&_LC42,uVar2,0);
      uVar1 = (uint)(iVar3 != 0);
    }
  }
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_hkdf_empty_salt(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_3a [10];
  long local_30;
  
  uVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)construct_hkdf_params("sha256","secret",6,&_LC120,"label");
  uVar1 = test_ptr("test/evp_kdf_test.c",0x1d3,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,&_LC58,0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x1d4,"kctx = get_kdfbyname(OSSL_KDF_NAME_HKDF)",uVar5);
    if (uVar1 != 0) {
      uVar2 = EVP_KDF_derive(uVar5,local_3a,10,ptr);
      iVar3 = test_int_gt("test/evp_kdf_test.c",0x1d5,
                          "EVP_KDF_derive(kctx, out, sizeof(out), params)",&_LC42,uVar2,0);
      uVar1 = (uint)(iVar3 != 0);
    }
  }
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_tls1_prf(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  uVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)construct_tls1_prf_params("sha256","secret",&_LC8);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x48,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,"TLS1-PRF",0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    iVar2 = test_ptr("test/evp_kdf_test.c",0x49,"kctx = get_kdfbyname(OSSL_KDF_NAME_TLS1_PRF)",uVar5
                    );
    if (iVar2 != 0) {
      uVar3 = EVP_KDF_derive(uVar5,auStack_48,0x10,ptr);
      iVar2 = test_int_gt("test/evp_kdf_test.c",0x4a,
                          "EVP_KDF_derive(kctx, out, sizeof(out), params)",&_LC42,uVar3,0);
      if (iVar2 != 0) {
        iVar2 = test_mem_eq("test/evp_kdf_test.c",0x4b,&_LC45,"expected",auStack_48,0x10,expected_29
                            ,0x10);
        uVar1 = (uint)(iVar2 != 0);
        goto LAB_001059b2;
      }
    }
    uVar1 = 0;
  }
LAB_001059b2:
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_tls1_prf_zero_output_size(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  uVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)construct_tls1_prf_params("sha256","secret",&_LC8);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x6d,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,"TLS1-PRF",0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    iVar2 = test_ptr("test/evp_kdf_test.c",0x6e,"kctx = get_kdfbyname(OSSL_KDF_NAME_TLS1_PRF)",uVar5
                    );
    if (iVar2 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar5,ptr);
      iVar2 = test_true("test/evp_kdf_test.c",0x6f,"EVP_KDF_CTX_set_params(kctx, params)",iVar2 != 0
                       );
      if (iVar2 != 0) {
        uVar3 = EVP_KDF_derive(uVar5,auStack_48,0,0);
        iVar2 = test_int_eq("test/evp_kdf_test.c",0x70,"EVP_KDF_derive(kctx, out, 0, NULL)",&_LC42,
                            uVar3,0);
        uVar1 = (uint)(iVar2 != 0);
        goto LAB_00105b22;
      }
    }
    uVar1 = 0;
  }
LAB_00105b22:
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_tls1_prf_empty_seed(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  uVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)construct_tls1_prf_params("sha256","secret",&_LC120);
  uVar1 = test_ptr("test/evp_kdf_test.c",0xa5,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,"TLS1-PRF",0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    iVar2 = test_ptr("test/evp_kdf_test.c",0xa6,"kctx = get_kdfbyname(OSSL_KDF_NAME_TLS1_PRF)",uVar5
                    );
    if (iVar2 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar5,ptr);
      iVar2 = test_true("test/evp_kdf_test.c",0xa7,"EVP_KDF_CTX_set_params(kctx, params)",iVar2 != 0
                       );
      if (iVar2 != 0) {
        uVar3 = EVP_KDF_derive(uVar5,auStack_48,0x10,0);
        iVar2 = test_int_eq("test/evp_kdf_test.c",0xa8,
                            "EVP_KDF_derive(kctx, out, sizeof(out), NULL)",&_LC42,uVar3,0);
        uVar1 = (uint)(iVar2 != 0);
        goto LAB_00105c82;
      }
    }
    uVar1 = 0;
  }
LAB_00105c82:
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_hkdf(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_3a [10];
  long local_30;
  
  uVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)construct_hkdf_params("sha256","secret",6,&_LC2,"label");
  uVar1 = test_ptr("test/evp_kdf_test.c",0xe8,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,&_LC58,0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    iVar2 = test_ptr("test/evp_kdf_test.c",0xe9,"kctx = get_kdfbyname(OSSL_KDF_NAME_HKDF)",uVar5);
    if (iVar2 != 0) {
      uVar3 = EVP_KDF_derive(uVar5,local_3a,10,ptr);
      iVar2 = test_int_gt("test/evp_kdf_test.c",0xea,
                          "EVP_KDF_derive(kctx, out, sizeof(out), params)",&_LC42,uVar3,0);
      if (iVar2 != 0) {
        iVar2 = test_mem_eq("test/evp_kdf_test.c",0xeb,&_LC45,"expected",local_3a,10,expected_30,10)
        ;
        uVar1 = (uint)(iVar2 != 0);
        goto LAB_00105dee;
      }
    }
    uVar1 = 0;
  }
LAB_00105dee:
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_hkdf_zero_output_size(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_3a [10];
  long local_30;
  
  uVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)construct_hkdf_params("sha256","secret",6,&_LC2,"label");
  uVar1 = test_ptr("test/evp_kdf_test.c",0x19c,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,&_LC58,0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    iVar2 = test_ptr("test/evp_kdf_test.c",0x19d,"kctx = get_kdfbyname(OSSL_KDF_NAME_HKDF)",uVar5);
    if (iVar2 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar5,ptr);
      iVar2 = test_true("test/evp_kdf_test.c",0x19e,"EVP_KDF_CTX_set_params(kctx, params)",
                        iVar2 != 0);
      if (iVar2 != 0) {
        uVar3 = EVP_KDF_derive(uVar5,local_3a,0,0);
        iVar2 = test_int_eq("test/evp_kdf_test.c",0x19f,"EVP_KDF_derive(kctx, out, 0, NULL)",&_LC42,
                            uVar3,0);
        uVar1 = (uint)(iVar2 != 0);
        goto LAB_00105f6e;
      }
    }
    uVar1 = 0;
  }
LAB_00105f6e:
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_pbkdf2_small_salt_pkcs5(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_c0;
  undefined4 local_bc;
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
  undefined1 local_68 [40];
  long local_40;
  
  uVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0x1000;
  local_bc = 1;
  ptr = (void *)construct_pbkdf2_params_constprop_0("sha256","saltSALT",&local_c0,&local_bc);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x304,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,"PBKDF2",0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x305,"kctx = get_kdfbyname(OSSL_KDF_NAME_PBKDF2)",uVar5)
    ;
    if (uVar1 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar5,ptr);
      iVar2 = test_true("test/evp_kdf_test.c",0x307,"EVP_KDF_CTX_set_params(kctx, params)",
                        iVar2 != 0);
      if (iVar2 != 0) {
        uVar3 = EVP_KDF_derive(uVar5,local_68,0x19,0);
        iVar2 = test_int_gt("test/evp_kdf_test.c",0x308,
                            "EVP_KDF_derive(kctx, out, sizeof(out), NULL)",&_LC42,uVar3,0);
        if (iVar2 != 0) {
          local_bc = 0;
          OSSL_PARAM_construct_int(&local_f8,"pkcs5",&local_bc);
          local_b8 = local_f8;
          uStack_b0 = uStack_f0;
          local_98 = local_d8;
          local_a8 = local_e8;
          uStack_a0 = uStack_e0;
          OSSL_PARAM_construct_end(&local_f8);
          local_90 = local_f8;
          uStack_88 = uStack_f0;
          local_70 = local_d8;
          local_80 = local_e8;
          uStack_78 = uStack_e0;
          iVar2 = EVP_KDF_CTX_set_params(uVar5,&local_b8);
          iVar2 = test_true("test/evp_kdf_test.c",0x310,"EVP_KDF_CTX_set_params(kctx, mode_params)",
                            iVar2 != 0);
          if (iVar2 != 0) {
            uVar3 = EVP_KDF_derive(uVar5,local_68,0x19,0);
            iVar2 = test_int_eq("test/evp_kdf_test.c",0x311,
                                "EVP_KDF_derive(kctx, out, sizeof(out), NULL)",&_LC42,uVar3,0);
            uVar1 = (uint)(iVar2 != 0);
            goto LAB_001060f2;
          }
        }
      }
      uVar1 = 0;
    }
  }
LAB_001060f2:
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_kdf_pbkdf2_small_iterations_pkcs5(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_c0;
  undefined4 local_bc;
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
  undefined1 local_68 [40];
  long local_40;
  
  uVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 1;
  local_bc = 1;
  ptr = (void *)construct_pbkdf2_params_constprop_0
                          ("sha256","saltSALTsaltSALTsaltSALTsaltSALTsalt",&local_c0,&local_bc);
  uVar1 = test_ptr("test/evp_kdf_test.c",0x329,"params",ptr);
  if (uVar1 != 0) {
    uVar4 = EVP_KDF_fetch(0,"PBKDF2",0);
    uVar5 = EVP_KDF_CTX_new(uVar4);
    EVP_KDF_free(uVar4);
    uVar1 = test_ptr("test/evp_kdf_test.c",0x32a,"kctx = get_kdfbyname(OSSL_KDF_NAME_PBKDF2)",uVar5)
    ;
    if (uVar1 != 0) {
      iVar2 = EVP_KDF_CTX_set_params(uVar5,ptr);
      iVar2 = test_true("test/evp_kdf_test.c",0x32c,"EVP_KDF_CTX_set_params(kctx, params)",
                        iVar2 != 0);
      if (iVar2 != 0) {
        uVar3 = EVP_KDF_derive(uVar5,local_68,0x19,0);
        iVar2 = test_int_gt("test/evp_kdf_test.c",0x32d,
                            "EVP_KDF_derive(kctx, out, sizeof(out), NULL)",&_LC42,uVar3,0);
        if (iVar2 != 0) {
          local_bc = 0;
          OSSL_PARAM_construct_int(&local_f8,"pkcs5",&local_bc);
          local_b8 = local_f8;
          uStack_b0 = uStack_f0;
          local_98 = local_d8;
          local_a8 = local_e8;
          uStack_a0 = uStack_e0;
          OSSL_PARAM_construct_end(&local_f8);
          local_90 = local_f8;
          uStack_88 = uStack_f0;
          local_70 = local_d8;
          local_80 = local_e8;
          uStack_78 = uStack_e0;
          iVar2 = EVP_KDF_CTX_set_params(uVar5,&local_b8);
          iVar2 = test_true("test/evp_kdf_test.c",0x335,"EVP_KDF_CTX_set_params(kctx, mode_params)",
                            iVar2 != 0);
          if (iVar2 != 0) {
            uVar3 = EVP_KDF_derive(uVar5,local_68,0x19,0);
            iVar2 = test_int_eq("test/evp_kdf_test.c",0x336,
                                "EVP_KDF_derive(kctx, out, sizeof(out), NULL)",&_LC42,uVar3,0);
            uVar1 = (uint)(iVar2 != 0);
            goto LAB_00106372;
          }
        }
      }
      uVar1 = 0;
    }
  }
LAB_00106372:
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_kdf_hmac_drbg_settables(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
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
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_17c = 0;
  uVar5 = EVP_KDF_fetch(0,"HMAC-DRBG-KDF",0);
  uVar6 = EVP_KDF_CTX_new(uVar5);
  EVP_KDF_free(uVar5);
  iVar3 = test_ptr("test/evp_kdf_test.c",0x758,"kctx = get_kdfbyname(OSSL_KDF_NAME_HMACDRBGKDF)",
                   uVar6);
  if (iVar3 != 0) {
    plVar7 = (long *)EVP_KDF_CTX_settable_params(uVar6);
    iVar3 = test_ptr("test/evp_kdf_test.c",0x759,
                     "settableparams = EVP_KDF_CTX_settable_params(kctx)",plVar7);
    if (iVar3 != 0) {
      uVar4 = EVP_KDF_derive(uVar6,local_a8,0x20,0);
      iVar3 = test_int_le("test/evp_kdf_test.c",0x75d,"EVP_KDF_derive(kctx, out, sizeof(out), NULL)"
                          ,&_LC42,uVar4,0);
      if (iVar3 != 0) {
        OSSL_PARAM_construct_end(&local_1b8);
        lVar2 = *plVar7;
        local_130 = local_198;
        local_150 = local_1b8;
        uStack_148 = uStack_1b0;
        local_140 = local_1a8;
        uStack_138 = uStack_1a0;
        while (lVar2 != 0) {
          iVar3 = OPENSSL_strcasecmp(lVar2,"properties");
          if (iVar3 != 0) {
            test_note("Testing set int into %s fails",*plVar7);
            OSSL_PARAM_construct_int(&local_1b8,*plVar7,&local_17c);
            local_178 = local_1b8;
            uStack_170 = uStack_1b0;
            local_158 = local_198;
            local_168 = local_1a8;
            uStack_160 = uStack_1a0;
            uVar4 = EVP_KDF_CTX_set_params(uVar6,&local_178);
            iVar3 = test_int_le("test/evp_kdf_test.c",0x768,"EVP_KDF_CTX_set_params(kctx, params)",
                                &_LC42,uVar4,0);
            if (iVar3 == 0) goto LAB_001065e8;
          }
          plVar1 = plVar7 + 5;
          plVar7 = plVar7 + 5;
          lVar2 = *plVar1;
        }
        OSSL_PARAM_construct_octet_string(&local_1b8,"entropy",ent_55,0x20);
        local_158 = local_198;
        local_178 = local_1b8;
        uStack_170 = uStack_1b0;
        local_168 = local_1a8;
        uStack_160 = uStack_1a0;
        OSSL_PARAM_construct_octet_string(&local_1b8,"nonce",ent_55,0x20);
        local_150 = local_1b8;
        uStack_148 = uStack_1b0;
        local_140 = local_1a8;
        uStack_138 = uStack_1a0;
        local_130 = local_198;
        OSSL_PARAM_construct_utf8_string(&local_1b8,"digest","SHA256",0);
        local_128 = local_1b8;
        uStack_120 = uStack_1b0;
        local_118 = local_1a8;
        uStack_110 = uStack_1a0;
        local_108 = local_198;
        OSSL_PARAM_construct_utf8_string(&local_1b8,"properties",&_LC120,0);
        local_e0 = local_198;
        local_100 = local_1b8;
        uStack_f8 = uStack_1b0;
        local_f0 = local_1a8;
        uStack_e8 = uStack_1a0;
        OSSL_PARAM_construct_end(&local_1b8);
        local_d8 = local_1b8;
        uStack_d0 = uStack_1b0;
        local_b8 = local_198;
        local_c8 = local_1a8;
        uStack_c0 = uStack_1a0;
        uVar4 = EVP_KDF_CTX_set_params(uVar6,&local_178);
        iVar3 = test_int_eq("test/evp_kdf_test.c",0x776,"EVP_KDF_CTX_set_params(kctx, params)",
                            &_LC103,uVar4,1);
        if (iVar3 != 0) {
          uVar4 = EVP_KDF_CTX_set_params(uVar6,&local_178);
          iVar3 = test_int_eq("test/evp_kdf_test.c",0x778,"EVP_KDF_CTX_set_params(kctx, params)",
                              &_LC103,uVar4,1);
          if (iVar3 != 0) {
            OSSL_PARAM_construct_utf8_string(&local_1b8,"digest",local_88,0x20);
            local_178 = local_1b8;
            uStack_170 = uStack_1b0;
            local_168 = local_1a8;
            uStack_160 = uStack_1a0;
            local_158 = local_198;
            OSSL_PARAM_construct_utf8_string(&local_1b8,&_LC22,local_68,0x20);
            local_130 = local_198;
            local_150 = local_1b8;
            uStack_148 = uStack_1b0;
            local_140 = local_1a8;
            uStack_138 = uStack_1a0;
            OSSL_PARAM_construct_end(&local_1b8);
            local_128 = local_1b8;
            uStack_120 = uStack_1b0;
            local_108 = local_198;
            local_118 = local_1a8;
            uStack_110 = uStack_1a0;
            uVar4 = EVP_KDF_CTX_get_params(uVar6,&local_178);
            iVar3 = test_int_eq("test/evp_kdf_test.c",0x780,"EVP_KDF_CTX_get_params(kctx, params)",
                                &_LC103,uVar4,1);
            if (((iVar3 != 0) &&
                (iVar3 = test_mem_eq("test/evp_kdf_test.c",0x781,"digestname","\"SHA2-256\"",
                                     local_88,local_158,"SHA2-256",8), iVar3 != 0)) &&
               (iVar3 = test_mem_eq("test/evp_kdf_test.c",0x782,"macname","\"HMAC\"",local_68,
                                    local_130,&_LC78,4), iVar3 != 0)) {
              uVar4 = EVP_KDF_derive(uVar6,local_a8,0x20,0);
              iVar3 = test_int_eq("test/evp_kdf_test.c",0x786,
                                  "EVP_KDF_derive(kctx, out, sizeof(out), NULL)",&_LC103,uVar4,1);
              if (iVar3 != 0) {
                OSSL_PARAM_construct_utf8_string(&local_1b8,"digest","shake256",0);
                local_158 = local_198;
                local_178 = local_1b8;
                uStack_170 = uStack_1b0;
                local_168 = local_1a8;
                uStack_160 = uStack_1a0;
                OSSL_PARAM_construct_end(&local_1b8);
                local_150 = local_1b8;
                uStack_148 = uStack_1b0;
                local_140 = local_1a8;
                uStack_138 = uStack_1a0;
                local_130 = local_198;
                uVar4 = EVP_KDF_CTX_set_params(uVar6,&local_178);
                iVar3 = test_int_le("test/evp_kdf_test.c",0x78d,
                                    "EVP_KDF_CTX_set_params(kctx, params)",&_LC42,uVar4,0);
                bVar8 = iVar3 != 0;
                goto LAB_001065ea;
              }
            }
          }
        }
      }
    }
  }
LAB_001065e8:
  bVar8 = false;
LAB_001065ea:
  EVP_MD_free(0);
  EVP_KDF_CTX_free(uVar6);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint do_kdf_hkdf_gettables(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  local_a0 = 0;
  pcVar7 = "label";
  if (param_1 != 0) {
    pcVar7 = (char *)0x0;
  }
  pcVar6 = "sha256";
  if (param_2 == 0) {
    pcVar6 = (char *)0x0;
  }
  uVar5 = 0;
  ptr = (void *)construct_hkdf_params(pcVar6,"secret",6,&_LC2,pcVar7);
  uVar1 = test_ptr("test/evp_kdf_test.c",0xfb,
                   "params = construct_hkdf_params( has_digest ? \"sha256\" : NULL, \"secret\", 6, \"salt\", expand_only ? NULL : \"label\")"
                   ,ptr);
  if (uVar1 == 0) goto LAB_00106c2f;
  uVar4 = EVP_KDF_fetch(0,&_LC58,0);
  uVar5 = EVP_KDF_CTX_new(uVar4);
  EVP_KDF_free(uVar4);
  iVar2 = test_ptr("test/evp_kdf_test.c",0xff,"kctx = get_kdfbyname(OSSL_KDF_NAME_HKDF)",uVar5);
  if (iVar2 != 0) {
    iVar2 = EVP_KDF_CTX_set_params(uVar5,ptr);
    iVar2 = test_true("test/evp_kdf_test.c",0x100,"EVP_KDF_CTX_set_params(kctx, params)",iVar2 != 0)
    ;
    if (iVar2 != 0) {
      uVar4 = EVP_KDF_CTX_gettable_params(uVar5);
      iVar2 = test_ptr("test/evp_kdf_test.c",0x104,"gettables = EVP_KDF_CTX_gettable_params(kctx)",
                       uVar4);
      if (iVar2 != 0) {
        uVar4 = OSSL_PARAM_locate_const(uVar4,&_LC136);
        iVar2 = test_ptr("test/evp_kdf_test.c",0x105,
                         "p = OSSL_PARAM_locate_const(gettables, OSSL_KDF_PARAM_SIZE)",uVar4);
        if (iVar2 != 0) {
          OSSL_PARAM_construct_size_t(&local_d8,&_LC136,&local_a0);
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
          if (param_2 == 0) {
            uVar3 = EVP_KDF_CTX_get_params(uVar5,&local_98);
            iVar2 = test_int_eq("test/evp_kdf_test.c",0x110,
                                "EVP_KDF_CTX_get_params(kctx, params_get)",&_LC42,uVar3,0);
          }
          else {
            uVar3 = EVP_KDF_CTX_get_params(uVar5,&local_98);
            iVar2 = test_int_eq("test/evp_kdf_test.c",0x10c,
                                "EVP_KDF_CTX_get_params(kctx, params_get)",&_LC103,uVar3,1);
            if (iVar2 == 0) goto LAB_00106cb9;
            iVar2 = test_size_t_eq("test/evp_kdf_test.c",0x10d,&_LC140,
                                   "expand_only ? SHA256_DIGEST_LENGTH : SIZE_MAX",local_a0,
                                   -(ulong)(param_1 == 0) | 0x20);
          }
          if (iVar2 != 0) {
            OSSL_PARAM_construct_end(&local_d8);
            local_78 = local_b8;
            local_98 = local_d8;
            uStack_90 = uStack_d0;
            local_88 = local_c8;
            uStack_80 = uStack_c0;
            uVar3 = EVP_KDF_CTX_get_params(uVar5,&local_98);
            iVar2 = test_int_eq("test/evp_kdf_test.c",0x116,
                                "EVP_KDF_CTX_get_params(kctx, params_get)",&_LC103,uVar3,1);
            uVar1 = (uint)(iVar2 != 0);
            goto LAB_00106c2f;
          }
        }
      }
    }
  }
LAB_00106cb9:
  uVar1 = 0;
LAB_00106c2f:
  EVP_KDF_CTX_free(uVar5);
  CRYPTO_free(ptr);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_kdf_hkdf_gettables_no_digest(void)

{
  do_kdf_hkdf_gettables(1,0);
  return;
}



void test_kdf_hkdf_gettables_expandonly(void)

{
  do_kdf_hkdf_gettables(1,1);
  return;
}



void test_kdf_hkdf_gettables(void)

{
  do_kdf_hkdf_gettables(0,1);
  return;
}



uint test_kdf_pbkdf1_key_too_long(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  void *ptr;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0x1000;
  uVar4 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/evp_kdf_test.c",0x22e,"libctx = OSSL_LIB_CTX_new()",uVar4);
  if (iVar1 == 0) {
    uVar2 = 0;
    uVar6 = 0;
    lVar5 = 0;
    ptr = (void *)0x0;
    uVar8 = 0;
  }
  else {
    lVar5 = OSSL_PROVIDER_load(uVar4,"legacy");
    if (lVar5 == 0) {
      OSSL_LIB_CTX_free(uVar4);
      uVar2 = test_skip("test/evp_kdf_test.c",0x235,"PBKDF1 only available in legacy provider");
      goto LAB_00106fc2;
    }
    uVar6 = OSSL_PROVIDER_load(uVar4,"default");
    iVar1 = test_ptr("test/evp_kdf_test.c",0x238,"defprov = OSSL_PROVIDER_load(libctx, \"default\")"
                     ,uVar6);
    if (iVar1 == 0) {
      ptr = (void *)0x0;
      uVar8 = 0;
      uVar2 = 0;
    }
    else {
      ptr = (void *)construct_pbkdf1_params_constprop_0(&local_8c);
      uVar2 = test_ptr("test/evp_kdf_test.c",0x244,"params",ptr);
      uVar8 = 0;
      if (uVar2 != 0) {
        uVar7 = EVP_KDF_fetch(uVar4,"PBKDF1",0);
        uVar8 = EVP_KDF_CTX_new(uVar7);
        EVP_KDF_free(uVar7);
        uVar2 = test_ptr("test/evp_kdf_test.c",0x245,
                         "kctx = get_kdfbyname_libctx(libctx, OSSL_KDF_NAME_PBKDF1)",uVar8);
        if (uVar2 != 0) {
          iVar1 = EVP_KDF_CTX_set_params(uVar8,ptr);
          uVar2 = test_true("test/evp_kdf_test.c",0x246,"EVP_KDF_CTX_set_params(kctx, params)",
                            iVar1 != 0);
          if (uVar2 != 0) {
            uVar3 = EVP_KDF_derive(uVar8,local_88,0x41,0);
            iVar1 = test_int_eq("test/evp_kdf_test.c",0x247,
                                "EVP_KDF_derive(kctx, out, sizeof(out), NULL)",&_LC42,uVar3,0);
            uVar2 = (uint)(iVar1 != 0);
          }
        }
      }
    }
  }
  EVP_KDF_CTX_free(uVar8);
  CRYPTO_free(ptr);
  OSSL_PROVIDER_unload(uVar6);
  OSSL_PROVIDER_unload(lVar5);
  OSSL_LIB_CTX_free(uVar4);
LAB_00106fc2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  add_test("test_kdf_pbkdf1",test_kdf_pbkdf1);
  add_test("test_kdf_pbkdf1_key_too_long",test_kdf_pbkdf1_key_too_long);
  add_test("test_kdf_kbkdf_6803_128",test_kdf_kbkdf_6803_128);
  add_test("test_kdf_kbkdf_6803_256",test_kdf_kbkdf_6803_256);
  add_test("test_kdf_kbkdf_invalid_digest",test_kdf_kbkdf_invalid_digest);
  add_test("test_kdf_kbkdf_invalid_mac",test_kdf_kbkdf_invalid_mac);
  add_test("test_kdf_kbkdf_invalid_r",test_kdf_kbkdf_invalid_r);
  add_test("test_kdf_kbkdf_zero_output_size",test_kdf_kbkdf_zero_output_size);
  add_test("test_kdf_kbkdf_empty_key",test_kdf_kbkdf_empty_key);
  add_test("test_kdf_kbkdf_1byte_key",test_kdf_kbkdf_1byte_key);
  add_test("test_kdf_kbkdf_8009_prf1",test_kdf_kbkdf_8009_prf1);
  add_test("test_kdf_kbkdf_8009_prf2",test_kdf_kbkdf_8009_prf2);
  add_test("test_kdf_kbkdf_fixedinfo",test_kdf_kbkdf_fixedinfo);
  iVar1 = fips_provider_version_ge(0,3,1,0);
  if (iVar1 != 0) {
    add_test("test_kdf_kbkdf_kmac",test_kdf_kbkdf_kmac);
  }
  add_test("test_kdf_get_kdf",test_kdf_get_kdf);
  add_test("test_kdf_tls1_prf",test_kdf_tls1_prf);
  add_test("test_kdf_tls1_prf_invalid_digest",test_kdf_tls1_prf_invalid_digest);
  add_test("test_kdf_tls1_prf_zero_output_size",test_kdf_tls1_prf_zero_output_size);
  add_test("test_kdf_tls1_prf_empty_secret",test_kdf_tls1_prf_empty_secret);
  add_test("test_kdf_tls1_prf_1byte_secret",test_kdf_tls1_prf_1byte_secret);
  add_test("test_kdf_tls1_prf_empty_seed",test_kdf_tls1_prf_empty_seed);
  add_test("test_kdf_tls1_prf_1byte_seed",test_kdf_tls1_prf_1byte_seed);
  add_test("test_kdf_hkdf",test_kdf_hkdf);
  add_test("test_kdf_hkdf_invalid_digest",test_kdf_hkdf_invalid_digest);
  add_test("test_kdf_hkdf_zero_output_size",test_kdf_hkdf_zero_output_size);
  add_test("test_kdf_hkdf_empty_key",test_kdf_hkdf_empty_key);
  add_test("test_kdf_hkdf_1byte_key",test_kdf_hkdf_1byte_key);
  add_test("test_kdf_hkdf_empty_salt",test_kdf_hkdf_empty_salt);
  add_test("test_kdf_hkdf_gettables",test_kdf_hkdf_gettables);
  add_test("test_kdf_hkdf_gettables_expandonly",test_kdf_hkdf_gettables_expandonly);
  add_test("test_kdf_hkdf_gettables_no_digest",test_kdf_hkdf_gettables_no_digest);
  add_test("test_kdf_hkdf_derive_set_params_fail",test_kdf_hkdf_derive_set_params_fail);
  add_test("test_kdf_hkdf_set_invalid_mode",test_kdf_hkdf_set_invalid_mode);
  add_test("test_kdf_hkdf_set_ctx_param_fail",test_kdf_hkdf_set_ctx_param_fail);
  add_test("test_kdf_pbkdf2",test_kdf_pbkdf2);
  add_test("test_kdf_pbkdf2_small_output",test_kdf_pbkdf2_small_output);
  add_test("test_kdf_pbkdf2_large_output",test_kdf_pbkdf2_large_output);
  add_test("test_kdf_pbkdf2_small_salt",test_kdf_pbkdf2_small_salt);
  add_test("test_kdf_pbkdf2_small_iterations",test_kdf_pbkdf2_small_iterations);
  add_test("test_kdf_pbkdf2_small_salt_pkcs5",test_kdf_pbkdf2_small_salt_pkcs5);
  add_test("test_kdf_pbkdf2_small_iterations_pkcs5",test_kdf_pbkdf2_small_iterations_pkcs5);
  add_test("test_kdf_pbkdf2_invalid_digest",test_kdf_pbkdf2_invalid_digest);
  add_test("test_kdf_scrypt",test_kdf_scrypt);
  add_test("test_kdf_ss_hash",test_kdf_ss_hash);
  add_test("test_kdf_ss_hmac",test_kdf_ss_hmac);
  add_test("test_kdf_ss_kmac",test_kdf_ss_kmac);
  add_test("test_kdf_sshkdf",test_kdf_sshkdf);
  add_test("test_kdf_x963",test_kdf_x963);
  add_test("test_kdf_x942_asn1",test_kdf_x942_asn1);
  add_test("test_kdf_krb5kdf",test_kdf_krb5kdf);
  add_test("test_kdf_hmac_drbg_settables",test_kdf_hmac_drbg_settables);
  add_test("test_kdf_hmac_drbg_gettables",test_kdf_hmac_drbg_gettables);
  add_test("test_kbkdf_mac_change",test_kbkdf_mac_change);
  return 1;
}



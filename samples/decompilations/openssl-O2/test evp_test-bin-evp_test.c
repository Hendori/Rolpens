
undefined8 void_test_parse(void)

{
  return 0;
}



void openssl_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void pbe_test_cleanup(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x9c8);
  CRYPTO_free(*(void **)(lVar1 + 0x38));
  CRYPTO_free(*(void **)(lVar1 + 0x48));
  CRYPTO_free(*(void **)(lVar1 + 0x58));
  return;
}



void keypair_test_cleanup(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0x9c8));
  *(undefined8 *)(param_1 + 0x9c8) = 0;
  return;
}



undefined8 fips_indicator_cb(undefined8 param_1,undefined8 param_2)

{
  fips_indicator_callback_unapproved_count = fips_indicator_callback_unapproved_count + 1;
  test_info("test/evp_test.c",0x6e,"(Indicator Callback received %s : %s is not approved)",param_1,
            param_2);
  return 1;
}



undefined8 pbe_test_init(long param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = strcmp(param_2,"scrypt");
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    iVar1 = strcmp(param_2,"pbkdf2");
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 3;
      iVar1 = strcmp(param_2,"pkcs12");
      if (iVar1 != 0) {
        test_error("test/evp_test.c",0xc84,"Unknown pbe algorithm %s",param_2);
        return 0;
      }
    }
  }
  puVar2 = (undefined4 *)CRYPTO_zalloc(0x68,"test/evp_test.c",0xc87);
  iVar1 = test_ptr("test/evp_test.c",0xc87,"pdat = OPENSSL_zalloc(sizeof(*pdat))",puVar2);
  if (iVar1 == 0) {
    return 0;
  }
  *puVar2 = uVar3;
  *(undefined4 **)(param_1 + 0x9c8) = puVar2;
  return 1;
}



undefined4 key_unsupported(void)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = ERR_peek_last_error();
  uVar1 = (uint)uVar3;
  if ((uVar3 & 0x80000000) == 0) {
    uVar2 = uVar1 & 0x7fffff;
    if ((uVar2 != 0x9c && uVar2 != 0x72 || (char)(uVar3 >> 0x17) != '\x06') &&
       ((uVar1 & 0x7fffff) != 0x8010c)) {
      if (((uint)(uVar3 >> 0x17) & 0xff) != 0x10) {
        return 0;
      }
      if ((uVar2 != 0x81) && (uVar2 != 0x8d)) {
        return 0;
      }
    }
  }
  else if ((uVar1 & 0x7fffffff) != 0x8010c) {
    return 0;
  }
  ERR_clear_error();
  return 1;
}



undefined8 prov_available(byte *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort **ppuVar3;
  byte *pbVar4;
  
  do {
    ppuVar3 = __ctype_b_loc();
    while( true ) {
      uVar1 = (*ppuVar3)[*param_1];
      if ((uVar1 & 0x2000) == 0) break;
      param_1 = param_1 + 1;
    }
    pbVar4 = param_1;
    if (*param_1 == 0) {
      return 0;
    }
    while ((uVar1 & 0x2000) == 0) {
      if (pbVar4[1] == 0) {
        iVar2 = OSSL_PROVIDER_available(libctx,param_1);
        if (iVar2 == 0) {
          return 0;
        }
        return 1;
      }
      uVar1 = (*ppuVar3)[pbVar4[1]];
      pbVar4 = pbVar4 + 1;
    }
    *pbVar4 = 0;
    iVar2 = OSSL_PROVIDER_available(libctx,param_1);
  } while (iVar2 == 0);
  return 1;
}



undefined8 encode_test_init(long param_1,char *param_2)

{
  int iVar1;
  void *ptr;
  undefined8 uVar2;
  char *pcVar3;
  
  ptr = (void *)CRYPTO_zalloc(0x28,"test/evp_test.c",0xd08);
  iVar1 = test_ptr("test/evp_test.c",0xd08,"edata = OPENSSL_zalloc(sizeof(*edata))",ptr);
  if (iVar1 == 0) {
LAB_00100430:
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(param_2,"canonical");
    if (iVar1 == 0) {
      *(undefined4 *)((long)ptr + 0x20) = 0;
    }
    else {
      iVar1 = strcmp(param_2,"valid");
      if (iVar1 != 0) {
        iVar1 = strcmp(param_2,"invalid");
        if (iVar1 == 0) {
          *(undefined4 *)((long)ptr + 0x20) = 2;
          pcVar3 = CRYPTO_strdup("DECODE_ERROR","test/evp_test.c",0xd10);
          *(char **)(param_1 + 0x9b8) = pcVar3;
          iVar1 = test_ptr("test/evp_test.c",0xd10,
                           "t->expected_err = OPENSSL_strdup(\"DECODE_ERROR\")",pcVar3);
          if (iVar1 != 0) goto LAB_00100399;
        }
        else {
          test_error("test/evp_test.c",0xd13,
                     "Bad encoding: %s. Should be one of {canonical, valid, invalid}",param_2);
        }
        CRYPTO_free(ptr);
        goto LAB_00100430;
      }
      *(undefined4 *)((long)ptr + 0x20) = 1;
    }
LAB_00100399:
    *(void **)(param_1 + 0x9c8) = ptr;
    uVar2 = 1;
  }
  return uVar2;
}



undefined8
ctrl2params(long param_1,undefined8 param_2,undefined1 *param_3,long param_4,ulong param_5,
           long *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  lVar2 = *param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = settable_ctx_params;
  if (param_3 != (undefined1 *)0x0) {
    puVar5 = param_3;
  }
  iVar3 = OPENSSL_sk_num(param_2);
  if ((ulong)(iVar3 + lVar2) < param_5) {
    iVar3 = 0;
    while( true ) {
      iVar4 = OPENSSL_sk_num(param_2);
      if (iVar4 <= iVar3) break;
      pcVar6 = (char *)OPENSSL_sk_value(param_2,iVar3);
      pcVar6 = CRYPTO_strdup(pcVar6,"test/evp_test.c",0x106);
      iVar4 = test_ptr("test/evp_test.c",0x106,"tmpkey = OPENSSL_strdup(value)",pcVar6);
      if (iVar4 == 0) {
LAB_00100628:
        pcVar6 = "ERR_PARAM_ERROR";
        goto LAB_001005e7;
      }
      pcVar7 = strchr(pcVar6,0x3a);
      if (pcVar7 == (char *)0x0) {
LAB_00100618:
        CRYPTO_free(pcVar6);
        goto LAB_00100628;
      }
      *pcVar7 = '\0';
      sVar8 = strlen(pcVar7 + 1);
      iVar4 = OSSL_PARAM_allocate_from_text
                        (param_4 + *param_6 * 0x28,puVar5,pcVar6,pcVar7 + 1,sVar8,0);
      if (iVar4 == 0) goto LAB_00100618;
      *param_6 = *param_6 + 1;
      iVar3 = iVar3 + 1;
      CRYPTO_free(pcVar6);
    }
    puVar1 = (undefined8 *)(param_4 + *param_6 * 0x28);
    OSSL_PARAM_construct_end(&local_78);
    *puVar1 = local_78;
    puVar1[1] = uStack_70;
    puVar1[2] = local_68;
    puVar1[3] = uStack_60;
    puVar1[4] = local_58;
    uVar9 = 1;
  }
  else {
    pcVar6 = "ERR_TOO_MANY_PARAMETERS";
LAB_001005e7:
    *(char **)(param_1 + 0x9a8) = pcVar6;
    uVar9 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pkey_kdf_test_cleanup(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  CRYPTO_free((void *)puVar1[1]);
  EVP_PKEY_CTX_free((EVP_PKEY_CTX *)*puVar1);
  return;
}



void pkey_fromdata_test_cleanup(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  OPENSSL_sk_pop_free(puVar1[10],openssl_free);
  EVP_PKEY_CTX_free((EVP_PKEY_CTX *)*puVar1);
  return;
}



void kem_test_cleanup(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  OPENSSL_sk_pop_free(puVar1[6],openssl_free);
  CRYPTO_free((void *)puVar1[2]);
  CRYPTO_free((void *)puVar1[4]);
  CRYPTO_free((void *)puVar1[7]);
  CRYPTO_free((void *)puVar1[8]);
  CRYPTO_free((void *)puVar1[9]);
  CRYPTO_free((void *)puVar1[0xb]);
  CRYPTO_free((void *)puVar1[0xd]);
  CRYPTO_free((void *)puVar1[0xf]);
  EVP_PKEY_CTX_free((EVP_PKEY_CTX *)*puVar1);
  return;
}



void keygen_test_cleanup(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  OPENSSL_sk_pop_free(puVar1[3],openssl_free);
  OPENSSL_sk_pop_free(puVar1[4],openssl_free);
  CRYPTO_free((void *)puVar1[2]);
  CRYPTO_free((void *)*puVar1);
  CRYPTO_free((void *)puVar1[1]);
  CRYPTO_free(*(void **)(param_1 + 0x9c8));
  *(undefined8 *)(param_1 + 0x9c8) = 0;
  return;
}



undefined8 pkey_fromdata_test_init(long param_1,undefined8 param_2)

{
  int iVar1;
  long *ptr;
  EVP_PKEY_CTX *ctx;
  long lVar2;
  
  ptr = (long *)CRYPTO_zalloc(0x68,"test/evp_test.c",0xac9);
  iVar1 = test_ptr("test/evp_test.c",0xac9,"kdata = OPENSSL_zalloc(sizeof(*kdata))",ptr);
  if (iVar1 != 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,param_2,&_LC18);
    *ptr = (long)ctx;
    if (ctx != (EVP_PKEY_CTX *)0x0) {
      iVar1 = EVP_PKEY_fromdata_init();
      if (0 < iVar1) {
        lVar2 = OPENSSL_sk_new_null();
        ptr[10] = lVar2;
        if (lVar2 != 0) {
          *(long **)(param_1 + 0x9c8) = ptr;
          return 1;
        }
      }
      ctx = (EVP_PKEY_CTX *)*ptr;
    }
    EVP_PKEY_CTX_free(ctx);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined8 kem_test_init(long param_1,char *param_2)

{
  int iVar1;
  void *ptr;
  char *pcVar2;
  undefined8 uVar3;
  
  ptr = (void *)CRYPTO_zalloc(0x88,"test/evp_test.c",0x86e);
  iVar1 = test_ptr("test/evp_test.c",0x86e,"kdata = OPENSSL_zalloc(sizeof(*kdata))",ptr);
  if (iVar1 != 0) {
    pcVar2 = CRYPTO_strdup(param_2,"test/evp_test.c",0x86f);
    *(char **)((long)ptr + 0x38) = pcVar2;
    iVar1 = test_ptr("test/evp_test.c",0x86f,"kdata->algname = OPENSSL_strdup(alg)",pcVar2);
    if (iVar1 != 0) {
      uVar3 = OPENSSL_sk_new_null();
      *(void **)(param_1 + 0x9c8) = ptr;
      *(undefined8 *)((long)ptr + 0x30) = uVar3;
      return 1;
    }
  }
  EVP_PKEY_free((EVP_PKEY *)0x0);
  CRYPTO_free(ptr);
  return 0;
}



undefined8 keygen_test_init(long param_1,char *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  char *pcVar3;
  
  pauVar1 = (undefined1 (*) [16])CRYPTO_zalloc(0x28,"test/evp_test.c",0x10c5);
  uVar2 = test_ptr("test/evp_test.c",0x10c5,"data = OPENSSL_zalloc(sizeof(*data))",pauVar1);
  if ((int)uVar2 != 0) {
    *pauVar1 = (undefined1  [16])0x0;
    uVar2 = OPENSSL_sk_new_null();
    *(undefined8 *)(pauVar1[1] + 8) = uVar2;
    uVar2 = OPENSSL_sk_new_null();
    *(undefined8 *)pauVar1[2] = uVar2;
    pcVar3 = CRYPTO_strdup(param_2,"test/evp_test.c",0x10cb);
    *(undefined1 (**) [16])(param_1 + 0x9c8) = pauVar1;
    *(undefined8 *)(param_1 + 0x9a8) = 0;
    *(char **)pauVar1[1] = pcVar3;
    uVar2 = 1;
  }
  return uVar2;
}



void pkey_test_cleanup(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  OPENSSL_sk_pop_free(puVar1[9],openssl_free);
  OPENSSL_sk_pop_free(puVar1[10],openssl_free);
  CRYPTO_free((void *)puVar1[5]);
  CRYPTO_free((void *)puVar1[7]);
  EVP_PKEY_CTX_free((EVP_PKEY_CTX *)*puVar1);
  EVP_SIGNATURE_free(puVar1[1]);
  return;
}



undefined8
memory_err_compare(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(char **)(param_1 + 0x9b8) == (char *)0x0) ||
     (iVar1 = strcmp(*(char **)(param_1 + 0x9b8),param_2), iVar1 != 0)) {
    uVar2 = test_mem_eq("test/evp_test.c",0x14f,"expected",&_LC21,param_3,param_4,param_5,param_6);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  else {
    iVar1 = test_mem_ne("test/evp_test.c",0x14d,"expected",&_LC21,param_3,param_4,param_5,param_6);
    if (iVar1 == 0) {
      return 1;
    }
  }
  *(char **)(param_1 + 0x9a8) = param_2;
  return 0;
}



undefined8 pbe_test_run(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  uchar *out;
  undefined8 uVar5;
  EVP_MD *md_type;
  
  piVar1 = *(int **)(param_1 + 0x9c8);
  uVar4 = OSSL_LIB_CTX_set0_default(libctx);
  out = (uchar *)CRYPTO_malloc((int)*(undefined8 *)(piVar1 + 0x18),"test/evp_test.c",0xcb6);
  iVar3 = test_ptr("test/evp_test.c",0xcb6,"key = OPENSSL_malloc(expected->key_len)",out);
  uVar2 = propquery;
  if (iVar3 == 0) {
    *(char **)(param_1 + 0x9a8) = "INTERNAL_ERROR";
LAB_00100c5f:
    md_type = (EVP_MD *)0x0;
    goto LAB_00100c12;
  }
  iVar3 = *piVar1;
  if (iVar3 == 2) {
    iVar3 = PKCS5_PBKDF2_HMAC(*(char **)(piVar1 + 0xe),(int)*(undefined8 *)(piVar1 + 0x10),
                              *(uchar **)(piVar1 + 0x12),(int)*(undefined8 *)(piVar1 + 0x14),
                              piVar1[0xb],*(EVP_MD **)(piVar1 + 0xc),
                              (int)*(undefined8 *)(piVar1 + 0x18),out);
    if (iVar3 == 0) {
      *(char **)(param_1 + 0x9a8) = "PBKDF2_ERROR";
      goto LAB_00100c5f;
    }
LAB_00100be2:
    md_type = (EVP_MD *)0x0;
  }
  else {
    if (iVar3 == 1) {
      iVar3 = EVP_PBE_scrypt(*(undefined8 *)(piVar1 + 0xe),*(undefined8 *)(piVar1 + 0x10),
                             *(undefined8 *)(piVar1 + 0x12),*(undefined8 *)(piVar1 + 0x14),
                             *(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar1 + 4),
                             *(undefined8 *)(piVar1 + 6),*(undefined8 *)(piVar1 + 8),out,
                             *(undefined8 *)(piVar1 + 0x18));
      if (iVar3 == 0) {
        *(char **)(param_1 + 0x9a8) = "SCRYPT_ERROR";
        goto LAB_00100c5f;
      }
      goto LAB_00100be2;
    }
    if (iVar3 != 3) goto LAB_00100be2;
    uVar5 = EVP_MD_get0_name(*(undefined8 *)(piVar1 + 0xc));
    md_type = (EVP_MD *)EVP_MD_fetch(libctx,uVar5,uVar2);
    if (md_type == (EVP_MD *)0x0) {
      *(char **)(param_1 + 0x9a8) = "PKCS12_ERROR";
      goto LAB_00100c5f;
    }
    iVar3 = PKCS12_key_gen_uni(*(uchar **)(piVar1 + 0xe),(int)*(undefined8 *)(piVar1 + 0x10),
                               *(uchar **)(piVar1 + 0x12),(int)*(undefined8 *)(piVar1 + 0x14),
                               piVar1[10],piVar1[0xb],(int)*(undefined8 *)(piVar1 + 0x18),out,
                               md_type);
    if (iVar3 == 0) {
      *(char **)(param_1 + 0x9a8) = "PKCS12_ERROR";
      goto LAB_00100c12;
    }
  }
  iVar3 = memory_err_compare(param_1,"KEY_MISMATCH",*(undefined8 *)(piVar1 + 0x16),
                             *(undefined8 *)(piVar1 + 0x18),out,*(undefined8 *)(piVar1 + 0x18));
  if (iVar3 != 0) {
    *(undefined8 *)(param_1 + 0x9a8) = 0;
  }
LAB_00100c12:
  EVP_MD_free(md_type);
  CRYPTO_free(out);
  OSSL_LIB_CTX_set0_default(uVar4);
  return 1;
}



void digest_test_cleanup(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x9c8);
  OPENSSL_sk_pop_free(*(undefined8 *)(lVar1 + 0x10),evp_test_buffer_free);
  CRYPTO_free(*(void **)(lVar1 + 0x18));
  EVP_MD_free(*(undefined8 *)(lVar1 + 8));
  return;
}



undefined8 digest_test_init(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  EVP_MD *pEVar4;
  undefined8 *puVar5;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC29);
  if (iVar1 == 0) {
    test_info("test/evp_test.c",0x2a0,"skipping, \'%s\' is disabled",param_2);
    *(undefined4 *)(param_1 + 0x998) = 1;
    return 1;
  }
  lVar2 = EVP_MD_fetch(libctx,param_2,propquery);
  if (lVar2 == 0) {
    pEVar4 = EVP_get_digestbyname(param_2);
    if (pEVar4 != (EVP_MD *)0x0) {
      puVar5 = (undefined8 *)CRYPTO_zalloc(0x38,"test/evp_test.c",0x2a8);
      iVar1 = test_ptr("test/evp_test.c",0x2a8,"mdat = OPENSSL_zalloc(sizeof(*mdat))",puVar5);
      if (iVar1 != 0) {
        *(undefined8 **)(param_1 + 0x9c8) = puVar5;
        *puVar5 = pEVar4;
        puVar5[1] = 0;
        puVar5[5] = 0;
        return 1;
      }
    }
  }
  else {
    plVar3 = (long *)CRYPTO_zalloc(0x38,"test/evp_test.c",0x2a8);
    iVar1 = test_ptr("test/evp_test.c",0x2a8,"mdat = OPENSSL_zalloc(sizeof(*mdat))",plVar3);
    if (iVar1 != 0) {
      *(long **)(param_1 + 0x9c8) = plVar3;
      plVar3[5] = 0;
      *plVar3 = lVar2;
      plVar3[1] = lVar2;
      test_info("test/evp_test.c",0x2b0,"%s is fetched",param_2);
      return 1;
    }
  }
  return 0;
}



undefined8 parse_uint64(byte *param_1,ulong *param_2)

{
  int iVar1;
  ushort **ppuVar2;
  ulong uVar3;
  byte *pbVar4;
  
  iVar1 = test_true("test/evp_test.c",0xc2c,&_LC33,*param_1 != 0);
  if (iVar1 == 0) {
    test_info("test/evp_test.c",0xc2d,"Invalid empty integer value");
  }
  else {
    *param_2 = 0;
    uVar3 = 0;
    pbVar4 = param_1;
    if (*param_1 == 0) {
      return 1;
    }
    do {
      *param_2 = uVar3 * 10;
      ppuVar2 = __ctype_b_loc();
      iVar1 = test_true("test/evp_test.c",0xc36,"isdigit((unsigned char)*p)",
                        (*ppuVar2)[*pbVar4] >> 0xb & 1);
      if (iVar1 == 0) {
        test_error("test/evp_test.c",0xc37,"Invalid character in string %s",param_1);
        return 0xffffffff;
      }
      uVar3 = (long)((char)*pbVar4 + -0x30) + *param_2;
      *param_2 = uVar3;
      if (pbVar4[1] == 0) {
        return 1;
      }
      pbVar4 = pbVar4 + 1;
    } while (uVar3 < 0x199999999999999a);
    test_error("test/evp_test.c",0xc32,"Integer overflow in string %s",param_1);
  }
  return 0xffffffff;
}



void digestsigver_test_cleanup(long param_1)

{
  void *ptr;
  
  ptr = *(void **)(param_1 + 0x9c8);
  OPENSSL_sk_pop_free(*(undefined8 *)((long)ptr + 0x58),openssl_free);
  OPENSSL_sk_pop_free(*(undefined8 *)((long)ptr + 0x60),openssl_free);
  EVP_MD_CTX_free(*(undefined8 *)((long)ptr + 0x10));
  OPENSSL_sk_pop_free(*(undefined8 *)((long)ptr + 0x20),evp_test_buffer_free);
  CRYPTO_free(*(void **)((long)ptr + 0x28));
  CRYPTO_free(*(void **)((long)ptr + 0x38));
  CRYPTO_free(ptr);
  *(undefined8 *)(param_1 + 0x9c8) = 0;
  return;
}



undefined8 digestsigver_test_init(long param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  EVP_MD *pEVar2;
  undefined4 *ptr;
  undefined8 uVar3;
  
  iVar1 = strcmp(param_2,"NULL");
  if (iVar1 == 0) {
    pEVar2 = (EVP_MD *)0x0;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC29);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x998) = 1;
      return 1;
    }
    pEVar2 = EVP_get_digestbyname(param_2);
    if (pEVar2 == (EVP_MD *)0x0) {
      return 0;
    }
  }
  ptr = (undefined4 *)CRYPTO_zalloc(0x68,"test/evp_test.c",0x11a4);
  iVar1 = test_ptr("test/evp_test.c",0x11a4,"mdat = OPENSSL_zalloc(sizeof(*mdat))",ptr);
  if (iVar1 != 0) {
    uVar3 = OPENSSL_sk_new_null();
    *(undefined8 *)(ptr + 0x16) = uVar3;
    uVar3 = OPENSSL_sk_new_null();
    *(EVP_MD **)(ptr + 2) = pEVar2;
    *(undefined8 *)(ptr + 0x18) = uVar3;
    uVar3 = EVP_MD_CTX_new();
    *(undefined8 *)(ptr + 4) = uVar3;
    iVar1 = test_ptr("test/evp_test.c",0x11a9,"mdat->ctx = EVP_MD_CTX_new()",uVar3);
    if (iVar1 != 0) {
      *ptr = param_3;
      ptr[1] = param_4;
      *(undefined4 **)(param_1 + 0x9c8) = ptr;
      return 1;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



void oneshot_digestverify_test_init(undefined8 param_1,undefined8 param_2)

{
  digestsigver_test_init(param_1,param_2,1,1);
  return;
}



void oneshot_digestsign_test_init(undefined8 param_1,undefined8 param_2)

{
  digestsigver_test_init(param_1,param_2,0,1);
  return;
}



void digestverify_test_init(undefined8 param_1,undefined8 param_2)

{
  digestsigver_test_init(param_1,param_2,1,0);
  return;
}



void digestsign_test_init(undefined8 param_1,undefined8 param_2)

{
  digestsigver_test_init(param_1,param_2,0,0);
  return;
}



void cipher_test_cleanup(long param_1)

{
  long lVar1;
  void *ptr;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x9c8);
  puVar2 = (undefined8 *)(lVar1 + 0x70);
  CRYPTO_free(*(void **)(lVar1 + 0x18));
  CRYPTO_free(*(void **)(lVar1 + 0x30));
  CRYPTO_free(*(void **)(lVar1 + 0x38));
  CRYPTO_free(*(void **)(lVar1 + 0x60));
  CRYPTO_free(*(void **)(lVar1 + 0x50));
  do {
    ptr = (void *)*puVar2;
    puVar2 = puVar2 + 1;
    CRYPTO_free(ptr);
  } while (puVar2 != (undefined8 *)(lVar1 + 0x90));
  CRYPTO_free(*(void **)(lVar1 + 0xb8));
  CRYPTO_free(*(void **)(lVar1 + 0xd8));
  EVP_CIPHER_free(*(undefined8 *)(lVar1 + 8));
  OPENSSL_sk_pop_free(*(undefined8 *)(lVar1 + 0xf0),openssl_free);
  return;
}



void mac_test_cleanup(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  EVP_MAC_free(puVar1[1]);
  CRYPTO_free((void *)*puVar1);
  OPENSSL_sk_pop_free(puVar1[0x11],openssl_free);
  CRYPTO_free((void *)puVar1[3]);
  CRYPTO_free((void *)puVar1[4]);
  CRYPTO_free((void *)puVar1[6]);
  CRYPTO_free((void *)puVar1[0xc]);
  CRYPTO_free((void *)puVar1[0xe]);
  CRYPTO_free((void *)puVar1[8]);
  CRYPTO_free((void *)puVar1[10]);
  return;
}



undefined8 mac_test_init(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *ptr;
  char *pcVar3;
  undefined8 uVar4;
  size_t sVar5;
  size_t sVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  lVar2 = EVP_MAC_fetch(libctx,param_2,propquery);
  if (lVar2 == 0) {
    sVar5 = strlen(param_2);
    if (0xc < sVar5) {
      iVar1 = strcmp(param_2 + (sVar5 - 0xc)," by EVP_PKEY");
      if (iVar1 == 0) {
        sVar5 = sVar5 - 0xc;
      }
    }
    sVar6 = 5;
    if (sVar5 < 6) {
      sVar6 = sVar5;
    }
    iVar1 = strncmp(param_2,"HMAC",sVar6);
    if (iVar1 == 0) {
      uVar7 = 0x357;
    }
    else {
      iVar1 = strncmp(param_2,"CMAC",sVar6);
      if (iVar1 == 0) {
        uVar7 = 0x37e;
      }
      else {
        sVar6 = 9;
        if (sVar5 < 10) {
          sVar6 = sVar5;
        }
        iVar1 = strncmp(param_2,"Poly1305",sVar6);
        if (iVar1 == 0) {
          uVar7 = 0x425;
        }
        else {
          uVar7 = 0x426;
          sVar6 = 8;
          if (sVar5 < 9) {
            sVar6 = sVar5;
          }
          iVar1 = strncmp(param_2,"SipHash",sVar6);
          if (iVar1 != 0) {
            return 0;
          }
        }
      }
    }
  }
  ptr = (undefined8 *)CRYPTO_zalloc(0x98,"test/evp_test.c",0x666);
  iVar1 = test_ptr("test/evp_test.c",0x666,"mdat = OPENSSL_zalloc(sizeof(*mdat))",ptr);
  if (iVar1 != 0) {
    *(undefined4 *)(ptr + 2) = uVar7;
    pcVar3 = CRYPTO_strdup(param_2,"test/evp_test.c",0x66a);
    *ptr = pcVar3;
    iVar1 = test_ptr("test/evp_test.c",0x66a,"mdat->mac_name = OPENSSL_strdup(alg)",pcVar3);
    if (iVar1 == 0) {
      CRYPTO_free(ptr);
    }
    else {
      ptr[1] = lVar2;
      uVar4 = OPENSSL_sk_new_null();
      ptr[0x11] = uVar4;
      iVar1 = test_ptr("test/evp_test.c",0x670,"mdat->controls = sk_OPENSSL_STRING_new_null()",uVar4
                      );
      if (iVar1 != 0) {
        ptr[0x12] = 0xffffffffffffffff;
        *(undefined8 **)(param_1 + 0x9c8) = ptr;
        return 1;
      }
      CRYPTO_free((void *)*ptr);
      CRYPTO_free(ptr);
    }
  }
  return 0;
}



undefined8 keypair_test_run(long param_1)

{
  int iVar1;
  
  if ((**(long **)(param_1 + 0x9c8) != 0) && ((*(long **)(param_1 + 0x9c8))[1] != 0)) {
    iVar1 = EVP_PKEY_eq();
    if (iVar1 == 1) {
      *(undefined8 *)(param_1 + 0x9a8) = 0;
      return 1;
    }
    if (iVar1 == 0) {
      *(char **)(param_1 + 0x9a8) = "KEYPAIR_MISMATCH";
      return 1;
    }
    if (iVar1 != -1) {
      if (iVar1 == -2) {
        *(char **)(param_1 + 0x9a8) = "UNSUPPORTED_KEY_COMPARISON";
        return 1;
      }
      test_error("test/evp_test.c",0x1099,"Unexpected error in key comparison");
      return 0;
    }
  }
  *(char **)(param_1 + 0x9a8) = "KEYPAIR_TYPE_MISMATCH";
  return 1;
}



undefined8 pkey_kdf_test_init(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *ptr;
  EVP_PKEY_CTX *ctx;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x18,"test/evp_test.c",0xfdd);
  iVar1 = test_ptr("test/evp_test.c",0xfdd,"kdata = OPENSSL_zalloc(sizeof(*kdata))",ptr);
  if (iVar1 != 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,param_2,propquery);
    *ptr = ctx;
    if (ctx != (EVP_PKEY_CTX *)0x0) {
      iVar1 = EVP_PKEY_derive_init(ctx);
      if (0 < iVar1) {
        *(undefined8 **)(param_1 + 0x9c8) = ptr;
        return 1;
      }
      ctx = (EVP_PKEY_CTX *)*ptr;
    }
    EVP_PKEY_CTX_free(ctx);
    CRYPTO_free(ptr);
  }
  return 0;
}



void kdf_test_cleanup(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x9c8);
  OPENSSL_sk_pop_free(puVar2[0x68],openssl_free);
  if (puVar2[3] != 0) {
    plVar3 = puVar2 + 3;
    do {
      plVar1 = plVar3 + 2;
      plVar3 = plVar3 + 5;
      CRYPTO_free((void *)*plVar1);
    } while (*plVar3 != 0);
  }
  CRYPTO_free((void *)puVar2[1]);
  EVP_KDF_CTX_free(*puVar2);
  return;
}



undefined8 kdf_test_init(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long *ptr;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (long *)CRYPTO_zalloc(0x348,"test/evp_test.c",0xef2);
  iVar2 = test_ptr("test/evp_test.c",0xef2,"kdata = OPENSSL_zalloc(sizeof(*kdata))",ptr);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    ptr[0x67] = (long)(ptr + 3);
    OSSL_PARAM_construct_end(&local_68);
    uVar1 = libctx;
    uVar5 = propquery;
    ptr[3] = local_68;
    ptr[4] = lStack_60;
    ptr[5] = local_58;
    ptr[6] = lStack_50;
    ptr[7] = local_48;
    lVar3 = EVP_KDF_fetch(uVar1,param_2,uVar5);
    if (lVar3 == 0) {
      CRYPTO_free(ptr);
      uVar5 = 0;
    }
    else {
      lVar4 = EVP_KDF_CTX_new(lVar3);
      *ptr = lVar4;
      EVP_KDF_free(lVar3);
      if (*ptr == 0) {
        CRYPTO_free(ptr);
        uVar5 = 0;
      }
      else {
        *(long **)(param_1 + 0x9c8) = ptr;
        lVar3 = OPENSSL_sk_new_null();
        ptr[0x68] = lVar3;
        uVar5 = 1;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void encode_test_cleanup(long param_1)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = *(undefined1 (**) [16])(param_1 + 0x9c8);
  CRYPTO_free(*(void **)*pauVar1);
  CRYPTO_free(*(void **)pauVar1[1]);
  *(undefined8 *)pauVar1[2] = 0;
  *pauVar1 = (undefined1  [16])0x0;
  pauVar1[1] = (undefined1  [16])0x0;
  return;
}



undefined8 encode_test_run(long param_1)

{
  size_t __n;
  long *plVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int extraout_EAX;
  int extraout_EAX_00;
  int iVar5;
  EVP_ENCODE_CTX *ctx;
  void *__s;
  EVP_ENCODE_CTX *ctx_00;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  uchar *local_80;
  int local_44;
  long local_40;
  
  plVar1 = *(long **)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_ENCODE_CTX *)EVP_ENCODE_CTX_new();
  iVar3 = test_ptr("test/evp_test.c",0xd3c,"decode_ctx = EVP_ENCODE_CTX_new()",ctx);
  if (iVar3 == 0) {
    ctx_00 = (EVP_ENCODE_CTX *)0x0;
    __s = (void *)0x0;
    local_80 = (uchar *)0x0;
    *(char **)(param_1 + 0x9a8) = "INTERNAL_ERROR";
    goto LAB_00101b20;
  }
  if ((int)plVar1[4] == 0) {
    ctx_00 = (EVP_ENCODE_CTX *)EVP_ENCODE_CTX_new();
    iVar3 = test_ptr("test/evp_test.c",0xd43,"encode_ctx = EVP_ENCODE_CTX_new()",ctx_00);
    if (iVar3 == 0) {
      local_80 = (uchar *)0x0;
      __s = (void *)0x0;
      goto LAB_00101b20;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = plVar1[1] + 2;
    local_80 = (uchar *)CRYPTO_malloc(((SUB164(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffe)
                                       + 0x29 + (int)((ulong)plVar1[1] / 0x30)) * 2,
                                      "test/evp_test.c",0xd45);
    iVar3 = test_ptr("test/evp_test.c",0xd44,
                     "encode_out = OPENSSL_malloc(EVP_ENCODE_LENGTH(expected->input_len))",local_80)
    ;
    if (iVar3 != 0) {
      iVar3 = 0;
      EVP_EncodeInit(ctx_00);
      uVar8 = plVar1[1];
      lVar6 = 0;
      do {
        if (data_chunk_size == 0) {
          EVP_EncodeUpdate(ctx_00,local_80,&local_44,(uchar *)(*plVar1 + lVar6),(int)uVar8);
          iVar5 = test_true("test/evp_test.c",0xd52,
                            "EVP_EncodeUpdate(encode_ctx, encode_out, &chunk_len, expected->input + donelen, current_len)"
                            ,extraout_EAX_00 != 0);
          if (iVar5 == 0) goto LAB_00101e26;
          iVar3 = iVar3 + local_44;
          break;
        }
        uVar7 = (long)data_chunk_size;
        if (uVar8 < (ulong)(long)data_chunk_size) {
          uVar7 = uVar8;
        }
        EVP_EncodeUpdate(ctx_00,local_80,&local_44,(uchar *)(*plVar1 + lVar6),(int)uVar7);
        iVar5 = test_true("test/evp_test.c",0xd52,
                          "EVP_EncodeUpdate(encode_ctx, encode_out, &chunk_len, expected->input + donelen, current_len)"
                          ,extraout_EAX != 0);
        if (iVar5 == 0) goto LAB_00101e26;
        lVar6 = lVar6 + uVar7;
        iVar3 = iVar3 + local_44;
        uVar8 = uVar8 - uVar7;
      } while (uVar8 != 0);
      EVP_EncodeFinal(ctx_00,local_80 + iVar3,&local_44);
      iVar3 = memory_err_compare(param_1,"BAD_ENCODING",plVar1[2],plVar1[3],local_80,
                                 (long)(iVar3 + local_44));
      if (iVar3 != 0) goto LAB_00101ad3;
    }
LAB_00101e26:
    __s = (void *)0x0;
  }
  else {
    local_80 = (uchar *)0x0;
    ctx_00 = (EVP_ENCODE_CTX *)0x0;
LAB_00101ad3:
    __n = (plVar1[3] + 3U >> 2) * 3 + 0x50;
    iVar5 = (int)__n;
    __s = CRYPTO_malloc(iVar5,"test/evp_test.c",0xd65);
    iVar3 = test_ptr("test/evp_test.c",0xd65,"decode_out = OPENSSL_malloc(decode_length)",__s);
    if (iVar3 != 0) {
      iVar3 = 0;
      memset(__s,0xff,__n);
      EVP_DecodeInit(ctx);
      uVar8 = plVar1[3];
      lVar6 = 0;
      do {
        if (data_chunk_size == 0) {
          iVar4 = EVP_DecodeUpdate(ctx,(uchar *)((long)iVar3 + (long)__s),&local_44,
                                   (uchar *)(plVar1[2] + lVar6),(int)uVar8);
          if (iVar4 < 0) goto LAB_00101cb7;
          iVar3 = iVar3 + local_44;
          break;
        }
        uVar7 = (long)data_chunk_size;
        if (uVar8 < (ulong)(long)data_chunk_size) {
          uVar7 = uVar8;
        }
        iVar4 = EVP_DecodeUpdate(ctx,(uchar *)((long)iVar3 + (long)__s),&local_44,
                                 (uchar *)(plVar1[2] + lVar6),(int)uVar7);
        if (iVar4 < 0) goto LAB_00101cb7;
        lVar6 = lVar6 + uVar7;
        iVar3 = iVar3 + local_44;
        uVar8 = uVar8 - uVar7;
      } while (uVar8 != 0);
      iVar4 = EVP_DecodeFinal(ctx,(uchar *)((long)iVar3 + (long)__s),&local_44);
      if (iVar4 == 1) {
        iVar3 = iVar3 + local_44;
        if (((int)plVar1[4] == 2) ||
           (iVar4 = memory_err_compare(param_1,"BAD_DECODING",*plVar1,plVar1[1],__s,(long)iVar3),
           iVar4 != 0)) {
          lVar6 = (long)iVar3;
          while (iVar3 < iVar5) {
            if (*(char *)((long)__s + lVar6) != -1) {
              *(char **)(param_1 + 0x9a8) = "BAD_DECODING";
              goto LAB_00101b20;
            }
            lVar6 = lVar6 + 1;
            iVar3 = (int)lVar6;
          }
          *(undefined8 *)(param_1 + 0x9a8) = 0;
        }
        else {
          *(char **)(param_1 + 0x9a8) = "BAD_DECODING";
        }
      }
      else {
LAB_00101cb7:
        *(char **)(param_1 + 0x9a8) = "DECODE_ERROR";
      }
    }
  }
LAB_00101b20:
  CRYPTO_free(local_80);
  CRYPTO_free(__s);
  EVP_ENCODE_CTX_free(ctx);
  EVP_ENCODE_CTX_free(ctx_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_duplicate_md_ctx(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_36;
  undefined2 local_32;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_36 = 0x63756f74;
  local_32 = 0x68;
  iVar1 = test_ptr("test/evp_test.c",0x2e3,&_LC58,param_2);
  if (iVar1 != 0) {
    iVar1 = EVP_DigestFinalXOF(param_2,&local_36,0);
    if (iVar1 != 0) {
      iVar1 = test_str_eq("test/evp_test.c",0x2ea,&_LC62,"\"touch\"",&local_36,"touch");
      if (iVar1 != 0) {
        EVP_MD_CTX_free(param_2);
        uVar2 = 1;
        goto LAB_00101ff6;
      }
    }
    EVP_MD_CTX_free(param_2);
    *(char **)(param_1 + 0x9a8) = "DIGESTFINALXOF_ERROR";
  }
  uVar2 = 0;
LAB_00101ff6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool cipher_test_valid_fragmentation(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)((long)param_1 + 0x14);
  if ((iVar1 == 7) || (iVar1 == 2)) {
    return false;
  }
  uVar3 = *param_1;
  if (iVar1 == -1) {
    iVar1 = EVP_CIPHER_get_mode(uVar3);
    if (iVar1 == 0) {
      return false;
    }
    uVar3 = *param_1;
  }
  uVar2 = EVP_CIPHER_get_flags(uVar3);
  if (((((uVar2 & 0x4000) == 0) && (iVar1 = EVP_CIPHER_get_mode(*param_1), iVar1 != 0x10004)) &&
      (iVar1 = EVP_CIPHER_get_mode(*param_1), iVar1 != 0x10005)) &&
     (iVar1 = EVP_CIPHER_get_mode(*param_1), iVar1 != 0x10001)) {
    iVar1 = EVP_CIPHER_get_mode(*param_1);
    return iVar1 != 0x10002;
  }
  return false;
}



undefined8 evp_test_buffer_set_count(char *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = strtol(param_1,(char **)0x0,10);
  if ((0 < (int)lVar2) && (param_2 != 0)) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 != 0) {
      iVar1 = OPENSSL_sk_num(param_2);
      lVar3 = OPENSSL_sk_value(param_2,iVar1 + -1);
      if (*(int *)(lVar3 + 0x18) == 0) {
        *(undefined4 *)(lVar3 + 0x18) = 1;
        *(long *)(lVar3 + 0x10) = (long)(int)lVar2;
        return 1;
      }
    }
  }
  return 0;
}



undefined8 evp_test_buffer_ncopy(char *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  size_t __n;
  
  lVar3 = strtol(param_1,(char **)0x0,10);
  if ((param_2 != 0) && (iVar1 = (int)lVar3, 0 < iVar1)) {
    iVar2 = OPENSSL_sk_num(param_2);
    if (iVar2 != 0) {
      iVar2 = OPENSSL_sk_num(param_2);
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_2,iVar2 + -1);
      lVar3 = puVar4[1];
      pvVar5 = CRYPTO_malloc((int)(iVar1 * lVar3),"test/evp_test.c",0x1b4);
      iVar2 = test_ptr("test/evp_test.c",0x1b4,"tbuf = OPENSSL_malloc(tbuflen)",pvVar5);
      if (iVar2 != 0) {
        __n = puVar4[1];
        iVar2 = 0;
        pvVar6 = pvVar5;
        do {
          iVar2 = iVar2 + 1;
          pvVar6 = memcpy(pvVar6,(void *)*puVar4,__n);
          __n = puVar4[1];
          pvVar6 = (void *)((long)pvVar6 + __n);
        } while (iVar2 < iVar1);
        CRYPTO_free((void *)*puVar4);
        *puVar4 = pvVar5;
        puVar4[1] = iVar1 * lVar3;
        return 1;
      }
    }
  }
  return 0;
}



void rand_test_cleanup(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  OPENSSL_sk_pop_free(puVar1[6],openssl_free);
  CRYPTO_free((void *)puVar1[4]);
  CRYPTO_free((void *)puVar1[5]);
  if (-1 < *(int *)(puVar1 + 2)) {
    iVar3 = 0;
    puVar2 = puVar1 + 7;
    do {
      iVar3 = iVar3 + 1;
      CRYPTO_free((void *)*puVar2);
      CRYPTO_free((void *)puVar2[1]);
      CRYPTO_free((void *)puVar2[2]);
      CRYPTO_free((void *)puVar2[3]);
      CRYPTO_free((void *)puVar2[4]);
      CRYPTO_free((void *)puVar2[5]);
      CRYPTO_free((void *)puVar2[6]);
      CRYPTO_free((void *)puVar2[7]);
      CRYPTO_free((void *)puVar2[8]);
      CRYPTO_free((void *)puVar2[9]);
      puVar2 = puVar2 + 0x14;
    } while (iVar3 <= *(int *)(puVar1 + 2));
  }
  EVP_RAND_CTX_free(*puVar1);
  EVP_RAND_CTX_free(puVar1[1]);
  return;
}



undefined8 rand_test_init(long param_1,undefined8 param_2)

{
  int iVar1;
  long *ptr;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0x100;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  ptr = (long *)CRYPTO_zalloc(0x998,"test/evp_test.c",0xdd4);
  iVar1 = test_ptr("test/evp_test.c",0xdd4,"rdata = OPENSSL_zalloc(sizeof(*rdata))",ptr);
  if (iVar1 != 0) {
    lVar2 = EVP_RAND_fetch(libctx,"TEST-RAND","-fips");
    if (lVar2 == 0) {
LAB_0010253e:
      lVar2 = ptr[1];
    }
    else {
      lVar3 = EVP_RAND_CTX_new(lVar2,0);
      ptr[1] = lVar3;
      EVP_RAND_free(lVar2);
      lVar2 = ptr[1];
      if (lVar2 != 0) {
        OSSL_PARAM_construct_uint(&local_c8,"strength",&local_8c);
        local_88._8_8_ = uStack_c0;
        local_88._0_8_ = local_c8;
        local_68._0_8_ = local_a8;
        local_78._8_8_ = uStack_b0;
        local_78._0_8_ = local_b8;
        iVar1 = EVP_RAND_CTX_set_params(ptr[1],local_88);
        if (iVar1 != 0) {
          lVar2 = EVP_RAND_fetch(libctx,param_2,propquery);
          if (lVar2 != 0) {
            lVar3 = EVP_RAND_CTX_new(lVar2,ptr[1]);
            *ptr = lVar3;
            EVP_RAND_free(lVar2);
            if (*ptr != 0) {
              lVar2 = OPENSSL_sk_new_null();
              *(undefined4 *)(ptr + 2) = 0xffffffff;
              ptr[6] = lVar2;
              uVar4 = 1;
              *(long **)(param_1 + 0x9c8) = ptr;
              goto LAB_0010248d;
            }
          }
        }
        goto LAB_0010253e;
      }
    }
    EVP_RAND_CTX_free(lVar2);
    CRYPTO_free(ptr);
  }
  uVar4 = 0;
LAB_0010248d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void clear_test(long param_1)

{
  undefined8 uVar1;
  void *ptr;
  
  test_clearstanza();
  ERR_clear_error();
  ptr = *(void **)(param_1 + 0x9c8);
  if (ptr != (void *)0x0) {
    if (*(long *)(param_1 + 0x9a0) != 0) {
      (**(code **)(*(long *)(param_1 + 0x9a0) + 0x10))(param_1);
      ptr = *(void **)(param_1 + 0x9c8);
    }
    CRYPTO_free(ptr);
    *(undefined8 *)(param_1 + 0x9c8) = 0;
  }
  CRYPTO_free(*(void **)(param_1 + 0x9b8));
  *(undefined8 *)(param_1 + 0x9b8) = 0;
  CRYPTO_free(*(void **)(param_1 + 0x9c0));
  uVar1 = libctx;
  *(undefined8 *)(param_1 + 0x9c0) = 0;
  *(undefined4 *)(param_1 + 0x998) = 0;
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  *(undefined1 (*) [16])(param_1 + 0x9a0) = (undefined1  [16])0x0;
  OSSL_set_max_threads(uVar1,0);
  return;
}



void * unescape(char *param_1,ulong param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 == 0) {
    *param_3 = 0;
    pvVar3 = (void *)CRYPTO_zalloc(1,"test/evp_test.c",0x1f7);
    return pvVar3;
  }
  pvVar3 = CRYPTO_malloc((int)param_2,"test/evp_test.c",0x1fb);
  iVar2 = test_ptr("test/evp_test.c",0x1fb,"ret = p = OPENSSL_malloc(input_len)");
  if (iVar2 == 0) {
    return (void *)0x0;
  }
  uVar4 = 0;
  lVar1 = (long)pvVar3 + 1;
  do {
    while (lVar5 = lVar1, *param_1 != '\\') {
      uVar4 = uVar4 + 1;
      *(char *)(lVar5 + -1) = *param_1;
      param_1 = param_1 + 1;
      lVar1 = lVar5 + 1;
      if (param_2 <= uVar4) goto LAB_00102749;
    }
    if ((uVar4 == param_2 - 1) || (param_1[1] != 'n')) {
      test_error("test/evp_test.c",0x201,"Bad escape sequence in file");
      CRYPTO_free(pvVar3);
      return (void *)0x0;
    }
    param_1 = param_1 + 2;
    uVar4 = uVar4 + 2;
    *(undefined1 *)(lVar5 + -1) = 10;
    lVar1 = lVar5 + 1;
  } while (uVar4 < param_2);
LAB_00102749:
  *param_3 = lVar5 - (long)pvVar3;
  return pvVar3;
}



ulong parse_bin(char *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = strcmp(param_1,"NULL");
  if (iVar1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
LAB_00102852:
    uVar4 = 1;
  }
  else {
    if (*param_1 == '\0') {
      puVar3 = (undefined1 *)CRYPTO_malloc(1,"test/evp_test.c",0x22a);
      *param_2 = (long)puVar3;
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0;
        *param_3 = 0;
        goto LAB_00102852;
      }
    }
    else {
      if (*param_1 != '\"') {
        lVar5 = OPENSSL_hexstr2buf(param_1,&local_38);
        *param_2 = lVar5;
        iVar1 = test_ptr("test/evp_test.c",0x23e,"*buf = OPENSSL_hexstr2buf(value, &len)",lVar5);
        if (iVar1 == 0) {
          test_info("test/evp_test.c",0x23f,"Can\'t convert %s",param_1);
          test_openssl_errors();
          uVar4 = 0xffffffff;
          goto LAB_00102857;
        }
        *param_3 = local_38;
        goto LAB_00102852;
      }
      sVar2 = strlen(param_1 + 1);
      if ((sVar2 != 0) && (param_1[sVar2] == '\"')) {
        lVar5 = unescape(param_1 + 1,sVar2 - 1,param_3);
        *param_2 = lVar5;
        uVar4 = (ulong)(lVar5 != 0);
        goto LAB_00102857;
      }
    }
    uVar4 = 0;
  }
LAB_00102857:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 encode_test_parse(long param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x9c8);
  iVar1 = strcmp(param_2,"Input");
  lVar3 = lVar4 + 8;
  if (iVar1 != 0) {
    iVar1 = strcmp(param_2,"Output");
    if (iVar1 != 0) {
      return 0;
    }
    lVar3 = lVar4 + 0x18;
    lVar4 = lVar4 + 0x10;
  }
  uVar2 = parse_bin(param_3,lVar4,lVar3);
  return uVar2;
}



ulong cipher_test_parse(long param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  char *ptr;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  lVar6 = *(long *)(param_1 + 0x9c8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = strcmp(param_2,"Key");
  if (iVar2 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      lVar5 = lVar6 + 0x20;
      lVar6 = lVar6 + 0x18;
      goto LAB_00102bac;
    }
    goto LAB_00102e7f;
  }
  iVar2 = strcmp(param_2,"Rounds");
  if (iVar2 == 0) {
    lVar5 = strtol(param_3,(char **)0x0,10);
    if ((int)lVar5 < 0) goto LAB_00102cb0;
    *(int *)(lVar6 + 0x40) = (int)lVar5;
    goto LAB_00102b62;
  }
  if (((*param_2 == 'I') && (param_2[1] == 'V')) && (param_2[2] == '\0')) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      lVar5 = lVar6 + 0x48;
      lVar6 = lVar6 + 0x30;
LAB_00102bac:
      uVar7 = parse_bin(param_3,lVar6,lVar5);
      return uVar7;
    }
    goto LAB_00102e7f;
  }
  iVar2 = strcmp(param_2,"NextIV");
  if (iVar2 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      lVar5 = lVar6 + 0x48;
      lVar6 = lVar6 + 0x38;
      goto LAB_00102bac;
    }
    goto LAB_00102e7f;
  }
  iVar2 = strcmp(param_2,"Plaintext");
  if (iVar2 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      lVar5 = lVar6 + 0x58;
      lVar6 = lVar6 + 0x50;
      goto LAB_00102bac;
    }
    goto LAB_00102e7f;
  }
  iVar2 = strcmp(param_2,"Ciphertext");
  if (iVar2 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      lVar5 = lVar6 + 0x68;
      lVar6 = lVar6 + 0x60;
      goto LAB_00102bac;
    }
    goto LAB_00102e7f;
  }
  iVar2 = strcmp(param_2,"KeyBits");
  if (iVar2 == 0) {
    lVar5 = strtol(param_3,(char **)0x0,10);
    if ((int)lVar5 < 0) goto LAB_00102cb0;
    *(long *)(lVar6 + 0x28) = (long)(int)lVar5;
LAB_00102b62:
    uVar7 = 1;
  }
  else {
    if (*(int *)(lVar6 + 0x14) == 0) {
LAB_00102c00:
      iVar2 = strcmp(param_2,"Operation");
      if (iVar2 == 0) {
        iVar2 = strcmp(param_3,"ENCRYPT");
        if (iVar2 == 0) {
          *(undefined4 *)(lVar6 + 0x10) = 1;
        }
        else {
          iVar2 = strcmp(param_3,"DECRYPT");
          if (iVar2 != 0) goto LAB_00102cb0;
          *(undefined4 *)(lVar6 + 0x10) = 0;
        }
      }
      else {
        iVar2 = strcmp(param_2,"CTSMode");
        if (iVar2 == 0) {
          *(char **)(lVar6 + 0xc0) = param_3;
        }
        else {
          iVar2 = strcmp(param_2,"XTSStandard");
          if (iVar2 != 0) {
            uVar7 = 0;
            iVar2 = strcmp(param_2,"CtrlInit");
            if (iVar2 == 0) {
              uVar1 = *(undefined8 *)(lVar6 + 0xf0);
              ptr = CRYPTO_strdup(param_3,"test/evp_test.c",0xcb);
              if (ptr != (char *)0x0) {
                iVar2 = OPENSSL_sk_push(uVar1,ptr);
                if (0 < iVar2) goto LAB_00102b62;
                CRYPTO_free(ptr);
              }
              goto LAB_00102cb0;
            }
            goto LAB_00102b68;
          }
          *(char **)(lVar6 + 0xe8) = param_3;
        }
      }
      goto LAB_00102b62;
    }
    iVar2 = strcmp(param_2,"TLSAAD");
    if (iVar2 == 0) {
      *(undefined4 *)(lVar6 + 0xb0) = 1;
    }
    else {
      iVar2 = strcmp(param_2,"AAD");
      if (iVar2 != 0) {
        iVar2 = strcmp(param_2,"Tag");
        if (iVar2 == 0) {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            lVar5 = lVar6 + 200;
            lVar6 = lVar6 + 0xb8;
            goto LAB_00102bac;
          }
          goto LAB_00102e7f;
        }
        iVar2 = strcmp(param_2,"SetTagLate");
        if (iVar2 != 0) {
          iVar2 = strcmp(param_2,"MACKey");
          if (iVar2 == 0) {
            if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
              lVar5 = lVar6 + 0xe0;
              lVar6 = lVar6 + 0xd8;
              goto LAB_00102bac;
            }
            goto LAB_00102e7f;
          }
          uVar3 = strcmp(param_2,"TLSVersion");
          uVar7 = (ulong)uVar3;
          if (uVar3 != 0) goto LAB_00102c00;
          lVar5 = strtol(param_3,&local_38,0);
          *(int *)(lVar6 + 0xb4) = (int)lVar5;
          if (*param_3 != '\0') {
            uVar7 = (ulong)(*local_38 == '\0');
          }
          goto LAB_00102b68;
        }
        iVar2 = strcmp(param_3,"TRUE");
        if (iVar2 == 0) {
          *(undefined4 *)(lVar6 + 0xd0) = 1;
        }
        else {
          iVar2 = strcmp(param_3,"FALSE");
          if (iVar2 != 0) goto LAB_00102cb0;
          *(undefined4 *)(lVar6 + 0xd0) = 0;
        }
        goto LAB_00102b62;
      }
    }
    lVar5 = 0;
    do {
      if (*(long *)(lVar6 + 0x70 + lVar5 * 8) == 0) {
        lVar4 = (long)((int)lVar5 + 0x12) * 8;
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102e7f;
        lVar5 = lVar6 + lVar4;
        lVar6 = lVar6 + -0x20 + lVar4;
        goto LAB_00102bac;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 4);
LAB_00102cb0:
    uVar7 = 0xffffffff;
  }
LAB_00102b68:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
LAB_00102e7f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 pbkdf2_test_parse_isra_0(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  EVP_MD *pEVar2;
  long lVar3;
  
  iVar1 = strcmp(param_2,"iter");
  if (iVar1 == 0) {
    lVar3 = strtol(param_3,(char **)0x0,10);
    *(int *)(param_1 + 0x2c) = (int)lVar3;
    if ((int)lVar3 < 1) {
      return 0xffffffff;
    }
  }
  else {
    if (((*param_2 != 'M') || (param_2[1] != 'D')) || (param_2[2] != '\0')) {
      return 0;
    }
    pEVar2 = EVP_get_digestbyname(param_3);
    *(EVP_MD **)(param_1 + 0x30) = pEVar2;
    if (pEVar2 == (EVP_MD *)0x0) {
      return 0xffffffff;
    }
  }
  return 1;
}



ulong pbe_test_parse(long param_1,char *param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  
  piVar2 = *(int **)(param_1 + 0x9c8);
  iVar3 = strcmp(param_2,"Password");
  piVar6 = piVar2 + 0x10;
  piVar7 = piVar2 + 0xe;
  if (iVar3 != 0) {
    iVar3 = strcmp(param_2,"Salt");
    if (iVar3 == 0) {
      piVar6 = piVar2 + 0x14;
      piVar7 = piVar2 + 0x12;
    }
    else {
      iVar3 = strcmp(param_2,"Key");
      piVar6 = piVar2 + 0x18;
      piVar7 = piVar2 + 0x16;
      if (iVar3 != 0) {
        iVar3 = *piVar2;
        if (iVar3 == 2) {
LAB_00102fad:
          uVar5 = pbkdf2_test_parse_isra_0(piVar2,param_2,param_3);
          return uVar5;
        }
        if (iVar3 == 3) {
          if (((*param_2 != 'i') || (param_2[1] != 'd')) || (param_2[2] != '\0')) goto LAB_00102fad;
          lVar4 = strtol(param_3,(char **)0x0,10);
          iVar3 = (int)lVar4;
          piVar2[10] = iVar3;
          uVar5 = (ulong)(((0 < iVar3) - 1) + (uint)(0 < iVar3));
        }
        else {
          uVar5 = 0;
          if (iVar3 == 1) {
            cVar1 = *param_2;
            if ((((cVar1 != 'N') || (piVar6 = piVar2 + 2, param_2[1] != '\0')) &&
                ((cVar1 != 'p' || (piVar6 = piVar2 + 6, param_2[1] != '\0')))) &&
               ((cVar1 != 'r' || (piVar6 = piVar2 + 4, param_2[1] != '\0')))) {
              iVar3 = strcmp(param_2,"maxmem");
              if (iVar3 != 0) {
                return 0;
              }
              piVar6 = piVar2 + 8;
            }
            uVar5 = parse_uint64(param_3,piVar6);
            return uVar5;
          }
        }
        return uVar5;
      }
    }
  }
  uVar5 = parse_bin(param_3,piVar7,piVar6);
  return uVar5;
}



undefined8 check_fips_approved_isra_0(int param_1,int param_2)

{
  if (param_1 == 0) {
    if ((param_2 == 0) || (0 < fips_indicator_callback_unapproved_count)) {
      test_error("test/evp_test.c",0x81,"Test is expected to be FIPS approved");
      return 0;
    }
  }
  else if ((param_2 == 1) || (fips_indicator_callback_unapproved_count == 0)) {
    test_error("test/evp_test.c",0x7c,"Test is not expected to be FIPS approved");
    return 0;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
cipher_test_enc(long param_1,int param_2,long param_3,long param_4,int param_5,int param_6,
               undefined8 param_7)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  EVP_CIPHER_CTX *ctx;
  void *ptr;
  ulong uVar4;
  EVP_CIPHER_CTX *pEVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uchar *puVar10;
  undefined4 uVar11;
  long lVar12;
  EVP_CIPHER_CTX *a;
  long *plVar13;
  uchar *in;
  long in_FS_OFFSET;
  EVP_CIPHER_CTX *local_198;
  size_t local_180;
  long local_178;
  uchar *local_170;
  long local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  int local_128;
  int local_124;
  int local_120;
  undefined4 local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 local_c8 [136];
  long local_40;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = fips_provider_version_ge(libctx,3,2,0);
  *(char **)(param_1 + 0x9a8) = "TEST_FAILURE";
  ctx = EVP_CIPHER_CTX_new();
  iVar3 = test_ptr("test/evp_test.c",0x448,"ctx_base = EVP_CIPHER_CTX_new()",ctx);
  if (iVar3 == 0) {
    uVar11 = 0;
    local_198 = (EVP_CIPHER_CTX *)0x0;
    ptr = (void *)0x0;
    goto LAB_0010318b;
  }
  local_198 = EVP_CIPHER_CTX_new();
  iVar3 = test_ptr("test/evp_test.c",0x44a,"ctx = EVP_CIPHER_CTX_new()");
  if (iVar3 != 0) {
    EVP_CIPHER_CTX_set_flags(ctx,1);
    if (param_2 == 0) {
      local_180 = puVar1[0xd];
      pvVar6 = (void *)puVar1[0xc];
      local_168 = puVar1[10];
      local_178 = puVar1[0xb];
    }
    else {
      local_180 = puVar1[0xb];
      pvVar6 = (void *)puVar1[10];
      local_168 = puVar1[0xc];
      local_178 = puVar1[0xd];
    }
    if (param_6 == 1) {
      ptr = CRYPTO_malloc((int)local_180 + 0x40 + (int)param_3,"test/evp_test.c",0x45a);
      if (ptr != (void *)0x0) {
        local_170 = (uchar *)memcpy((void *)((long)ptr + param_3),pvVar6,local_180);
        goto LAB_001032ae;
      }
    }
    else {
      param_4 = (param_3 + local_180 & 0xfffffffffffffff0) + 0x10 + param_4;
      ptr = CRYPTO_malloc((int)param_4 + 0x40 + (int)local_180,"test/evp_test.c",0x468);
      if (ptr != (void *)0x0) {
        local_170 = (uchar *)memcpy((void *)((long)ptr + param_4 + 0x40),pvVar6,local_180);
LAB_001032ae:
        iVar3 = EVP_CipherInit_ex2(ctx,*puVar1,0,0,param_2,param_7);
        if (iVar3 == 0) {
          uVar11 = 0;
          *(char **)(param_1 + 0x9a8) = "CIPHERINIT_ERROR";
          goto LAB_0010318b;
        }
        if (puVar1[0x18] != 0) {
          OSSL_PARAM_construct_utf8_string(&local_158,"cts_mode");
          local_f8._0_8_ = local_138;
          OSSL_PARAM_construct_end(&local_158);
          local_f8._8_8_ = local_158;
          auStack_e8._8_8_ = local_148;
          auStack_e8._0_8_ = uStack_150;
          auStack_d8._8_8_ = local_138;
          auStack_d8._0_8_ = uStack_140;
          iVar3 = EVP_CIPHER_CTX_set_params(ctx,local_118);
          if (iVar3 == 0) {
            *(char **)(param_1 + 0x9a8) = "INVALID_CTS_MODE";
            uVar11 = 0;
            goto LAB_0010318b;
          }
        }
        iVar3 = *(int *)((long)puVar1 + 0x14);
        if (puVar1[6] != 0) {
          lVar9 = puVar1[9];
          if (iVar3 == 0) {
            iVar3 = EVP_CIPHER_CTX_get_iv_length(ctx);
            if (iVar3 != lVar9) {
              uVar11 = 0;
              *(char **)(param_1 + 0x9a8) = "INVALID_IV_LENGTH";
              goto LAB_0010318b;
            }
          }
          else {
            iVar3 = EVP_CIPHER_CTX_ctrl(ctx,9,(int)lVar9,(void *)0x0);
            if (iVar3 < 1) {
              uVar11 = 0;
              *(char **)(param_1 + 0x9a8) = "INVALID_IV_LENGTH";
              goto LAB_0010318b;
            }
          }
          iVar3 = *(int *)((long)puVar1 + 0x14);
        }
        if ((iVar3 == 0) || (*(int *)(puVar1 + 0x16) != 0)) {
LAB_00103420:
          if ((*(int *)(puVar1 + 8) == 0) ||
             (iVar3 = EVP_CIPHER_CTX_ctrl(ctx,5,*(int *)(puVar1 + 8),(void *)0x0), 0 < iVar3)) {
            iVar3 = EVP_CIPHER_CTX_set_key_length(ctx,*(int *)(puVar1 + 4));
            if (iVar3 == 0) {
              uVar11 = 0;
              *(char **)(param_1 + 0x9a8) = "INVALID_KEY_LENGTH";
              goto LAB_0010318b;
            }
            if ((puVar1[5] != 0) &&
               (iVar3 = EVP_CIPHER_CTX_ctrl(ctx,3,(int)puVar1[5],(void *)0x0), iVar3 < 1)) {
              uVar11 = 0;
              *(char **)(param_1 + 0x9a8) = "INVALID KEY BITS";
              goto LAB_0010318b;
            }
            iVar3 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)puVar1[3],
                                      (uchar *)puVar1[6],-1);
            if (iVar3 == 0) {
              uVar11 = 0;
              *(char **)(param_1 + 0x9a8) = "KEY_SET_ERROR";
              goto LAB_0010318b;
            }
            if (puVar1[6] != 0) {
              iVar3 = EVP_CIPHER_CTX_get_updated_iv(ctx,local_c8,0x80);
              iVar3 = test_true("test/evp_test.c",0x4be,
                                "EVP_CIPHER_CTX_get_updated_iv(ctx_base, iv, sizeof(iv))",iVar3 != 0
                               );
              if ((iVar3 == 0) ||
                 ((uVar4 = EVP_CIPHER_get_flags(*puVar1), (uVar4 & 0x10) == 0 &&
                  (iVar3 = test_mem_eq("test/evp_test.c",0x4c0,"expected->iv",&_LC115,puVar1[6],
                                       puVar1[9],local_c8,puVar1[9]), iVar3 == 0)))) {
                uVar11 = 0;
                *(char **)(param_1 + 0x9a8) = "INVALID_IV";
                goto LAB_0010318b;
              }
            }
            ERR_set_mark();
            iVar3 = EVP_CIPHER_CTX_copy(local_198,ctx);
            if (iVar3 == 0) {
              if (iVar2 != 0) {
                uVar11 = 0;
                uVar7 = EVP_CIPHER_get0_name(*puVar1);
                test_info("test/evp_test.c",0x4cb,"Doing a copy of Cipher %s Fails!\n",uVar7);
                ERR_print_errors_fp(_stderr);
                goto LAB_0010318b;
              }
              test_info("test/evp_test.c",0x4d0,
                        "Allowing copy fail as an old fips provider is in use.");
              EVP_CIPHER_CTX_free(local_198);
              pEVar5 = (EVP_CIPHER_CTX *)EVP_CIPHER_CTX_dup(ctx);
              a = ctx;
              local_198 = ctx;
              if (pEVar5 == (EVP_CIPHER_CTX *)0x0) goto LAB_00103b38;
LAB_00103590:
              local_198 = pEVar5;
              EVP_CIPHER_CTX_free(a);
            }
            else {
              EVP_CIPHER_CTX_free(ctx);
              pEVar5 = (EVP_CIPHER_CTX *)EVP_CIPHER_CTX_dup(local_198);
              if (pEVar5 != (EVP_CIPHER_CTX *)0x0) {
                ctx = (EVP_CIPHER_CTX *)0x0;
                a = local_198;
                goto LAB_00103590;
              }
              if (iVar2 != 0) {
                ctx = (EVP_CIPHER_CTX *)0x0;
                uVar11 = 0;
                uVar7 = EVP_CIPHER_get0_name(*puVar1);
                test_info("test/evp_test.c",0x4df,"Doing a dup of Cipher %s Fails!\n",uVar7);
                ERR_print_errors_fp(_stderr);
                goto LAB_0010318b;
              }
              ctx = (EVP_CIPHER_CTX *)0x0;
LAB_00103b38:
              test_info("test/evp_test.c",0x4e4,
                        "Allowing dup fail as an old fips provider is in use.");
            }
            ERR_pop_to_mark();
            if (((void *)puVar1[0x1b] == (void *)0x0) ||
               (iVar2 = EVP_CIPHER_CTX_ctrl(local_198,0x17,*(int *)(puVar1 + 0x1c),
                                            (void *)puVar1[0x1b]), 0 < iVar2)) {
              if (*(int *)((long)puVar1 + 0xb4) != 0) {
                OSSL_PARAM_construct_int(&local_158,"tls-version",(long)puVar1 + 0xb4);
                local_f8._0_8_ = local_138;
                OSSL_PARAM_construct_end(&local_158);
                local_f8._8_8_ = local_158;
                auStack_e8._8_8_ = local_148;
                auStack_e8._0_8_ = uStack_150;
                auStack_d8._8_8_ = local_138;
                auStack_d8._0_8_ = uStack_140;
                iVar2 = EVP_CIPHER_CTX_set_params(local_198);
                if (iVar2 == 0) {
                  *(char **)(param_1 + 0x9a8) = "SET_TLS_VERSION_ERROR";
                  uVar11 = 0;
                  goto LAB_0010318b;
                }
              }
              if ((*(int *)((long)puVar1 + 0x14) == 7) &&
                 (iVar2 = EVP_CipherUpdate(local_198,(uchar *)0x0,&local_128,(uchar *)0x0,
                                           (int)local_178), iVar2 == 0)) {
                *(char **)(param_1 + 0x9a8) = "CCM_PLAINTEXT_LENGTH_SET_ERROR";
              }
              else {
                puVar10 = (uchar *)puVar1[0xe];
                if (puVar10 == (uchar *)0x0) {
LAB_00103a65:
                  if (*(int *)(puVar1 + 0x16) != 0) {
                    puVar10 = (uchar *)puVar1[0xe];
                    goto LAB_00103604;
                  }
                  if ((param_2 == 0) &&
                     (((*(int *)((long)puVar1 + 0x14) == 0x10003 || (*(int *)(puVar1 + 0x1a) != 0))
                      && (iVar2 = EVP_CIPHER_CTX_ctrl(local_198,0x11,*(int *)(puVar1 + 0x19),
                                                      (void *)puVar1[0x17]), iVar2 < 1)))) {
                    *(char **)(param_1 + 0x9a8) = "TAG_SET_ERROR";
                    goto LAB_00103861;
                  }
LAB_001036d0:
                  if (puVar1[0x1d] != 0) {
                    OSSL_PARAM_construct_utf8_string(&local_158,"xts_standard",puVar1[0x1d],0);
                    local_f8._0_8_ = local_138;
                    OSSL_PARAM_construct_end(&local_158);
                    local_f8._8_8_ = local_158;
                    auStack_e8._8_8_ = local_148;
                    auStack_e8._0_8_ = uStack_150;
                    auStack_d8._8_8_ = local_138;
                    auStack_d8._0_8_ = uStack_140;
                    iVar2 = EVP_CIPHER_CTX_set_params(local_198);
                    if (iVar2 == 0) {
                      *(char **)(param_1 + 0x9a8) = "SET_XTS_STANDARD_ERROR";
                      goto LAB_00103861;
                    }
                  }
                  EVP_CIPHER_CTX_set_padding(local_198,0);
                  local_128 = 0;
                  *(char **)(param_1 + 0x9a8) = "CIPHERUPDATE_ERROR";
                  puVar10 = (uchar *)((long)ptr + param_3);
                  if (param_5 == 0) {
                    do {
                      if (data_chunk_size == 0) {
                        iVar2 = EVP_CipherUpdate(local_198,
                                                 (uchar *)(local_128 + param_3 + (long)ptr),
                                                 &local_124,local_170,(int)local_180);
                        if (iVar2 == 0) goto LAB_00103861;
                        local_128 = local_128 + local_124;
                        break;
                      }
                      uVar4 = (long)data_chunk_size;
                      if (local_180 < (ulong)(long)data_chunk_size) {
                        uVar4 = local_180;
                      }
                      iVar2 = EVP_CipherUpdate(local_198,(uchar *)(local_128 + param_3 + (long)ptr),
                                               &local_124,local_170,(int)uVar4);
                      if (iVar2 == 0) goto LAB_00103861;
                      local_128 = local_124 + local_128;
                      local_170 = local_170 + uVar4;
                      local_180 = local_180 - uVar4;
                    } while (local_180 != 0);
                    lVar9 = local_128 + param_3;
                  }
                  else {
                    lVar9 = param_3;
                    if (local_180 != 0) {
                      iVar2 = EVP_CipherUpdate(local_198,puVar10,&local_124,local_170,1);
                      if (iVar2 != 0) {
                        in = local_170 + 1;
                        local_128 = local_124 + local_128;
                        uVar4 = local_180 - 1;
                        lVar9 = local_128 + param_3;
                        if (uVar4 < 2) {
                          if (uVar4 == 0) goto LAB_00103d0e;
                        }
                        else {
                          iVar2 = EVP_CipherUpdate(local_198,(uchar *)((long)ptr + lVar9),&local_124
                                                   ,in,(int)uVar4 + -1);
                          if (iVar2 == 0) goto LAB_00103861;
                          local_128 = local_128 + local_124;
                          in = local_170 + (local_180 - 1);
                        }
                        iVar2 = EVP_CipherUpdate(local_198,
                                                 (uchar *)(local_128 + param_3 + (long)ptr),
                                                 &local_124,in,1);
                        if (iVar2 != 0) {
                          local_128 = local_124 + local_128;
                          lVar9 = local_128 + param_3;
                          goto LAB_00103d0e;
                        }
                      }
                      goto LAB_00103861;
                    }
                  }
LAB_00103d0e:
                  iVar2 = EVP_CipherFinal_ex(local_198,(uchar *)((long)ptr + lVar9),&local_120);
                  if (iVar2 == 0) {
                    *(char **)(param_1 + 0x9a8) = "CIPHERFINAL_ERROR";
                  }
                  else {
                    local_11c = 1;
                    local_118 = (undefined1  [16])0x0;
                    local_108 = (undefined1  [16])0x0;
                    local_f8 = (undefined1  [16])0x0;
                    auStack_e8 = (undefined1  [16])0x0;
                    auStack_d8 = (undefined1  [16])0x0;
                    OSSL_PARAM_construct_int(&local_158,"fips-indicator",&local_11c);
                    local_f8._0_8_ = local_138;
                    iVar2 = EVP_CIPHER_CTX_get_params(local_198,local_118);
                    if ((iVar2 == 0) ||
                       (iVar2 = check_fips_approved_isra_0
                                          (*(undefined4 *)(param_1 + 0x9d0),local_11c), iVar2 == 0))
                    {
                      *(char **)(param_1 + 0x9a8) = "FIPSAPPROVED_ERROR";
                    }
                    else if (param_2 == 0) {
                      if (*(int *)(puVar1 + 0x16) != 0) {
                        if ((0x301 < *(int *)((long)puVar1 + 0xb4)) &&
                           ((iVar2 = EVP_CIPHER_is_a(*puVar1,"AES-128-CBC-HMAC-SHA1"), iVar2 != 0 ||
                            (iVar2 = EVP_CIPHER_is_a(*puVar1,"AES-256-CBC-HMAC-SHA1"), iVar2 != 0)))
                           ) {
                          lVar9 = puVar1[9];
                          local_128 = local_128 - (int)lVar9;
                          local_168 = local_168 + lVar9;
                          puVar10 = (uchar *)((long)ptr + param_3 + lVar9);
                        }
                        if (local_128 + local_120 < (int)local_178) {
                          local_178 = (long)(local_128 + local_120);
                        }
                      }
                      iVar2 = memory_err_compare(param_1,"VALUE_MISMATCH",local_168,local_178,
                                                 puVar10,(long)(local_128 + local_120));
joined_r0x00104342:
                      if (iVar2 != 0) {
LAB_001040d7:
                        if (puVar1[7] != 0) {
                          iVar2 = EVP_CIPHER_CTX_get_updated_iv(local_198,local_c8,0x80);
                          iVar2 = test_true("test/evp_test.c",0x5aa,
                                            "EVP_CIPHER_CTX_get_updated_iv(ctx, iv, sizeof(iv))",
                                            iVar2 != 0);
                          if ((iVar2 == 0) ||
                             ((uVar4 = EVP_CIPHER_get_flags(*puVar1), (uVar4 & 0x10) == 0 &&
                              (iVar2 = test_mem_eq("test/evp_test.c",0x5ac,"expected->next_iv",
                                                   &_LC115,puVar1[7],puVar1[9],local_c8,puVar1[9]),
                              iVar2 == 0)))) {
                            *(char **)(param_1 + 0x9a8) = "INVALID_NEXT_IV";
                            goto LAB_00103861;
                          }
                        }
                        uVar11 = 1;
                        *(undefined8 *)(param_1 + 0x9a8) = 0;
                        goto LAB_0010318b;
                      }
                    }
                    else {
                      iVar2 = memory_err_compare(param_1,"VALUE_MISMATCH",local_168,local_178,
                                                 puVar10,(long)(local_120 + local_128));
                      if (iVar2 != 0) {
                        if ((*(int *)((long)puVar1 + 0x14) == 0) || (*(int *)(puVar1 + 0x16) != 0))
                        goto LAB_001040d7;
                        iVar2 = test_size_t_le("test/evp_test.c",0x598,"expected->tag_len",
                                               "sizeof(rtag)",puVar1[0x19],0x30);
                        if (iVar2 == 0) {
                          *(char **)(param_1 + 0x9a8) = "TAG_LENGTH_INTERNAL_ERROR";
                        }
                        else {
                          iVar2 = EVP_CIPHER_CTX_ctrl(local_198,0x10,*(int *)(puVar1 + 0x19),
                                                      local_c8);
                          if (0 < iVar2) {
                            iVar2 = memory_err_compare(param_1,"TAG_VALUE_MISMATCH",puVar1[0x17],
                                                       puVar1[0x19],local_c8,puVar1[0x19]);
                            goto joined_r0x00104342;
                          }
                          *(char **)(param_1 + 0x9a8) = "TAG_RETRIEVE_ERROR";
                        }
                      }
                    }
                  }
                }
                else {
                  if (*(int *)(puVar1 + 0x16) == 0) {
                    plVar13 = puVar1 + 0xe;
                    *(char **)(param_1 + 0x9a8) = "AAD_SET_ERROR";
                    if (param_5 == 0) {
                      do {
                        lVar9 = 0;
                        uVar4 = plVar13[4];
                        while( true ) {
                          if (data_chunk_size == 0) break;
                          uVar8 = (long)data_chunk_size;
                          if (uVar4 < (ulong)(long)data_chunk_size) {
                            uVar8 = uVar4;
                          }
                          iVar2 = EVP_CipherUpdate(local_198,(uchar *)0x0,&local_124,puVar10 + lVar9
                                                   ,(int)uVar8);
                          if (iVar2 == 0) goto LAB_00103861;
                          lVar9 = lVar9 + uVar8;
                          uVar4 = uVar4 - uVar8;
                          if (uVar4 == 0) goto LAB_00103e57;
                          puVar10 = (uchar *)*plVar13;
                        }
                        iVar2 = EVP_CipherUpdate(local_198,(uchar *)0x0,&local_124,puVar10 + lVar9,
                                                 (int)uVar4);
                        if (iVar2 == 0) goto LAB_00103861;
LAB_00103e57:
                        puVar10 = (uchar *)plVar13[1];
                        plVar13 = plVar13 + 1;
                      } while (puVar10 != (uchar *)0x0);
                    }
                    else {
                      lVar9 = 0;
                      do {
                        lVar12 = lVar9;
                        if (plVar13[4] != 0) {
                          iVar2 = EVP_CipherUpdate(local_198,(uchar *)0x0,&local_124,puVar10,1);
                          if (iVar2 == 0) goto LAB_00103861;
                          uVar4 = plVar13[4];
                          lVar12 = lVar9 + 1;
                          if (2 < uVar4) {
                            iVar2 = EVP_CipherUpdate(local_198,(uchar *)0x0,&local_124,
                                                     (uchar *)(lVar12 + *plVar13),(int)uVar4 + -2);
                            if (iVar2 == 0) goto LAB_00103861;
                            uVar4 = plVar13[4];
                            lVar12 = (uVar4 - 1) + lVar9;
                          }
                          if ((1 < uVar4) &&
                             (iVar2 = EVP_CipherUpdate(local_198,(uchar *)0x0,&local_124,
                                                       (uchar *)(*plVar13 + lVar12),1), iVar2 == 0))
                          goto LAB_00103861;
                        }
                        puVar10 = (uchar *)plVar13[1];
                        plVar13 = plVar13 + 1;
                        lVar9 = lVar12;
                      } while (puVar10 != (uchar *)0x0);
                    }
                    goto LAB_00103a65;
                  }
LAB_00103604:
                  pvVar6 = (void *)CRYPTO_memdup(puVar10,puVar1[0x12],"test/evp_test.c",0x534);
                  if (pvVar6 != (void *)0x0) {
                    OSSL_PARAM_construct_octet_string(&local_158,"tlsaad",pvVar6,puVar1[0x12]);
                    local_f8._0_8_ = local_138;
                    OSSL_PARAM_construct_end(&local_158);
                    local_f8._8_8_ = local_158;
                    auStack_e8._8_8_ = local_148;
                    auStack_e8._0_8_ = uStack_150;
                    auStack_d8._8_8_ = local_138;
                    auStack_d8._0_8_ = uStack_140;
                    iVar2 = EVP_CIPHER_CTX_set_params(local_198,local_118);
                    if (iVar2 != 0) {
                      CRYPTO_free(pvVar6);
                      goto LAB_001036d0;
                    }
                    CRYPTO_free(pvVar6);
                    *(char **)(param_1 + 0x9a8) = "TLS1_AAD_ERROR";
                  }
                }
              }
            }
            else {
              *(char **)(param_1 + 0x9a8) = "SET_MAC_KEY_ERROR";
            }
LAB_00103861:
            uVar11 = 0;
            goto LAB_0010318b;
          }
          *(char **)(param_1 + 0x9a8) = "INVALID_ROUNDS";
        }
        else {
          if (param_2 == 0) {
            if (iVar3 != 0x10003) {
              if (*(int *)(puVar1 + 0x1a) != 0) goto LAB_00103980;
              *(char **)(param_1 + 0x9a8) = "TAG_SET_ERROR";
              pvVar6 = (void *)puVar1[0x17];
              if (pvVar6 != (void *)0x0) goto LAB_001033ff;
              goto LAB_00103993;
            }
            *(char **)(param_1 + 0x9a8) = "TAG_LENGTH_SET_ERROR";
            pvVar6 = (void *)0x0;
          }
          else {
LAB_00103980:
            *(char **)(param_1 + 0x9a8) = "TAG_LENGTH_SET_ERROR";
LAB_00103993:
            if (iVar3 == 6) goto LAB_00103420;
            pvVar6 = (void *)0x0;
          }
LAB_001033ff:
          iVar3 = EVP_CIPHER_CTX_ctrl(ctx,0x11,*(int *)(puVar1 + 0x19),pvVar6);
          if (0 < iVar3) goto LAB_00103420;
        }
        uVar11 = 0;
        goto LAB_0010318b;
      }
    }
  }
  uVar11 = 0;
  ptr = (void *)0x0;
LAB_0010318b:
  CRYPTO_free(ptr);
  if (ctx != local_198) {
    EVP_CIPHER_CTX_free(ctx);
  }
  EVP_CIPHER_CTX_free(local_198);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 pkey_check_fips_approved(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 1;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  lVar1 = EVP_PKEY_CTX_gettable_params();
  if (lVar1 != 0) {
    lVar1 = OSSL_PARAM_locate_const(lVar1,"fips-indicator");
    if (lVar1 != 0) {
      lVar1 = EVP_PKEY_CTX_gettable_params(param_1);
      if (lVar1 != 0) {
        OSSL_PARAM_construct_int(&local_b8,"fips-indicator",&local_7c);
        local_78._8_8_ = uStack_b0;
        local_78._0_8_ = local_b8;
        local_58._0_8_ = local_98;
        local_68._8_8_ = uStack_a0;
        local_68._0_8_ = local_a8;
        uVar2 = EVP_PKEY_CTX_get_params(param_1,local_78);
        if ((int)uVar2 != 0) {
          uVar2 = check_fips_approved_isra_0(*(undefined4 *)(param_2 + 0x9d0),local_7c);
        }
        goto LAB_00104495;
      }
    }
  }
  uVar2 = 1;
LAB_00104495:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int pkey_kdf_test_run(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uchar *key;
  char *pcVar3;
  ulong uVar4;
  size_t sVar5;
  long in_FS_OFFSET;
  size_t local_38;
  long local_30;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  iVar2 = fips_provider_version_eq(libctx,3,0,0);
  if (iVar2 == 0) {
    iVar2 = EVP_PKEY_derive((EVP_PKEY_CTX *)*puVar1,(uchar *)0x0,&local_38);
    if (iVar2 < 1) {
      key = (uchar *)0x0;
      iVar2 = 1;
      *(char **)(param_1 + 0x9a8) = "INTERNAL_ERROR";
      goto LAB_00104569;
    }
    uVar4 = local_38 - 1;
    local_38 = puVar1[2];
    if (uVar4 < 0xfffffffffffffffe) {
      local_38 = puVar1[2] * 2;
    }
  }
  else {
    local_38 = puVar1[2];
  }
  sVar5 = local_38;
  if (local_38 == 0) {
    sVar5 = 1;
  }
  key = (uchar *)CRYPTO_malloc((int)sVar5,"test/evp_test.c",0x101d);
  iVar2 = test_ptr("test/evp_test.c",0x101d,"got = OPENSSL_malloc(got_len == 0 ? 1 : got_len)",key);
  if (iVar2 == 0) {
    *(char **)(param_1 + 0x9a8) = "INTERNAL_ERROR";
  }
  else {
    iVar2 = EVP_PKEY_derive((EVP_PKEY_CTX *)*puVar1,key,&local_38);
    if (iVar2 < 1) {
      *(char **)(param_1 + 0x9a8) = "KDF_DERIVE_ERROR";
    }
    else {
      iVar2 = pkey_check_fips_approved(*puVar1,param_1);
      if (iVar2 == 0) goto LAB_00104569;
      iVar2 = test_mem_eq("test/evp_test.c",0x1029,"expected->output",&_LC21,puVar1[1],puVar1[2],key
                          ,local_38);
      pcVar3 = "KDF_MISMATCH";
      if (iVar2 != 0) {
        pcVar3 = (char *)0x0;
      }
      *(char **)(param_1 + 0x9a8) = pcVar3;
    }
  }
  iVar2 = 1;
LAB_00104569:
  CRYPTO_free(key);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



undefined8 evp_test_buffer_append(char *param_1,ulong param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long *ptr;
  undefined1 *puVar5;
  size_t sVar6;
  void *ptr_00;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  char *__s;
  long in_FS_OFFSET;
  long local_60;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 == 0) {
    lVar8 = OPENSSL_sk_new_null();
    *param_3 = lVar8;
    iVar4 = test_ptr("test/evp_test.c",0x17e,"*sk = sk_EVP_TEST_BUFFER_new_null()",lVar8);
    if (iVar4 == 0) {
LAB_001047f0:
      uVar9 = 0;
      goto LAB_001047f2;
    }
  }
  local_60 = 0;
  while( true ) {
    ptr = (long *)CRYPTO_zalloc(0x20,"test/evp_test.c",0x182);
    iVar4 = test_ptr("test/evp_test.c",0x182,"db = OPENSSL_zalloc(sizeof(*db))",ptr);
    if (iVar4 == 0) goto LAB_001048bf;
    if (param_2 != 0) break;
    iVar4 = parse_bin(param_1,ptr,ptr + 1);
    if (iVar4 != 1) goto LAB_001048bf;
    lVar8 = *ptr;
    bVar10 = true;
LAB_001046f6:
    ptr[2] = 1;
    *(undefined4 *)(ptr + 3) = 0;
    if (lVar8 == 0) {
LAB_00104838:
      CRYPTO_free((void *)0x0);
      CRYPTO_free(ptr);
    }
    else {
      iVar4 = OPENSSL_sk_push(*param_3,ptr);
      if (iVar4 == 0) goto LAB_001047d0;
    }
    if ((param_2 == 0) || (!bVar10)) goto LAB_00104a2f;
  }
  cVar1 = *param_1;
  if (cVar1 == '\"') {
    lVar8 = local_60 + 1;
LAB_0010486a:
    __s = param_1 + lVar8;
    if (((*param_1 == '\"') && (param_1[1] == '\"')) && (param_1[2] == '\0')) goto LAB_00104788;
    cVar2 = *__s;
    if (cVar2 == '\0') {
LAB_001048e0:
      local_60 = 0;
      lVar8 = *ptr;
      bVar10 = false;
      goto LAB_001046f6;
    }
    sVar6 = strlen(__s);
    if (cVar1 == '\"') {
      if (sVar6 == 1) {
        if (cVar2 == '\"') goto LAB_001048e0;
LAB_001048bf:
        if (ptr == (long *)0x0) goto LAB_001047f0;
      }
      else {
        uVar7 = sVar6 - 1;
        if (param_2 < sVar6 - 1) {
          uVar7 = param_2;
        }
        lVar8 = unescape(__s,uVar7,ptr + 1);
        *ptr = lVar8;
        if (lVar8 != 0) {
          cVar1 = *param_1;
          lVar3 = ptr[1];
joined_r0x00104973:
          if (cVar1 == '\"') {
            local_60 = local_60 + lVar3;
            bVar10 = true;
          }
          else {
            bVar10 = true;
            local_60 = local_60 + lVar3 * 2;
          }
          goto LAB_001046f6;
        }
      }
    }
    else {
      uVar7 = param_2 * 2;
      if (sVar6 < param_2 * 2) {
        uVar7 = sVar6;
      }
      ptr_00 = (void *)CRYPTO_strndup(__s,uVar7,"test/evp_test.c",0x275);
      if (ptr_00 == (void *)0x0) goto LAB_001048bf;
      lVar8 = OPENSSL_hexstr2buf(ptr_00,&local_48);
      *ptr = lVar8;
      iVar4 = test_ptr("test/evp_test.c",0x278,"*buf = OPENSSL_hexstr2buf(chunk, &len)",lVar8);
      if (iVar4 != 0) {
        CRYPTO_free(ptr_00);
        cVar1 = *param_1;
        lVar8 = *ptr;
        ptr[1] = local_48;
        lVar3 = local_48;
        goto joined_r0x00104973;
      }
      CRYPTO_free(ptr_00);
      test_openssl_errors();
    }
  }
  else {
    lVar8 = local_60;
    if (cVar1 != '\0') goto LAB_0010486a;
LAB_00104788:
    puVar5 = (undefined1 *)CRYPTO_malloc(1,"test/evp_test.c",599);
    *ptr = (long)puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      ptr[2] = 1;
      bVar10 = false;
      *(undefined4 *)(ptr + 3) = 0;
      local_60 = 0;
      goto LAB_00104838;
    }
    *puVar5 = 0;
    lVar8 = *param_3;
    ptr[1] = 0;
    ptr[2] = 1;
    *(undefined4 *)(ptr + 3) = 0;
    iVar4 = OPENSSL_sk_push(lVar8,ptr);
    if (iVar4 != 0) {
LAB_00104a2f:
      uVar9 = 1;
LAB_001047f2:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar9;
    }
  }
LAB_001047d0:
  CRYPTO_free((void *)*ptr);
  CRYPTO_free(ptr);
  goto LAB_001047f0;
}



ulong digest_test_parse(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x9c8);
  iVar2 = strcmp(param_2,"Input");
  if (iVar2 == 0) {
    uVar4 = evp_test_buffer_append(param_3,(long)data_chunk_size,lVar1 + 0x10);
    return uVar4;
  }
  iVar2 = strcmp(param_2,"Output");
  if (iVar2 == 0) {
    uVar4 = parse_bin(param_3,lVar1 + 0x18,lVar1 + 0x20);
    return uVar4;
  }
  iVar2 = strcmp(param_2,"Count");
  if (iVar2 == 0) {
    uVar4 = evp_test_buffer_set_count(param_3,*(undefined8 *)(lVar1 + 0x10));
    return uVar4;
  }
  iVar2 = strcmp(param_2,"Ncopy");
  if (iVar2 != 0) {
    iVar2 = strcmp(param_2,"Padding");
    if (iVar2 == 0) {
      lVar3 = strtol(param_3,(char **)0x0,10);
      *(int *)(lVar1 + 0x28) = (int)lVar3;
      uVar4 = (ulong)(0 < (int)lVar3);
    }
    else {
      iVar2 = strcmp(param_2,"XOF");
      if (iVar2 == 0) {
        lVar3 = strtol(param_3,(char **)0x0,10);
        *(int *)(lVar1 + 0x2c) = (int)lVar3;
        uVar4 = (ulong)(0 < (int)lVar3);
      }
      else {
        iVar2 = strcmp(param_2,"OutputSize");
        uVar4 = 0;
        if (iVar2 == 0) {
          lVar3 = strtol(param_3,(char **)0x0,10);
          if ((int)lVar3 < 0) {
            uVar4 = 0xffffffff;
          }
          else {
            *(long *)(lVar1 + 0x30) = (long)(int)lVar3;
            uVar4 = 1;
          }
        }
      }
    }
    return uVar4;
  }
  uVar4 = evp_test_buffer_ncopy(param_3,*(undefined8 *)(lVar1 + 0x10));
  return uVar4;
}



void evp_test_buffer_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free((void *)*param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 cipher_test_init(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  EVP_CIPHER *pEVar3;
  long *ptr;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  EVP_CIPHER *pEVar7;
  char *pcVar8;
  int iVar9;
  
  iVar1 = OPENSSL_strncasecmp(param_2,&_LC157,3);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x998) = 1;
    test_info("test/evp_test.c",0x3a5,"skipping, \'%s\' is disabled",param_2);
LAB_00104d78:
    uVar6 = 1;
  }
  else {
    ERR_set_mark();
    pEVar3 = (EVP_CIPHER *)EVP_CIPHER_fetch(libctx,param_2,propquery);
    pEVar7 = pEVar3;
    if (pEVar3 == (EVP_CIPHER *)0x0) {
      pEVar7 = EVP_get_cipherbyname(param_2);
      if (pEVar7 != (EVP_CIPHER *)0x0) goto LAB_00104c7e;
      pcVar8 = strstr(param_2,"HMAC");
      if (pcVar8 != (char *)0x0) {
        ERR_pop_to_mark();
        *(undefined4 *)(param_1 + 0x998) = 1;
        test_info("test/evp_test.c",0x3b0,"skipping, \'%s\' is not available",param_2);
        goto LAB_00104d78;
      }
      ERR_clear_last_mark();
    }
    else {
LAB_00104c7e:
      ERR_clear_last_mark();
      ptr = (long *)CRYPTO_zalloc(0xf8,"test/evp_test.c",0x3b8);
      iVar1 = test_ptr("test/evp_test.c",0x3b8,"cdat = OPENSSL_zalloc(sizeof(*cdat))",ptr);
      if (iVar1 != 0) {
        lVar4 = OPENSSL_sk_new_null();
        *ptr = (long)pEVar7;
        ptr[0x1e] = lVar4;
        ptr[1] = (long)pEVar3;
        *(undefined4 *)(ptr + 2) = 0xffffffff;
        iVar2 = EVP_CIPHER_get_mode(pEVar7);
        uVar5 = EVP_CIPHER_get_flags(pEVar7);
        iVar1 = data_chunk_size;
        iVar9 = 0;
        if (((uVar5 & 0x200000) != 0) && (iVar9 = iVar2, iVar2 == 0)) {
          iVar9 = -1;
        }
        *(int *)((long)ptr + 0x14) = iVar9;
        if (iVar1 != 0) {
          iVar1 = cipher_test_valid_fragmentation(ptr);
          if (iVar1 == 0) {
            ERR_pop_to_mark();
            EVP_CIPHER_free(pEVar3);
            CRYPTO_free(ptr);
            *(undefined4 *)(param_1 + 0x998) = 1;
            test_info("test/evp_test.c",0x3ca,"skipping, \'%s\' does not support fragmentation",
                      param_2);
            goto LAB_00104d78;
          }
        }
        *(long **)(param_1 + 0x9c8) = ptr;
        if (pEVar3 != (EVP_CIPHER *)0x0) {
          test_info("test/evp_test.c",0x3d0,"%s is fetched",param_2);
        }
        goto LAB_00104d78;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}



undefined4 pkey_test_ctrl(long param_1,EVP_PKEY_CTX *param_2,char *param_3)

{
  int iVar1;
  char *__s;
  char *pcVar2;
  undefined4 uVar3;
  
  __s = CRYPTO_strdup(param_3,"test/evp_test.c",0xa17);
  iVar1 = test_ptr("test/evp_test.c",0xa17,"tmpval = OPENSSL_strdup(value)",__s);
  if (iVar1 != 0) {
    uVar3 = 0;
    pcVar2 = strchr(__s,0x3a);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
      pcVar2 = pcVar2 + 1;
      iVar1 = EVP_PKEY_CTX_ctrl_str(param_2,__s,pcVar2);
      if (iVar1 == -2) {
        *(char **)(param_1 + 0x9a8) = "PKEY_CTRL_INVALID";
      }
      else if (iVar1 < 1) {
        iVar1 = OPENSSL_strcasecmp(pcVar2,&_LC29);
        if ((iVar1 == 0) || (iVar1 = OPENSSL_strncasecmp(pcVar2,&_LC157,3), iVar1 == 0)) {
          test_info("test/evp_test.c",0xa23,"skipping, \'%s\' is disabled",pcVar2);
          *(undefined4 *)(param_1 + 0x998) = 1;
        }
        else {
          *(char **)(param_1 + 0x9a8) = "PKEY_CTRL_ERROR";
        }
      }
      uVar3 = 1;
    }
    CRYPTO_free(__s);
    return uVar3;
  }
  return 0;
}



undefined8 pkey_kdf_test_parse(long param_1,char *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  iVar2 = strcmp(param_2,"Output");
  if (iVar2 == 0) {
    uVar3 = parse_bin(param_3,puVar1 + 1,puVar1 + 2);
    return uVar3;
  }
  iVar2 = strncmp(param_2,"Ctrl",4);
  if (iVar2 != 0) {
    return 0;
  }
  uVar3 = pkey_test_ctrl(param_1,*puVar1,param_3);
  return uVar3;
}



int pkey_fromdata_test_run(long param_1)

{
  undefined8 *puVar1;
  void *ptr;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_FS_OFFSET;
  EVP_PKEY *local_118;
  long local_110;
  undefined8 local_108 [25];
  long local_40;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = local_108;
  local_118 = (EVP_PKEY *)0x0;
  local_110 = 0;
  puVar5 = puVar4;
  for (lVar3 = 0x19; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar2 = OPENSSL_sk_num(puVar1[10]);
  if (iVar2 < 1) {
    lVar3 = -1;
    lVar6 = 0;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    iVar2 = ctrl2params(param_1,puVar1[10],key_settable_ctx_params_2,puVar4,5,&local_110);
    lVar3 = local_110 + -1;
    lVar6 = local_110;
    if (iVar2 == 0) goto LAB_001050c6;
  }
  iVar2 = EVP_PKEY_fromdata(*puVar1,&local_118,0x87,puVar4);
  if (iVar2 < 1) {
    *(char **)(param_1 + 0x9a8) = "KEY_FROMDATA_ERROR";
  }
  iVar2 = 1;
LAB_001050c6:
  if (lVar6 != 0) {
    puVar4 = local_108 + lVar3 * 5 + 2;
    do {
      ptr = (void *)*puVar4;
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + -5;
      CRYPTO_free(ptr);
    } while (lVar3 != -1);
  }
  EVP_PKEY_free(local_118);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 pkey_test_run_init(long param_1)

{
  undefined8 *puVar1;
  undefined *ptr;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined *apuStack_110 [2];
  long local_100;
  undefined8 local_f8 [25];
  long local_30;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = 0;
  puVar6 = local_f8;
  for (lVar4 = 0x19; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  apuStack_110[0] = (undefined *)0x1051bc;
  iVar2 = OPENSSL_sk_num(puVar1[9]);
  puVar6 = (undefined8 *)0x0;
  if (iVar2 < 1) {
LAB_001051c6:
    if ((code *)puVar1[2] == (code *)0x0) {
      if ((code *)puVar1[3] != (code *)0x0) {
        apuStack_110[0] = (undefined *)0x1052ae;
        iVar2 = (*(code *)puVar1[3])(*puVar1,puVar1[1],puVar6);
        goto joined_r0x001052b0;
      }
    }
    else {
      apuStack_110[0] = (undefined *)0x1051d9;
      iVar2 = (*(code *)puVar1[2])(*puVar1);
joined_r0x001052b0:
      if (0 < iVar2) {
        iVar2 = 0;
        while( true ) {
          apuStack_110[0] = (undefined *)0x105224;
          iVar3 = OPENSSL_sk_num(puVar1[10]);
          if (iVar3 <= iVar2) break;
          apuStack_110[0] = (undefined *)0x1051f3;
          uVar7 = OPENSSL_sk_value(puVar1[10],iVar2);
          apuStack_110[0] = (undefined *)0x105202;
          iVar3 = pkey_test_ctrl(param_1,*puVar1,uVar7);
          if ((iVar3 == 0) || (*(long *)(param_1 + 0x9a8) != 0)) goto LAB_001052c4;
          iVar2 = iVar2 + 1;
        }
        uVar7 = 1;
        goto LAB_0010522e;
      }
    }
    *(char **)(param_1 + 0x9a8) = "KEYOP_INIT_ERROR";
  }
  else {
    apuStack_110[0] = (undefined *)0x1052ec;
    iVar2 = ctrl2params(param_1,puVar1[9],0,local_f8,5,&local_100);
    puVar6 = local_f8;
    if (iVar2 != 0) goto LAB_001051c6;
  }
LAB_001052c4:
  uVar7 = 0;
LAB_0010522e:
  lVar4 = local_100 + -1;
  if (local_100 != 0) {
    ppuVar5 = apuStack_110 + local_100 * 5;
    do {
      ptr = *ppuVar5;
      lVar4 = lVar4 + -1;
      ppuVar5 = ppuVar5 + -5;
      apuStack_110[0] = (undefined *)0x105269;
      CRYPTO_free(ptr);
    } while (lVar4 != -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  apuStack_110[0] = &UNK_001052fe;
  __stack_chk_fail();
}



bool verify_test_run(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  iVar2 = pkey_test_run_init();
  if (iVar2 != 0) {
    iVar2 = EVP_PKEY_verify((EVP_PKEY_CTX *)*puVar1,(uchar *)puVar1[7],puVar1[8],(uchar *)puVar1[5],
                            puVar1[6]);
    if (0 < iVar2) {
      iVar2 = pkey_check_fips_approved(*puVar1,param_1);
      return iVar2 != 0;
    }
    *(char **)(param_1 + 0x9a8) = "VERIFY_ERROR";
  }
  return true;
}



undefined8 pkey_test_run(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  EVP_PKEY_CTX *ctx;
  void *ptr;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = pkey_test_run_init();
  if (iVar2 == 0) {
    ctx = (EVP_PKEY_CTX *)0x0;
    ptr = (void *)0x0;
    goto LAB_001053c1;
  }
  ctx = EVP_PKEY_CTX_dup((EVP_PKEY_CTX *)*puVar1);
  iVar2 = test_ptr("test/evp_test.c",0xa8b,"copy = EVP_PKEY_CTX_dup(expected->ctx)",ctx);
  if (iVar2 == 0) {
    ptr = (void *)0x0;
    *(char **)(param_1 + 0x9a8) = "INTERNAL_ERROR";
    goto LAB_001053c1;
  }
  iVar2 = (*(code *)puVar1[4])(*puVar1,0,&local_48,puVar1[5],puVar1[6]);
  if (iVar2 < 1) {
LAB_00105580:
    ptr = (void *)0x0;
  }
  else {
    ptr = CRYPTO_malloc((int)local_48,"test/evp_test.c",0xa92);
    iVar2 = test_ptr("test/evp_test.c",0xa92,"got = OPENSSL_malloc(got_len)",ptr);
    if (iVar2 != 0) {
      iVar2 = (*(code *)puVar1[4])(*puVar1,ptr,&local_48,puVar1[5],puVar1[6]);
      if (0 < iVar2) {
        iVar2 = memory_err_compare(param_1,"KEYOP_MISMATCH",puVar1[7],puVar1[8],ptr,local_48);
        if (iVar2 == 0) goto LAB_001053c1;
        *(undefined8 *)(param_1 + 0x9a8) = 0;
        CRYPTO_free(ptr);
        iVar2 = (*(code *)puVar1[4])(ctx,0,&local_48,puVar1[5],puVar1[6]);
        if (iVar2 < 1) goto LAB_00105580;
        ptr = CRYPTO_malloc((int)local_48,"test/evp_test.c",0xaa8);
        iVar2 = test_ptr("test/evp_test.c",0xaa8,"got = OPENSSL_malloc(got_len)",ptr);
        if (iVar2 == 0) goto LAB_00105583;
        iVar2 = (*(code *)puVar1[4])(ctx,ptr,&local_48,puVar1[5],puVar1[6]);
        if (0 < iVar2) {
          iVar2 = memory_err_compare(param_1,"KEYOP_MISMATCH",puVar1[7],puVar1[8],ptr,local_48);
          if (iVar2 != 0) {
            pkey_check_fips_approved(*puVar1,param_1);
          }
          goto LAB_001053c1;
        }
      }
      *(char **)(param_1 + 0x9a8) = "KEYOP_ERROR";
      goto LAB_001053c1;
    }
  }
LAB_00105583:
  *(char **)(param_1 + 0x9a8) = "KEYOP_LENGTH_ERROR";
LAB_001053c1:
  CRYPTO_free(ptr);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int pderive_test_run(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  EVP_PKEY_CTX *ctx;
  uchar *key;
  long in_FS_OFFSET;
  size_t local_48;
  long local_40;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = pkey_test_run_init();
  if (iVar2 != 0) {
    *(undefined8 *)(param_1 + 0x9a8) = 0;
    iVar2 = EVP_PKEY_derive_set_peer_ex(*puVar1,puVar1[0xb],*(undefined4 *)(puVar1 + 0xc));
    if (0 < iVar2) {
      ctx = EVP_PKEY_CTX_dup((EVP_PKEY_CTX *)*puVar1);
      iVar2 = test_ptr("test/evp_test.c",0xbe1,"dctx = EVP_PKEY_CTX_dup(expected->ctx)",ctx);
      if (iVar2 != 0) {
        iVar2 = EVP_PKEY_derive(ctx,(uchar *)0x0,&local_48);
        if (0 < iVar2) {
          iVar2 = test_size_t_ne("test/evp_test.c",0xbe7,"got_len",&_LC176,local_48,0);
          if (iVar2 != 0) {
            key = (uchar *)CRYPTO_malloc((int)local_48,"test/evp_test.c",0xbeb);
            iVar2 = test_ptr("test/evp_test.c",0xbeb,"got = OPENSSL_malloc(got_len)",key);
            if (iVar2 == 0) {
LAB_001057b8:
              *(char **)(param_1 + 0x9a8) = "DERIVE_ERROR";
            }
            else {
              iVar2 = EVP_PKEY_derive(ctx,key,&local_48);
              if (iVar2 < 1) goto LAB_001057b8;
              iVar2 = memory_err_compare(param_1,"SHARED_SECRET_MISMATCH",puVar1[7],puVar1[8],key,
                                         local_48);
              if (iVar2 != 0) {
                iVar2 = pkey_check_fips_approved(ctx,param_1);
                if (iVar2 == 0) goto LAB_00105627;
                *(undefined8 *)(param_1 + 0x9a8) = 0;
              }
            }
            iVar2 = 1;
            goto LAB_00105627;
          }
        }
      }
      iVar2 = 1;
      key = (uchar *)0x0;
      *(char **)(param_1 + 0x9a8) = "DERIVE_ERROR";
      goto LAB_00105627;
    }
    *(char **)(param_1 + 0x9a8) = "DERIVE_SET_PEER_ERROR";
  }
  iVar2 = 1;
  key = (uchar *)0x0;
  ctx = (EVP_PKEY_CTX *)0x0;
LAB_00105627:
  CRYPTO_free(key);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 signverify_init(long param_1,int *param_2)

{
  undefined *ptr;
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined *apuStack_110 [2];
  long local_100;
  undefined1 local_f8 [200];
  long local_30;
  
  lVar3 = *(long *)(param_2 + 2);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar3 != 0) {
    apuStack_110[0] = (undefined *)0x105807;
    lVar3 = EVP_MD_get0_name(lVar3);
  }
  local_100 = 0;
  apuStack_110[0] = (undefined *)0x10581c;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 0x16));
  puVar4 = (undefined1 *)0x0;
  if (iVar1 < 1) {
LAB_00105828:
    if (*param_2 == 0) {
      iVar1 = EVP_DigestSignInit_ex
                        (*(undefined8 *)(param_2 + 4),param_2 + 6,lVar3,libctx,0,
                         *(undefined8 *)(param_2 + 0x14));
      if (iVar1 != 0) goto LAB_00105861;
      *(char **)(param_1 + 0x9a8) = "DIGESTSIGNINIT_ERROR";
    }
    else {
      iVar1 = EVP_DigestVerifyInit_ex
                        (*(undefined8 *)(param_2 + 4),param_2 + 6,lVar3,libctx,0,
                         *(undefined8 *)(param_2 + 0x14),puVar4);
      if (iVar1 != 0) {
LAB_00105861:
        iVar1 = 0;
        while( true ) {
          apuStack_110[0] = (undefined *)0x1058a5;
          iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 0x18));
          if (iVar2 <= iVar1) break;
          apuStack_110[0] = (undefined *)0x105873;
          uVar6 = OPENSSL_sk_value(*(undefined8 *)(param_2 + 0x18),iVar1);
          apuStack_110[0] = (undefined *)0x105882;
          iVar2 = pkey_test_ctrl(param_1,*(undefined8 *)(param_2 + 6),uVar6);
          if ((iVar2 == 0) || (*(long *)(param_1 + 0x9a8) != 0)) goto LAB_00105990;
          iVar1 = iVar1 + 1;
        }
        uVar6 = 1;
        goto LAB_001058af;
      }
      *(char **)(param_1 + 0x9a8) = "DIGESTVERIFYINIT_ERROR";
    }
  }
  else {
    puVar4 = local_f8;
    apuStack_110[0] = (undefined *)0x105971;
    iVar1 = ctrl2params(param_1,*(undefined8 *)(param_2 + 0x16),0,puVar4,5,&local_100);
    if (iVar1 != 0) goto LAB_00105828;
  }
LAB_00105990:
  uVar6 = 0;
LAB_001058af:
  lVar3 = local_100 + -1;
  if (local_100 != 0) {
    ppuVar5 = apuStack_110 + local_100 * 5;
    do {
      ptr = *ppuVar5;
      lVar3 = lVar3 + -1;
      ppuVar5 = ppuVar5 + -5;
      apuStack_110[0] = (undefined *)0x1058e9;
      CRYPTO_free(ptr);
    } while (lVar3 != -1);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    apuStack_110[0] = &UNK_0010599d;
    __stack_chk_fail();
  }
  return uVar6;
}



undefined8 oneshot_digestverify_test_run(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0x9c8);
  iVar2 = signverify_init(param_1,lVar1);
  if (iVar2 != 0) {
    iVar2 = EVP_DigestVerify(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                             *(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),
                             *(undefined8 *)(lVar1 + 0x30));
    if (iVar2 < 1) {
      *(char **)(param_1 + 0x9a8) = "VERIFY_ERROR";
      return 1;
    }
  }
  return 1;
}



undefined8 oneshot_digestsign_test_run(long param_1)

{
  long lVar1;
  int iVar2;
  void *ptr;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  lVar1 = *(long *)(param_1 + 0x9c8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = signverify_init(param_1,lVar1);
  if (iVar2 != 0) {
    iVar2 = EVP_DigestSign(*(undefined8 *)(lVar1 + 0x10),0,&local_38,*(undefined8 *)(lVar1 + 0x28),
                           *(undefined8 *)(lVar1 + 0x30));
    if (iVar2 != 0) {
      ptr = CRYPTO_malloc((int)local_38,"test/evp_test.c",0x12ac);
      iVar2 = test_ptr("test/evp_test.c",0x12ac,"got = OPENSSL_malloc(got_len)",ptr);
      if (iVar2 == 0) {
        *(char **)(param_1 + 0x9a8) = "MALLOC_FAILURE";
      }
      else {
        local_38 = local_38 << 1;
        iVar2 = EVP_DigestSign(*(undefined8 *)(lVar1 + 0x10),ptr,&local_38,
                               *(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
        if (iVar2 == 0) {
          *(char **)(param_1 + 0x9a8) = "DIGESTSIGN_ERROR";
        }
        else {
          iVar2 = memory_err_compare(param_1,"SIGNATURE_MISMATCH",*(undefined8 *)(lVar1 + 0x38),
                                     *(undefined8 *)(lVar1 + 0x40),ptr,local_38);
          if (iVar2 != 0) {
            *(undefined8 *)(param_1 + 0x9a8) = 0;
          }
        }
      }
      goto LAB_00105a50;
    }
    *(char **)(param_1 + 0x9a8) = "DIGESTSIGN_LENGTH_ERROR";
  }
  ptr = (void *)0x0;
LAB_00105a50:
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 digestverify_test_run(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(param_1 + 0x9c8);
  iVar4 = signverify_init(param_1,lVar1);
  if (iVar4 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    for (iVar4 = 0; iVar5 = OPENSSL_sk_num(uVar2), iVar4 < iVar5; iVar4 = iVar4 + 1) {
      puVar6 = (undefined8 *)OPENSSL_sk_value(uVar2,iVar4);
      if (puVar6[2] != 0) {
        uVar7 = 0;
        do {
          iVar5 = EVP_DigestVerifyUpdate(uVar3,*puVar6,puVar6[1]);
          if (iVar5 < 1) {
            *(char **)(param_1 + 0x9a8) = "DIGESTUPDATE_ERROR";
            return 1;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < (ulong)puVar6[2]);
      }
    }
    iVar4 = EVP_DigestVerifyFinal
                      (*(EVP_MD_CTX **)(lVar1 + 0x10),*(uchar **)(lVar1 + 0x38),
                       *(size_t *)(lVar1 + 0x40));
    if (iVar4 < 1) {
      *(char **)(param_1 + 0x9a8) = "VERIFY_ERROR";
    }
  }
  return 1;
}



undefined8 pkey_test_init_keyctx(long param_1,char *param_2,int param_3)

{
  EVP_PKEY *pkey;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = private_keys;
  if ((param_3 != 0) && (puVar4 = public_keys, public_keys != (undefined8 *)0x0)) {
    do {
      iVar1 = strcmp((char *)*puVar4,param_2);
      if (iVar1 == 0) {
        pkey = (EVP_PKEY *)puVar4[1];
        goto joined_r0x00105d9b;
      }
      puVar4 = (undefined8 *)puVar4[2];
      puVar2 = private_keys;
    } while (puVar4 != (undefined8 *)0x0);
  }
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_00105da8;
    iVar1 = strcmp((char *)*puVar2,param_2);
    if (iVar1 == 0) break;
    puVar2 = (undefined8 *)puVar2[2];
  }
  pkey = (EVP_PKEY *)puVar2[1];
joined_r0x00105d9b:
  if (pkey == (EVP_PKEY *)0x0) {
LAB_00105da8:
    test_info("test/evp_test.c",0x9b0,"skipping, key \'%s\' is disabled",param_2);
    *(undefined4 *)(param_1 + 0x998) = 1;
  }
  else {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x68,"test/evp_test.c",0x9b5);
    iVar1 = test_ptr("test/evp_test.c",0x9b5,"kdata = OPENSSL_zalloc(sizeof(*kdata))",puVar2);
    if (iVar1 == 0) {
      EVP_PKEY_free(pkey);
      return 0;
    }
    uVar3 = EVP_PKEY_CTX_new_from_pkey(libctx,pkey,propquery);
    *puVar2 = uVar3;
    iVar1 = test_ptr("test/evp_test.c",0x9b9,
                     "kdata->ctx = EVP_PKEY_CTX_new_from_pkey(libctx, pkey, propquery)",uVar3);
    if (iVar1 == 0) {
      EVP_PKEY_free(pkey);
      CRYPTO_free(puVar2);
      return 0;
    }
    *(undefined8 **)(param_1 + 0x9c8) = puVar2;
  }
  return 1;
}



undefined8
pkey_test_init_ex2(long param_1,char *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar4 = strchr(param_2,0x3a);
  if ((((param_2 == pcVar4) || (pcVar4 == (char *)0x0)) || (pcVar4[1] == '\0')) ||
     (lVar6 = (long)pcVar4 - (long)param_2, 0x32 < lVar6)) {
    test_info("test/evp_test.c",0x9ea,"Can\'t extract algorithm or key name from \'%s\'",param_2);
    uVar5 = 0;
  }
  else {
    __memcpy_chk(local_78,param_2,lVar6,0x33);
    local_78[lVar6] = 0;
    uVar5 = pkey_test_init_keyctx(param_1,pcVar4 + 1,param_3);
    uVar2 = libctx;
    uVar1 = propquery;
    if (*(int *)(param_1 + 0x998) == 0) {
      if ((int)uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        lVar6 = *(long *)(param_1 + 0x9c8);
        *(undefined8 *)(lVar6 + 0x18) = param_4;
        *(undefined8 *)(lVar6 + 0x20) = param_5;
        uVar5 = EVP_SIGNATURE_fetch(uVar2,local_78,uVar1);
        *(undefined8 *)(lVar6 + 8) = uVar5;
        iVar3 = test_ptr("test/evp_test.c",0x9fb,
                         "kdata->sigalgo = EVP_SIGNATURE_fetch(libctx, algoname, propquery)",uVar5);
        if (iVar3 == 0) {
          test_info("test/evp_test.c",0x9fd,"algoname = \'%s\'",local_78);
          uVar5 = 0;
        }
        else {
          uVar5 = OPENSSL_sk_new_null();
          *(undefined8 *)(lVar6 + 0x48) = uVar5;
          uVar5 = OPENSSL_sk_new_null();
          *(undefined8 *)(lVar6 + 0x50) = uVar5;
          uVar5 = 1;
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void verify_message_public_test_init(undefined8 param_1,undefined8 param_2)

{
  pkey_test_init_ex2(param_1,param_2,1,&EVP_PKEY_verify_message_init,0);
  return;
}



void verify_message_test_init(undefined8 param_1,undefined8 param_2)

{
  pkey_test_init_ex2(param_1,param_2,0,&EVP_PKEY_verify_message_init,0);
  return;
}



void sign_test_message_init(undefined8 param_1,undefined8 param_2)

{
  pkey_test_init_ex2(param_1,param_2,0,&EVP_PKEY_sign_message_init,&EVP_PKEY_sign);
  return;
}



undefined8 sign_test_init(long param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = strchr(param_2,0x3a);
  if (pcVar2 != (char *)0x0) {
    uVar3 = pkey_test_init_ex2(param_1,param_2,0,&EVP_PKEY_sign_init_ex2,&EVP_PKEY_sign);
    return uVar3;
  }
  uVar3 = pkey_test_init_keyctx(param_1,param_2,0);
  if ((*(int *)(param_1 + 0x998) == 0) && ((int)uVar3 != 0)) {
    lVar1 = *(long *)(param_1 + 0x9c8);
    *(undefined **)(lVar1 + 0x10) = &EVP_PKEY_sign_init_ex;
    *(undefined **)(lVar1 + 0x20) = &EVP_PKEY_sign;
    uVar3 = OPENSSL_sk_new_null();
    *(undefined8 *)(lVar1 + 0x48) = uVar3;
    uVar3 = OPENSSL_sk_new_null();
    *(undefined8 *)(lVar1 + 0x50) = uVar3;
    return 1;
  }
  return uVar3;
}



undefined8 decrypt_test_init(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = pkey_test_init_keyctx(param_1,param_2,0);
  if ((*(int *)(param_1 + 0x998) == 0) && ((int)uVar2 != 0)) {
    lVar1 = *(long *)(param_1 + 0x9c8);
    *(undefined **)(lVar1 + 0x10) = &EVP_PKEY_decrypt_init_ex;
    *(undefined **)(lVar1 + 0x20) = &EVP_PKEY_decrypt;
    uVar2 = OPENSSL_sk_new_null();
    *(undefined8 *)(lVar1 + 0x48) = uVar2;
    uVar2 = OPENSSL_sk_new_null();
    *(undefined8 *)(lVar1 + 0x50) = uVar2;
    return 1;
  }
  return uVar2;
}



undefined8 pderive_test_init(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = pkey_test_init_keyctx(param_1,param_2,0);
  if ((*(int *)(param_1 + 0x998) == 0) && ((int)uVar2 != 0)) {
    lVar1 = *(long *)(param_1 + 0x9c8);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined **)(lVar1 + 0x10) = &EVP_PKEY_derive_init_ex;
    uVar2 = OPENSSL_sk_new_null();
    *(undefined8 *)(lVar1 + 0x48) = uVar2;
    uVar2 = OPENSSL_sk_new_null();
    *(undefined8 *)(lVar1 + 0x50) = uVar2;
    return 1;
  }
  return uVar2;
}



undefined8 verify_recover_test_init(long param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = strchr(param_2,0x3a);
  if (pcVar2 != (char *)0x0) {
    uVar3 = pkey_test_init_ex2(param_1,param_2,1,&EVP_PKEY_verify_recover_init_ex2,
                               &EVP_PKEY_verify_recover);
    return uVar3;
  }
  uVar3 = pkey_test_init_keyctx(param_1,param_2,1);
  if ((*(int *)(param_1 + 0x998) == 0) && ((int)uVar3 != 0)) {
    lVar1 = *(long *)(param_1 + 0x9c8);
    *(undefined **)(lVar1 + 0x10) = &EVP_PKEY_verify_recover_init_ex;
    *(undefined **)(lVar1 + 0x20) = &EVP_PKEY_verify_recover;
    uVar3 = OPENSSL_sk_new_null();
    *(undefined8 *)(lVar1 + 0x48) = uVar3;
    uVar3 = OPENSSL_sk_new_null();
    *(undefined8 *)(lVar1 + 0x50) = uVar3;
    return 1;
  }
  return uVar3;
}



undefined8 verify_test_init(long param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = strchr(param_2,0x3a);
  if (pcVar2 != (char *)0x0) {
    uVar3 = pkey_test_init_ex2(param_1,param_2,1,&EVP_PKEY_verify_init_ex2,0);
    return uVar3;
  }
  uVar3 = pkey_test_init_keyctx(param_1,param_2,1);
  if ((*(int *)(param_1 + 0x998) == 0) && ((int)uVar3 != 0)) {
    lVar1 = *(long *)(param_1 + 0x9c8);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined **)(lVar1 + 0x10) = &EVP_PKEY_verify_init_ex;
    uVar3 = OPENSSL_sk_new_null();
    *(undefined8 *)(lVar1 + 0x48) = uVar3;
    uVar3 = OPENSSL_sk_new_null();
    *(undefined8 *)(lVar1 + 0x50) = uVar3;
    return 1;
  }
  return uVar3;
}



undefined8 kdf_test_run(long param_1)

{
  long *plVar1;
  void *ptr;
  int iVar2;
  void *ptr_00;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f4;
  long local_f0;
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
  
  plVar1 = *(long **)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0;
  lVar4 = plVar1[2];
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  iVar2 = OPENSSL_sk_num(plVar1[0x68]);
  if (iVar2 < 1) {
LAB_001063ff:
    iVar2 = EVP_KDF_CTX_set_params(*plVar1,plVar1 + 3);
    if (iVar2 != 0) {
      lVar3 = 1;
      if (lVar4 != 0) {
        lVar3 = lVar4;
      }
      ptr_00 = CRYPTO_malloc((int)lVar3,"test/evp_test.c",0xf9c);
      iVar2 = test_ptr("test/evp_test.c",0xf9c,"got = OPENSSL_malloc(got_len == 0 ? 1 : got_len)",
                       ptr_00);
      if (iVar2 == 0) {
        *(char **)(param_1 + 0x9a8) = "INTERNAL_ERROR";
      }
      else {
        iVar2 = fips_provider_version_gt(libctx,3,0,0);
        if ((iVar2 == 0) || (lVar3 = EVP_KDF_CTX_dup(*plVar1), lVar3 == 0)) {
          lVar3 = *plVar1;
        }
        else {
          EVP_KDF_CTX_free(*plVar1);
          *plVar1 = lVar3;
        }
        iVar2 = EVP_KDF_derive(lVar3,ptr_00,lVar4,0);
        if (iVar2 < 1) {
          *(char **)(param_1 + 0x9a8) = "KDF_DERIVE_ERROR";
        }
        else {
          lVar3 = *plVar1;
          local_f4 = 1;
          local_98 = (undefined1  [16])0x0;
          local_88 = (undefined1  [16])0x0;
          local_78 = (undefined1  [16])0x0;
          local_68 = (undefined1  [16])0x0;
          local_58 = (undefined1  [16])0x0;
          OSSL_PARAM_construct_int(local_128,"fips-indicator",&local_f4);
          local_78._0_8_ = local_108;
          iVar2 = EVP_KDF_CTX_get_params(lVar3,local_98);
          if ((iVar2 == 0) ||
             (iVar2 = check_fips_approved_isra_0(*(undefined4 *)(param_1 + 0x9d0),local_f4),
             iVar2 == 0)) {
            uVar6 = 0;
            goto joined_r0x00106439;
          }
          iVar2 = memory_err_compare(param_1,"KDF_MISMATCH",plVar1[1],plVar1[2],ptr_00,lVar4);
          if (iVar2 != 0) {
            *(undefined8 *)(param_1 + 0x9a8) = 0;
          }
        }
      }
      uVar6 = 1;
      goto joined_r0x00106439;
    }
  }
  else {
    iVar2 = ctrl2params(param_1,plVar1[0x68],0,local_e8,2,&local_f0);
    if (iVar2 == 0) {
      ptr_00 = (void *)0x0;
      uVar6 = 1;
      goto joined_r0x00106439;
    }
    iVar2 = EVP_KDF_CTX_set_params(*plVar1,local_e8);
    if (iVar2 != 0) goto LAB_001063ff;
  }
  ptr_00 = (void *)0x0;
  uVar6 = 1;
  *(char **)(param_1 + 0x9a8) = "KDF_CTRL_ERROR";
joined_r0x00106439:
  if (local_f0 != 0) {
    lVar4 = local_f0 + -1;
    puVar5 = &uStack_100 + local_f0 * 5;
    do {
      ptr = (void *)*puVar5;
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + -5;
      CRYPTO_free(ptr);
    } while (lVar4 != -1);
  }
  CRYPTO_free(ptr_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 digestsign_test_run(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uchar *sigret;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = signverify_init();
  if (iVar3 != 0) {
    if (*(int *)(lVar1 + 0x48) == 1) {
      local_a0 = CONCAT44(local_a0._4_4_,1);
      OSSL_PARAM_construct_uint(&local_d8,"nonce-type",&local_a0);
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
      iVar3 = EVP_PKEY_CTX_set_params(*(undefined8 *)(lVar1 + 0x18),&local_98);
      if (iVar3 == 0) {
        *(char **)(param_1 + 0x9a8) = "EVP_PKEY_CTX_set_params_ERROR";
      }
      else {
        iVar3 = EVP_PKEY_CTX_get_params(*(undefined8 *)(lVar1 + 0x18));
        if (iVar3 == 0) {
          *(char **)(param_1 + 0x9a8) = "EVP_PKEY_CTX_get_params_ERROR";
        }
        else {
          iVar3 = OSSL_PARAM_modified(&local_98);
          if (iVar3 == 0) {
            *(char **)(param_1 + 0x9a8) = "nonce_type_not_modified_ERROR";
          }
          else {
            if ((int)local_a0 == 1) goto LAB_001066b2;
            *(char **)(param_1 + 0x9a8) = "nonce_type_value_ERROR";
          }
        }
      }
    }
    else {
LAB_001066b2:
      if (*(long *)(param_1 + 0x9a8) == 0) {
        for (iVar3 = 0; iVar4 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x60)), iVar3 < iVar4;
            iVar3 = iVar3 + 1) {
          uVar5 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x60),iVar3);
          uVar5 = pkey_test_ctrl(param_1,*(undefined8 *)(lVar1 + 0x18),uVar5);
          if ((int)uVar5 == 0) goto LAB_0010667c;
          if (*(long *)(param_1 + 0x9a8) != 0) {
            uVar5 = 0;
            goto LAB_0010667c;
          }
        }
        uVar5 = *(undefined8 *)(lVar1 + 0x20);
        uVar2 = *(undefined8 *)(lVar1 + 0x10);
        for (iVar3 = 0; iVar4 = OPENSSL_sk_num(uVar5), iVar3 < iVar4; iVar3 = iVar3 + 1) {
          uVar7 = 0;
          puVar6 = (undefined8 *)OPENSSL_sk_value(uVar5);
          if (puVar6[2] != 0) {
            do {
              iVar4 = EVP_DigestSignUpdate(uVar2,*puVar6,puVar6[1]);
              if (iVar4 < 1) {
                *(char **)(param_1 + 0x9a8) = "DIGESTUPDATE_ERROR";
                goto LAB_0010665e;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < (ulong)puVar6[2]);
          }
        }
        iVar3 = EVP_DigestSignFinal(*(EVP_MD_CTX **)(lVar1 + 0x10),(uchar *)0x0,&local_a0);
        if (iVar3 != 0) {
          sigret = (uchar *)CRYPTO_malloc((int)local_a0,"test/evp_test.c",0x1258);
          iVar3 = test_ptr("test/evp_test.c",0x1258,"got = OPENSSL_malloc(got_len)",sigret);
          if (iVar3 == 0) {
            *(char **)(param_1 + 0x9a8) = "MALLOC_FAILURE";
          }
          else {
            local_a0 = local_a0 << 1;
            iVar3 = EVP_DigestSignFinal(*(EVP_MD_CTX **)(lVar1 + 0x10),sigret,&local_a0);
            if (iVar3 == 0) {
              *(char **)(param_1 + 0x9a8) = "DIGESTSIGNFINAL_ERROR";
            }
            else {
              iVar3 = memory_err_compare(param_1,"SIGNATURE_MISMATCH",*(undefined8 *)(lVar1 + 0x38),
                                         *(undefined8 *)(lVar1 + 0x40),sigret,local_a0);
              if (iVar3 != 0) {
                *(undefined8 *)(param_1 + 0x9a8) = 0;
              }
            }
          }
          goto LAB_00106667;
        }
        *(char **)(param_1 + 0x9a8) = "DIGESTSIGNFINAL_LENGTH_ERROR";
      }
    }
  }
LAB_0010665e:
  sigret = (uchar *)0x0;
LAB_00106667:
  CRYPTO_free(sigret);
  uVar5 = 1;
LAB_0010667c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* WARNING: Type propagation algorithm not settling */

void decapsulate_isra_0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  void *pvVar5;
  void **ppvVar6;
  long in_FS_OFFSET;
  void *local_b0 [2];
  long local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  lVar3 = *(long *)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_b0[1] = (void *)0x0;
  local_a0 = 0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar3 + 0x30));
  if (iVar1 < 1) {
    puVar4 = (undefined1 *)0x0;
LAB_00106a3f:
    iVar1 = EVP_PKEY_decapsulate_init(param_2,puVar4);
    if (iVar1 < 1) {
      *(char **)(param_1 + 0x9a8) = "TEST_DECAPSULATE_INIT_ERROR";
    }
    else if ((param_3 == 0) || (iVar1 = EVP_PKEY_CTX_set_kem_op(param_2,param_3), 0 < iVar1)) {
      iVar1 = EVP_PKEY_decapsulate(param_2,0,local_b0 + 1,param_4,param_5);
      if (0 < iVar1) {
        local_b0[0] = CRYPTO_malloc((int)local_b0[1],"test/evp_test.c",0x91f);
        iVar1 = test_ptr("test/evp_test.c",0x91f,"out = OPENSSL_malloc(outlen)",local_b0[0]);
        pvVar5 = local_b0[0];
        if (iVar1 != 0) {
          iVar1 = EVP_PKEY_decapsulate(param_2,local_b0[0],local_b0 + 1,param_4,param_5);
          if (iVar1 < 1) {
            *(char **)(param_1 + 0x9a8) = "TEST_DECAPSULATE_ERROR";
          }
          else {
            iVar1 = test_mem_eq("test/evp_test.c",0x928,&_LC204,"expected",pvVar5,local_b0[1],
                                param_6,param_7);
            pcVar2 = "TEST_SECRET_MISMATCH";
            if (iVar1 != 0) {
              pcVar2 = (char *)0x0;
            }
            *(char **)(param_1 + 0x9a8) = pcVar2;
          }
        }
        goto LAB_00106b68;
      }
      *(char **)(param_1 + 0x9a8) = "TEST_DECAPSULATE_LEN_ERROR";
    }
    else {
      *(char **)(param_1 + 0x9a8) = "TEST_SET_KEM_OP_ERROR";
    }
  }
  else {
    puVar4 = local_98;
    iVar1 = ctrl2params(param_1,*(undefined8 *)(lVar3 + 0x30),0,puVar4,2,&local_a0);
    if (iVar1 != 0) goto LAB_00106a3f;
  }
  pvVar5 = (void *)0x0;
LAB_00106b68:
  CRYPTO_free(pvVar5);
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar3 + 0x30));
  if ((0 < iVar1) && (lVar3 = local_a0 + -1, local_a0 != 0)) {
    ppvVar6 = local_b0 + local_a0 * 5;
    do {
      pvVar5 = *ppvVar6;
      lVar3 = lVar3 + -1;
      ppvVar6 = ppvVar6 + -5;
      CRYPTO_free(pvVar5);
    } while (lVar3 != -1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8 digest_test_run(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  EVP_MD_CTX *ctx;
  undefined8 *puVar8;
  EVP_MD_CTX *out;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  uchar *local_148;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  uint local_f4;
  undefined8 local_f0;
  undefined8 local_e8 [5];
  undefined8 local_c0 [16];
  long local_40;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0;
  *(char **)(param_1 + 0x9a8) = "TEST_FAILURE";
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  iVar6 = test_ptr("test/evp_test.c",0x2ff,"mctx = EVP_MD_CTX_new()",ctx);
  local_148 = (uchar *)0x0;
  if (iVar6 != 0) {
    uVar11 = puVar1[4];
    if (uVar11 < 0x40) {
      uVar11 = 0x40;
    }
    local_148 = (uchar *)CRYPTO_malloc((int)uVar11,"test/evp_test.c",0x302);
    iVar6 = test_ptr("test/evp_test.c",0x304,&_LC21,local_148);
    if (iVar6 != 0) {
      bVar5 = 0 < *(int *)((long)puVar1 + 0x2c);
      if (bVar5) {
        OSSL_PARAM_construct_size_t(&local_128,"xoflen",puVar1 + 4);
        lVar4 = puVar1[6];
        puVar8 = local_c0;
      }
      else {
        puVar8 = local_e8;
        lVar4 = puVar1[6];
      }
      puVar12 = puVar8;
      if (lVar4 != 0) {
        puVar12 = puVar8 + 5;
        OSSL_PARAM_construct_size_t(&local_128,&_LC208,puVar1 + 6);
        *puVar8 = local_128;
        puVar8[1] = uStack_120;
        puVar8[2] = local_118;
        puVar8[3] = uStack_110;
        puVar8[4] = local_108;
      }
      puVar8 = puVar12;
      if (0 < *(int *)(puVar1 + 5)) {
        puVar8 = puVar12 + 5;
        OSSL_PARAM_construct_int(&local_128,"pad-type",puVar1 + 5);
        *puVar12 = local_128;
        puVar12[1] = uStack_120;
        puVar12[2] = local_118;
        puVar12[3] = uStack_110;
        puVar12[4] = local_108;
      }
      OSSL_PARAM_construct_end(&local_128);
      uVar9 = *puVar1;
      *puVar8 = local_128;
      puVar8[1] = uStack_120;
      puVar8[2] = local_118;
      puVar8[3] = uStack_110;
      puVar8[4] = local_108;
      iVar6 = EVP_DigestInit_ex2(ctx,uVar9,local_e8);
      if (iVar6 == 0) {
        *(char **)(param_1 + 0x9a8) = "DIGESTINIT_ERROR";
      }
      else {
        uVar9 = puVar1[2];
        for (iVar6 = 0; iVar7 = OPENSSL_sk_num(uVar9), iVar6 < iVar7; iVar6 = iVar6 + 1) {
          puVar8 = (undefined8 *)OPENSSL_sk_value(uVar9,iVar6);
          if (puVar8[2] != 0) {
            uVar11 = 0;
            do {
              iVar7 = EVP_DigestUpdate(ctx,(void *)*puVar8,puVar8[1]);
              if (iVar7 < 1) {
                *(char **)(param_1 + 0x9a8) = "DIGESTUPDATE_ERROR";
                goto LAB_00106ccb;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < (ulong)puVar8[2]);
          }
        }
        iVar6 = EVP_MD_xof(*puVar1);
        if (bVar5 || iVar6 != 0) {
          out = (EVP_MD_CTX *)EVP_MD_CTX_new();
          iVar7 = test_ptr("test/evp_test.c",0x323,"mctx_cpy = EVP_MD_CTX_new()",out);
          if (iVar7 == 0) goto LAB_00106ccb;
          iVar7 = EVP_MD_CTX_copy(out,ctx);
          iVar7 = test_true("test/evp_test.c",0x326,"EVP_MD_CTX_copy(mctx_cpy, mctx)",iVar7 != 0);
          if (iVar7 == 0) {
            EVP_MD_CTX_free(out);
            goto LAB_00106ccb;
          }
          iVar7 = test_duplicate_md_ctx(param_1,out);
          if (iVar7 == 0) goto LAB_00106ccb;
          uVar9 = EVP_MD_CTX_dup(ctx);
          iVar7 = test_duplicate_md_ctx(param_1,uVar9);
          if (iVar7 == 0) goto LAB_00106ccb;
          local_f4 = (uint)puVar1[4];
          iVar7 = EVP_DigestFinalXOF(ctx,local_148,puVar1[4] & 0xffffffff);
          if (iVar7 == 0) {
            *(char **)(param_1 + 0x9a8) = "DIGESTFINALXOF_ERROR";
            goto LAB_00106ccb;
          }
        }
        else {
          iVar7 = EVP_DigestFinal(ctx,local_148,&local_f4);
          if (iVar7 == 0) {
            *(char **)(param_1 + 0x9a8) = "DIGESTFINAL_ERROR";
            goto LAB_00106ccb;
          }
        }
        iVar7 = test_int_eq("test/evp_test.c",0x33b,"expected->output_len","got_len",
                            *(undefined4 *)(puVar1 + 4),local_f4);
        if (iVar7 == 0) {
          *(char **)(param_1 + 0x9a8) = "DIGEST_LENGTH_MISMATCH";
        }
        else {
          iVar7 = memory_err_compare(param_1,"DIGEST_MISMATCH",puVar1[3],puVar1[4],local_148,
                                     local_f4);
          if (iVar7 != 0) {
            *(undefined8 *)(param_1 + 0x9a8) = 0;
            iVar7 = OPENSSL_sk_num(puVar1[2]);
            if ((!bVar5 && iVar6 == 0) && (iVar7 == 1)) {
              puVar8 = (undefined8 *)OPENSSL_sk_value(puVar1[2],0);
              iVar6 = test_ptr("test/evp_test.c",0x34a,
                               "inbuf = sk_EVP_TEST_BUFFER_value(expected->input, 0)",puVar8);
              if ((iVar6 == 0) && (*(int *)(puVar8 + 3) == 0)) {
                OPENSSL_cleanse(local_148,(ulong)local_f4);
                uVar9 = puVar1[1];
                uVar2 = *puVar8;
                uVar3 = puVar8[1];
                uVar10 = EVP_MD_get0_name();
                iVar6 = EVP_Q_digest(libctx,uVar10,0,uVar2,uVar3,local_148,&local_f0,uVar9);
                iVar6 = test_true("test/evp_test.c",0x34d,
                                  "EVP_Q_digest(libctx, EVP_MD_get0_name(expected->fetched_digest), NULL, inbuf->buf, inbuf->buflen, got, &size)"
                                  ,iVar6 != 0);
                if ((iVar6 == 0) ||
                   (iVar6 = test_mem_eq("test/evp_test.c",0x351,&_LC21,"expected->output",local_148,
                                        local_f0,puVar1[3],puVar1[4]), iVar6 == 0)) {
                  *(char **)(param_1 + 0x9a8) = "EVP_Q_digest failed";
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00106ccb:
  CRYPTO_free(local_148);
  EVP_MD_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* WARNING: Type propagation algorithm not settling */

undefined8
encapsulate_constprop_0
          (long param_1,undefined8 param_2,long param_3,undefined8 *param_4,long *param_5,
          undefined8 *param_6,undefined8 *param_7)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *ptr;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  long local_1f0 [54];
  long local_40;
  
  lVar5 = *(long *)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1f0[0] = 0;
  local_1f0[1] = 0;
  local_1f0[2] = 0;
  lVar4 = 9 - (ulong)(*(long *)(lVar5 + 0x68) != 0);
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar5 + 0x30));
  if (iVar1 < 1) {
    lVar8 = 0;
LAB_001072a1:
    iVar1 = test_size_t_lt("test/evp_test.c",0x8bb,"params_n","params_max",lVar8,lVar4);
    if (iVar1 == 0) goto LAB_00107547;
    lVar4 = lVar8;
    if (*(long *)(lVar5 + 0x68) != 0) {
      lVar4 = lVar8 + 1;
      local_1f0[2] = lVar4;
      OSSL_PARAM_construct_octet_string
                (&local_228,&_LC222,*(long *)(lVar5 + 0x68),*(undefined8 *)(lVar5 + 0x70));
      local_1f0[lVar8 * 5U + 3] = local_228;
      local_1f0[lVar8 * 5 + 4] = uStack_220;
      local_1f0[lVar8 * 5 + 5] = local_218;
      local_1f0[lVar8 * 5 + 6] = uStack_210;
      local_1f0[lVar8 * 5 + 7] = local_208;
    }
    OSSL_PARAM_construct_end(&local_228);
    local_1f0[lVar4 * 5U + 3] = local_228;
    local_1f0[lVar4 * 5 + 4] = uStack_220;
    local_1f0[lVar4 * 5 + 5] = local_218;
    local_1f0[lVar4 * 5 + 6] = uStack_210;
    local_1f0[lVar4 * 5 + 7] = local_208;
    iVar1 = EVP_PKEY_encapsulate_init(param_2,local_1f0 + 3);
    if (iVar1 < 1) {
      *(char **)(param_1 + 0x9a8) = "TEST_ENCAPSULATE_INIT_ERROR";
LAB_0010760f:
      uVar7 = 1;
      goto LAB_00107570;
    }
    if ((param_3 != 0) && (iVar1 = EVP_PKEY_CTX_set_kem_op(param_2,param_3), iVar1 < 1)) {
      *(char **)(param_1 + 0x9a8) = "TEST_SET_KEM_OP_ERROR";
      goto LAB_0010760f;
    }
    iVar1 = EVP_PKEY_encapsulate(param_2,0,local_1f0,0);
    if (iVar1 < 1) {
      *(char **)(param_1 + 0x9a8) = "TEST_ENCAPSULATE_LEN_ERROR";
      goto LAB_0010760f;
    }
    pvVar3 = CRYPTO_malloc((int)local_1f0[0],"test/evp_test.c",0x8d3);
    ptr = CRYPTO_malloc((int)local_1f0[1],"test/evp_test.c",0x8d4);
    iVar1 = test_ptr("test/evp_test.c",0x8d5,"wrapped",pvVar3);
    if ((iVar1 != 0) && (iVar1 = test_ptr("test/evp_test.c",0x8d5,"secret",ptr), iVar1 != 0)) {
      iVar1 = EVP_PKEY_encapsulate(param_2,pvVar3,local_1f0,ptr,local_1f0 + 1);
      if (iVar1 < 1) {
        *(char **)(param_1 + 0x9a8) = "TEST_ENCAPSULATE_ERROR";
      }
      else {
        iVar1 = pkey_check_fips_approved(param_2,param_1);
        if ((((*(long *)(lVar5 + 0x78) != 0) &&
             (iVar2 = test_mem_eq("test/evp_test.c",0x8e0,"wrapped","kdata->ciphertext",pvVar3,
                                  local_1f0[0],*(long *)(lVar5 + 0x78),*(undefined8 *)(lVar5 + 0x80)
                                 ), iVar2 == 0)) ||
            ((*(long *)(lVar5 + 0x20) != 0 &&
             (iVar2 = test_mem_eq("test/evp_test.c",0x8e6,"secret","kdata->output",ptr,local_1f0[1],
                                  *(long *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28)), iVar2 == 0
             )))) || (iVar1 == 0)) goto LAB_0010754d;
        *(undefined8 *)(param_1 + 0x9a8) = 0;
        *param_4 = pvVar3;
        *param_6 = ptr;
        *param_5 = local_1f0[0];
        *param_7 = local_1f0[1];
      }
      goto LAB_0010760f;
    }
  }
  else {
    iVar1 = ctrl2params(param_1,*(undefined8 *)(lVar5 + 0x30),0,local_1f0 + 3,lVar4,local_1f0 + 2);
    lVar8 = local_1f0[2];
    if (iVar1 != 0) goto LAB_001072a1;
LAB_00107547:
    ptr = (void *)0x0;
    pvVar3 = (void *)0x0;
  }
LAB_0010754d:
  uVar7 = 0;
  CRYPTO_free(pvVar3);
  CRYPTO_free(ptr);
LAB_00107570:
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar5 + 0x30));
  if ((0 < iVar1) && (lVar5 = local_1f0[2] + -1, local_1f0[2] != 0)) {
    plVar6 = local_1f0 + local_1f0[2] * 5;
    do {
      pvVar3 = (void *)*plVar6;
      lVar5 = lVar5 + -1;
      plVar6 = plVar6 + -5;
      CRYPTO_free(pvVar3);
    } while (lVar5 != -1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



int kem_test_run(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  EVP_PKEY *pkey;
  char *pcVar5;
  undefined8 *puVar6;
  void *ptr;
  long in_FS_OFFSET;
  void *local_78;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (void *)0x0;
  local_58 = (void *)0x0;
  pcVar5 = (char *)puVar1[8];
  if (pcVar5 != (char *)0x0) {
    puVar6 = private_keys;
    if (private_keys != (undefined8 *)0x0) {
      do {
        iVar3 = strcmp((char *)*puVar6,pcVar5);
        if (iVar3 == 0) {
          pkey = (EVP_PKEY *)puVar6[1];
          if (pkey == (EVP_PKEY *)0x0) {
            bVar2 = true;
            goto LAB_00107873;
          }
          uVar4 = EVP_PKEY_CTX_new_from_pkey(libctx,pkey,propquery);
          *puVar1 = uVar4;
          iVar3 = test_ptr("test/evp_test.c",0x95d,
                           "kdata->ctx = EVP_PKEY_CTX_new_from_pkey(libctx, pkey, propquery)",uVar4)
          ;
          bVar2 = true;
          if (iVar3 != 0) goto LAB_00107731;
          local_78 = (void *)0x0;
          ptr = (void *)0x0;
          iVar3 = 0;
          goto LAB_0010778b;
        }
        puVar6 = (undefined8 *)puVar6[2];
      } while (puVar6 != (undefined8 *)0x0);
    }
    bVar2 = false;
LAB_00107873:
    ptr = (void *)0x0;
    pkey = (EVP_PKEY *)0x0;
    iVar3 = 1;
    test_info("test/evp_test.c",0x942,"skipping, key \'%s\' is disabled",pcVar5);
    local_78 = (void *)0x0;
    *(undefined4 *)(param_1 + 0x998) = 1;
    goto LAB_0010777e;
  }
  ptr = (void *)0x0;
  if (puVar1[9] == 0) {
    if (puVar1[0xb] != 0) {
      pkey = (EVP_PKEY *)
             EVP_PKEY_new_raw_private_key_ex(libctx,puVar1[7],propquery,puVar1[0xb],puVar1[0xc]);
      if (pkey == (EVP_PKEY *)0x0) {
        pcVar5 = "TEST_PARSE_PRIVATE_KEY_ERROR";
        goto LAB_00107901;
      }
      goto LAB_00107816;
    }
    iVar3 = 0;
    test_info("test/evp_test.c",0x959,"Missing parameters to create key");
    local_78 = (void *)0x0;
    pkey = (EVP_PKEY *)0x0;
  }
  else {
    pkey = (EVP_PKEY *)
           EVP_PKEY_new_raw_public_key_ex(libctx,puVar1[7],propquery,puVar1[9],puVar1[10]);
    pcVar5 = "TEST_PARSE_PUBLIC_KEY_ERROR";
    if (pkey == (EVP_PKEY *)0x0) {
LAB_00107901:
      *(char **)(param_1 + 0x9a8) = pcVar5;
      pkey = (EVP_PKEY *)0x0;
      iVar3 = 1;
      local_78 = (void *)0x0;
    }
    else {
LAB_00107816:
      uVar4 = EVP_PKEY_CTX_new_from_pkey(libctx,pkey,propquery);
      *puVar1 = uVar4;
      iVar3 = test_ptr("test/evp_test.c",0x95d,
                       "kdata->ctx = EVP_PKEY_CTX_new_from_pkey(libctx, pkey, propquery)",uVar4);
      bVar2 = false;
      if (iVar3 == 0) {
        local_78 = (void *)0x0;
        iVar3 = 0;
      }
      else {
LAB_00107731:
        if (puVar1[2] == 0) {
          local_50 = 0;
          local_48 = 0;
          iVar3 = encapsulate_constprop_0
                            (param_1,*puVar1,puVar1[1],&local_60,&local_50,&local_58,&local_48);
          ptr = local_60;
          if ((iVar3 == 0) || (*(long *)(param_1 + 0x9a8) != 0)) {
            local_78 = local_58;
          }
          else {
            local_78 = local_58;
            if ((!bVar2) && (iVar3 = 1, puVar1[0xb] == 0)) goto LAB_00107783;
            iVar3 = 1;
            decapsulate_isra_0(param_1,*puVar1,puVar1[1],local_60,local_50,local_58,local_48);
          }
        }
        else {
          ptr = (void *)0x0;
          iVar3 = 1;
          decapsulate_isra_0(param_1);
          local_78 = (void *)0x0;
        }
LAB_0010777e:
        if (bVar2) goto LAB_0010778b;
      }
    }
  }
LAB_00107783:
  EVP_PKEY_free(pkey);
LAB_0010778b:
  CRYPTO_free(ptr);
  CRYPTO_free(local_78);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



undefined8 mac_test_run_mac(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  void *ptr;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  long local_4e0;
  undefined8 *local_4d0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  size_t local_478;
  undefined8 local_470;
  long local_468;
  ulong local_460;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0 [11];
  undefined8 local_388 [105];
  long local_40;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_484 = 0xffffffff;
  local_478 = 0;
  local_470 = 0;
  local_468 = 0;
  local_480 = 0xffffffff;
  local_460 = 0;
  uVar4 = EVP_MAC_settable_ctx_params(puVar1[1]);
  if (puVar1[3] == 0) {
    test_info("test/evp_test.c",0x759,"Trying the EVP_MAC %s test",*puVar1);
  }
  else {
    test_info("test/evp_test.c",0x75b,"Trying the EVP_MAC %s test with %s",*puVar1);
  }
  if (puVar1[3] == 0) {
    uVar9 = 0;
  }
  else {
    lVar5 = OSSL_PARAM_locate_const(uVar4,"cipher");
    if (lVar5 == 0) {
      lVar5 = OSSL_PARAM_locate_const(uVar4,"digest");
      if (lVar5 == 0) {
        pcVar6 = "MAC_BAD_PARAMS";
        goto LAB_00107e83;
      }
      iVar2 = OPENSSL_strcasecmp(puVar1[3],&_LC29);
      if (iVar2 == 0) goto LAB_00107e58;
      local_460 = 1;
      OSSL_PARAM_construct_utf8_string(&local_4b8,"digest",puVar1[3],0);
    }
    else {
      iVar2 = OPENSSL_strncasecmp(puVar1[3],&_LC157,3);
      if (iVar2 == 0) {
LAB_00107e58:
        test_info("test/evp_test.c",0x77b,"skipping, algorithm \'%s\' is disabled",puVar1[3]);
        *(undefined4 *)(param_1 + 0x998) = 1;
        pcVar6 = (char *)0x0;
LAB_00107e83:
        ptr = (void *)0x0;
        local_4e0 = 0;
        *(char **)(param_1 + 0x9a8) = pcVar6;
        goto LAB_00107d22;
      }
      local_460 = 1;
      OSSL_PARAM_construct_utf8_string(&local_4b8,"cipher",puVar1[3],0);
    }
    uVar9 = 1;
  }
  uVar10 = uVar9;
  if (puVar1[0xc] != 0) {
    uVar10 = uVar9 + 1;
    local_460 = uVar10;
    OSSL_PARAM_construct_octet_string(&local_4b8,"custom",puVar1[0xc],puVar1[0xd]);
    local_388[uVar9 * 5] = local_4b8;
    local_388[uVar9 * 5 + 1] = uStack_4b0;
    local_388[uVar9 * 5 + 2] = local_4a8;
    local_388[uVar9 * 5 + 3] = uStack_4a0;
    local_388[uVar9 * 5 + 4] = local_498;
  }
  uVar9 = uVar10;
  if (puVar1[0xe] != 0) {
    uVar9 = uVar10 + 1;
    local_460 = uVar9;
    OSSL_PARAM_construct_octet_string(&local_4b8,&_LC245,puVar1[0xe],puVar1[0xf]);
    local_388[uVar10 * 5] = local_4b8;
    local_388[uVar10 * 5 + 1] = uStack_4b0;
    local_388[uVar10 * 5 + 2] = local_4a8;
    local_388[uVar10 * 5 + 3] = uStack_4a0;
    local_388[uVar10 * 5 + 4] = local_498;
  }
  uVar10 = uVar9;
  if (puVar1[6] != 0) {
    uVar10 = uVar9 + 1;
    local_460 = uVar10;
    OSSL_PARAM_construct_octet_string(&local_4b8,&_LC115,puVar1[6],puVar1[7]);
    local_388[uVar9 * 5] = local_4b8;
    local_388[uVar9 * 5 + 1] = uStack_4b0;
    local_388[uVar9 * 5 + 2] = local_4a8;
    local_388[uVar9 * 5 + 3] = uStack_4a0;
    local_388[uVar9 * 5 + 4] = local_498;
  }
  iVar2 = ctrl2params(param_1,puVar1[0x11],uVar4,local_388,0x15,&local_460);
  if ((iVar2 != 0) &&
     ((lVar5 = OSSL_PARAM_locate(local_388 + uVar10 * 5,&_LC208), lVar5 == 0 ||
      (iVar2 = OSSL_PARAM_get_size_t(lVar5,&local_468), iVar2 != 0)))) {
    local_4e0 = EVP_MAC_CTX_new(puVar1[1]);
    if (local_4e0 != 0) {
      lVar5 = 0;
      iVar2 = fips_provider_version_gt(libctx,3,2,0);
      if (iVar2 != 0) {
        ERR_set_mark();
        lVar5 = EVP_MAC_CTX_get_mac_size(local_4e0);
        ERR_pop_to_mark();
      }
      iVar2 = EVP_MAC_init(local_4e0,puVar1[4],puVar1[5],local_388);
      if (iVar2 == 0) {
        pcVar6 = "MAC_INIT_ERROR";
      }
      else {
        lVar7 = EVP_MAC_CTX_get_mac_size(local_4e0);
        iVar2 = test_false("test/evp_test.c",0x7ab,"size_before_init == 0 && size_after_init == 0",
                           lVar7 == 0 && lVar5 == 0);
        if (iVar2 == 0) {
          ptr = (void *)0x0;
          *(char **)(param_1 + 0x9a8) = "MAC SIZE not set";
          goto LAB_00107cdf;
        }
        if (lVar5 != 0) {
          if (local_468 == 0) {
            iVar2 = test_size_t_eq("test/evp_test.c",0x7b1,"size_before_init","size_after_init",
                                   lVar5,lVar7);
            if (iVar2 != 0) {
              if (local_468 == 0) goto LAB_00107fdf;
              goto LAB_00107f82;
            }
          }
          else {
LAB_00107f82:
            iVar2 = test_size_t_eq("test/evp_test.c",0x7b6,"size_val","size_after_init",local_468,
                                   lVar7);
            if (iVar2 != 0) goto LAB_00107fdf;
          }
          pcVar6 = "MAC SIZE check failed";
          goto LAB_00107e13;
        }
LAB_00107fdf:
        if (*(int *)(puVar1 + 0x12) < 0) {
          if (*(int *)((long)puVar1 + 0x94) < 0) goto LAB_00107ffd;
          puVar8 = &local_408;
LAB_0010837c:
          puVar12 = puVar8 + 5;
          OSSL_PARAM_construct_int(&local_4b8,"block-size",&local_484);
          *puVar8 = local_4b8;
          puVar8[1] = uStack_4b0;
          puVar8[2] = local_4a8;
          puVar8[3] = uStack_4a0;
          puVar8[4] = local_498;
        }
        else {
          OSSL_PARAM_construct_int(&local_4b8,&_LC208,&local_480);
          local_408 = local_4b8;
          uStack_400 = uStack_4b0;
          local_3e8 = local_498;
          local_3f8 = local_4a8;
          uStack_3f0 = uStack_4a0;
          if (-1 < *(int *)((long)puVar1 + 0x94)) {
            puVar8 = local_3e0;
            goto LAB_0010837c;
          }
          puVar12 = local_3e0;
        }
        local_4d0 = &local_4b8;
        OSSL_PARAM_construct_end(local_4d0);
        *puVar12 = local_4b8;
        puVar12[1] = uStack_4b0;
        puVar12[2] = local_4a8;
        puVar12[3] = uStack_4a0;
        puVar12[4] = local_498;
        iVar2 = EVP_MAC_CTX_get_params(local_4e0,&local_408);
        iVar2 = test_true("test/evp_test.c",0x7c3,"EVP_MAC_CTX_get_params(ctx, sizes)",iVar2 != 0);
        if (iVar2 == 0) {
          pcVar6 = "INTERNAL_ERROR";
        }
        else {
          if (((*(int *)(puVar1 + 0x12) < 0) ||
              (iVar2 = test_int_eq("test/evp_test.c",0x7c8,"output_size","expected->output_size",
                                   local_480), iVar2 != 0)) &&
             ((*(int *)((long)puVar1 + 0x94) < 0 ||
              (iVar2 = test_int_eq("test/evp_test.c",0x7cd,"block_size","expected->block_size",
                                   local_484), iVar2 != 0)))) {
LAB_00107ffd:
            local_4d0._0_4_ = 2;
            do {
              uVar9 = puVar1[9];
              lVar5 = 0;
              do {
                if (data_chunk_size == 0) {
                  iVar2 = EVP_MAC_update(local_4e0,puVar1[8] + lVar5,uVar9);
                  if (iVar2 == 0) {
LAB_00108064:
                    pcVar6 = "MAC_UPDATE_ERROR";
                    goto LAB_00107e13;
                  }
                  break;
                }
                uVar11 = (long)data_chunk_size;
                if (uVar9 < (ulong)(long)data_chunk_size) {
                  uVar11 = uVar9;
                }
                iVar2 = EVP_MAC_update(local_4e0,puVar1[8] + lVar5,uVar11);
                if (iVar2 == 0) goto LAB_00108064;
                lVar5 = lVar5 + uVar11;
                uVar9 = uVar9 - uVar11;
              } while (uVar9 != 0);
              iVar2 = *(int *)(puVar1 + 0x10);
              if (iVar2 == 0) {
                iVar3 = EVP_MAC_final(local_4e0,0,&local_478,0);
                if (iVar3 == 0) {
                  ptr = (void *)0x0;
                  *(char **)(param_1 + 0x9a8) = "MAC_FINAL_LENGTH_ERROR";
                  goto LAB_00107cdf;
                }
                ptr = CRYPTO_malloc((int)local_478,"test/evp_test.c",0x7f4);
                iVar3 = test_ptr("test/evp_test.c",0x7f4,"got = OPENSSL_malloc(got_len)",ptr);
                if (iVar3 == 0) goto LAB_0010869a;
                iVar3 = EVP_MAC_final(local_4e0,ptr,&local_478,local_478);
                if ((iVar3 == 0) ||
                   (iVar3 = memory_err_compare(param_1,"TEST_MAC_ERR",puVar1[10],puVar1[0xb],ptr,
                                               local_478), iVar3 == 0)) {
                  *(char **)(param_1 + 0x9a8) = "TEST_MAC_ERR";
                  goto LAB_00107cdf;
                }
                local_47c = 1;
                local_458 = (undefined1  [16])0x0;
                local_448 = (undefined1  [16])0x0;
                local_438 = (undefined1  [16])0x0;
                local_428 = (undefined1  [16])0x0;
                local_418 = (undefined1  [16])0x0;
                lVar5 = EVP_MAC_CTX_gettable_params(local_4e0);
                if (lVar5 != 0) {
                  OSSL_PARAM_construct_int(&local_4b8,"fips-indicator",&local_47c);
                  local_458._8_8_ = uStack_4b0;
                  local_458._0_8_ = local_4b8;
                  local_438._0_8_ = local_498;
                  local_448._8_8_ = uStack_4a0;
                  local_448._0_8_ = local_4a8;
                  iVar3 = EVP_MAC_CTX_get_params(local_4e0,local_458);
                  if ((iVar3 == 0) ||
                     (iVar3 = check_fips_approved_isra_0(*(undefined4 *)(param_1 + 0x9d0),local_47c)
                     , iVar3 == 0)) goto LAB_00107cdf;
                }
              }
              else {
                ptr = CRYPTO_malloc((int)puVar1[0xb],"test/evp_test.c",0x7e4);
                iVar3 = test_ptr("test/evp_test.c",0x7e4,
                                 "got = OPENSSL_malloc(expected->output_len)",ptr);
                if (iVar3 == 0) {
LAB_0010869a:
                  *(char **)(param_1 + 0x9a8) = "TEST_FAILURE";
                  goto LAB_00107cdf;
                }
                iVar3 = EVP_MAC_finalXOF(local_4e0,ptr,puVar1[0xb]);
                if ((iVar3 == 0) ||
                   (iVar3 = memory_err_compare(param_1,"TEST_MAC_ERR",puVar1[10],puVar1[0xb],ptr,
                                               puVar1[0xb]), iVar3 == 0)) {
                  *(char **)(param_1 + 0x9a8) = "MAC_FINAL_ERROR";
                  goto LAB_00107cdf;
                }
              }
              if (((int)local_4d0 == 1) ||
                 (iVar3 = fips_provider_version_gt(libctx,3,0,0), iVar3 == 0)) {
LAB_0010859d:
                *(undefined8 *)(param_1 + 0x9a8) = 0;
                if (iVar2 == 0) {
                  OPENSSL_cleanse(ptr,local_478);
                  lVar5 = EVP_Q_mac(libctx,*puVar1,0,puVar1[3],local_388,puVar1[4],puVar1[5],
                                    puVar1[8],puVar1[9],ptr,local_478,&local_470);
                  iVar2 = test_true("test/evp_test.c",0x829,
                                    "EVP_Q_mac(libctx, expected->mac_name, NULL, expected->alg, params, expected->key, expected->key_len, expected->input, expected->input_len, got, got_len, &size)"
                                    ,lVar5 != 0);
                  if ((iVar2 == 0) ||
                     (iVar2 = test_mem_eq("test/evp_test.c",0x82e,&_LC21,"expected->output",ptr,
                                          local_470,puVar1[10],puVar1[0xb]), iVar2 == 0)) {
                    *(char **)(param_1 + 0x9a8) = "EVP_Q_mac failed";
                  }
                }
                goto LAB_00107cdf;
              }
              local_458 = (undefined1  [16])0x0;
              local_448 = (undefined1  [16])0x0;
              local_438 = (undefined1  [16])0x0;
              local_428 = (undefined1  [16])0x0;
              local_418 = (undefined1  [16])0x0;
              if (puVar1[6] != 0) {
                OSSL_PARAM_construct_octet_string(&local_4b8,&_LC115,puVar1[6],puVar1[7]);
                local_438._0_8_ = local_498;
                local_458._8_8_ = uStack_4b0;
                local_458._0_8_ = local_4b8;
                local_448._8_8_ = uStack_4a0;
                local_448._0_8_ = local_4a8;
                OSSL_PARAM_construct_end(&local_4b8);
                local_438._8_8_ = local_4b8;
                local_428._8_8_ = local_4a8;
                local_428._0_8_ = uStack_4b0;
                local_418._8_8_ = local_498;
                local_418._0_8_ = uStack_4a0;
              }
              ERR_set_mark();
              iVar3 = EVP_MAC_init(local_4e0,0,0);
              if (*(int *)((long)puVar1 + 0x84) != 0) {
                if (iVar3 == 0) {
                  ERR_pop_to_mark();
                  goto LAB_0010859d;
                }
                ERR_clear_last_mark();
                pcVar6 = "MAC_REINIT_SHOULD_FAIL";
                goto LAB_0010835b;
              }
              if (iVar3 == 0) goto code_r0x0010834f;
              ERR_clear_last_mark();
              CRYPTO_free(ptr);
              local_4d0._0_4_ = 1;
            } while( true );
          }
          pcVar6 = "TEST_FAILURE";
        }
      }
LAB_00107e13:
      ptr = (void *)0x0;
      *(char **)(param_1 + 0x9a8) = pcVar6;
      goto LAB_00107cdf;
    }
    *(char **)(param_1 + 0x9a8) = "MAC_CREATE_ERROR";
  }
  local_4e0 = 0;
  ptr = (void *)0x0;
  goto LAB_00107cdf;
code_r0x0010834f:
  ERR_clear_last_mark();
  pcVar6 = "MAC_REINIT_ERROR";
LAB_0010835b:
  *(char **)(param_1 + 0x9a8) = pcVar6;
LAB_00107cdf:
  uVar9 = local_460;
  if (uVar10 < local_460) {
    do {
      uVar9 = uVar9 - 1;
      CRYPTO_free((void *)local_388[uVar9 * 5 + 2]);
    } while (uVar9 != uVar10);
  }
LAB_00107d22:
  EVP_MAC_CTX_free(local_4e0);
  CRYPTO_free(ptr);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mac_test_run(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  EVP_PKEY_CTX *ctx;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  uchar *sigret;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  EVP_MD_CTX *local_78;
  EVP_PKEY *local_70;
  undefined8 local_68;
  EVP_PKEY_CTX *local_50;
  size_t local_48;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(lVar1 + 8) != 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = mac_test_run_mac();
      return uVar5;
    }
    goto LAB_00108cb0;
  }
  local_50 = (EVP_PKEY_CTX *)0x0;
  if (*(int *)(lVar1 + 0x80) == 0) {
    lVar8 = *(long *)(lVar1 + 0x18);
    if (lVar8 == 0) {
      pcVar6 = OBJ_nid2sn(*(int *)(lVar1 + 0x10));
      test_info("test/evp_test.c",0x6e0,"Trying the EVP_PKEY %s test",pcVar6);
    }
    else {
      pcVar6 = OBJ_nid2sn(*(int *)(lVar1 + 0x10));
      test_info("test/evp_test.c",0x6e2,"Trying the EVP_PKEY %s test with %s",pcVar6,lVar8);
    }
    sigret = (uchar *)0x0;
    if (*(int *)(lVar1 + 0x10) == 0x37e) {
      lVar8 = *(long *)(lVar1 + 0x18);
      if (lVar8 == 0) {
LAB_001087e8:
        local_68 = EVP_CIPHER_fetch(libctx,lVar8,propquery);
        iVar3 = test_ptr("test/evp_test.c",0x6f4,
                         "cipher = EVP_CIPHER_fetch(libctx, expected->alg, propquery)",local_68);
        if (iVar3 != 0) {
          uVar5 = OSSL_LIB_CTX_set0_default(libctx);
          local_70 = (EVP_PKEY *)
                     EVP_PKEY_new_CMAC_key
                               (0,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),
                                local_68);
          OSSL_LIB_CTX_set0_default(uVar5);
          goto LAB_00108852;
        }
        local_70 = (EVP_PKEY *)0x0;
        pcVar6 = "MAC_KEY_CREATE_ERROR";
        local_78 = (EVP_MD_CTX *)0x0;
      }
      else {
        iVar3 = OPENSSL_strncasecmp(lVar8,&_LC157,3);
        if (iVar3 != 0) {
          lVar8 = *(long *)(lVar1 + 0x18);
          goto LAB_001087e8;
        }
        test_info("test/evp_test.c",0x6ef,"skipping, PKEY CMAC \'%s\' is disabled",
                  *(undefined8 *)(lVar1 + 0x18));
        local_78 = (EVP_MD_CTX *)0x0;
        pcVar6 = (char *)0x0;
        *(undefined4 *)(param_1 + 0x998) = 1;
        local_68 = 0;
        local_70 = (EVP_PKEY *)0x0;
      }
    }
    else {
      uVar5 = *(undefined8 *)(lVar1 + 0x28);
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      pcVar6 = OBJ_nid2sn(*(int *)(lVar1 + 0x10));
      local_70 = (EVP_PKEY *)EVP_PKEY_new_raw_private_key_ex(libctx,pcVar6,0,uVar2,uVar5);
      local_68 = 0;
LAB_00108852:
      if (local_70 == (EVP_PKEY *)0x0) {
        local_78 = (EVP_MD_CTX *)0x0;
        sigret = (uchar *)0x0;
        pcVar6 = "MAC_KEY_CREATE_ERROR";
      }
      else {
        if (*(int *)(lVar1 + 0x10) == 0x357) {
          lVar8 = *(long *)(lVar1 + 0x18);
          if (lVar8 != 0) {
            iVar3 = OPENSSL_strcasecmp(lVar8,&_LC29);
            if (iVar3 == 0) {
              test_info("test/evp_test.c",0x709,"skipping, HMAC \'%s\' is disabled",
                        *(undefined8 *)(lVar1 + 0x18));
              local_78 = (EVP_MD_CTX *)0x0;
              pcVar6 = (char *)0x0;
              *(undefined4 *)(param_1 + 0x998) = 1;
              goto LAB_00108a1a;
            }
            lVar8 = *(long *)(lVar1 + 0x18);
          }
        }
        else {
          lVar8 = 0;
        }
        local_78 = (EVP_MD_CTX *)EVP_MD_CTX_new();
        iVar3 = test_ptr("test/evp_test.c",0x710,"mctx = EVP_MD_CTX_new()",local_78);
        pcVar6 = "INTERNAL_ERROR";
        if (iVar3 != 0) {
          iVar4 = EVP_DigestSignInit_ex(local_78,&local_50,lVar8,libctx,0,local_70,0);
          pcVar6 = "DIGESTSIGNINIT_ERROR";
          iVar3 = 0;
          if (iVar4 != 0) {
            for (; iVar4 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x88)), iVar3 < iVar4;
                iVar3 = iVar3 + 1) {
              pcVar6 = (char *)OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x88),iVar3);
              ctx = local_50;
              pcVar6 = CRYPTO_strdup(pcVar6,"test/evp_test.c",0x6bd);
              iVar4 = test_ptr("test/evp_test.c",0x6bd,"tmpval = OPENSSL_strdup(value)");
              if (iVar4 == 0) {
LAB_00108ade:
                pcVar6 = "EVPPKEYCTXCTRL_ERROR";
                goto LAB_00108a1a;
              }
              pcVar7 = strchr(pcVar6,0x3a);
              if (pcVar7 == (char *)0x0) {
LAB_00108ac0:
                pcVar7 = "PKEY_CTRL_ERROR";
LAB_00108ac7:
                *(char **)(param_1 + 0x9a8) = pcVar7;
                CRYPTO_free(pcVar6);
                goto LAB_00108ade;
              }
              *pcVar7 = '\0';
              iVar4 = EVP_PKEY_CTX_ctrl_str(ctx,pcVar6,pcVar7 + 1);
              if (iVar4 == -2) {
                pcVar7 = "PKEY_CTRL_INVALID";
                goto LAB_00108ac7;
              }
              if (iVar4 < 1) goto LAB_00108ac0;
              CRYPTO_free(pcVar6);
            }
            uVar11 = *(ulong *)(lVar1 + 0x48);
            lVar8 = 0;
            do {
              lVar10 = lVar8 + *(long *)(lVar1 + 0x40);
              if (data_chunk_size == 0) {
                iVar3 = EVP_DigestSignUpdate(local_78,lVar10,uVar11);
                if (iVar3 == 0) {
LAB_00108a13:
                  pcVar6 = "DIGESTSIGNUPDATE_ERROR";
                  goto LAB_00108a1a;
                }
                break;
              }
              uVar9 = (long)data_chunk_size;
              if (uVar11 < (ulong)(long)data_chunk_size) {
                uVar9 = uVar11;
              }
              iVar3 = EVP_DigestSignUpdate(local_78,lVar10,uVar9);
              if (iVar3 == 0) goto LAB_00108a13;
              lVar8 = lVar8 + uVar9;
              uVar11 = uVar11 - uVar9;
            } while (uVar11 != 0);
            iVar3 = EVP_DigestSignFinal(local_78,(uchar *)0x0,&local_48);
            pcVar6 = "DIGESTSIGNFINAL_LENGTH_ERROR";
            if (iVar3 != 0) {
              sigret = (uchar *)CRYPTO_malloc((int)local_48,"test/evp_test.c",0x732);
              iVar3 = test_ptr("test/evp_test.c",0x732,"got = OPENSSL_malloc(got_len)",sigret);
              pcVar6 = "TEST_FAILURE";
              if (iVar3 != 0) {
                iVar3 = EVP_DigestSignFinal(local_78,sigret,&local_48);
                if ((iVar3 == 0) ||
                   (iVar3 = memory_err_compare(param_1,"TEST_MAC_ERR",*(undefined8 *)(lVar1 + 0x50),
                                               *(undefined8 *)(lVar1 + 0x58),sigret,local_48),
                   iVar3 == 0)) {
                  pcVar6 = "TEST_MAC_ERR";
                }
                else {
                  pcVar6 = (char *)0x0;
                }
              }
            }
          }
        }
      }
    }
LAB_00108a1a:
    *(char **)(param_1 + 0x9a8) = pcVar6;
    EVP_CIPHER_free(local_68);
    EVP_MD_CTX_free(local_78);
    CRYPTO_free(sigret);
    EVP_PKEY_CTX_free((EVP_PKEY_CTX *)0x0);
    EVP_PKEY_free(local_70);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108cb0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 keypair_test_init(long param_1,char *param_2)

{
  int iVar1;
  char *__s;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  __s = CRYPTO_strdup(param_2,"test/evp_test.c",0x104d);
  iVar1 = test_ptr("test/evp_test.c",0x104d,"priv = OPENSSL_strdup(pair)",__s);
  if (iVar1 == 0) {
LAB_00108d0a:
    *(char **)(param_1 + 0x9a8) = "PARSING_ERROR";
  }
  else {
    pcVar2 = strchr(__s,0x3a);
    iVar1 = test_ptr("test/evp_test.c",0x104e,"pub = strchr(priv, \':\')",pcVar2);
    puVar4 = private_keys;
    if (iVar1 == 0) goto LAB_00108d0a;
    *pcVar2 = '\0';
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      do {
        iVar1 = strcmp((char *)*puVar4,__s);
        if (iVar1 == 0) {
          puVar4 = (undefined8 *)puVar4[1];
          uVar5 = 1;
          goto LAB_00108da5;
        }
        puVar4 = (undefined8 *)puVar4[2];
      } while (puVar4 != (undefined8 *)0x0);
    }
    uVar5 = 0;
LAB_00108da5:
    iVar1 = test_true("test/evp_test.c",0x1054,"find_key(&pk, priv, private_keys)",uVar5);
    if (iVar1 == 0) {
      test_info("test/evp_test.c",0x1055,"Can\'t find private key: %s",__s);
      *(char **)(param_1 + 0x9a8) = "MISSING_PRIVATE_KEY";
    }
    else {
      puVar6 = public_keys;
      if (public_keys == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        do {
          iVar1 = strcmp((char *)*puVar6,pcVar2 + 1);
          if (iVar1 == 0) {
            puVar6 = (undefined8 *)puVar6[1];
            uVar5 = 1;
            goto LAB_00108e08;
          }
          puVar6 = (undefined8 *)puVar6[2];
        } while (puVar6 != (undefined8 *)0x0);
      }
      uVar5 = 0;
LAB_00108e08:
      iVar1 = test_true("test/evp_test.c",0x1059,"find_key(&pubk, pub, public_keys)",uVar5);
      if (iVar1 != 0) {
        if (puVar6 == (undefined8 *)0x0 && puVar4 == (undefined8 *)0x0) {
          *(undefined4 *)(param_1 + 0x998) = 1;
        }
        else {
          puVar3 = (undefined8 *)CRYPTO_malloc(0x10,"test/evp_test.c",0x1066);
          iVar1 = test_ptr("test/evp_test.c",0x1066,"data = OPENSSL_malloc(sizeof(*data))",puVar3);
          if (iVar1 == 0) goto LAB_00108d18;
          *puVar3 = puVar4;
          puVar3[1] = puVar6;
          *(undefined8 **)(param_1 + 0x9c8) = puVar3;
          *(undefined8 *)(param_1 + 0x9a8) = 0;
        }
        uVar5 = 1;
        goto LAB_00108d1a;
      }
      test_info("test/evp_test.c",0x105a,"Can\'t find public key: %s",pcVar2 + 1);
      *(char **)(param_1 + 0x9a8) = "MISSING_PUBLIC_KEY";
    }
  }
LAB_00108d18:
  uVar5 = 0;
LAB_00108d1a:
  CRYPTO_free(__s);
  return uVar5;
}



uint cipher_test_run(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  char cVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  undefined *puVar12;
  char cVar13;
  char *pcVar14;
  long in_FS_OFFSET;
  bool bVar15;
  long alStack_b0 [3];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  alStack_b0[2] = 0;
  uVar6 = EVP_CIPHER_get0_name(*puVar1);
  test_info("test/evp_test.c",0x5c5,"RUNNING TEST FOR CIPHER %s\n",uVar6);
  if (puVar1[3] == 0) {
    *(char **)(param_1 + 0x9a8) = "NO_KEY";
    uVar5 = 0;
  }
  else if (((puVar1[6] == 0) && (iVar4 = EVP_CIPHER_get_iv_length(*puVar1), 0 < iVar4)) &&
          (iVar4 = EVP_CIPHER_get_mode(*puVar1), iVar4 != 0x10002)) {
    *(char **)(param_1 + 0x9a8) = "NO_IV";
    uVar5 = 0;
  }
  else {
    if (((*(int *)((long)puVar1 + 0x14) == 0) || (puVar1[0x17] != 0)) ||
       (*(int *)(puVar1 + 0x16) != 0)) {
      iVar4 = OPENSSL_sk_num(puVar1[0x1e]);
      if ((iVar4 < 1) ||
         (iVar4 = ctrl2params(param_1,puVar1[0x1e],0,local_98,2,alStack_b0 + 2), iVar4 != 0)) {
        iVar4 = cipher_test_valid_fragmentation(puVar1);
        *(undefined1 **)(param_1 + 0x9b0) = aux_err_0;
        cVar13 = '\x01';
LAB_00109038:
        bVar15 = false;
LAB_00109048:
        puVar7 = &_LC282;
        if (bVar15 != false) {
          puVar7 = &_LC18;
        }
        cVar8 = '\0';
LAB_00109064:
        pcVar14 = "aligned";
        if (cVar8 != '\0') {
          pcVar14 = "misaligned";
        }
        cVar3 = cVar8;
        if (cVar13 == '\x01') goto LAB_00109170;
        lVar9 = 0;
        pcVar11 = "aligned";
LAB_001090d9:
        BIO_snprintf(aux_err_0,0x40,"%s output and %s input, %sfragmented",pcVar14,pcVar11,puVar7);
        do {
          if (*(int *)(puVar1 + 2) == 0) {
LAB_00109090:
            uVar5 = cipher_test_enc(param_1,0,cVar8,lVar9,bVar15,cVar13,local_98);
            if (uVar5 != 1) {
LAB_00109260:
              lVar9 = alStack_b0[2] + -1;
              if (alStack_b0[2] != 0) {
                plVar10 = alStack_b0 + alStack_b0[2] * 5;
                do {
                  pvVar2 = (void *)*plVar10;
                  lVar9 = lVar9 + -1;
                  plVar10 = plVar10 + -5;
                  CRYPTO_free(pvVar2);
                } while (lVar9 != -1);
              }
              uVar5 = ~uVar5 >> 0x1f;
              goto LAB_001092ab;
            }
            if (lVar9 != 1) goto LAB_001090c5;
LAB_00109145:
            if (cVar8 == '\0') {
              cVar8 = '\x01';
              goto LAB_00109064;
            }
LAB_001091c0:
            if ((bVar15 < (iVar4 != 0)) && (bVar15 = true, data_chunk_size == 0)) goto LAB_00109048;
            if (cVar13 != '\0') {
              cVar13 = '\0';
              bVar15 = process_mode_in_place != 1;
              *(undefined1 **)(param_1 + 0x9b0) = aux_err_0;
              if (bVar15) goto LAB_00109038;
            }
            lVar9 = alStack_b0[2] + -1;
            if (alStack_b0[2] != 0) {
              plVar10 = alStack_b0 + alStack_b0[2] * 5;
              do {
                pvVar2 = (void *)*plVar10;
                lVar9 = lVar9 + -1;
                plVar10 = plVar10 + -5;
                CRYPTO_free(pvVar2);
              } while (lVar9 != -1);
            }
            *(undefined8 *)(param_1 + 0x9b0) = 0;
            uVar5 = 1;
            goto LAB_001092ab;
          }
          uVar5 = cipher_test_enc(param_1,1,cVar8,lVar9,bVar15,cVar13,local_98);
          if (uVar5 != 1) goto LAB_00109260;
          if (*(int *)(puVar1 + 2) != 1) goto LAB_00109090;
          if (lVar9 == 1) goto LAB_00109145;
LAB_001090c5:
          lVar9 = 1;
          pcVar11 = "misaligned";
          if (cVar13 == '\0') goto LAB_001090d9;
          pcVar14 = "misaligned";
          if (cVar8 == '\x01') goto LAB_001091c0;
          cVar8 = '\x01';
          cVar3 = cVar13;
LAB_00109170:
          puVar12 = &_LC282;
          if (bVar15 != false) {
            puVar12 = &_LC18;
          }
          pcVar11 = "misaligned";
          if (cVar3 == '\0') {
            pcVar11 = "aligned";
          }
          lVar9 = 0;
          BIO_snprintf(aux_err_0,0x40,"%s in-place, %sfragmented",pcVar11,puVar12);
        } while( true );
      }
    }
    else {
      *(char **)(param_1 + 0x9a8) = "NO_TAG";
    }
    uVar5 = 0;
  }
LAB_001092ab:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



int keygen_test_run(long param_1)

{
  char *pcVar1;
  bool bVar2;
  EVP_PKEY *pEVar3;
  int iVar4;
  int iVar5;
  EVP_PKEY_CTX *ctx;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  bool bVar14;
  EVP_PKEY *local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8 [2];
  undefined8 local_d8 [19];
  long local_40;
  
  puVar13 = *(undefined8 **)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = (EVP_PKEY *)0x0;
  local_100 = 0;
  pcVar1 = (char *)puVar13[1];
  if (pcVar1 != (char *)0x0) {
    puVar10 = public_keys;
    if (public_keys != (undefined8 *)0x0) {
      do {
        iVar4 = strcmp((char *)*puVar10,pcVar1);
        if (iVar4 == 0) {
          if (puVar10[1] != 0) {
            ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(libctx,puVar10[1],propquery);
            iVar4 = test_ptr("test/evp_test.c",0x1126,
                             "genctx = EVP_PKEY_CTX_new_from_pkey(libctx, keyparams, propquery)",ctx
                            );
            if (iVar4 != 0) goto LAB_00109430;
            pvVar6 = (void *)0x0;
            iVar4 = 1;
            goto LAB_00109580;
          }
          break;
        }
        puVar10 = (undefined8 *)puVar10[2];
      } while (puVar10 != (undefined8 *)0x0);
    }
    iVar4 = 1;
    test_info("test/evp_test.c",0x1122,"skipping, key \'%s\' is disabled",pcVar1);
    *(undefined4 *)(param_1 + 0x998) = 1;
    goto LAB_001094fd;
  }
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(libctx,puVar13[2],propquery);
  iVar4 = test_ptr("test/evp_test.c",0x112b,
                   "genctx = EVP_PKEY_CTX_new_from_name(libctx, keygen->alg, propquery)",ctx);
  pvVar6 = (void *)0x0;
  if (iVar4 == 0) {
LAB_00109570:
    iVar4 = 1;
LAB_00109580:
    EVP_PKEY_free(local_108);
    local_108 = (EVP_PKEY *)0x0;
  }
  else {
LAB_00109430:
    iVar4 = EVP_PKEY_keygen_init(ctx);
    if (iVar4 < 1) {
      pvVar6 = (void *)0x0;
      iVar4 = 1;
      *(char **)(param_1 + 0x9a8) = "KEYGEN_INIT_ERROR";
      goto LAB_00109580;
    }
    iVar4 = OPENSSL_sk_num(puVar13[3]);
    if (0 < iVar4) {
      pvVar6 = CRYPTO_malloc(0xa0,"test/evp_test.c",0x1136);
      if (pvVar6 == (void *)0x0) goto LAB_00109570;
      iVar4 = 1;
      uVar7 = EVP_PKEY_CTX_settable_params(ctx);
      iVar5 = ctrl2params(param_1,puVar13[3],uVar7,pvVar6,4,&local_100);
      if (iVar5 != 0) {
        iVar5 = EVP_PKEY_CTX_set_params(ctx,pvVar6);
        if (iVar5 != 0) goto LAB_001095c2;
        *(char **)(param_1 + 0x9a8) = "PKEY_CTRL_ERROR";
      }
      goto LAB_00109580;
    }
    pvVar6 = (void *)0x0;
LAB_001095c2:
    iVar4 = EVP_PKEY_keygen(ctx,&local_108);
    if (iVar4 < 1) {
      iVar4 = 1;
      *(char **)(param_1 + 0x9a8) = "KEYGEN_GENERATE_ERROR";
      goto LAB_00109580;
    }
    iVar4 = pkey_check_fips_approved(ctx,param_1);
    pEVar3 = local_108;
    if (iVar4 == 0) goto LAB_00109580;
    if (*(long *)&local_108[1].save_parameters == 0) {
      iVar4 = 1;
      test_info("test/evp_test.c",0x114d,"Warning: legacy key generated %s",*puVar13);
      goto LAB_00109580;
    }
    local_f8 = 0;
    uVar7 = puVar13[4];
    iVar4 = OPENSSL_sk_num(uVar7);
    if (0 < iVar4) {
      uVar8 = EVP_PKEY_gettable_params(pEVar3);
      plVar11 = local_e8;
      iVar4 = ctrl2params(param_1,uVar7,uVar8,plVar11,4,&local_f8);
      lVar12 = local_f8;
      if (iVar4 == 0) {
joined_r0x001099f2:
        bVar2 = false;
        if (lVar12 != 0) {
LAB_0010986a:
          puVar10 = local_d8 + (lVar12 + -1) * 5;
          lVar12 = lVar12 + -1;
          do {
            pvVar9 = (void *)*puVar10;
            puVar10 = puVar10 + -5;
            CRYPTO_free(pvVar9);
            bVar14 = lVar12 != 0;
            lVar12 = lVar12 + -1;
          } while (bVar14);
LAB_001098be:
          if (bVar2) goto LAB_0010961b;
        }
        iVar4 = 1;
        *(char **)(param_1 + 0x9a8) = "KEYGEN_PKEY_MISMATCH_ERROR";
        goto LAB_00109580;
      }
      if (local_e8[0] != 0) {
        bVar2 = false;
        do {
          if ((int)plVar11[1] == 5) {
            pvVar9 = CRYPTO_malloc((int)plVar11[3],"test/evp_test.c",0x10fe);
            if (pvVar9 == (void *)0x0) {
              if (lVar12 != 0) goto LAB_0010986a;
              goto LAB_001098be;
            }
            iVar4 = EVP_PKEY_get_octet_string_param(pEVar3,*plVar11,pvVar9,plVar11[3],&local_f0);
            if (((iVar4 == 0) || (plVar11[3] != local_f0)) ||
               (iVar4 = test_mem_eq("test/evp_test.c",0x1105,"p->data",&_LC296,plVar11[2],local_f0,
                                    pvVar9,local_f0), iVar4 != 1)) {
              CRYPTO_free(pvVar9);
              test_error("test/evp_test.c",0x1108,"Expected %s value is incorrect",*plVar11);
              goto joined_r0x001099f2;
            }
            CRYPTO_free(pvVar9);
            bVar2 = true;
          }
          plVar11 = plVar11 + 5;
        } while (*plVar11 != 0);
      }
      if (lVar12 != 0) {
        bVar2 = true;
        goto LAB_0010986a;
      }
    }
LAB_0010961b:
    pcVar1 = (char *)*puVar13;
    puVar10 = private_keys;
    if (pcVar1 == (char *)0x0) {
      *(undefined8 *)(param_1 + 0x9a8) = 0;
      iVar4 = 1;
      goto LAB_00109580;
    }
    for (; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)puVar10[2]) {
      iVar4 = strcmp((char *)*puVar10,pcVar1);
      if (iVar4 == 0) {
        iVar4 = 0;
        test_info("test/evp_test.c",0x115b,"Duplicate key %s",pcVar1);
        goto LAB_00109580;
      }
    }
    puVar10 = (undefined8 *)CRYPTO_malloc(0x18,"test/evp_test.c",0x115f);
    iVar4 = test_ptr("test/evp_test.c",0x115f,"key = OPENSSL_malloc(sizeof(*key))",puVar10);
    if (iVar4 == 0) goto LAB_00109580;
    iVar4 = 1;
    *puVar10 = *puVar13;
    *puVar13 = 0;
    puVar10[1] = local_108;
    *(undefined8 *)(param_1 + 0x9a8) = 0;
    puVar10[2] = private_keys;
    private_keys = puVar10;
  }
  EVP_PKEY_CTX_free(ctx);
  iVar5 = OPENSSL_sk_num(puVar13[3]);
  if ((0 < iVar5) && (lVar12 = local_100 + -1, local_100 != 0)) {
    puVar13 = (undefined8 *)((long)pvVar6 + local_100 * 0x28 + -0x18);
    do {
      pvVar9 = (void *)*puVar13;
      lVar12 = lVar12 + -1;
      puVar13 = puVar13 + -5;
      CRYPTO_free(pvVar9);
    } while (lVar12 != -1);
  }
  OSSL_PARAM_free(pvVar6);
  OSSL_PARAM_BLD_free(0);
LAB_001094fd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */

bool run_file_tests(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  void *ptr;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *ptr_00;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  long local_60;
  void *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = test_get_argument((long)param_1);
  ptr_00 = (undefined8 *)CRYPTO_zalloc(0x9d8,"test/evp_test.c",0x14db);
  iVar3 = test_ptr("test/evp_test.c",0x14db,"t = OPENSSL_zalloc(sizeof(*t))");
  if (iVar3 != 0) {
    iVar3 = test_start_file(ptr_00,uVar6);
    if (iVar3 != 0) {
      OSSL_INDICATOR_set_callback(libctx,fips_indicator_cb);
LAB_00109b00:
      uVar7 = BIO_ctrl((BIO *)ptr_00[1],2,0,(void *)0x0);
      uVar15 = uVar7 & 0xffffffff;
      if ((int)uVar7 == 0) {
        fips_indicator_callback_unapproved_count = 0;
LAB_00109b5d:
        lVar8 = BIO_ctrl((BIO *)ptr_00[1],2,0,(void *)0x0);
        if ((int)lVar8 == 0) {
          clear_test(ptr_00);
          iVar3 = test_readstanza(ptr_00);
          if (iVar3 != 0) goto code_r0x00109b48;
          goto LAB_00109d70;
        }
LAB_00109b73:
        iVar3 = *(int *)(ptr_00 + 0x133);
joined_r0x0010a791:
        if (iVar3 != 0) goto LAB_00109d7f;
        if (ptr_00[0x134] != 0) {
          pcVar9 = (char *)ptr_00[0x135];
          *(int *)((long)ptr_00 + 0x1c) = *(int *)((long)ptr_00 + 0x1c) + 1;
          if (pcVar9 != (char *)0x0) {
            pcVar11 = (char *)ptr_00[0x137];
LAB_00109bae:
            if (pcVar11 == (char *)0x0) {
              if (ptr_00[0x136] == 0) {
                test_info("test/evp_test.c",0x1336,
                          "%s:%d: Source of above error; unexpected error %s",*ptr_00,
                          *(undefined4 *)((long)ptr_00 + 0x14),pcVar9);
              }
              else {
                test_info("test/evp_test.c",0x1333,
                          "%s:%d: Source of above error (%s); unexpected error %s",*ptr_00,
                          *(undefined4 *)((long)ptr_00 + 0x14),ptr_00[0x136],pcVar9);
              }
            }
            else {
              iVar3 = strcmp(pcVar9,pcVar11);
              if (iVar3 == 0) {
                if (ptr_00[0x138] == 0) goto LAB_00109b00;
                uVar7 = ERR_peek_error();
                if (uVar7 == 0) {
                  test_info("test/evp_test.c",0x1352,"%s:%d: Expected error \"%s\" not set",*ptr_00,
                            *(undefined4 *)((long)ptr_00 + 0x14),ptr_00[0x138]);
                }
                else {
                  pcVar9 = ERR_reason_error_string(uVar7);
                  if (pcVar9 == (char *)0x0) {
                    test_info("test/evp_test.c",0x1359,
                              "%s:%d: Expected error \"%s\", no strings available. Assuming ok.",
                              *ptr_00,*(undefined4 *)((long)ptr_00 + 0x14),ptr_00[0x138]);
                    goto LAB_00109b00;
                  }
                  pcVar11 = (char *)ptr_00[0x138];
                  iVar3 = strcmp(pcVar9,pcVar11);
                  if (iVar3 == 0) goto LAB_00109b00;
                  test_info("test/evp_test.c",0x1362,"%s:%d: Expected error \"%s\", got \"%s\"",
                            *ptr_00,*(undefined4 *)((long)ptr_00 + 0x14),pcVar11,pcVar9);
                }
              }
              else {
                test_info("test/evp_test.c",0x1342,"%s:%d: Expected %s got %s",*ptr_00,
                          *(undefined4 *)((long)ptr_00 + 0x14),pcVar11,pcVar9);
              }
            }
LAB_00109de3:
            test_openssl_errors();
            *(int *)(ptr_00 + 3) = *(int *)(ptr_00 + 3) + 1;
            goto LAB_00109b00;
          }
          iVar3 = (**(code **)(ptr_00[0x134] + 0x20))(ptr_00);
          if (iVar3 != 1) {
            test_info("test/evp_test.c",0x1373,"%s:%d %s error",*ptr_00,
                      *(undefined4 *)((long)ptr_00 + 0x14),*(undefined8 *)ptr_00[0x134]);
            goto LAB_0010a27e;
          }
          pcVar9 = (char *)ptr_00[0x135];
          pcVar11 = (char *)ptr_00[0x137];
          if (pcVar9 != (char *)0x0) goto LAB_00109bae;
          if (pcVar11 != (char *)0x0) {
            test_info("test/evp_test.c",0x133c,"%s:%d: Succeeded but was expecting %s",*ptr_00,
                      *(undefined4 *)((long)ptr_00 + 0x14),pcVar11);
            goto LAB_00109de3;
          }
        }
        goto LAB_00109b00;
      }
LAB_0010a283:
      test_end_file(ptr_00);
      clear_test(ptr_00);
      puVar12 = public_keys;
      while (puVar13 = private_keys, puVar12 != (undefined8 *)0x0) {
        puVar13 = (undefined8 *)puVar12[2];
        EVP_PKEY_free((EVP_PKEY *)puVar12[1]);
        CRYPTO_free((void *)*puVar12);
        CRYPTO_free(puVar12);
        puVar12 = puVar13;
      }
      while (puVar13 != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)puVar13[2];
        EVP_PKEY_free((EVP_PKEY *)puVar13[1]);
        CRYPTO_free((void *)*puVar13);
        CRYPTO_free(puVar13);
        puVar13 = puVar12;
      }
      BIO_free((BIO *)ptr_00[0x131]);
      iVar3 = *(int *)(ptr_00 + 3);
      CRYPTO_free(ptr_00);
      bVar16 = iVar3 == 0;
      goto LAB_00109aa7;
    }
    CRYPTO_free(ptr_00);
  }
  bVar16 = false;
LAB_00109aa7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar16;
code_r0x00109b48:
  puVar12 = ptr_00 + 7;
  uVar2 = (uint)uVar15;
  if (*(int *)((long)ptr_00 + 0x24) == 0) goto LAB_00109b5d;
  while( true ) {
    pcVar9 = (char *)puVar12[-2];
    uVar15 = (ulong)uVar2;
    iVar3 = strcmp(pcVar9,"PrivateKey");
    if (iVar3 == 0) break;
    iVar3 = strcmp(pcVar9,"PublicKey");
    if (iVar3 == 0) {
      puVar13 = &public_keys;
      local_60 = PEM_read_bio_PUBKEY_ex(ptr_00[0x131],0,0,0,libctx,0);
      if (local_60 != 0) goto LAB_00109e28;
      iVar3 = key_unsupported();
      if (iVar3 == 0) {
        EVP_PKEY_free((EVP_PKEY *)0x0);
        uVar6 = 0x141d;
        pcVar9 = "Can\'t read public key %s";
        goto LAB_00109fc2;
      }
LAB_00109f60:
      local_60 = 0;
      puVar13 = &public_keys;
      goto LAB_00109e28;
    }
    iVar3 = strcmp(pcVar9,"ParamKey");
    if (iVar3 == 0) {
      puVar13 = &public_keys;
      local_60 = PEM_read_bio_Parameters_ex(ptr_00[0x131],0,libctx,0);
      if (local_60 != 0) goto LAB_00109e28;
      iVar3 = key_unsupported();
      if (iVar3 != 0) goto LAB_00109f60;
      EVP_PKEY_free((EVP_PKEY *)0x0);
      uVar6 = 0x1426;
      pcVar9 = "Can\'t read params key %s";
      goto LAB_00109fc2;
    }
    iVar3 = strcmp(pcVar9,"PrivateKeyRaw");
    if (iVar3 == 0) {
      puVar13 = &private_keys;
LAB_00109ff7:
      pcVar9 = strchr((char *)puVar12[-1],0x3a);
      if (pcVar9 != (char *)0x0) {
        *pcVar9 = '\0';
        pcVar9 = pcVar9 + 1;
        pcVar11 = strchr(pcVar9,0x3a);
        if (pcVar11 != (char *)0x0) {
          *pcVar11 = '\0';
          iVar3 = OBJ_txt2nid(pcVar9);
          if (iVar3 == 0) {
            test_info("test/evp_test.c",0x1445,"Unrecognised algorithm NID");
            goto LAB_0010a3a8;
          }
          iVar3 = parse_bin(pcVar11 + 1,&local_50,&local_48);
          ptr = local_50;
          if (iVar3 == 0) {
            test_info("test/evp_test.c",0x1449,"Failed to create binary key");
            goto LAB_0010a3a8;
          }
          if ((undefined8 **)puVar13 == &private_keys) {
            local_60 = EVP_PKEY_new_raw_private_key_ex(libctx,pcVar9,0,local_50,local_48);
          }
          else {
            local_60 = EVP_PKEY_new_raw_public_key_ex();
          }
          if ((local_60 != 0) || (iVar3 = key_unsupported(), iVar3 != 0)) {
            CRYPTO_free(ptr);
            goto LAB_00109e28;
          }
          test_info("test/evp_test.c",0x1453,"Can\'t read %s data");
          CRYPTO_free(ptr);
          test_openssl_errors();
          goto LAB_0010a3a8;
        }
      }
      test_info("test/evp_test.c",0x143f,"Failed to parse %s value");
      goto LAB_0010a3a8;
    }
    iVar3 = strcmp(pcVar9,"PublicKeyRaw");
    if (iVar3 == 0) {
      puVar13 = &public_keys;
      goto LAB_00109ff7;
    }
    iVar3 = strcmp(pcVar9,"Availablein");
    if (iVar3 == 0) {
      iVar3 = prov_available(puVar12[-1]);
      if (iVar3 != 0) goto LAB_00109c8d;
      test_info("test/evp_test.c",0x145b,"skipping, \'%s\' provider not available: %s:%d",
                puVar12[-1],*ptr_00,*(undefined4 *)((long)ptr_00 + 0x14));
      *(undefined4 *)(ptr_00 + 0x133) = 1;
      goto LAB_00109d7f;
    }
    iVar3 = strcmp(pcVar9,"FIPSversion");
    if (iVar3 != 0) {
      ppuVar14 = &evp_test_list;
      puVar13 = (undefined8 *)evp_test_list;
      while ((puVar13 != (undefined8 *)0x0 && (iVar3 = strcmp(pcVar9,(char *)*puVar13), iVar3 != 0))
            ) {
        puVar13 = (undefined8 *)ppuVar14[1];
        ppuVar14 = ppuVar14 + 1;
      }
      ptr_00[0x134] = puVar13;
      iVar3 = test_ptr("test/evp_test.c",0x1489,"t->meth = find_test(pp->key)");
      if (iVar3 != 0) {
        iVar3 = (**(code **)(ptr_00[0x134] + 8))(ptr_00,puVar12[-1]);
        if (iVar3 == 0) {
          test_error("test/evp_test.c",0x148c,"unknown %s: %s\n",puVar12[-2],puVar12[-1]);
          goto LAB_0010a3a8;
        }
        iVar3 = *(int *)(ptr_00 + 0x133);
        if (iVar3 != 1) {
          iVar5 = *(int *)((long)ptr_00 + 0x24);
          if (1 < (int)(iVar5 - uVar2)) {
            iVar3 = 1;
            do {
              pcVar9 = (char *)*puVar12;
              iVar4 = strcmp(pcVar9,"Securitycheck");
              if (iVar4 == 0) {
                test_info("test/evp_test.c",0x149b,"skipping, Securitycheck is disabled: %s:%d",
                          *ptr_00,*(undefined4 *)((long)ptr_00 + 0x14));
                *(undefined4 *)(ptr_00 + 0x133) = 1;
                goto LAB_00109d7f;
              }
              iVar4 = strcmp(pcVar9,"Availablein");
              if (iVar4 == 0) {
                test_info("test/evp_test.c",0x14a1,
                          "Line %d: \'Availablein\' should be the first option",
                          *(undefined4 *)(ptr_00 + 2));
                iVar3 = *(int *)(ptr_00 + 0x133);
                goto joined_r0x0010a755;
              }
              iVar4 = strcmp(pcVar9,"Result");
              if (iVar4 == 0) {
                if (ptr_00[0x137] == 0) {
                  uVar6 = puVar12[1];
                  puVar12[1] = 0;
                  ptr_00[0x137] = uVar6;
                  goto LAB_0010a1a0;
                }
                test_info("test/evp_test.c",0x14a6,"Line %d: multiple result lines");
                iVar3 = *(int *)(ptr_00 + 0x133);
                goto joined_r0x00109e7f;
              }
              iVar4 = strcmp(pcVar9,"Function");
              if (iVar4 != 0) {
                iVar4 = strcmp(pcVar9,"Reason");
                if (iVar4 == 0) {
                  if (ptr_00[0x138] != 0) {
                    test_info("test/evp_test.c",0x14ae,"Line %d: multiple reason lines");
                    iVar3 = *(int *)(ptr_00 + 0x133);
                    goto joined_r0x0010a755;
                  }
                  uVar6 = puVar12[1];
                  puVar12[1] = 0;
                  ptr_00[0x138] = uVar6;
                }
                else {
                  iVar4 = strcmp(pcVar9,"Threads");
                  if (iVar4 == 0) {
                    lVar8 = strtol((char *)puVar12[1],(char **)0x0,10);
                    iVar5 = OSSL_set_max_threads(libctx,(long)(int)lVar8);
                    if (iVar5 == 0) {
                      test_info("test/evp_test.c",0x14b4,
                                "skipping, \'%s\' threads not available: %s:%d",puVar12[1],*ptr_00,
                                *(undefined4 *)((long)ptr_00 + 0x14));
                      iVar5 = *(int *)((long)ptr_00 + 0x24);
                      *(undefined4 *)(ptr_00 + 0x133) = 1;
                    }
                    else {
LAB_0010a602:
                      iVar5 = *(int *)((long)ptr_00 + 0x24);
                    }
                  }
                  else {
                    iVar4 = strcmp(pcVar9,"Unapproved");
                    if (iVar4 == 0) {
                      *(undefined4 *)(ptr_00 + 0x13a) = 1;
                    }
                    else {
                      iVar4 = strcmp(pcVar9,"Extended-Test");
                      if (iVar4 != 0) {
                        iVar5 = (**(code **)(ptr_00[0x134] + 0x18))(ptr_00,pcVar9,puVar12[1]);
                        if (iVar5 == 0) {
                          test_info("test/evp_test.c",0x14c5,"Line %d: unknown keyword %s",
                                    *(undefined4 *)(ptr_00 + 2),*puVar12);
                          iVar3 = *(int *)(ptr_00 + 0x133);
                          goto joined_r0x0010a755;
                        }
                        if (iVar5 < 0) {
                          test_info("test/evp_test.c",0x14c9,
                                    "Line %d: error processing keyword %s = %s\n",
                                    *(undefined4 *)(ptr_00 + 2),*puVar12,puVar12[1]);
                          goto LAB_0010a3a8;
                        }
                        if (*(int *)(ptr_00 + 0x133) != 0) goto LAB_00109d7f;
                        goto LAB_0010a602;
                      }
                      if (extended_tests == 0) {
                        test_info("test/evp_test.c",0x14bc,"skipping extended test: %s:%d",*ptr_00,
                                  *(undefined4 *)((long)ptr_00 + 0x14));
                        iVar5 = *(int *)((long)ptr_00 + 0x24);
                        *(undefined4 *)(ptr_00 + 0x133) = 1;
                      }
                    }
                  }
                }
              }
LAB_0010a1a0:
              iVar3 = iVar3 + 1;
              puVar12 = puVar12 + 2;
            } while (iVar3 < (int)(iVar5 - uVar2));
            goto LAB_00109b73;
          }
          goto joined_r0x0010a791;
        }
        goto LAB_00109d7f;
      }
LAB_0010a3a8:
      iVar3 = *(int *)(ptr_00 + 0x133);
      goto joined_r0x00109e7f;
    }
    iVar3 = prov_available(&_LC318);
    if (iVar3 == 0) goto LAB_00109c8d;
    iVar3 = fips_provider_version_match(libctx,puVar12[-1]);
    if (iVar3 < 0) {
      test_info("test/evp_test.c",0x1467,"Line %d: error matching FIPS versions\n");
      iVar3 = *(int *)(ptr_00 + 0x133);
      goto joined_r0x0010a755;
    }
    if (iVar3 == 0) {
      test_info("test/evp_test.c",0x146a,"skipping, FIPS provider incompatible version: %s:%d",
                *ptr_00,*(undefined4 *)((long)ptr_00 + 0x14));
      *(undefined4 *)(ptr_00 + 0x133) = 1;
      goto LAB_00109d7f;
    }
LAB_00109c8d:
    puVar12 = puVar12 + 2;
    uVar2 = uVar2 + 1;
  }
  puVar13 = &private_keys;
  local_60 = PEM_read_bio_PrivateKey_ex(ptr_00[0x131],0,0,0,libctx,0);
  if ((local_60 != 0) || (iVar3 = key_unsupported(), iVar3 != 0)) {
LAB_00109e28:
    puVar10 = (undefined8 *)*puVar13;
    pcVar9 = (char *)puVar12[-1];
joined_r0x00109e33:
    if (puVar10 != (undefined8 *)0x0) {
      iVar3 = strcmp((char *)*puVar10,pcVar9);
      if (iVar3 != 0) goto LAB_00109e40;
      test_info("test/evp_test.c",0x1478,"Duplicate key %s");
      iVar3 = *(int *)(ptr_00 + 0x133);
joined_r0x00109e7f:
      if (iVar3 != 0) goto LAB_00109d7f;
      goto LAB_0010a27e;
    }
    puVar10 = (undefined8 *)CRYPTO_malloc(0x18,"test/evp_test.c",0x147b);
    iVar3 = test_ptr("test/evp_test.c",0x147b,"key = OPENSSL_malloc(sizeof(*key))");
    if (iVar3 == 0) {
LAB_00109d70:
      iVar3 = *(int *)(ptr_00 + 0x133);
      goto joined_r0x0010a755;
    }
    uVar1 = *puVar13;
    uVar6 = puVar12[-1];
    *puVar13 = puVar10;
    puVar12[-1] = 0;
    puVar10[2] = uVar1;
    iVar3 = *(int *)((long)ptr_00 + 0x24);
    *puVar10 = uVar6;
    puVar10[1] = local_60;
    if (iVar3 - uVar2 != 1) {
      test_info("test/evp_test.c",0x1484,"Line %d: missing blank line\n");
    }
    goto LAB_00109b5d;
  }
  EVP_PKEY_free((EVP_PKEY *)0x0);
  uVar6 = 0x1414;
  pcVar9 = "Can\'t read private key %s";
LAB_00109fc2:
  test_info("test/evp_test.c",uVar6,pcVar9);
  test_openssl_errors();
  iVar3 = *(int *)(ptr_00 + 0x133);
joined_r0x0010a755:
  if (iVar3 == 0) {
LAB_0010a27e:
    *(int *)(ptr_00 + 3) = *(int *)(ptr_00 + 3) + 1;
    goto LAB_0010a283;
  }
LAB_00109d7f:
  *(int *)(ptr_00 + 4) = *(int *)(ptr_00 + 4) + 1;
  goto LAB_00109b00;
LAB_00109e40:
  puVar10 = (undefined8 *)puVar10[2];
  goto joined_r0x00109e33;
}



int rand_test_run(long param_1)

{
  int iVar1;
  void *ptr;
  uint num;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uStack_250;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1e4;
  long local_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined8 local_188 [4];
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
  long local_40;
  
  puVar7 = *(undefined8 **)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1e0 = 0;
  num = *(uint *)((long)puVar7 + 0x1c) >> 3;
  pvVar5 = CRYPTO_malloc(num,"test/evp_test.c",0xe59);
  iVar2 = test_ptr("test/evp_test.c",0xe59,"got = OPENSSL_malloc(got_len)",pvVar5);
  if (iVar2 == 0) goto LAB_0010a8d5;
  iVar2 = OPENSSL_sk_num(puVar7[6]);
  if (iVar2 < 1) {
    lVar10 = -1;
    lVar9 = 0;
    puVar8 = local_188;
LAB_0010a96d:
    puVar11 = puVar8 + 5;
    OSSL_PARAM_construct_int(&local_218,"use_derivation_function",puVar7 + 3);
    *puVar8 = local_218;
    puVar8[1] = uStack_210;
    puVar8[2] = local_208;
    puVar8[3] = uStack_200;
    puVar8[4] = local_1f8;
    if (puVar7[4] != 0) {
      puVar11 = puVar8 + 10;
      OSSL_PARAM_construct_utf8_string(&local_218,"cipher",puVar7[4],0);
      puVar8[5] = local_218;
      puVar8[6] = uStack_210;
      puVar8[7] = local_208;
      puVar8[8] = uStack_200;
      puVar8[9] = local_1f8;
    }
    puVar8 = puVar11;
    if (puVar7[5] != 0) {
      puVar8 = puVar11 + 5;
      OSSL_PARAM_construct_utf8_string(&local_218,"digest",puVar7[5],0);
      *puVar11 = local_218;
      puVar11[1] = uStack_210;
      puVar11[2] = local_208;
      puVar11[3] = uStack_200;
      puVar11[4] = local_1f8;
    }
    OSSL_PARAM_construct_utf8_string(&local_218,&_LC348,&_LC40,0);
    *puVar8 = local_218;
    puVar8[1] = uStack_210;
    puVar8[2] = local_208;
    puVar8[3] = uStack_200;
    puVar8[4] = local_1f8;
    OSSL_PARAM_construct_end(&local_218);
    uVar13 = *puVar7;
    puVar8[5] = local_218;
    puVar8[6] = uStack_210;
    puVar8[7] = local_208;
    puVar8[8] = uStack_200;
    puVar8[9] = local_1f8;
    iVar2 = EVP_RAND_CTX_set_params(uVar13,local_188);
    if (iVar2 != 0) {
      if (lVar9 != 0) {
        puVar8 = local_188 + lVar10 * 5 + 2;
        do {
          ptr = (void *)*puVar8;
          puVar8 = puVar8 + -5;
          CRYPTO_free(ptr);
          bVar12 = lVar10 != 0;
          lVar10 = lVar10 + -1;
        } while (bVar12);
      }
      local_1e0 = 0;
      uVar3 = EVP_RAND_get_strength(*puVar7);
      if (-1 < *(int *)(puVar7 + 2)) {
        iVar1 = 0;
        puVar8 = puVar7 + 7;
        do {
          puVar6 = (undefined *)*puVar8;
          if (puVar6 == (undefined *)0x0) {
            puVar6 = &_LC18;
          }
          OSSL_PARAM_construct_octet_string(&local_218,"test_entropy",puVar6,puVar8[10]);
          local_188[0] = local_218;
          local_188[1] = uStack_210;
          local_188[2] = local_208;
          local_188[3] = uStack_200;
          local_168 = local_1f8;
          puVar6 = (undefined *)puVar8[2];
          if (puVar6 == (undefined *)0x0) {
            puVar6 = &_LC18;
          }
          OSSL_PARAM_construct_octet_string(&local_218,"test_nonce",puVar6,puVar8[0xb]);
          local_140 = local_1f8;
          local_160 = local_218;
          uStack_158 = uStack_210;
          local_150 = local_208;
          uStack_148 = uStack_200;
          OSSL_PARAM_construct_end(&local_218);
          local_138 = local_218;
          uStack_130 = uStack_210;
          local_128 = local_208;
          uStack_120 = uStack_200;
          local_118 = local_1f8;
          iVar2 = EVP_RAND_instantiate(puVar7[1],uVar3,0,0,0,local_188);
          iVar2 = test_true("test/evp_test.c",0xe83,
                            "EVP_RAND_instantiate(expected->parent, strength, 0, NULL, 0, params)",
                            iVar2 != 0);
          if (iVar2 == 0) {
LAB_0010b0a2:
            iVar2 = 0;
            test_info("test/evp_test.c",0xec7,"Error in test case %d of %d\n",iVar1,
                      *(int *)(puVar7 + 2) + 1);
            CRYPTO_free(pvVar5);
            goto LAB_0010a8d5;
          }
          puVar6 = (undefined *)puVar8[3];
          if (puVar6 == (undefined *)0x0) {
            puVar6 = &_LC18;
          }
          iVar2 = EVP_RAND_instantiate
                            (*puVar7,uVar3,*(undefined4 *)((long)puVar7 + 0x14),puVar6,puVar8[0xc],0
                            );
          uStack_250 = 0x10ace0;
          iVar2 = test_true("test/evp_test.c",0xe88,
                            "EVP_RAND_instantiate (expected->ctx, strength, expected->prediction_resistance, z, item->pers_len, NULL)"
                            ,iVar2 != 0);
          if (iVar2 == 0) goto LAB_0010b0a2;
          if (puVar8[1] != 0) {
            OSSL_PARAM_construct_octet_string(&local_218,"test_entropy",puVar8[1],puVar8[0x12]);
            local_168 = local_1f8;
            local_188[0] = local_218;
            local_188[1] = uStack_210;
            local_188[2] = local_208;
            local_188[3] = uStack_200;
            OSSL_PARAM_construct_end(&local_218);
            local_160 = local_218;
            uStack_158 = uStack_210;
            local_140 = local_1f8;
            local_150 = local_208;
            uStack_148 = uStack_200;
            iVar2 = EVP_RAND_CTX_set_params(puVar7[1],local_188);
            iVar2 = test_true("test/evp_test.c",0xe93,
                              "EVP_RAND_CTX_set_params(expected->parent, params)",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = EVP_RAND_reseed(*puVar7,*(undefined4 *)((long)puVar7 + 0x14),0,0,puVar8[4],
                                      puVar8[0x13]);
              uStack_250 = 0x10adcf;
              iVar2 = test_true("test/evp_test.c",0xe96,
                                "EVP_RAND_reseed (expected->ctx, expected->prediction_resistance, NULL, 0, item->reseed_addin, item->reseed_addin_len)"
                                ,iVar2 != 0);
              if (iVar2 != 0) goto LAB_0010add7;
            }
            goto LAB_0010b0a2;
          }
LAB_0010add7:
          if (puVar8[7] != 0) {
            OSSL_PARAM_construct_octet_string(&local_218,"test_entropy",puVar8[7],puVar8[0xf]);
            local_188[0] = local_218;
            local_188[1] = uStack_210;
            local_168 = local_1f8;
            local_188[2] = local_208;
            local_188[3] = uStack_200;
            OSSL_PARAM_construct_end(&local_218);
            local_160 = local_218;
            uStack_158 = uStack_210;
            local_140 = local_1f8;
            local_150 = local_208;
            uStack_148 = uStack_200;
            iVar2 = EVP_RAND_CTX_set_params(puVar7[1],local_188);
            uStack_250 = 0x10ae7b;
            iVar2 = test_true("test/evp_test.c",0xea1,
                              "EVP_RAND_CTX_set_params(expected->parent, params)",iVar2 != 0);
            if (iVar2 == 0) goto LAB_0010b0a2;
          }
          uVar13 = puVar8[0xd];
          iVar2 = EVP_RAND_generate(*puVar7,pvVar5,num,uVar3,*(undefined4 *)((long)puVar7 + 0x14),
                                    puVar8[5]);
          iVar2 = test_true("test/evp_test.c",0xea4,
                            "EVP_RAND_generate (expected->ctx, got, got_len, strength, expected->prediction_resistance, item->addinA, item->addinA_len)"
                            ,iVar2 != 0);
          if (iVar2 == 0) goto LAB_0010b0a2;
          if (puVar8[8] != 0) {
            OSSL_PARAM_construct_octet_string
                      (&local_218,"test_entropy",puVar8[8],puVar8[0x10],uVar13,uStack_250);
            local_168 = local_1f8;
            local_188[0] = local_218;
            local_188[1] = uStack_210;
            local_188[2] = local_208;
            local_188[3] = uStack_200;
            OSSL_PARAM_construct_end(&local_218);
            local_160 = local_218;
            uStack_158 = uStack_210;
            local_140 = local_1f8;
            local_150 = local_208;
            uStack_148 = uStack_200;
            iVar2 = EVP_RAND_CTX_set_params(puVar7[1],local_188);
            iVar2 = test_true("test/evp_test.c",0xeaf,
                              "EVP_RAND_CTX_set_params(expected->parent, params)",iVar2 != 0);
            if (iVar2 == 0) goto LAB_0010b0a2;
          }
          iVar2 = EVP_RAND_generate(*puVar7,pvVar5,num,uVar3,*(undefined4 *)((long)puVar7 + 0x14),
                                    puVar8[6],puVar8[0xe]);
          iVar2 = test_true("test/evp_test.c",0xeb2,
                            "EVP_RAND_generate (expected->ctx, got, got_len, strength, expected->prediction_resistance, item->addinB, item->addinB_len)"
                            ,iVar2 != 0);
          if ((iVar2 == 0) ||
             (iVar2 = test_mem_eq("test/evp_test.c",0xeb7,&_LC21,"item->output",pvVar5,num),
             iVar2 == 0)) goto LAB_0010b0a2;
          uVar13 = *puVar7;
          local_1e4 = 1;
          local_1d8 = (undefined1  [16])0x0;
          local_1c8 = (undefined1  [16])0x0;
          local_1b8 = (undefined1  [16])0x0;
          local_1a8 = (undefined1  [16])0x0;
          local_198 = (undefined1  [16])0x0;
          lVar10 = EVP_RAND_CTX_gettable_params(uVar13);
          if (lVar10 != 0) {
            OSSL_PARAM_construct_int(&local_218,"fips-indicator",&local_1e4);
            local_1d8._8_8_ = uStack_210;
            local_1d8._0_8_ = local_218;
            local_1b8._0_8_ = local_1f8;
            local_1c8._8_8_ = uStack_200;
            local_1c8._0_8_ = local_208;
            iVar2 = EVP_RAND_CTX_get_params(uVar13,local_1d8);
            if ((iVar2 == 0) ||
               (iVar2 = check_fips_approved_isra_0(*(undefined4 *)(param_1 + 0x9d0),local_1e4),
               iVar2 == 0)) goto LAB_0010b0a2;
          }
          iVar2 = EVP_RAND_uninstantiate(*puVar7);
          iVar2 = test_true("test/evp_test.c",0xebb,"EVP_RAND_uninstantiate(expected->ctx)",
                            iVar2 != 0);
          if (iVar2 == 0) goto LAB_0010b0a2;
          iVar2 = EVP_RAND_uninstantiate(puVar7[1]);
          iVar2 = test_true("test/evp_test.c",0xebc,"EVP_RAND_uninstantiate(expected->parent)",
                            iVar2 != 0);
          if (iVar2 == 0) goto LAB_0010b0a2;
          iVar2 = EVP_RAND_verify_zeroization(*puVar7);
          iVar2 = test_true("test/evp_test.c",0xebd,"EVP_RAND_verify_zeroization(expected->ctx)",
                            iVar2 != 0);
          if (iVar2 == 0) goto LAB_0010b0a2;
          uVar4 = EVP_RAND_get_state(*puVar7);
          iVar2 = test_int_eq("test/evp_test.c",0xebe,"EVP_RAND_get_state(expected->ctx)",
                              "EVP_RAND_STATE_UNINITIALISED",uVar4,0);
          if (iVar2 == 0) goto LAB_0010b0a2;
          iVar1 = iVar1 + 1;
          puVar8 = puVar8 + 0x14;
        } while (iVar1 <= *(int *)(puVar7 + 2));
      }
      iVar2 = 1;
      *(undefined8 *)(param_1 + 0x9a8) = 0;
      CRYPTO_free(pvVar5);
      goto LAB_0010a8d5;
    }
    iVar2 = 0;
    if (*(int *)(param_1 + 0x9d0) == 0) {
      iVar2 = 1;
      *(char **)(param_1 + 0x9a8) = "EVP_RAND_CTX_set_params";
    }
  }
  else {
    iVar2 = ctrl2params(param_1,puVar7[6],0,local_188,8,&local_1e0);
    lVar10 = local_1e0 + -1;
    lVar9 = local_1e0;
    if (iVar2 != 0) {
      puVar8 = local_188 + local_1e0 * 5;
      goto LAB_0010a96d;
    }
  }
  CRYPTO_free(pvVar5);
  if (lVar9 != 0) {
    puVar7 = local_188 + lVar10 * 5 + 2;
    do {
      pvVar5 = (void *)*puVar7;
      lVar10 = lVar10 + -1;
      puVar7 = puVar7 + -5;
      CRYPTO_free(pvVar5);
    } while (lVar10 != -1);
  }
LAB_0010a8d5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



undefined8 pkey_add_control(long param_1,long param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  pcVar2 = strchr(param_3,0x3a);
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  pcVar2 = pcVar2 + 1;
  iVar1 = OPENSSL_strcasecmp(pcVar2,&_LC29);
  if ((iVar1 != 0) && (iVar1 = OPENSSL_strncasecmp(pcVar2,&_LC157,3), iVar1 != 0)) {
    pcVar2 = CRYPTO_strdup(param_3,"test/evp_test.c",0xcb);
    if (pcVar2 != (char *)0x0) {
      iVar1 = OPENSSL_sk_push(param_2,pcVar2);
      if (0 < iVar1) {
        return 1;
      }
      CRYPTO_free(pcVar2);
    }
    return 0;
  }
  test_info("test/evp_test.c",0xa3c,"skipping, \'%s\' is disabled",pcVar2);
  *(undefined4 *)(param_1 + 0x998) = 1;
  return 1;
}



undefined8 pkey_fromdata_test_parse(long param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = strcmp(param_2,"Ctrl");
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = pkey_add_control(param_1,*(undefined8 *)(*(long *)(param_1 + 0x9c8) + 0x50),param_3);
  return uVar2;
}



undefined8 kdf_test_parse(long param_1,char *param_2,char *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  size_t sVar7;
  char *__s;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = strcmp(param_2,"Output");
  if (iVar2 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = parse_bin(param_3,puVar1 + 1,puVar1 + 2);
      return uVar3;
    }
    goto LAB_0010b8b3;
  }
  iVar2 = strcmp(param_2,"CtrlInit");
  if (iVar2 == 0) {
    uVar3 = puVar1[0x68];
    pcVar4 = CRYPTO_strdup(param_3,"test/evp_test.c",0xcb);
    if (pcVar4 != (char *)0x0) {
      iVar2 = OPENSSL_sk_push(uVar3,pcVar4);
      if (0 < iVar2) goto LAB_0010b695;
      CRYPTO_free(pcVar4);
    }
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = strncmp(param_2,"Ctrl",4);
    if (iVar2 == 0) {
      uVar3 = EVP_KDF_CTX_kdf(*puVar1);
      uVar3 = EVP_KDF_settable_ctx_params(uVar3);
      pcVar4 = CRYPTO_strdup(param_3,"test/evp_test.c",0xf1b);
      iVar2 = test_ptr("test/evp_test.c",0xf1b,"name = OPENSSL_strdup(value)",pcVar4);
      if (iVar2 != 0) {
        __s = "";
        pcVar5 = strchr(pcVar4,0x3a);
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
          __s = pcVar5 + 1;
        }
        if ((*pcVar4 == 'r') && (pcVar4[1] == '\0')) {
          lVar6 = OSSL_PARAM_locate_const(uVar3,pcVar4);
          if (lVar6 != 0) goto LAB_0010b49e;
          test_info("test/evp_test.c",0xf25,"skipping, setting \'r\' is unsupported");
          *(undefined4 *)(param_1 + 0x998) = 1;
        }
        else {
LAB_0010b49e:
          iVar2 = strcmp(pcVar4,"lanes");
          if (iVar2 == 0) {
            lVar6 = OSSL_PARAM_locate_const(uVar3,pcVar4);
            if (lVar6 == 0) {
              test_info("test/evp_test.c",0xf2c,"skipping, setting \'lanes\' is unsupported");
              *(undefined4 *)(param_1 + 0x998) = 1;
              goto LAB_0010b6e0;
            }
          }
          iVar2 = strcmp(pcVar4,"iter");
          if (iVar2 == 0) {
            lVar6 = OSSL_PARAM_locate_const(uVar3,pcVar4);
            if (lVar6 == 0) {
              test_info("test/evp_test.c",0xf33,"skipping, setting \'iter\' is unsupported");
              *(undefined4 *)(param_1 + 0x998) = 1;
              goto LAB_0010b6e0;
            }
          }
          iVar2 = strcmp(pcVar4,"memcost");
          if (iVar2 == 0) {
            lVar6 = OSSL_PARAM_locate_const(uVar3,pcVar4);
            if (lVar6 == 0) {
              test_info("test/evp_test.c",0xf3a,"skipping, setting \'memcost\' is unsupported");
              *(undefined4 *)(param_1 + 0x998) = 1;
              goto LAB_0010b6e0;
            }
          }
          iVar2 = strcmp(pcVar4,"secret");
          if (iVar2 == 0) {
            lVar6 = OSSL_PARAM_locate_const(uVar3,pcVar4);
            if (lVar6 == 0) {
              test_info("test/evp_test.c",0xf41,"skipping, setting \'secret\' is unsupported");
              *(undefined4 *)(param_1 + 0x998) = 1;
              goto LAB_0010b6e0;
            }
          }
          iVar2 = strcmp(pcVar4,"pass");
          if (iVar2 == 0) {
            lVar6 = OSSL_PARAM_locate_const(uVar3,pcVar4);
            if (lVar6 == 0) {
              test_info("test/evp_test.c",0xf48,"skipping, setting \'pass\' is unsupported");
              *(undefined4 *)(param_1 + 0x998) = 1;
              goto LAB_0010b6e0;
            }
          }
          if (((*pcVar4 == 'a') && (pcVar4[1] == 'd')) && (pcVar4[2] == '\0')) {
            lVar6 = OSSL_PARAM_locate_const(uVar3,pcVar4);
            if (lVar6 == 0) {
              test_info("test/evp_test.c",0xf4f,"skipping, setting \'ad\' is unsupported");
              *(undefined4 *)(param_1 + 0x998) = 1;
              goto LAB_0010b6e0;
            }
          }
          sVar7 = strlen(__s);
          iVar2 = OSSL_PARAM_allocate_from_text(puVar1[0x67],uVar3,pcVar4,__s,sVar7,0);
          lVar6 = puVar1[0x67];
          puVar1[0x67] = lVar6 + 0x28;
          OSSL_PARAM_construct_end(&local_78);
          *(undefined8 *)(lVar6 + 0x28) = local_78;
          *(undefined8 *)(lVar6 + 0x30) = uStack_70;
          *(undefined8 *)(lVar6 + 0x38) = local_68;
          *(undefined8 *)(lVar6 + 0x40) = uStack_60;
          *(undefined8 *)(lVar6 + 0x48) = local_58;
          if (iVar2 == 0) {
            *(char **)(param_1 + 0x9a8) = "KDF_PARAM_ERROR";
            CRYPTO_free(pcVar4);
            goto LAB_0010b3c4;
          }
          iVar2 = strcmp(pcVar4,"digest");
          if (iVar2 == 0) {
            iVar2 = OPENSSL_strcasecmp(__s,&_LC29);
            if (iVar2 == 0) {
              test_info("test/evp_test.c",0xf5e,"skipping, \'%s\' is disabled",__s);
              *(undefined4 *)(param_1 + 0x998) = 1;
            }
          }
          else {
            iVar2 = strcmp(pcVar4,"cipher");
            if (iVar2 != 0) {
              iVar2 = strcmp(pcVar4,"cekalg");
              if (iVar2 != 0) goto LAB_0010b6e0;
            }
            iVar2 = OPENSSL_strncasecmp(__s,&_LC157,3);
            if (iVar2 == 0) {
              test_info("test/evp_test.c",0xf67,"skipping, \'%s\' is disabled",__s);
              *(undefined4 *)(param_1 + 0x998) = 1;
            }
          }
        }
LAB_0010b6e0:
        CRYPTO_free(pcVar4);
LAB_0010b695:
        uVar3 = 1;
        goto LAB_0010b3c6;
      }
    }
LAB_0010b3c4:
    uVar3 = 0;
  }
LAB_0010b3c6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_0010b8b3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 pkey_test_parse(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *ptr;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x9c8);
  iVar2 = strcmp(param_2,"Input");
  lVar4 = lVar1 + 0x30;
  lVar5 = lVar1 + 0x28;
  if (iVar2 != 0) {
    iVar2 = strcmp(param_2,"Output");
    if (iVar2 != 0) {
      iVar2 = strcmp(param_2,"CtrlInit");
      if (iVar2 == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x48);
        ptr = CRYPTO_strdup(param_3,"test/evp_test.c",0xcb);
        if (ptr != (char *)0x0) {
          iVar2 = OPENSSL_sk_push(uVar3,ptr);
          if (0 < iVar2) {
            return 1;
          }
          CRYPTO_free(ptr);
        }
        uVar3 = 0xffffffff;
      }
      else {
        iVar2 = strcmp(param_2,"Ctrl");
        uVar3 = 0;
        if (iVar2 == 0) {
          uVar3 = pkey_add_control(param_1,*(undefined8 *)(lVar1 + 0x50),param_3);
          return uVar3;
        }
      }
      return uVar3;
    }
    lVar4 = lVar1 + 0x40;
    lVar5 = lVar1 + 0x38;
  }
  uVar3 = parse_bin(param_3,lVar5,lVar4);
  return uVar3;
}



undefined8 keygen_test_parse(long param_1,char *param_2,char *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9c8);
  iVar2 = strcmp(param_2,"KeyName");
  if (iVar2 == 0) {
    pcVar3 = CRYPTO_strdup(param_3,"test/evp_test.c",0x10e4);
    pcVar4 = "keygen->keyname = OPENSSL_strdup(value)";
    uVar5 = 0x10e4;
    *puVar1 = pcVar3;
  }
  else {
    iVar2 = strcmp(param_2,"KeyParam");
    if (iVar2 != 0) {
      iVar2 = strcmp(param_2,"Ctrl");
      if (iVar2 == 0) {
        uVar5 = puVar1[3];
      }
      else {
        iVar2 = strcmp(param_2,"CtrlOut");
        if (iVar2 != 0) {
          return 0;
        }
        uVar5 = puVar1[4];
      }
      pcVar3 = CRYPTO_strdup(param_3,"test/evp_test.c",0xcb);
      if (pcVar3 != (char *)0x0) {
        iVar2 = OPENSSL_sk_push(uVar5,pcVar3);
        if (0 < iVar2) {
          return 1;
        }
        CRYPTO_free(pcVar3);
      }
      return 0xffffffff;
    }
    pcVar3 = CRYPTO_strdup(param_3,"test/evp_test.c",0x10e6);
    pcVar4 = "keygen->paramname = OPENSSL_strdup(value)";
    uVar5 = 0x10e6;
    puVar1[1] = pcVar3;
  }
  uVar5 = test_ptr("test/evp_test.c",uVar5,pcVar4,pcVar3);
  return uVar5;
}



undefined8 kem_test_parse(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 0x9c8);
  if (((*param_2 == 'O') && (param_2[1] == 'p')) && (param_2[2] == '\0')) {
    *(char **)(lVar1 + 8) = param_3;
    return 1;
  }
  iVar2 = strcmp(param_2,"CtrlInit");
  if (iVar2 != 0) {
    iVar2 = strcmp(param_2,"Input");
    lVar5 = lVar1 + 0x18;
    lVar6 = lVar1 + 0x10;
    if (iVar2 != 0) {
      iVar2 = strcmp(param_2,"Output");
      if (iVar2 == 0) {
        lVar5 = lVar1 + 0x28;
        lVar6 = lVar1 + 0x20;
      }
      else {
        iVar2 = strcmp(param_2,"EncodedPublicKey");
        lVar5 = lVar1 + 0x50;
        lVar6 = lVar1 + 0x48;
        if (iVar2 != 0) {
          iVar2 = strcmp(param_2,"EncodedPrivateKey");
          lVar5 = lVar1 + 0x60;
          lVar6 = lVar1 + 0x58;
          if (iVar2 != 0) {
            iVar2 = strcmp(param_2,"Entropy");
            lVar5 = lVar1 + 0x70;
            lVar6 = lVar1 + 0x68;
            if (iVar2 != 0) {
              iVar2 = strcmp(param_2,"Ciphertext");
              lVar5 = lVar1 + 0x80;
              lVar6 = lVar1 + 0x78;
              if (iVar2 != 0) {
                iVar2 = strcmp(param_2,"KeyName");
                if (iVar2 != 0) {
                  return 1;
                }
                pcVar3 = CRYPTO_strdup(param_3,"test/evp_test.c",0x8a4);
                *(char **)(lVar1 + 0x40) = pcVar3;
                uVar4 = test_ptr("test/evp_test.c",0x8a4,"kdata->keyname = OPENSSL_strdup(value)",
                                 pcVar3);
                return uVar4;
              }
            }
          }
        }
      }
    }
    uVar4 = parse_bin(param_3,lVar6,lVar5);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  pcVar3 = CRYPTO_strdup(param_3,"test/evp_test.c",0xcb);
  if (pcVar3 != (char *)0x0) {
    iVar2 = OPENSSL_sk_push(uVar4,pcVar3);
    if (0 < iVar2) {
      return 1;
    }
    CRYPTO_free(pcVar3);
  }
  return 0xffffffff;
}



undefined8 pderive_test_parse(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  char *ptr;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x9c8);
  iVar3 = strcmp(param_2,"PeerKeyValidate");
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = strcmp(param_2,"PeerKey");
    if (iVar3 != 0) {
      iVar3 = strcmp(param_2,"SharedSecret");
      if (iVar3 == 0) {
        uVar4 = parse_bin(param_3,lVar1 + 0x38,lVar1 + 0x40);
        return uVar4;
      }
      iVar3 = strcmp(param_2,"Ctrl");
      if (iVar3 == 0) {
        uVar4 = pkey_add_control(param_1,*(undefined8 *)(lVar1 + 0x50),param_3);
        return uVar4;
      }
      iVar3 = strcmp(param_2,"CtrlInit");
      if (iVar3 != 0) {
        return 0;
      }
      uVar4 = *(undefined8 *)(lVar1 + 0x48);
      ptr = CRYPTO_strdup(param_3,"test/evp_test.c",0xcb);
      if (ptr == (char *)0x0) {
        return 0xffffffff;
      }
      iVar3 = OPENSSL_sk_push(uVar4,ptr);
      if (iVar3 < 1) {
        CRYPTO_free(ptr);
        return 0xffffffff;
      }
      return 1;
    }
  }
  puVar2 = public_keys;
  *(int *)(lVar1 + 0x60) = iVar3;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    iVar3 = strcmp((char *)*puVar2,param_3);
    if (iVar3 == 0) break;
    puVar2 = (undefined8 *)puVar2[2];
  }
  *(undefined8 *)(lVar1 + 0x58) = puVar2[1];
  return 1;
}



undefined8 digestsigver_test_parse(long param_1,char *param_2,char *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  char *ptr;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x9c8);
  iVar2 = strcmp(param_2,"Key");
  if (iVar2 != 0) {
    iVar2 = strcmp(param_2,"Input");
    if (iVar2 == 0) {
      if (piVar6[1] == 0) {
        uVar3 = evp_test_buffer_append(param_3,(long)data_chunk_size,piVar6 + 8);
        return uVar3;
      }
      piVar4 = piVar6 + 0xc;
      piVar6 = piVar6 + 10;
    }
    else {
      iVar2 = strcmp(param_2,"Output");
      if (iVar2 != 0) {
        if (piVar6[1] == 0 && data_chunk_size == 0) {
          iVar2 = strcmp(param_2,"Count");
          if (iVar2 == 0) {
            uVar3 = evp_test_buffer_set_count(param_3,*(undefined8 *)(piVar6 + 8));
            return uVar3;
          }
          iVar2 = strcmp(param_2,"Ncopy");
          if (iVar2 == 0) {
            uVar3 = evp_test_buffer_ncopy(param_3,*(undefined8 *)(piVar6 + 8));
            return uVar3;
          }
        }
        iVar2 = strcmp(param_2,"Ctrl");
        if (iVar2 == 0) {
          uVar3 = pkey_add_control(param_1,*(undefined8 *)(piVar6 + 0x18),param_3);
          return uVar3;
        }
        iVar2 = strcmp(param_2,"CtrlInit");
        if (iVar2 != 0) {
          iVar2 = strcmp(param_2,"NonceType");
          if (iVar2 != 0) {
            return 0;
          }
          iVar2 = strcmp(param_3,"deterministic");
          if (iVar2 != 0) {
            return 1;
          }
          piVar6[0x12] = 1;
          return 1;
        }
        uVar3 = *(undefined8 *)(piVar6 + 0x16);
        ptr = CRYPTO_strdup(param_3,"test/evp_test.c",0xcb);
        if (ptr != (char *)0x0) {
          iVar2 = OPENSSL_sk_push(uVar3,ptr);
          if (0 < iVar2) {
            return 1;
          }
          CRYPTO_free(ptr);
        }
        return 0xffffffff;
      }
      piVar4 = piVar6 + 0x10;
      piVar6 = piVar6 + 0xe;
    }
    uVar3 = parse_bin(param_3,piVar6,piVar4);
    return uVar3;
  }
  puVar5 = public_keys;
  puVar1 = private_keys;
  if (*piVar6 != 0) {
    for (; puVar1 = private_keys, puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)puVar5[2]) {
      iVar2 = strcmp((char *)*puVar5,param_3);
      if (iVar2 == 0) goto LAB_0010bf08;
    }
  }
  while (puVar5 = puVar1, puVar5 != (undefined8 *)0x0) {
    iVar2 = strcmp((char *)*puVar5,param_3);
    if (iVar2 == 0) goto LAB_0010bf08;
    puVar1 = (undefined8 *)puVar5[2];
  }
LAB_0010c010:
  *(undefined4 *)(param_1 + 0x998) = 1;
  return 1;
LAB_0010bf08:
  if (puVar5[1] != 0) {
    *(undefined8 *)(piVar6 + 0x14) = puVar5[1];
    return 1;
  }
  goto LAB_0010c010;
}



undefined8 rand_test_parse(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  
  lVar7 = *(long *)(param_1 + 0x9c8);
  pcVar3 = strchr(param_2,0x2e);
  if (pcVar3 != (char *)0x0) {
    lVar4 = strtol(pcVar3 + 1,(char **)0x0,10);
    iVar2 = (int)lVar4;
    if (0xe < iVar2) {
      return 0;
    }
    if (*(int *)(lVar7 + 0x10) < iVar2) {
      *(int *)(lVar7 + 0x10) = iVar2;
    }
    lVar1 = lVar7 + 0x38 + (long)iVar2 * 0xa0;
    iVar2 = strncmp(param_2,"Entropy.",8);
    lVar7 = lVar1 + 0x50;
    lVar4 = lVar1;
    if (iVar2 != 0) {
      iVar2 = strncmp(param_2,"ReseedEntropy.",0xe);
      if (iVar2 == 0) {
        lVar7 = lVar1 + 0x90;
        lVar4 = lVar1 + 8;
      }
      else {
        iVar2 = strncmp(param_2,"Nonce.",6);
        lVar7 = lVar1 + 0x58;
        lVar4 = lVar1 + 0x10;
        if (iVar2 != 0) {
          iVar2 = strncmp(param_2,"PersonalisationString.",0x16);
          lVar7 = lVar1 + 0x60;
          lVar4 = lVar1 + 0x18;
          if (iVar2 != 0) {
            iVar2 = strncmp(param_2,"ReseedAdditionalInput.",0x16);
            lVar7 = lVar1 + 0x98;
            lVar4 = lVar1 + 0x20;
            if (iVar2 != 0) {
              iVar2 = strncmp(param_2,"AdditionalInputA.",0x11);
              lVar7 = lVar1 + 0x68;
              lVar4 = lVar1 + 0x28;
              if (iVar2 != 0) {
                iVar2 = strncmp(param_2,"AdditionalInputB.",0x11);
                lVar7 = lVar1 + 0x70;
                lVar4 = lVar1 + 0x30;
                if (iVar2 != 0) {
                  iVar2 = strncmp(param_2,"EntropyPredictionResistanceA.",0x1d);
                  lVar7 = lVar1 + 0x78;
                  lVar4 = lVar1 + 0x38;
                  if (iVar2 != 0) {
                    iVar2 = strncmp(param_2,"EntropyPredictionResistanceB.",0x1d);
                    lVar7 = lVar1 + 0x80;
                    lVar4 = lVar1 + 0x40;
                    if (iVar2 != 0) {
                      iVar2 = strncmp(param_2,"Output.",7);
                      lVar7 = lVar1 + 0x88;
                      lVar4 = lVar1 + 0x48;
                      if (iVar2 != 0) {
                        return 0;
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
    uVar5 = parse_bin(param_3,lVar4,lVar7);
    return uVar5;
  }
  iVar2 = strcmp(param_2,"Cipher");
  if (iVar2 == 0) {
    pcVar3 = CRYPTO_strdup(param_3,"test/evp_test.c",0xe36);
    pcVar8 = "rdata->cipher = OPENSSL_strdup(value)";
    uVar5 = 0xe36;
    *(char **)(lVar7 + 0x20) = pcVar3;
  }
  else {
    iVar2 = strcmp(param_2,"Digest");
    if (iVar2 != 0) {
      iVar2 = strcmp(param_2,"DerivationFunction");
      if (iVar2 == 0) {
        lVar4 = strtol(param_3,(char **)0x0,10);
        *(uint *)(lVar7 + 0x18) = (uint)((int)lVar4 != 0);
      }
      else {
        iVar2 = strcmp(param_2,"GenerateBits");
        if (iVar2 == 0) {
          uVar6 = strtol(param_3,(char **)0x0,10);
          if (((int)uVar6 < 1) || ((uVar6 & 7) != 0)) {
            return 0;
          }
          *(int *)(lVar7 + 0x1c) = (int)uVar6;
        }
        else {
          iVar2 = strcmp(param_2,"PredictionResistance");
          if (iVar2 == 0) {
            lVar4 = strtol(param_3,(char **)0x0,10);
            *(uint *)(lVar7 + 0x14) = (uint)((int)lVar4 != 0);
          }
          else {
            iVar2 = strcmp(param_2,"CtrlInit");
            if (iVar2 != 0) {
              return 0;
            }
            uVar5 = *(undefined8 *)(lVar7 + 0x30);
            pcVar3 = CRYPTO_strdup(param_3,"test/evp_test.c",0xcb);
            if (pcVar3 == (char *)0x0) {
              return 0xffffffff;
            }
            iVar2 = OPENSSL_sk_push(uVar5,pcVar3);
            if (iVar2 < 1) {
              CRYPTO_free(pcVar3);
              return 0xffffffff;
            }
          }
        }
      }
      return 1;
    }
    pcVar3 = CRYPTO_strdup(param_3,"test/evp_test.c",0xe38);
    pcVar8 = "rdata->digest = OPENSSL_strdup(value)";
    uVar5 = 0xe38;
    *(char **)(lVar7 + 0x28) = pcVar3;
  }
  uVar5 = test_ptr("test/evp_test.c",uVar5,pcVar8,pcVar3);
  return uVar5;
}



undefined8 mac_test_parse(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 0x9c8);
  iVar2 = strcmp(param_2,"Key");
  lVar3 = lVar1 + 0x28;
  lVar6 = lVar1 + 0x20;
  if (iVar2 != 0) {
    if (((*param_2 == 'I') && (param_2[1] == 'V')) && (param_2[2] == '\0')) {
      lVar3 = lVar1 + 0x38;
      lVar6 = lVar1 + 0x30;
    }
    else {
      iVar2 = strcmp(param_2,"Custom");
      lVar3 = lVar1 + 0x68;
      lVar6 = lVar1 + 0x60;
      if (iVar2 != 0) {
        iVar2 = strcmp(param_2,"Salt");
        lVar3 = lVar1 + 0x78;
        lVar6 = lVar1 + 0x70;
        if (iVar2 != 0) {
          iVar2 = strcmp(param_2,"Algorithm");
          if (iVar2 == 0) {
            pcVar5 = CRYPTO_strdup(param_3,"test/evp_test.c",0x699);
            *(char **)(lVar1 + 0x18) = pcVar5;
            if (pcVar5 != (char *)0x0) {
              return 1;
            }
            return 0xffffffff;
          }
          iVar2 = strcmp(param_2,"Input");
          lVar3 = lVar1 + 0x48;
          lVar6 = lVar1 + 0x40;
          if (iVar2 != 0) {
            iVar2 = strcmp(param_2,"Output");
            if (iVar2 != 0) {
              iVar2 = strcmp(param_2,"XOF");
              if (iVar2 == 0) {
                *(undefined4 *)(lVar1 + 0x80) = 1;
              }
              else {
                iVar2 = strcmp(param_2,"NoReinit");
                if (iVar2 != 0) {
                  iVar2 = strcmp(param_2,"Ctrl");
                  if (iVar2 == 0) {
                    uVar4 = *(undefined8 *)(lVar1 + 0x88);
                    pcVar5 = CRYPTO_strdup(param_3,"test/evp_test.c",0xcb);
                    if (pcVar5 != (char *)0x0) {
                      iVar2 = OPENSSL_sk_push(uVar4,pcVar5);
                      if (0 < iVar2) {
                        return 1;
                      }
                      CRYPTO_free(pcVar5);
                    }
                  }
                  else {
                    iVar2 = strcmp(param_2,"OutputSize");
                    if (iVar2 == 0) {
                      lVar3 = strtol(param_3,(char **)0x0,10);
                      iVar2 = (int)lVar3;
                      *(int *)(lVar1 + 0x90) = iVar2;
                    }
                    else {
                      iVar2 = strcmp(param_2,"BlockSize");
                      if (iVar2 != 0) {
                        return 0;
                      }
                      lVar3 = strtol(param_3,(char **)0x0,10);
                      iVar2 = (int)lVar3;
                      *(int *)(lVar1 + 0x94) = iVar2;
                    }
                    if (-1 < iVar2) {
                      return 1;
                    }
                  }
                  return 0xffffffff;
                }
                *(undefined4 *)(lVar1 + 0x84) = 1;
              }
              return 1;
            }
            lVar3 = lVar1 + 0x58;
            lVar6 = lVar1 + 0x50;
          }
        }
      }
    }
  }
  uVar4 = parse_bin(param_3,lVar6,lVar3);
  return uVar4;
}



undefined1 * test_get_options(void)

{
  return test_options_3;
}



undefined8 setup_tests(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  
  pcVar2 = getenv("EVP_TEST_EXTENDED");
  pcVar5 = (char *)0x0;
  lVar6 = 0;
  extended_tests = (uint)(pcVar2 != (char *)0x0);
LAB_0010c800:
  iVar1 = opt_next();
joined_r0x0010c807:
  if (iVar1 == 0) {
    pcVar2 = "default";
    if (lVar6 != 0 || pcVar5 != (char *)0x0) {
      pcVar2 = pcVar5;
    }
    iVar1 = test_get_libctx(&libctx,&prov_null,lVar6,&libprov,pcVar2);
    if (iVar1 == 0) {
      return 0;
    }
    uVar4 = test_get_argument_count();
    if (uVar4 == 0) {
      return 0;
    }
    add_all_tests("run_file_tests",run_file_tests,uVar4 & 0xffffffff,1);
    return 1;
  }
  if (5 < iVar1) {
    if (5 < iVar1 - 500U) {
      return 0;
    }
    goto LAB_0010c800;
  }
  if (iVar1 < 1) {
    return 0;
  }
  switch(iVar1) {
  default:
    lVar6 = opt_arg();
    break;
  case 2:
    pcVar2 = (char *)opt_arg();
    iVar1 = strcmp(pcVar2,"in_place");
    if (iVar1 == 0) {
      process_mode_in_place = 1;
      break;
    }
    iVar1 = strcmp(pcVar2,"both");
    if (iVar1 == 0) {
      process_mode_in_place = 0;
      break;
    }
    process_mode_in_place = 0xffffffff;
  case 5:
    uVar3 = opt_arg();
    iVar1 = opt_int(uVar3,&data_chunk_size);
    if (iVar1 == 0) {
      return 0;
    }
    break;
  case 3:
    pcVar5 = (char *)opt_arg();
    break;
  case 4:
    goto switchD_0010c82c_caseD_4;
  }
  goto LAB_0010c800;
switchD_0010c82c_caseD_4:
  propquery = opt_arg();
  iVar1 = opt_next();
  goto joined_r0x0010c807;
}



void cleanup_tests(void)

{
  OSSL_PROVIDER_unload(libprov);
  OSSL_PROVIDER_unload(prov_null);
  OSSL_LIB_CTX_free(libctx);
  return;
}



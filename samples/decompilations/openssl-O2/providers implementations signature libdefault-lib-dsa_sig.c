
undefined1 * dsa_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



undefined1 * dsa_settable_ctx_params(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = settable_ctx_params;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x1c) & 2) == 0)) {
    puVar1 = settable_ctx_params_no_digest;
  }
  return puVar1;
}



undefined1 * dsa_sigalg_query_key_types(void)

{
  return keytypes_36;
}



undefined1 * dsa_sigalg_settable_ctx_params(long param_1)

{
  undefined1 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = settable_sigalg_ctx_params;
    if (*(int *)(param_1 + 0x18) != 0x8000) {
      puVar1 = (undefined1 *)0x0;
    }
    return puVar1;
  }
  return (undefined1 *)0x0;
}



undefined8 dsa_settable_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x168) != 0) {
    uVar1 = EVP_MD_settable_ctx_params();
    return uVar1;
  }
  return 0;
}



undefined8 dsa_set_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x170) != 0) {
    uVar1 = EVP_MD_CTX_set_params();
    return uVar1;
  }
  return 0;
}



undefined8 dsa_gettable_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x168) != 0) {
    uVar1 = EVP_MD_gettable_ctx_params();
    return uVar1;
  }
  return 0;
}



undefined8 dsa_get_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x170) != 0) {
    uVar1 = EVP_MD_CTX_get_params();
    return uVar1;
  }
  return 0;
}



bool dsa_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"algorithm-id");
  if (lVar2 != 0) {
    lVar3 = param_1 + 0x24;
    if (*(long *)(param_1 + 0x128) == 0) {
      lVar3 = 0;
    }
    iVar1 = OSSL_PARAM_set_octet_string(lVar2,lVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"digest");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_utf8_string(lVar2,param_1 + 0x130), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"nonce-type");
  if (lVar2 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 0x20));
  return iVar1 != 0;
}



void dsa_freectx(void *param_1)

{
  EVP_MD_CTX_free(*(undefined8 *)((long)param_1 + 0x170));
  EVP_MD_free(*(undefined8 *)((long)param_1 + 0x168));
  CRYPTO_free(*(void **)((long)param_1 + 0x178));
  CRYPTO_free(*(void **)((long)param_1 + 8));
  DSA_free(*(DSA **)((long)param_1 + 0x10));
  CRYPTO_free(param_1);
  return;
}



undefined8 * dsa_dupctx(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  EVP_MD_CTX *out;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  DSA *r;
  byte bVar8;
  
  bVar8 = 0;
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)CRYPTO_zalloc(0x188,"providers/implementations/signature/dsa_sig.c",0x27d);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar6 = param_1;
  puVar7 = puVar3;
  for (lVar5 = 0x31; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
    puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
  }
  r = (DSA *)param_1[2];
  *(undefined1 (*) [16])(puVar3 + 1) = (undefined1  [16])0x0;
  if (r != (DSA *)0x0) {
    iVar2 = DSA_up_ref(r);
    if (iVar2 == 0) goto LAB_00100320;
    r = (DSA *)param_1[2];
  }
  puVar3[2] = r;
  lVar5 = param_1[0x2d];
  if (lVar5 != 0) {
    iVar2 = EVP_MD_up_ref();
    if (iVar2 == 0) goto LAB_00100320;
    lVar5 = param_1[0x2d];
  }
  lVar1 = param_1[0x2e];
  puVar3[0x2d] = lVar5;
  if (lVar1 != 0) {
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    puVar3[0x2e] = out;
    if ((out == (EVP_MD_CTX *)0x0) ||
       (iVar2 = EVP_MD_CTX_copy_ex(out,(EVP_MD_CTX *)param_1[0x2e]), iVar2 == 0)) goto LAB_00100320;
  }
  if ((char *)param_1[1] == (char *)0x0) {
    return puVar3;
  }
  pcVar4 = CRYPTO_strdup((char *)param_1[1],"providers/implementations/signature/dsa_sig.c",0x295);
  puVar3[1] = pcVar4;
  if (pcVar4 != (char *)0x0) {
    return puVar3;
  }
LAB_00100320:
  dsa_freectx(puVar3);
  return (undefined8 *)0x0;
}



undefined8 * dsa_newctx(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) &&
     (ptr = (undefined8 *)CRYPTO_zalloc(0x188,"providers/implementations/signature/dsa_sig.c",0x87),
     ptr != (undefined8 *)0x0)) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    *(byte *)((long)ptr + 0x1c) = *(byte *)((long)ptr + 0x1c) | 2;
    *ptr = uVar2;
    if (param_2 == (char *)0x0) {
      return ptr;
    }
    pcVar3 = CRYPTO_strdup(param_2,"providers/implementations/signature/dsa_sig.c",0x8e);
    ptr[1] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



int dsa_digest_signverify_update(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
    iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x170),param_2,param_3);
    return iVar1;
  }
  return 0;
}



undefined8 dsa_setup_md_isra_0(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  undefined8 uVar5;
  void *__src;
  long in_FS_OFFSET;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    param_3 = param_1[1];
  }
  if (param_2 == (char *)0x0) {
LAB_001004c0:
    uVar5 = 1;
  }
  else {
    sVar3 = strlen(param_2);
    lVar4 = EVP_MD_fetch(*param_1,param_2,param_3);
    iVar1 = ossl_digest_get_approved_nid(lVar4);
    if (lVar4 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/dsa_sig.c",0xa8,"dsa_setup_md");
      ERR_set_error(0x39,0x7a,"%s could not be fetched",param_2);
    }
    else if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/dsa_sig.c",0xad,"dsa_setup_md");
      ERR_set_error(0x39,0xae,"digest=%s",param_2);
    }
    else if (sVar3 < 0x32) {
      iVar2 = EVP_MD_xof(lVar4);
      if (iVar2 == 0) {
        if ((*(byte *)((long)param_1 + 0x1c) & 2) == 0) {
          if (*(char *)(param_1 + 0x26) != '\0') {
            iVar1 = EVP_MD_is_a(lVar4,param_1 + 0x26);
            if (iVar1 == 0) {
              ERR_new();
              ERR_set_debug("providers/implementations/signature/dsa_sig.c",0xcd,"dsa_setup_md");
              ERR_set_error(0x39,0xae,"digest %s != %s",param_2,param_1 + 0x26);
              goto LAB_001005c0;
            }
          }
          EVP_MD_free(lVar4);
          goto LAB_001004c0;
        }
        EVP_MD_CTX_free(param_1[0x2e]);
        EVP_MD_free(param_1[0x2d]);
        param_1[0x25] = 0;
        iVar2 = WPACKET_init_der(local_78,(void *)((long)param_1 + 0x24),0x100);
        if (iVar2 == 0) {
LAB_00100544:
          WPACKET_cleanup(local_78);
        }
        else {
          iVar1 = ossl_DER_w_algorithmIdentifier_DSA_with_MD(local_78,0xffffffff,param_1[2],iVar1);
          if (iVar1 == 0) goto LAB_00100544;
          iVar1 = WPACKET_finish(local_78);
          if (iVar1 == 0) goto LAB_00100544;
          WPACKET_get_total_written(local_78,param_1 + 0x25);
          __src = (void *)WPACKET_get_curr(local_78);
          WPACKET_cleanup(local_78);
          if ((__src != (void *)0x0) && (param_1[0x25] != 0)) {
            memmove((void *)((long)param_1 + 0x24),__src,param_1[0x25]);
          }
        }
        param_1[0x2d] = lVar4;
        param_1[0x2e] = 0;
        OPENSSL_strlcpy(param_1 + 0x26,param_2,0x32);
        goto LAB_001004c0;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/signature/dsa_sig.c",0xb8,"dsa_setup_md");
      ERR_set_error(0x39,0xb7,0);
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/dsa_sig.c",0xb2,"dsa_setup_md");
      ERR_set_error(0x39,0x7a,"%s exceeds name buffer length",param_2);
    }
LAB_001005c0:
    EVP_MD_free(lVar4);
    uVar5 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 dsa_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined2 local_148;
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
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
LAB_001008e0:
    uVar4 = 0;
  }
  else {
    if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
      lVar2 = OSSL_PARAM_locate_const(param_2,"nonce-type");
      if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_get_uint(lVar2,param_1 + 0x20), iVar1 == 0))
      goto LAB_001008e0;
      lVar2 = OSSL_PARAM_locate_const(param_2,"digest");
      if (lVar2 != 0) {
        local_148 = 0;
        local_178 = (undefined1  [16])0x0;
        local_168 = (undefined1  [16])0x0;
        local_158 = (undefined1  [16])0x0;
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
        local_48 = (undefined1  [16])0x0;
        local_188 = local_178;
        local_180 = local_138;
        lVar3 = OSSL_PARAM_locate_const(param_2,"properties");
        iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_188,0x32);
        if ((iVar1 == 0) ||
           (((lVar3 != 0 && (iVar1 = OSSL_PARAM_get_utf8_string(lVar3,&local_180,0x100), iVar1 == 0)
             ) || (iVar1 = dsa_setup_md_isra_0(param_1,local_178,local_138), iVar1 == 0))))
        goto LAB_001008e0;
      }
    }
    uVar4 = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8
dsa_digest_signverify_init_isra_0
          (long param_1,char *param_2,DSA *param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 == 0) || (iVar1 = ossl_prov_is_running(), iVar1 == 0)) || (param_1 == 0)) {
    return 0;
  }
  if (param_3 == (DSA *)0x0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/dsa_sig.c",0x121,"dsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar1 = DSA_up_ref(param_3);
    if (iVar1 == 0) {
      return 0;
    }
    DSA_free(*(DSA **)(param_1 + 0x10));
    *(DSA **)(param_1 + 0x10) = param_3;
  }
  *(undefined4 *)(param_1 + 0x18) = param_5;
  iVar1 = dsa_set_ctx_params(param_1,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  if (((param_2 != (char *)0x0) &&
      ((*param_2 == '\0' || (iVar1 = OPENSSL_strcasecmp(param_1 + 0x130,param_2), iVar1 != 0)))) &&
     (iVar1 = dsa_setup_md_isra_0(param_1,param_2,0), iVar1 == 0)) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x170);
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfd;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x170) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001009ff;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x168),param_4);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x170);
LAB_001009ff:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x170) = 0;
  return 0;
}



void dsa_digest_sign_init(void)

{
  dsa_digest_signverify_init_isra_0();
  return;
}



void dsa_digest_verify_init(void)

{
  dsa_digest_signverify_init_isra_0();
  return;
}



undefined8
dsa_sign_directly(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,
                 ulong param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = DSA_size((DSA *)param_1[2]);
  if ((param_1[0x2d] == 0) || (iVar2 = EVP_MD_get_size(), iVar2 < 1)) {
    uVar4 = 0;
    iVar2 = ossl_prov_is_running();
  }
  else {
    uVar4 = (ulong)iVar2;
    iVar2 = ossl_prov_is_running();
  }
  if (iVar2 == 0) {
LAB_00100af0:
    uVar3 = 0;
  }
  else {
    if (param_2 == 0) {
      *param_3 = (long)iVar1;
    }
    else {
      if ((param_4 < (ulong)(long)iVar1) ||
         (((uVar4 != 0 && (param_6 != uVar4)) ||
          (iVar1 = ossl_dsa_sign_int(0,param_5,param_6 & 0xffffffff,param_2,&local_44,param_1[2],
                                     *(undefined4 *)(param_1 + 4),param_1 + 0x26,*param_1,param_1[1]
                                    ), iVar1 < 1)))) goto LAB_00100af0;
      *param_3 = (ulong)local_44;
    }
    uVar3 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 dsa_sign_message_final(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  iVar1 = ossl_prov_is_running();
  if ((((param_1 == 0) || (iVar1 == 0)) || (*(EVP_MD_CTX **)(param_1 + 0x170) == (EVP_MD_CTX *)0x0))
     || ((param_2 != 0 &&
         (iVar1 = EVP_DigestFinal_ex(*(EVP_MD_CTX **)(param_1 + 0x170),local_78,&local_7c),
         iVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = dsa_sign_directly(param_1,param_2,param_3,param_4,local_78,local_7c);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 dsa_digest_sign_final(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    return 0;
  }
  uVar1 = dsa_sign_message_final();
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 2;
  return uVar1;
}



int dsa_signverify_message_update(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x170),param_2,param_3);
    return iVar1;
  }
  return 0;
}



int dsa_verify_directly(long param_1,uchar *param_2,int param_3,uchar *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  
  if ((*(long *)(param_1 + 0x168) == 0) || (iVar1 = EVP_MD_get_size(), iVar1 < 1)) {
    iVar1 = ossl_prov_is_running();
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar2 = ossl_prov_is_running();
    if (iVar2 == 0) {
      return 0;
    }
    if (param_5 != iVar1) {
      return 0;
    }
  }
  iVar1 = DSA_verify(0,param_4,(int)param_5,param_2,param_3,*(DSA **)(param_1 + 0x10));
  return iVar1;
}



undefined8 dsa_verify_message_final(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_6c;
  uchar local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = 0;
  iVar1 = ossl_prov_is_running();
  if (((param_1 != 0) && (iVar1 != 0)) && (*(EVP_MD_CTX **)(param_1 + 0x170) != (EVP_MD_CTX *)0x0))
  {
    iVar1 = EVP_DigestFinal_ex(*(EVP_MD_CTX **)(param_1 + 0x170),local_68,&local_6c);
    if (iVar1 != 0) {
      uVar2 = dsa_verify_directly(param_1,*(undefined8 *)(param_1 + 0x178),
                                  *(undefined8 *)(param_1 + 0x180),local_68,local_6c);
      goto LAB_00100da7;
    }
  }
  uVar2 = 0;
LAB_00100da7:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool dsa_sigalg_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return false;
  }
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"nonce-type");
    if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_get_uint(lVar2,param_1 + 0x20), iVar1 == 0)) {
      return false;
    }
    if ((*(int *)(param_1 + 0x18) == 0x8000) &&
       (lVar2 = OSSL_PARAM_locate_const(param_2,"signature"), lVar2 != 0)) {
      CRYPTO_free(*(void **)(param_1 + 0x178));
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,param_1 + 0x178,0,param_1 + 0x180);
      return iVar1 != 0;
    }
  }
  return true;
}



undefined8
dsa_verify(long param_1,undefined8 param_2,undefined8 param_3,void *param_4,size_t param_5)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
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
  if (*(int *)(param_1 + 0x18) == 0x8000) {
    OSSL_PARAM_construct_octet_string(&local_a8,"signature",param_2,param_3);
    local_58 = local_88;
    local_78 = local_a8;
    uStack_70 = uStack_a0;
    local_68 = local_98;
    uStack_60 = uStack_90;
    OSSL_PARAM_construct_end(&local_a8);
    local_50 = local_a8;
    uStack_48 = uStack_a0;
    local_30 = local_88;
    local_40 = local_98;
    uStack_38 = uStack_90;
    iVar1 = dsa_sigalg_set_ctx_params(param_1,&local_78);
    if (0 < iVar1) {
      iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x170),param_4,param_5);
      if (0 < iVar1) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = dsa_verify_message_final(param_1);
          return uVar2;
        }
        goto LAB_00101021;
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar2 = dsa_verify_directly();
    return uVar2;
  }
LAB_00101021:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 dsa_digest_verify_final(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
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
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    OSSL_PARAM_construct_octet_string(&local_a8,"signature",param_2,param_3);
    local_58 = local_88;
    local_78 = local_a8;
    uStack_70 = uStack_a0;
    local_68 = local_98;
    uStack_60 = uStack_90;
    OSSL_PARAM_construct_end(&local_a8);
    local_50 = local_a8;
    uStack_48 = uStack_a0;
    local_30 = local_88;
    local_40 = local_98;
    uStack_38 = uStack_90;
    uVar1 = dsa_sigalg_set_ctx_params(param_1,&local_78);
    if ((int)uVar1 != 0) {
      uVar1 = dsa_verify_message_final(param_1);
    }
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 2;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool dsa_verify_init(long param_1,DSA *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    if (param_2 == (DSA *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_00101167;
      ERR_new();
      ERR_set_debug("providers/implementations/signature/dsa_sig.c",0x121,"dsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = DSA_up_ref(param_2);
      if (iVar1 != 0) {
        DSA_free(*(DSA **)(param_1 + 0x10));
        *(DSA **)(param_1 + 0x10) = param_2;
LAB_00101167:
        *(undefined4 *)(param_1 + 0x18) = 0x20;
        iVar1 = dsa_set_ctx_params(param_1,param_3);
        return iVar1 != 0;
      }
    }
  }
  return false;
}



bool dsa_sign_init(long param_1,DSA *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    if (param_2 == (DSA *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_00101227;
      ERR_new();
      ERR_set_debug("providers/implementations/signature/dsa_sig.c",0x121,"dsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = DSA_up_ref(param_2);
      if (iVar1 != 0) {
        DSA_free(*(DSA **)(param_1 + 0x10));
        *(DSA **)(param_1 + 0x10) = param_2;
LAB_00101227:
        *(undefined4 *)(param_1 + 0x18) = 0x10;
        iVar1 = dsa_set_ctx_params(param_1,param_3);
        return iVar1 != 0;
      }
    }
  }
  return false;
}



undefined8
dsa_sigalg_signverify_init_constprop_0_isra_0
          (long param_1,DSA *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 == 0) || (iVar1 = ossl_prov_is_running(), iVar1 == 0)) || (param_1 == 0)) {
    return 0;
  }
  if (param_2 == (DSA *)0x0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/dsa_sig.c",0x121,"dsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar1 = DSA_up_ref(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    DSA_free(*(DSA **)(param_1 + 0x10));
    *(DSA **)(param_1 + 0x10) = param_2;
  }
  *(undefined4 *)(param_1 + 0x18) = param_5;
  iVar1 = dsa_sigalg_set_ctx_params(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = dsa_setup_md_isra_0(param_1,param_4,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x170);
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x170) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00101377;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x168),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x170);
LAB_00101377:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x170) = 0;
  return 0;
}



void dsa_sha1_verify_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha1_verify_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha1_sign_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha1_sign_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha224_verify_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha224_verify_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha224_sign_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha224_sign_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha256_verify_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha256_verify_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha256_sign_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha256_sign_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha384_verify_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha384_verify_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha384_sign_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha384_sign_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha512_verify_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha512_verify_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha512_sign_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha512_sign_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_224_verify_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_224_verify_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_224_sign_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_224_sign_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_256_verify_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_256_verify_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_256_sign_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_256_sign_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_384_verify_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_384_verify_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_384_sign_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_384_sign_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_512_verify_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_512_verify_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_512_sign_message_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void dsa_sha3_512_sign_init(void)

{
  dsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



undefined8
dsa_sign(long param_1,long param_2,long *param_3,undefined8 param_4,void *param_5,size_t param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x18) != 0x4000) {
    uVar3 = dsa_sign_directly();
    return uVar3;
  }
  if (param_2 == 0) {
    iVar1 = ossl_prov_is_running();
    if ((iVar1 != 0) && (*(long *)(param_1 + 0x170) != 0)) {
      iVar1 = DSA_size(*(DSA **)(param_1 + 0x10));
      if (*(long *)(param_1 + 0x168) != 0) {
        EVP_MD_get_size();
      }
      iVar2 = ossl_prov_is_running();
      if (iVar2 != 0) {
        *param_3 = (long)iVar1;
        return 1;
      }
    }
  }
  else {
    iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x170),param_5,param_6);
    if (0 < iVar1) {
      uVar3 = dsa_sign_message_final(param_1,param_2,param_3,param_4);
      return uVar3;
    }
  }
  return 0;
}



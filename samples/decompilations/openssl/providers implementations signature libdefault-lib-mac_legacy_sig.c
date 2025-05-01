
void mac_set_ctx_params(long param_1)

{
  EVP_MAC_CTX_set_params(*(undefined8 *)(param_1 + 0x18));
  return;
}



void mac_freectx(void *param_1)

{
  CRYPTO_free(*(void **)((long)param_1 + 8));
  EVP_MAC_CTX_free(*(undefined8 *)((long)param_1 + 0x18));
  ossl_mac_key_free(*(undefined8 *)((long)param_1 + 0x10));
  CRYPTO_free(param_1);
  return;
}



undefined8
mac_digest_sign_final(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((param_1 != 0) && (iVar1 != 0)) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar2 = EVP_MAC_final(*(long *)(param_1 + 0x18),param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



undefined8 mac_digest_sign_update(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = EVP_MAC_update();
    return uVar1;
  }
  return 0;
}



bool mac_digest_sign_init(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ENGINE *e;
  long lVar3;
  
  iVar1 = ossl_prov_is_running();
  if (param_1 == 0) {
    return false;
  }
  if (iVar1 == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    if (param_3 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/mac_legacy_sig.c",0x6b,
                    "mac_digest_sign_init");
      ERR_set_error(0x39,0x72,0);
      return false;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (param_3 == 0) goto LAB_00100150;
  }
  iVar1 = ossl_mac_key_up_ref(param_3);
  if (iVar1 == 0) {
    return false;
  }
  ossl_mac_key_free(*(undefined8 *)(param_1 + 0x10));
  *(long *)(param_1 + 0x10) = param_3;
  lVar3 = param_3;
LAB_00100150:
  lVar2 = *(long *)(lVar3 + 0x20);
  if (lVar2 != 0) {
    lVar2 = EVP_CIPHER_get0_name(lVar2);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  e = *(ENGINE **)(lVar3 + 0x30);
  if (e != (ENGINE *)0x0) {
    e = (ENGINE *)ENGINE_get_id(e);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  iVar1 = ossl_prov_set_macctx
                    (*(undefined8 *)(param_1 + 0x18),0,lVar2,param_2,e,*(undefined8 *)(lVar3 + 0x38)
                     ,0,0);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = EVP_MAC_init(*(undefined8 *)(param_1 + 0x18),
                       *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),
                       *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),param_4);
  return iVar1 != 0;
}



undefined8 * mac_cmac_newctx(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)
        CRYPTO_zalloc(0x20,"providers/implementations/signature/mac_legacy_sig.c",0x3a);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar2 = ossl_prov_ctx_get0_libctx(param_1);
  *ptr = uVar2;
  if (param_2 == (char *)0x0) {
LAB_00100285:
    lVar4 = EVP_MAC_fetch(uVar2,&_LC1,param_2);
    if (lVar4 != 0) {
      lVar5 = EVP_MAC_CTX_new(lVar4);
      ptr[3] = lVar5;
      if (lVar5 != 0) {
        EVP_MAC_free(lVar4);
        return ptr;
      }
      goto LAB_001002ca;
    }
  }
  else {
    pcVar3 = CRYPTO_strdup(param_2,"providers/implementations/signature/mac_legacy_sig.c",0x3f);
    ptr[1] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      uVar2 = *ptr;
      goto LAB_00100285;
    }
  }
  lVar4 = 0;
LAB_001002ca:
  CRYPTO_free((void *)ptr[1]);
  CRYPTO_free(ptr);
  EVP_MAC_free(lVar4);
  return (undefined8 *)0x0;
}



undefined8 mac_poly1305_settable_ctx_params(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_prov_ctx_get0_libctx(param_2);
  lVar2 = EVP_MAC_fetch(uVar1,"POLY1305",0);
  if (lVar2 != 0) {
    uVar1 = EVP_MAC_settable_ctx_params(lVar2);
    EVP_MAC_free(lVar2);
    return uVar1;
  }
  return 0;
}



undefined8 mac_cmac_settable_ctx_params(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_prov_ctx_get0_libctx(param_2);
  lVar2 = EVP_MAC_fetch(uVar1,&_LC1,0);
  if (lVar2 != 0) {
    uVar1 = EVP_MAC_settable_ctx_params(lVar2);
    EVP_MAC_free(lVar2);
    return uVar1;
  }
  return 0;
}



undefined8 mac_hmac_settable_ctx_params(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_prov_ctx_get0_libctx(param_2);
  lVar2 = EVP_MAC_fetch(uVar1,&_LC3,0);
  if (lVar2 != 0) {
    uVar1 = EVP_MAC_settable_ctx_params(lVar2);
    EVP_MAC_free(lVar2);
    return uVar1;
  }
  return 0;
}



undefined8 mac_siphash_settable_ctx_params(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_prov_ctx_get0_libctx(param_2);
  lVar2 = EVP_MAC_fetch(uVar1,"SIPHASH",0);
  if (lVar2 != 0) {
    uVar1 = EVP_MAC_settable_ctx_params(lVar2);
    EVP_MAC_free(lVar2);
    return uVar1;
  }
  return 0;
}



undefined8 * mac_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *ptr;
  char *pcVar4;
  long lVar5;
  
  iVar3 = ossl_prov_is_running();
  if (iVar3 == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)
        CRYPTO_zalloc(0x20,"providers/implementations/signature/mac_legacy_sig.c",0xb4);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  pcVar4 = (char *)param_1[1];
  ptr[3] = 0;
  *ptr = uVar1;
  ptr[1] = uVar2;
  *(undefined1 (*) [16])(ptr + 1) = (undefined1  [16])0x0;
  if (pcVar4 != (char *)0x0) {
    pcVar4 = CRYPTO_strdup(pcVar4,"providers/implementations/signature/mac_legacy_sig.c",0xbd);
    ptr[1] = pcVar4;
    if (pcVar4 == (char *)0x0) goto LAB_00100540;
  }
  lVar5 = param_1[2];
  if (lVar5 != 0) {
    iVar3 = ossl_mac_key_up_ref();
    if (iVar3 == 0) goto LAB_00100540;
    lVar5 = param_1[2];
  }
  ptr[2] = lVar5;
  if (param_1[3] == 0) {
    return ptr;
  }
  lVar5 = EVP_MAC_CTX_dup();
  ptr[3] = lVar5;
  if (lVar5 != 0) {
    return ptr;
  }
LAB_00100540:
  CRYPTO_free((void *)ptr[1]);
  EVP_MAC_CTX_free(ptr[3]);
  ossl_mac_key_free(ptr[2]);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}



undefined8 * mac_hmac_newctx(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)
        CRYPTO_zalloc(0x20,"providers/implementations/signature/mac_legacy_sig.c",0x3a);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar2 = ossl_prov_ctx_get0_libctx(param_1);
  *ptr = uVar2;
  if (param_2 == (char *)0x0) {
LAB_001005f5:
    lVar4 = EVP_MAC_fetch(uVar2,&_LC3,param_2);
    if (lVar4 != 0) {
      lVar5 = EVP_MAC_CTX_new(lVar4);
      ptr[3] = lVar5;
      if (lVar5 != 0) {
        EVP_MAC_free(lVar4);
        return ptr;
      }
      goto LAB_0010063a;
    }
  }
  else {
    pcVar3 = CRYPTO_strdup(param_2,"providers/implementations/signature/mac_legacy_sig.c",0x3f);
    ptr[1] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      uVar2 = *ptr;
      goto LAB_001005f5;
    }
  }
  lVar4 = 0;
LAB_0010063a:
  CRYPTO_free((void *)ptr[1]);
  CRYPTO_free(ptr);
  EVP_MAC_free(lVar4);
  return (undefined8 *)0x0;
}



undefined8 * mac_siphash_newctx(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)
        CRYPTO_zalloc(0x20,"providers/implementations/signature/mac_legacy_sig.c",0x3a);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar2 = ossl_prov_ctx_get0_libctx(param_1);
  *ptr = uVar2;
  if (param_2 == (char *)0x0) {
LAB_001006f5:
    lVar4 = EVP_MAC_fetch(uVar2,"SIPHASH",param_2);
    if (lVar4 != 0) {
      lVar5 = EVP_MAC_CTX_new(lVar4);
      ptr[3] = lVar5;
      if (lVar5 != 0) {
        EVP_MAC_free(lVar4);
        return ptr;
      }
      goto LAB_0010073a;
    }
  }
  else {
    pcVar3 = CRYPTO_strdup(param_2,"providers/implementations/signature/mac_legacy_sig.c",0x3f);
    ptr[1] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      uVar2 = *ptr;
      goto LAB_001006f5;
    }
  }
  lVar4 = 0;
LAB_0010073a:
  CRYPTO_free((void *)ptr[1]);
  CRYPTO_free(ptr);
  EVP_MAC_free(lVar4);
  return (undefined8 *)0x0;
}



undefined8 * mac_poly1305_newctx(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)
        CRYPTO_zalloc(0x20,"providers/implementations/signature/mac_legacy_sig.c",0x3a);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar2 = ossl_prov_ctx_get0_libctx(param_1);
  *ptr = uVar2;
  if (param_2 == (char *)0x0) {
LAB_001007f5:
    lVar4 = EVP_MAC_fetch(uVar2,"POLY1305",param_2);
    if (lVar4 != 0) {
      lVar5 = EVP_MAC_CTX_new(lVar4);
      ptr[3] = lVar5;
      if (lVar5 != 0) {
        EVP_MAC_free(lVar4);
        return ptr;
      }
      goto LAB_0010083a;
    }
  }
  else {
    pcVar3 = CRYPTO_strdup(param_2,"providers/implementations/signature/mac_legacy_sig.c",0x3f);
    ptr[1] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      uVar2 = *ptr;
      goto LAB_001007f5;
    }
  }
  lVar4 = 0;
LAB_0010083a:
  CRYPTO_free((void *)ptr[1]);
  CRYPTO_free(ptr);
  EVP_MAC_free(lVar4);
  return (undefined8 *)0x0;
}



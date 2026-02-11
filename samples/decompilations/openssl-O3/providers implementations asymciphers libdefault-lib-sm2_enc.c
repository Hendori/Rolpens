
undefined1 * sm2_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



undefined1 * sm2_settable_ctx_params(void)

{
  return known_settable_ctx_params;
}



bool sm2_set_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return false;
  }
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    iVar1 = ossl_prov_digest_load_from_params(param_1 + 2,param_2,*param_1);
    return iVar1 != 0;
  }
  return true;
}



bool sm2_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  
  bVar5 = false;
  if (param_1 != 0) {
    lVar2 = OSSL_PARAM_locate(param_2,"digest");
    bVar5 = true;
    if (lVar2 != 0) {
      lVar3 = ossl_prov_digest_md(param_1 + 0x10);
      puVar4 = &_LC0;
      if (lVar3 != 0) {
        puVar4 = (undefined *)EVP_MD_get0_name(lVar3,&_LC0);
      }
      iVar1 = OSSL_PARAM_set_utf8_string(lVar2,puVar4);
      bVar5 = iVar1 != 0;
    }
  }
  return bVar5;
}



void sm2_freectx(void *param_1)

{
  EC_KEY_free(*(EC_KEY **)((long)param_1 + 8));
  ossl_prov_digest_reset((long)param_1 + 0x10);
  CRYPTO_free(param_1);
  return;
}



ulong sm2_asym_encrypt(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = ossl_prov_digest_md(param_1 + 2);
  if ((lVar2 == 0) && (lVar2 = ossl_prov_digest_fetch(param_1 + 2,*param_1,&_LC3,0), lVar2 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    iVar1 = ossl_sm2_ciphertext_size(param_1[1],lVar2,param_6,param_3);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/asymciphers/sm2_enc.c",0x5e,"sm2_asym_encrypt");
      ERR_set_error(0x39,0x9e,0);
    }
    return (ulong)(iVar1 != 0);
  }
  uVar3 = ossl_sm2_encrypt(param_1[1],lVar2,param_5,param_6,param_2,param_3);
  return uVar3;
}



undefined8 * sm2_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x28,"providers/implementations/asymciphers/sm2_enc.c",0x33);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    *puVar1 = uVar2;
  }
  return puVar1;
}



ulong sm2_asym_decrypt(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = ossl_prov_digest_md(param_1 + 2);
  if ((lVar2 == 0) && (lVar2 = ossl_prov_digest_fetch(param_1 + 2,*param_1,&_LC3,0), lVar2 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    iVar1 = ossl_sm2_plaintext_size(param_5,param_6,param_3);
    return (ulong)(iVar1 != 0);
  }
  uVar3 = ossl_sm2_decrypt(param_1[1],lVar2,param_5,param_6,param_2,param_3);
  return uVar3;
}



bool sm2_init(undefined8 *param_1,EC_KEY *param_2,long *param_3)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return false;
  }
  if ((param_2 == (EC_KEY *)0x0) || (iVar1 = EC_KEY_up_ref(param_2), iVar1 == 0)) {
    return false;
  }
  EC_KEY_free((EC_KEY *)param_1[1]);
  param_1[1] = param_2;
  if (param_3 == (long *)0x0) {
    return true;
  }
  if (*param_3 == 0) {
    return true;
  }
  iVar1 = ossl_prov_digest_load_from_params(param_1 + 2,param_3,*param_1);
  return iVar1 != 0;
}



undefined8 * sm2_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *ptr;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x28,"providers/implementations/asymciphers/sm2_enc.c",0x89);
  if (ptr != (undefined8 *)0x0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *(undefined1 (*) [16])(ptr + 2) = (undefined1  [16])0x0;
    *ptr = uVar1;
    ptr[1] = uVar2;
    ptr[4] = 0;
    if (((EC_KEY *)ptr[1] == (EC_KEY *)0x0) || (iVar3 = EC_KEY_up_ref((EC_KEY *)ptr[1]), iVar3 != 0)
       ) {
      iVar3 = ossl_prov_digest_copy(ptr + 2,param_1 + 2);
      if (iVar3 != 0) {
        return ptr;
      }
      EC_KEY_free((EC_KEY *)ptr[1]);
      ossl_prov_digest_reset(ptr + 2);
      CRYPTO_free(ptr);
    }
    else {
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



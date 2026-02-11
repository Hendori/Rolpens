
void kdf_get_ctx_params(long param_1)

{
  EVP_KDF_CTX_get_params(*(undefined8 *)(param_1 + 8));
  return;
}



void kdf_set_ctx_params(long param_1)

{
  EVP_KDF_CTX_set_params(*(undefined8 *)(param_1 + 8));
  return;
}



undefined8 * kdf_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *ptr;
  long lVar4;
  
  iVar3 = ossl_prov_is_running();
  if ((iVar3 != 0) &&
     (ptr = (undefined8 *)CRYPTO_zalloc(0x18,"providers/implementations/exchange/kdf_exch.c",0x95),
     ptr != (undefined8 *)0x0)) {
    uVar2 = param_1[1];
    uVar1 = param_1[1];
    *ptr = *param_1;
    ptr[1] = uVar2;
    ptr[2] = param_1[2];
    lVar4 = EVP_KDF_CTX_dup(uVar1);
    ptr[1] = lVar4;
    if (lVar4 == 0) {
      CRYPTO_free(ptr);
    }
    else {
      iVar3 = ossl_kdf_data_up_ref(ptr[2]);
      if (iVar3 != 0) {
        return ptr;
      }
      EVP_KDF_CTX_free(ptr[1]);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



void kdf_freectx(void *param_1)

{
  EVP_KDF_CTX_free(*(undefined8 *)((long)param_1 + 8));
  ossl_kdf_data_free(*(undefined8 *)((long)param_1 + 0x10));
  CRYPTO_free(param_1);
  return;
}



undefined8 kdf_derive(long param_1,long param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
LAB_00100131:
    uVar3 = 0;
  }
  else {
    uVar2 = EVP_KDF_CTX_get_kdf_size(*(undefined8 *)(param_1 + 8));
    if (param_2 != 0) {
      if ((uVar2 != 0xffffffffffffffff) && (bVar4 = param_4 < uVar2, param_4 = uVar2, bVar4)) {
        ERR_new();
        ERR_set_debug("providers/implementations/exchange/kdf_exch.c",0x75,"kdf_derive");
        ERR_set_error(0x39,0x6a,0);
        return 0;
      }
      iVar1 = EVP_KDF_derive(*(undefined8 *)(param_1 + 8),param_2,param_4,0);
      uVar2 = param_4;
      if (iVar1 < 1) goto LAB_00100131;
    }
    *param_3 = uVar2;
    uVar3 = 1;
  }
  return uVar3;
}



undefined8 * kdf_newctx(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x18,"providers/implementations/exchange/kdf_exch.c",0x35);
    if (ptr != (undefined8 *)0x0) {
      *ptr = param_2;
      uVar2 = ossl_prov_ctx_get0_libctx(param_2);
      lVar3 = EVP_KDF_fetch(uVar2,param_1,0);
      if (lVar3 != 0) {
        uVar2 = EVP_KDF_CTX_new(lVar3);
        ptr[1] = uVar2;
        EVP_KDF_free(lVar3);
        if (ptr[1] != 0) {
          return ptr;
        }
      }
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



void kdf_tls1_prf_newctx(undefined8 param_1)

{
  kdf_newctx("TLS1-PRF",param_1);
  return;
}



void kdf_hkdf_newctx(undefined8 param_1)

{
  kdf_newctx(&_LC2,param_1);
  return;
}



void kdf_scrypt_newctx(undefined8 param_1)

{
  kdf_newctx("SCRYPT",param_1);
  return;
}



undefined8 kdf_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    iVar1 = ossl_kdf_data_up_ref(param_2);
    if (iVar1 != 0) {
      *(long *)(param_1 + 0x10) = param_2;
      uVar2 = EVP_KDF_CTX_set_params(*(undefined8 *)(param_1 + 8),param_3);
      return uVar2;
    }
  }
  return 0;
}



undefined8 kdf_scrypt_gettable_ctx_params(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_prov_ctx_get0_libctx(param_2);
  lVar2 = EVP_KDF_fetch(uVar1,"SCRYPT",0);
  if (lVar2 != 0) {
    uVar1 = EVP_KDF_gettable_ctx_params(lVar2);
    EVP_KDF_free(lVar2);
    return uVar1;
  }
  return 0;
}



undefined8 kdf_scrypt_settable_ctx_params(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_prov_ctx_get0_libctx(param_2);
  lVar2 = EVP_KDF_fetch(uVar1,"SCRYPT",0);
  if (lVar2 != 0) {
    uVar1 = EVP_KDF_settable_ctx_params(lVar2);
    EVP_KDF_free(lVar2);
    return uVar1;
  }
  return 0;
}



undefined8 kdf_tls1_prf_settable_ctx_params(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_prov_ctx_get0_libctx(param_2);
  lVar2 = EVP_KDF_fetch(uVar1,"TLS1-PRF",0);
  if (lVar2 != 0) {
    uVar1 = EVP_KDF_settable_ctx_params(lVar2);
    EVP_KDF_free(lVar2);
    return uVar1;
  }
  return 0;
}



undefined8 kdf_hkdf_settable_ctx_params(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_prov_ctx_get0_libctx(param_2);
  lVar2 = EVP_KDF_fetch(uVar1,&_LC2,0);
  if (lVar2 != 0) {
    uVar1 = EVP_KDF_settable_ctx_params(lVar2);
    EVP_KDF_free(lVar2);
    return uVar1;
  }
  return 0;
}



undefined8 kdf_tls1_prf_gettable_ctx_params(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_prov_ctx_get0_libctx(param_2);
  lVar2 = EVP_KDF_fetch(uVar1,"TLS1-PRF",0);
  if (lVar2 != 0) {
    uVar1 = EVP_KDF_gettable_ctx_params(lVar2);
    EVP_KDF_free(lVar2);
    return uVar1;
  }
  return 0;
}



undefined8 kdf_hkdf_gettable_ctx_params(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_prov_ctx_get0_libctx(param_2);
  lVar2 = EVP_KDF_fetch(uVar1,&_LC2,0);
  if (lVar2 != 0) {
    uVar1 = EVP_KDF_gettable_ctx_params(lVar2);
    EVP_KDF_free(lVar2);
    return uVar1;
  }
  return 0;
}



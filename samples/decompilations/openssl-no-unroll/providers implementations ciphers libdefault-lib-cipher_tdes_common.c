
long ossl_tdes_newctx(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  lVar2 = 0;
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x248,"providers/implementations/ciphers/cipher_tdes_common.c",0x1f);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,param_3,param_4,param_5,param_2,param_6,param_7,param_1);
    }
  }
  return lVar2;
}



void * ossl_tdes_dupctx(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    pvVar2 = CRYPTO_malloc(0x248,"providers/implementations/ciphers/cipher_tdes_common.c",0x30);
    if (pvVar2 != (void *)0x0) {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))(pvVar2,param_1);
    }
  }
  return pvVar2;
}



void ossl_tdes_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x248,"providers/implementations/ciphers/cipher_tdes_common.c",0x3e);
  return;
}



undefined1 * ossl_tdes_gettable_ctx_params(void)

{
  return ossl_tdes_known_gettable_ctx_params;
}



undefined8 ossl_tdes_get_ctx_params(long param_1,undefined8 param_2)

{
  ulong uVar1;
  DES_cblock *key;
  int iVar2;
  long lVar3;
  
  iVar2 = ossl_cipher_generic_get_ctx_params();
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"randkey");
  if (lVar3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x48);
    key = *(DES_cblock **)(lVar3 + 0x10);
    if ((uVar1 == 0) ||
       (iVar2 = RAND_priv_bytes_ex(*(undefined8 *)(param_1 + 0xb8),key,uVar1,0), iVar2 < 1)) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_tdes_common.c",0xa5,
                    "ossl_tdes_get_ctx_params");
      ERR_set_error(0x39,0x79,0);
      return 0;
    }
    DES_set_odd_parity(key);
    if ((0xf < uVar1) && (DES_set_odd_parity(key + 1), 0x17 < uVar1)) {
      DES_set_odd_parity(key + 2);
    }
  }
  return 1;
}



undefined1 * ossl_tdes_settable_ctx_params(void)

{
  return ossl_tdes_known_settable_ctx_params;
}



void ossl_tdes_set_ctx_params(void)

{
  ossl_cipher_generic_set_ctx_params();
  return;
}



bool ossl_tdes_dinit(void *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                    undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    bVar1 = *(byte *)((long)param_1 + 0x6c);
    *(undefined8 *)((long)param_1 + 0x60) = 0;
    *(undefined4 *)((long)param_1 + 0xa0) = 0;
    *(byte *)((long)param_1 + 0x6c) = bVar1 & 0xfd;
    if (param_4 == 0) {
      if (((bVar1 & 4) != 0) && (*(int *)((long)param_1 + 0x40) - 2U < 3)) {
        memcpy((void *)((long)param_1 + 0x20),param_1,*(size_t *)((long)param_1 + 0x50));
      }
    }
    else {
      iVar2 = ossl_cipher_generic_initiv(param_1,param_4,param_5);
      if (iVar2 == 0) {
        return false;
      }
    }
    if (param_2 == 0) {
LAB_001002a3:
      iVar2 = ossl_tdes_set_ctx_params(param_1,param_6);
      return iVar2 != 0;
    }
    if (param_3 == *(long *)((long)param_1 + 0x48)) {
      iVar2 = (*(code *)**(undefined8 **)((long)param_1 + 0xa8))(param_1,param_2,param_3);
      if (iVar2 != 0) {
        *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 8;
        goto LAB_001002a3;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_tdes_common.c",0x68,"tdes_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return false;
}



bool ossl_tdes_einit(void *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                    undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    bVar1 = *(byte *)((long)param_1 + 0x6c);
    *(undefined8 *)((long)param_1 + 0x60) = 0;
    *(undefined4 *)((long)param_1 + 0xa0) = 0;
    *(byte *)((long)param_1 + 0x6c) = bVar1 | 2;
    if (param_4 == 0) {
      if (((bVar1 & 4) != 0) && (*(int *)((long)param_1 + 0x40) - 2U < 3)) {
        memcpy((void *)((long)param_1 + 0x20),param_1,*(size_t *)((long)param_1 + 0x50));
      }
    }
    else {
      iVar2 = ossl_cipher_generic_initiv(param_1,param_4,param_5);
      if (iVar2 == 0) {
        return false;
      }
    }
    if (param_2 == 0) {
LAB_001003cd:
      iVar2 = ossl_tdes_set_ctx_params(param_1,param_6);
      return iVar2 != 0;
    }
    if (param_3 == *(long *)((long)param_1 + 0x48)) {
      iVar2 = (*(code *)**(undefined8 **)((long)param_1 + 0xa8))(param_1,param_2,param_3);
      if (iVar2 != 0) {
        *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 8;
        goto LAB_001003cd;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_tdes_common.c",0x68,"tdes_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return false;
}



undefined8
ossl_tdes_get_params
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_1,"decrypt-only");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_int(lVar2,0);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_tdes_common.c",200,
                    "ossl_tdes_get_params");
      ERR_set_error(0x39,0x68,0);
      return 0;
    }
  }
  uVar3 = ossl_cipher_generic_get_params(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar3;
}




undefined1 * des_gettable_ctx_params(void)

{
  return des_known_gettable_ctx_params;
}



undefined8 des_get_ctx_params(long param_1,undefined8 param_2)

{
  DES_cblock *key;
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_cipher_generic_get_ctx_params();
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"randkey");
  if (lVar2 != 0) {
    key = *(DES_cblock **)(lVar2 + 0x10);
    if ((*(long *)(param_1 + 0x48) == 0) ||
       (iVar1 = RAND_priv_bytes_ex(*(undefined8 *)(param_1 + 0xb8),key,*(long *)(param_1 + 0x48),0),
       iVar1 < 1)) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_des.c",0x90,"des_get_ctx_params");
      ERR_set_error(0x39,0x79,0);
      return 0;
    }
    DES_set_odd_parity(key);
  }
  return 1;
}



void des_ecb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,1,0x10,0x40,0x40,0);
  return;
}



void des_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0x10,0x40,0x40,0x40);
  return;
}



void des_ofb64_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,4,0x10,0x40,8,0x40);
  return;
}



void des_cfb64_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0x10,0x40,8,0x40);
  return;
}



void des_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x148,"providers/implementations/ciphers/cipher_des.c",0x44);
  return;
}



void * des_dupctx(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    pvVar2 = CRYPTO_malloc(0x148,"providers/implementations/ciphers/cipher_des.c",0x37);
    if (pvVar2 != (void *)0x0) {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))(pvVar2,param_1);
    }
  }
  return pvVar2;
}



undefined8
des_dinit(void *param_1,long param_2,long param_3,long param_4,undefined8 param_5,undefined8 param_6
         )

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    bVar1 = *(byte *)((long)param_1 + 0x6c);
    *(undefined8 *)((long)param_1 + 0x60) = 0;
    *(undefined4 *)((long)param_1 + 0xa0) = 0;
    *(byte *)((long)param_1 + 0x6c) = bVar1 & 0xfd;
    if (param_4 == 0) {
      if ((bVar1 & 4) != 0) {
        memcpy((void *)((long)param_1 + 0x20),param_1,*(size_t *)((long)param_1 + 0x50));
      }
    }
    else {
      iVar2 = ossl_cipher_generic_initiv(param_1,param_4,param_5);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (param_2 == 0) {
LAB_0010028f:
      uVar3 = ossl_cipher_generic_set_ctx_params(param_1,param_6);
      return uVar3;
    }
    if (param_3 == *(long *)((long)param_1 + 0x48)) {
      iVar2 = (*(code *)**(undefined8 **)((long)param_1 + 0xa8))(param_1,param_2,param_3);
      if (iVar2 != 0) {
        *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 8;
        goto LAB_0010028f;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_des.c",0x5e,"des_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return 0;
}



long des_cfb64_newctx(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  uVar2 = ossl_prov_cipher_hw_des_cfb64();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar3 = CRYPTO_zalloc(0x148,"providers/implementations/ciphers/cipher_des.c",0x28);
    if (lVar3 != 0) {
      ossl_cipher_generic_initkey(lVar3,0x40,8,0x40,3,0x10,uVar2,param_1);
    }
  }
  return lVar3;
}



long des_ecb_newctx(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  uVar2 = ossl_prov_cipher_hw_des_ecb();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar3 = CRYPTO_zalloc(0x148,"providers/implementations/ciphers/cipher_des.c",0x28);
    if (lVar3 != 0) {
      ossl_cipher_generic_initkey(lVar3,0x40,0x40,0,1,0x10,uVar2,param_1);
    }
  }
  return lVar3;
}



long des_cbc_newctx(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  uVar2 = ossl_prov_cipher_hw_des_cbc();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar3 = CRYPTO_zalloc(0x148,"providers/implementations/ciphers/cipher_des.c",0x28);
    if (lVar3 != 0) {
      ossl_cipher_generic_initkey(lVar3,0x40,0x40,0x40,2,0x10,uVar2,param_1);
    }
  }
  return lVar3;
}



void des_cfb1_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0x10,0x40,8,0x40);
  return;
}



void des_cfb8_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0x10,0x40,8,0x40);
  return;
}



long des_cfb1_newctx(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  uVar2 = ossl_prov_cipher_hw_des_cfb1();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar3 = CRYPTO_zalloc(0x148,"providers/implementations/ciphers/cipher_des.c",0x28);
    if (lVar3 != 0) {
      ossl_cipher_generic_initkey(lVar3,0x40,8,0x40,3,0x10,uVar2,param_1);
    }
  }
  return lVar3;
}



long des_cfb8_newctx(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  uVar2 = ossl_prov_cipher_hw_des_cfb8();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar3 = CRYPTO_zalloc(0x148,"providers/implementations/ciphers/cipher_des.c",0x28);
    if (lVar3 != 0) {
      ossl_cipher_generic_initkey(lVar3,0x40,8,0x40,3,0x10,uVar2,param_1);
    }
  }
  return lVar3;
}



long des_ofb64_newctx(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  uVar2 = ossl_prov_cipher_hw_des_ofb64();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar3 = CRYPTO_zalloc(0x148,"providers/implementations/ciphers/cipher_des.c",0x28);
    if (lVar3 != 0) {
      ossl_cipher_generic_initkey(lVar3,0x40,8,0x40,4,0x10,uVar2,param_1);
    }
  }
  return lVar3;
}



undefined8
des_einit(void *param_1,long param_2,long param_3,long param_4,undefined8 param_5,undefined8 param_6
         )

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    bVar1 = *(byte *)((long)param_1 + 0x6c);
    *(undefined8 *)((long)param_1 + 0x60) = 0;
    *(undefined4 *)((long)param_1 + 0xa0) = 0;
    *(byte *)((long)param_1 + 0x6c) = bVar1 | 2;
    if (param_4 == 0) {
      if ((bVar1 & 4) != 0) {
        memcpy((void *)((long)param_1 + 0x20),param_1,*(size_t *)((long)param_1 + 0x50));
      }
    }
    else {
      iVar2 = ossl_cipher_generic_initiv(param_1,param_4,param_5);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (param_2 == 0) {
LAB_001006ad:
      uVar3 = ossl_cipher_generic_set_ctx_params(param_1,param_6);
      return uVar3;
    }
    if (param_3 == *(long *)((long)param_1 + 0x48)) {
      iVar2 = (*(code *)**(undefined8 **)((long)param_1 + 0xa8))(param_1,param_2,param_3);
      if (iVar2 != 0) {
        *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 8;
        goto LAB_001006ad;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_des.c",0x5e,"des_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return 0;
}



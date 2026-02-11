
undefined1 * camellia_cbc_cts_gettable_ctx_params(void)

{
  return camellia_cbc_cts_known_gettable_ctx_params;
}



undefined1 * camellia_cbc_cts_settable_ctx_params(void)

{
  return camellia_cbc_cts_known_settable_ctx_params;
}



void camellia_256_ecb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,1,0,0x100,0x80,0);
  return;
}



void camellia_192_ecb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,1,0,0xc0,0x80,0);
  return;
}



void camellia_128_ecb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,1,0,0x80,0x80,0);
  return;
}



void camellia_256_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0,0x100,0x80,0x80);
  return;
}



void camellia_192_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0,0xc0,0x80,0x80);
  return;
}



void camellia_128_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0,0x80,0x80,0x80);
  return;
}



void camellia_256_ofb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,4,0,0x100,8,0x80);
  return;
}



void camellia_192_ofb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,4,0,0xc0,8,0x80);
  return;
}



void camellia_128_ofb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,4,0,0x80,8,0x80);
  return;
}



void camellia_256_cfb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x100,8,0x80);
  return;
}



void camellia_192_cfb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0xc0,8,0x80);
  return;
}



void camellia_128_cfb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x80,8,0x80);
  return;
}



void camellia_256_ctr_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,5,0,0x100,8,0x80);
  return;
}



void camellia_192_ctr_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,5,0,0xc0,8,0x80);
  return;
}



void camellia_128_ctr_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,5,0,0x80,8,0x80);
  return;
}



void camellia_cts_256_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,4,0x100,0x80,0x80);
  return;
}



void camellia_cts_192_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,4,0xc0,0x80,0x80);
  return;
}



void camellia_cts_128_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,4,0x80,0x80,0x80);
  return;
}



void * camellia_dupctx(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    pvVar2 = CRYPTO_malloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x29);
    if (pvVar2 != (void *)0x0) {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))(pvVar2,param_1);
    }
  }
  return pvVar2;
}



void camellia_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x1e);
  return;
}



long camellia_256_ecb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x32);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_ecb(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,0x80,0,1,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_192_ecb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x34);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_ecb(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,0x80,0,1,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_128_ecb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x36);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_ecb(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,0x80,0,1,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_256_cbc_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x38);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_cbc(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,0x80,0x80,2,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_192_cbc_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x3a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_cbc(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,0x80,0x80,2,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_128_cbc_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x3c);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_cbc(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,0x80,0x80,2,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_256_ofb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x3e);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_ofb128(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,8,0x80,4,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_192_ofb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x40);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_ofb128(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,8,0x80,4,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_128_ofb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x42);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_ofb128(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,4,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_256_cfb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x44);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_cfb128(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_192_cfb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x46);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_cfb128(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_128_cfb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x48);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_cfb128(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_256_cfb1_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x4a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_cfb1(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_192_cfb1_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x4c);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_cfb1(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_128_cfb1_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x4e);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_cfb1(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_256_cfb8_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x50);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_cfb8(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_192_cfb8_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x52);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_cfb8(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_128_cfb8_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x54);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_cfb8(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_256_ctr_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x56);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_ctr(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,8,0x80,5,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_192_ctr_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x58);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_ctr(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,8,0x80,5,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long camellia_128_ctr_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_camellia.c",0x5a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_camellia_ctr(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,5,0,uVar3,param_1);
    }
  }
  return lVar2;
}



undefined8 camellia_cbc_cts_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = OSSL_PARAM_locate(param_2,"cts_mode");
  if (lVar2 != 0) {
    lVar3 = ossl_cipher_cbc_cts_mode_id2name(*(undefined4 *)(param_1 + 0x68));
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_set_utf8_string(lVar2,lVar3);
      if (iVar1 != 0) goto LAB_00100d43;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_camellia_cts.inc",0x38,
                  "camellia_cbc_cts_get_ctx_params");
    ERR_set_error(0x39,0x68,0);
    return 0;
  }
LAB_00100d43:
  uVar4 = ossl_cipher_generic_get_ctx_params(param_1,param_2);
  return uVar4;
}



undefined8 camellia_cbc_cts_set_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate_const(param_2,"cts_mode");
  if (lVar2 == 0) {
LAB_00100e08:
    uVar3 = ossl_cipher_generic_set_ctx_params(param_1,param_2);
    return uVar3;
  }
  if (*(int *)(lVar2 + 8) == 4) {
    iVar1 = ossl_cipher_cbc_cts_mode_name2id(*(undefined8 *)(lVar2 + 0x10));
    if (-1 < iVar1) {
      *(int *)(param_1 + 0x68) = iVar1;
      goto LAB_00100e08;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/ciphers/cipher_camellia_cts.inc",0x55,
                "camellia_cbc_cts_set_ctx_params");
  ERR_set_error(0x39,0x68,0);
  return 0;
}



undefined8 camellia_cbc_cts_dinit(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  
  iVar1 = ossl_cipher_generic_dinit();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = camellia_cbc_cts_set_ctx_params(param_1,in_R9);
  return uVar2;
}



undefined8 camellia_cbc_cts_einit(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  
  iVar1 = ossl_cipher_generic_einit();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = camellia_cbc_cts_set_ctx_params(param_1,in_R9);
  return uVar2;
}



void camellia_256_cfb1_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x100,8,0x80);
  return;
}



void camellia_192_cfb1_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0xc0,8,0x80);
  return;
}



void camellia_128_cfb1_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x80,8,0x80);
  return;
}



void camellia_256_cfb8_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x100,8,0x80);
  return;
}



void camellia_192_cfb8_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0xc0,8,0x80);
  return;
}



void camellia_128_cfb8_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x80,8,0x80);
  return;
}



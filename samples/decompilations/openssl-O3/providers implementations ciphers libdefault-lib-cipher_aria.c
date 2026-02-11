
void aria_256_ecb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,1,0,0x100,0x80,0);
  return;
}



void aria_192_ecb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,1,0,0xc0,0x80,0);
  return;
}



void aria_128_ecb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,1,0,0x80,0x80,0);
  return;
}



void aria_256_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0,0x100,0x80,0x80);
  return;
}



void aria_192_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0,0xc0,0x80,0x80);
  return;
}



void aria_128_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0,0x80,0x80,0x80);
  return;
}



void aria_256_ofb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,4,0,0x100,8,0x80);
  return;
}



void aria_192_ofb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,4,0,0xc0,8,0x80);
  return;
}



void aria_128_ofb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,4,0,0x80,8,0x80);
  return;
}



void aria_256_cfb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x100,8,0x80);
  return;
}



void aria_192_cfb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0xc0,8,0x80);
  return;
}



void aria_128_cfb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x80,8,0x80);
  return;
}



void aria_256_ctr_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,5,0,0x100,8,0x80);
  return;
}



void aria_192_ctr_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,5,0,0xc0,8,0x80);
  return;
}



void aria_128_ctr_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,5,0,0x80,8,0x80);
  return;
}



void * aria_dupctx(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    pvVar2 = CRYPTO_malloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x23);
    if (pvVar2 != (void *)0x0) {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))(pvVar2,param_1);
    }
  }
  return pvVar2;
}



void aria_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x18);
  return;
}



long aria_256_ecb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x2c);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_ecb(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,0x80,0,1,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_192_ecb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x2e);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_ecb(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,0x80,0,1,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_128_ecb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x30);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_ecb(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,0x80,0,1,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_256_cbc_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x32);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_cbc(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,0x80,0x80,2,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_192_cbc_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x34);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_cbc(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,0x80,0x80,2,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_128_cbc_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x36);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_cbc(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,0x80,0x80,2,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_256_ofb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x38);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_ofb128(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,8,0x80,4,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_192_ofb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x3a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_ofb128(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,8,0x80,4,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_128_ofb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x3c);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_ofb128(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,4,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_256_cfb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x3e);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_cfb128(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_192_cfb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x40);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_cfb128(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_128_cfb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x42);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_cfb128(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_256_cfb1_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x44);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_cfb1(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_192_cfb1_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x46);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_cfb1(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_128_cfb1_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x48);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_cfb1(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_256_cfb8_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x4a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_cfb8(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_192_cfb8_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x4c);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_cfb8(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_128_cfb8_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x4e);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_cfb8(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_256_ctr_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x50);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_ctr(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,8,0x80,5,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_192_ctr_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x52);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_ctr(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,8,0x80,5,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long aria_128_ctr_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"providers/implementations/ciphers/cipher_aria.c",0x54);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_ctr(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,5,0,uVar3,param_1);
    }
  }
  return lVar2;
}



void aria_128_cfb8_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x80,8,0x80);
  return;
}



void aria_256_cfb1_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x100,8,0x80);
  return;
}



void aria_192_cfb1_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0xc0,8,0x80);
  return;
}



void aria_128_cfb1_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x80,8,0x80);
  return;
}



void aria_256_cfb8_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x100,8,0x80);
  return;
}



void aria_192_cfb8_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0xc0,8,0x80);
  return;
}



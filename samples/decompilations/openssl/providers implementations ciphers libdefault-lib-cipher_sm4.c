
void sm4_128_ecb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,1,0,0x80,0x80,0);
  return;
}



void sm4_128_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0,0x80,0x80,0x80);
  return;
}



void sm4_128_ctr_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,5,0,0x80,8,0x80);
  return;
}



void sm4_128_ofb128_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,4,0,0x80,8,0x80);
  return;
}



void sm4_128_cfb128_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x80,8,0x80);
  return;
}



void * sm4_dupctx(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    pvVar2 = CRYPTO_malloc(0x140,"providers/implementations/ciphers/cipher_sm4.c",0x23);
    if (pvVar2 != (void *)0x0) {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))(pvVar2,param_1);
    }
  }
  return pvVar2;
}



void sm4_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x140,"providers/implementations/ciphers/cipher_sm4.c",0x18);
  return;
}



long sm4_128_ecb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x140,"providers/implementations/ciphers/cipher_sm4.c",0x2c);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_sm4_ecb(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,0x80,0,1,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long sm4_128_cbc_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x140,"providers/implementations/ciphers/cipher_sm4.c",0x2e);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_sm4_cbc(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,0x80,0x80,2,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long sm4_128_ctr_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x140,"providers/implementations/ciphers/cipher_sm4.c",0x30);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_sm4_ctr(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,5,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long sm4_128_ofb128_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x140,"providers/implementations/ciphers/cipher_sm4.c",0x32);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_sm4_ofb128(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,4,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long sm4_128_cfb128_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x140,"providers/implementations/ciphers/cipher_sm4.c",0x34);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_sm4_cfb128(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



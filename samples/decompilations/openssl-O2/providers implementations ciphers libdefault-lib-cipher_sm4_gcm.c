
void sm4_128_gcm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,6,3,0x80,8,0x60);
  return;
}



long sm4128gcm_dupctx(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = CRYPTO_memdup(param_1,0x340,"providers/implementations/ciphers/cipher_sm4_gcm.c",0x28);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x280) != 0) {
      *(long *)(lVar1 + 0x280) = lVar1 + 0x2c0;
    }
    return lVar1;
  }
  return 0;
}



void sm4_gcm_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x340,"providers/implementations/ciphers/cipher_sm4_gcm.c",0x33);
  return;
}



long sm4128gcm_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x340,"providers/implementations/ciphers/cipher_sm4_gcm.c",0x19);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_sm4_hw_gcm(0x80);
      ossl_gcm_initctx(param_1,lVar2,0x80,uVar3);
    }
  }
  return lVar2;
}



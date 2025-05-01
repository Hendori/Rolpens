
void aria_128_gcm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,6,3,0x80,8,0x60);
  return;
}



void aria_192_gcm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,6,3,0xc0,8,0x60);
  return;
}



void aria_256_gcm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,6,3,0x100,8,0x60);
  return;
}



void aria_gcm_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x3d8,"providers/implementations/ciphers/cipher_aria_gcm.c",0x32);
  return;
}



long aria256gcm_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x3d8,"providers/implementations/ciphers/cipher_aria_gcm.c",0x17);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_aria_hw_gcm(0x100);
      ossl_gcm_initctx(param_1,lVar2,0x100,uVar3);
    }
  }
  return lVar2;
}



long aria192gcm_dupctx(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = CRYPTO_memdup(param_1,0x3d8,"providers/implementations/ciphers/cipher_aria_gcm.c",0x26);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x280) != 0) {
      *(long *)(lVar1 + 0x280) = lVar1 + 0x2c0;
    }
    return lVar1;
  }
  return 0;
}



long aria128gcm_dupctx(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = CRYPTO_memdup(param_1,0x3d8,"providers/implementations/ciphers/cipher_aria_gcm.c",0x26);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x280) != 0) {
      *(long *)(lVar1 + 0x280) = lVar1 + 0x2c0;
    }
    return lVar1;
  }
  return 0;
}



long aria256gcm_dupctx(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = CRYPTO_memdup(param_1,0x3d8,"providers/implementations/ciphers/cipher_aria_gcm.c",0x26);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x280) != 0) {
      *(long *)(lVar1 + 0x280) = lVar1 + 0x2c0;
    }
    return lVar1;
  }
  return 0;
}



long aria192gcm_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x3d8,"providers/implementations/ciphers/cipher_aria_gcm.c",0x17);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_aria_hw_gcm(0xc0);
      ossl_gcm_initctx(param_1,lVar2,0xc0,uVar3);
    }
  }
  return lVar2;
}



long aria128gcm_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x3d8,"providers/implementations/ciphers/cipher_aria_gcm.c",0x17);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_aria_hw_gcm(0x80);
      ossl_gcm_initctx(param_1,lVar2,0x80,uVar3);
    }
  }
  return lVar2;
}



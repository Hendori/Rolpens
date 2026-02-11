
void aria_128_ccm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,7,3,0x80,8,0x60);
  return;
}



void aria_192_ccm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,7,3,0xc0,8,0x60);
  return;
}



void aria_256_ccm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,7,3,0x100,8,0x60);
  return;
}



void aria_ccm_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x1b0,"providers/implementations/ciphers/cipher_aria_ccm.c",0x32);
  return;
}



long aria256ccm_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1b0,"providers/implementations/ciphers/cipher_aria_ccm.c",0x19);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_aria_hw_ccm(0x100);
      ossl_ccm_initctx(lVar2,0x100,uVar3);
    }
  }
  return lVar2;
}



long aria192ccm_dupctx(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = CRYPTO_memdup(param_1,0x1b0,"providers/implementations/ciphers/cipher_aria_ccm.c",0x27);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x80) != 0) {
      *(long *)(lVar1 + 0x80) = lVar1 + 0x98;
    }
    return lVar1;
  }
  return 0;
}



long aria128ccm_dupctx(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = CRYPTO_memdup(param_1,0x1b0,"providers/implementations/ciphers/cipher_aria_ccm.c",0x27);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x80) != 0) {
      *(long *)(lVar1 + 0x80) = lVar1 + 0x98;
    }
    return lVar1;
  }
  return 0;
}



long aria256ccm_dupctx(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = CRYPTO_memdup(param_1,0x1b0,"providers/implementations/ciphers/cipher_aria_ccm.c",0x27);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x80) != 0) {
      *(long *)(lVar1 + 0x80) = lVar1 + 0x98;
    }
    return lVar1;
  }
  return 0;
}



long aria192ccm_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1b0,"providers/implementations/ciphers/cipher_aria_ccm.c",0x19);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_aria_hw_ccm(0xc0);
      ossl_ccm_initctx(lVar2,0xc0,uVar3);
    }
  }
  return lVar2;
}



long aria128ccm_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1b0,"providers/implementations/ciphers/cipher_aria_ccm.c",0x19);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_aria_hw_ccm(0x80);
      ossl_ccm_initctx(lVar2,0x80,uVar3);
    }
  }
  return lVar2;
}



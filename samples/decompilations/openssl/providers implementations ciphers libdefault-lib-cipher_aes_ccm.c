
void aes_128_ccm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,7,3,0x80,8,0x60);
  return;
}



void aes_192_ccm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,7,3,0xc0,8,0x60);
  return;
}



void aes_256_ccm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,7,3,0x100,8,0x60);
  return;
}



void aes_ccm_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x40);
  return;
}



long aes256ccm_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x1e);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_aes_hw_ccm(0x100);
      ossl_ccm_initctx(lVar2,0x100,uVar3);
    }
  }
  return lVar2;
}



long aes192ccm_dupctx(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    lVar2 = CRYPTO_memdup(param_1,0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x2e);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x80) = lVar2 + 0xa8;
    }
    return lVar2;
  }
  return 0;
}



long aes128ccm_dupctx(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    lVar2 = CRYPTO_memdup(param_1,0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x2e);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x80) = lVar2 + 0xa8;
    }
    return lVar2;
  }
  return 0;
}



long aes256ccm_dupctx(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    lVar2 = CRYPTO_memdup(param_1,0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x2e);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x80) = lVar2 + 0xa8;
    }
    return lVar2;
  }
  return 0;
}



long aes192ccm_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x1e);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_aes_hw_ccm(0xc0);
      ossl_ccm_initctx(lVar2,0xc0,uVar3);
    }
  }
  return lVar2;
}



long aes128ccm_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x1e);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_aes_hw_ccm(0x80);
      ossl_ccm_initctx(lVar2,0x80,uVar3);
    }
  }
  return lVar2;
}



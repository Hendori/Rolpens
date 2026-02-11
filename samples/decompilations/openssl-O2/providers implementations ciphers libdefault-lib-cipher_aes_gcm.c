
void aes_128_gcm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,6,3,0x80,8,0x60);
  return;
}



void aes_192_gcm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,6,3,0xc0,8,0x60);
  return;
}



void aes_256_gcm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,6,3,0x100,8,0x60);
  return;
}



void aes_gcm_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x3c0,"providers/implementations/ciphers/cipher_aes_gcm.c",0x3c);
  return;
}



long aes_gcm_newctx(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x3c0,"providers/implementations/ciphers/cipher_aes_gcm.c",0x1e);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_aes_hw_gcm(param_2);
      ossl_gcm_initctx(param_1,lVar2,param_2,uVar3);
    }
  }
  return lVar2;
}



void aes128gcm_newctx(undefined8 param_1)

{
  aes_gcm_newctx(param_1,0x80);
  return;
}



void aes192gcm_newctx(undefined8 param_1)

{
  aes_gcm_newctx(param_1,0xc0);
  return;
}



void aes256gcm_newctx(undefined8 param_1)

{
  aes_gcm_newctx(param_1,0x100);
  return;
}



long aes256gcm_dupctx(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    lVar2 = CRYPTO_memdup(param_1,0x3c0,"providers/implementations/ciphers/cipher_aes_gcm.c",0x30);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x280) != 0) {
        *(long *)(lVar2 + 0x280) = lVar2 + 0x2c0;
      }
      return lVar2;
    }
  }
  return 0;
}



long aes192gcm_dupctx(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    lVar2 = CRYPTO_memdup(param_1,0x3c0,"providers/implementations/ciphers/cipher_aes_gcm.c",0x30);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x280) != 0) {
        *(long *)(lVar2 + 0x280) = lVar2 + 0x2c0;
      }
      return lVar2;
    }
  }
  return 0;
}



long aes128gcm_dupctx(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    lVar2 = CRYPTO_memdup(param_1,0x3c0,"providers/implementations/ciphers/cipher_aes_gcm.c",0x30);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x280) != 0) {
        *(long *)(lVar2 + 0x280) = lVar2 + 0x2c0;
      }
      return lVar2;
    }
  }
  return 0;
}



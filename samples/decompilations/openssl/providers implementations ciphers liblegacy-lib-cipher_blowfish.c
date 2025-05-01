
void blowfish_128_ecb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,1,0x100,0x80,0x40,0);
  return;
}



void blowfish_128_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0x100,0x80,0x40,0x40);
  return;
}



void blowfish_128_ofb64_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,4,0x100,0x80,8,0x40);
  return;
}



void blowfish_128_cfb64_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0x100,0x80,8,0x40);
  return;
}



undefined8 * blowfish_dupctx(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             CRYPTO_malloc(0x1108,"providers/implementations/ciphers/cipher_blowfish.c",0x2b);
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
      for (lVar3 = 0x221; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = *param_1;
        param_1 = param_1 + (ulong)bVar5 * -2 + 1;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
    }
  }
  return puVar2;
}



void blowfish_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x1108,"providers/implementations/ciphers/cipher_blowfish.c",0x20);
  return;
}



long blowfish_128_ecb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1108,"providers/implementations/ciphers/cipher_blowfish.c",0x34);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_blowfish_ecb(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,0x40,0,1,0x100,uVar3,param_1);
    }
  }
  return lVar2;
}



long blowfish_128_cbc_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1108,"providers/implementations/ciphers/cipher_blowfish.c",0x36);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_blowfish_cbc(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,0x40,0x40,2,0x100,uVar3,param_1);
    }
  }
  return lVar2;
}



long blowfish_128_ofb64_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1108,"providers/implementations/ciphers/cipher_blowfish.c",0x38);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_blowfish_ofb64(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x40,4,0x100,uVar3,param_1);
    }
  }
  return lVar2;
}



long blowfish_128_cfb64_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1108,"providers/implementations/ciphers/cipher_blowfish.c",0x3a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_blowfish_cfb64(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x40,3,0x100,uVar3,param_1);
    }
  }
  return lVar2;
}



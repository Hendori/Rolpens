
void seed_128_ecb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,1,0,0x80,0x80,0);
  return;
}



void seed_128_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0,0x80,0x80,0x80);
  return;
}



void seed_128_ofb128_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,4,0,0x80,8,0x80);
  return;
}



void seed_128_cfb128_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0,0x80,8,0x80);
  return;
}



undefined8 * seed_dupctx(undefined8 *param_1)

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
             CRYPTO_malloc(0x140,"providers/implementations/ciphers/cipher_seed.c",0x29);
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
      for (lVar3 = 0x28; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = *param_1;
        param_1 = param_1 + (ulong)bVar5 * -2 + 1;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
    }
  }
  return puVar2;
}



void seed_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x140,"providers/implementations/ciphers/cipher_seed.c",0x1e);
  return;
}



long seed_128_ecb_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x140,"providers/implementations/ciphers/cipher_seed.c",0x32);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_seed_ecb(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,0x80,0,1,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long seed_128_cbc_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x140,"providers/implementations/ciphers/cipher_seed.c",0x34);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_seed_cbc(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,0x80,0x80,2,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long seed_128_ofb128_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x140,"providers/implementations/ciphers/cipher_seed.c",0x36);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_seed_ofb128(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,4,0,uVar3,param_1);
    }
  }
  return lVar2;
}



long seed_128_cfb128_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x140,"providers/implementations/ciphers/cipher_seed.c",0x38);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_seed_cfb128(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}



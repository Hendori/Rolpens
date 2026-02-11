
void rc4_40_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0,0x100,0x28,8,0);
  return;
}



void rc4_128_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0,0x100,0x80,8,0);
  return;
}



undefined8 rc4_dinit(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  
  iVar1 = ossl_cipher_generic_dinit();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ossl_cipher_var_keylen_set_ctx_params(param_1,in_R9);
  return uVar2;
}



undefined8 rc4_einit(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  
  iVar1 = ossl_cipher_generic_einit();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ossl_cipher_var_keylen_set_ctx_params(param_1,in_R9);
  return uVar2;
}



undefined8 * rc4_dupctx(undefined8 *param_1)

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
             CRYPTO_malloc(0x4c8,"providers/implementations/ciphers/cipher_rc4.c",0x2d);
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
      for (lVar3 = 0x99; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = *param_1;
        param_1 = param_1 + (ulong)bVar5 * -2 + 1;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
    }
  }
  return puVar2;
}



void rc4_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x4c8,"providers/implementations/ciphers/cipher_rc4.c",0x22);
  return;
}



long rc4_40_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x4c8,"providers/implementations/ciphers/cipher_rc4.c",0x75);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_rc4(0x28);
      ossl_cipher_generic_initkey(lVar2,0x28,8,0,0,0x100,uVar3,0);
    }
  }
  return lVar2;
}



long rc4_128_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x4c8,"providers/implementations/ciphers/cipher_rc4.c",0x77);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_rc4(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0,0,0x100,uVar3,0);
    }
  }
  return lVar2;
}



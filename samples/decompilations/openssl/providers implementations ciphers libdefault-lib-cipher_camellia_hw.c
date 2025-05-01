
void cipher_hw_camellia_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x3b; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x16] = param_1 + 0x18;
  return;
}



undefined8 cipher_hw_camellia_initkey(long param_1,uchar *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  *(CAMELLIA_KEY **)(param_1 + 0xb0) = (CAMELLIA_KEY *)(param_1 + 0xc0);
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = Camellia_set_key(param_2,param_3 * 8,(CAMELLIA_KEY *)(param_1 + 0xc0));
  if (-1 < iVar2) {
    if (((*(byte *)(param_1 + 0x6c) & 2) == 0) && (iVar1 - 1U < 2)) {
      *(undefined **)(param_1 + 0x30) = &Camellia_decrypt;
    }
    else {
      *(undefined **)(param_1 + 0x30) = &Camellia_encrypt;
    }
    puVar3 = (undefined *)0x0;
    if (iVar1 == 2) {
      puVar3 = &Camellia_cbc_encrypt;
    }
    *(undefined **)(param_1 + 0x38) = puVar3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/ciphers/cipher_camellia_hw.c",0x1e,
                "cipher_hw_camellia_initkey");
  ERR_set_error(0x39,0x65,0);
  return 0;
}



undefined1 * ossl_prov_cipher_hw_camellia_cbc(void)

{
  return camellia_cbc;
}



undefined1 * ossl_prov_cipher_hw_camellia_ecb(void)

{
  return camellia_ecb;
}



undefined1 * ossl_prov_cipher_hw_camellia_ofb128(void)

{
  return camellia_ofb128;
}



undefined1 * ossl_prov_cipher_hw_camellia_cfb128(void)

{
  return camellia_cfb128;
}



undefined1 * ossl_prov_cipher_hw_camellia_cfb1(void)

{
  return camellia_cfb1;
}



undefined1 * ossl_prov_cipher_hw_camellia_cfb8(void)

{
  return camellia_cfb8;
}



undefined1 * ossl_prov_cipher_hw_camellia_ctr(void)

{
  return camellia_ctr;
}



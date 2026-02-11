
void cipher_hw_sm4_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x28; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x16] = param_1 + 0x18;
  return;
}



undefined8 cipher_hw_sm4_initkey(long param_1,undefined8 param_2)

{
  *(long *)(param_1 + 0xb0) = param_1 + 0xc0;
  if (((*(byte *)(param_1 + 0x6c) & 2) == 0) && (*(int *)(param_1 + 0x40) - 1U < 2)) {
    ossl_sm4_set_key(param_2);
    *(undefined **)(param_1 + 0x30) = &ossl_sm4_decrypt;
    return 1;
  }
  ossl_sm4_set_key(param_2);
  *(undefined **)(param_1 + 0x30) = &ossl_sm4_encrypt;
  return 1;
}



undefined1 * ossl_prov_cipher_hw_sm4_cbc(void)

{
  return sm4_cbc;
}



undefined1 * ossl_prov_cipher_hw_sm4_ecb(void)

{
  return sm4_ecb;
}



undefined1 * ossl_prov_cipher_hw_sm4_ofb128(void)

{
  return sm4_ofb128;
}



undefined1 * ossl_prov_cipher_hw_sm4_cfb128(void)

{
  return sm4_cfb128;
}



undefined1 * ossl_prov_cipher_hw_sm4_ctr(void)

{
  return sm4_ctr;
}



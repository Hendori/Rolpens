
void cipher_hw_aria_copyctx(undefined8 *param_1,undefined8 *param_2)

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



undefined8 cipher_hw_aria_initkey(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0x6c) & 2) == 0) && (*(int *)(param_1 + 0x40) - 1U < 2)) {
    iVar1 = ossl_aria_set_decrypt_key(param_2,param_3 * 8,param_1 + 0xc0);
  }
  else {
    iVar1 = ossl_aria_set_encrypt_key();
  }
  if (-1 < iVar1) {
    *(long *)(param_1 + 0xb0) = param_1 + 0xc0;
    *(undefined **)(param_1 + 0x30) = &ossl_aria_encrypt;
    return 1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/ciphers/cipher_aria_hw.c",0x19,"cipher_hw_aria_initkey");
  ERR_set_error(0x39,0x65,0);
  return 0;
}



undefined1 * ossl_prov_cipher_hw_aria_cbc(void)

{
  return aria_cbc;
}



undefined1 * ossl_prov_cipher_hw_aria_ecb(void)

{
  return aria_ecb;
}



undefined1 * ossl_prov_cipher_hw_aria_ofb128(void)

{
  return aria_ofb128;
}



undefined1 * ossl_prov_cipher_hw_aria_cfb128(void)

{
  return aria_cfb128;
}



undefined1 * ossl_prov_cipher_hw_aria_cfb1(void)

{
  return aria_cfb1;
}



undefined1 * ossl_prov_cipher_hw_aria_cfb8(void)

{
  return aria_cfb8;
}



undefined1 * ossl_prov_cipher_hw_aria_ctr(void)

{
  return aria_ctr;
}




undefined8 cipher_hw_aes_ocb_generic_initkey(long param_1,uchar *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x2b0;
  param_3 = param_3 * 8;
  if ((DAT_00101005 & 2) == 0) {
    CRYPTO_ocb128_cleanup(lVar1);
    AES_set_encrypt_key(param_2,param_3,(AES_KEY *)(param_1 + 0xc0));
    AES_set_decrypt_key(param_2,param_3,(AES_KEY *)(param_1 + 0x1b8));
    puVar4 = &AES_decrypt;
    puVar3 = &AES_encrypt;
  }
  else {
    CRYPTO_ocb128_cleanup(lVar1);
    vpaes_set_encrypt_key(param_2,param_3,param_1 + 0xc0);
    vpaes_set_decrypt_key(param_2,param_3,param_1 + 0x1b8);
    puVar4 = &vpaes_decrypt;
    puVar3 = &vpaes_encrypt;
  }
  iVar2 = CRYPTO_ocb128_init(lVar1,param_1 + 0xc0,param_1 + 0x1b8,puVar3,puVar4,0);
  if (iVar2 != 0) {
    *(byte *)(param_1 + 0x364) = *(byte *)(param_1 + 0x364) | 1;
    return 1;
  }
  return 0;
}



undefined8 cipher_hw_aes_ocb_aesni_initkey(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  CRYPTO_ocb128_cleanup(param_1 + 0x2b0);
  aesni_set_encrypt_key(param_2,param_3 << 3,param_1 + 0xc0);
  aesni_set_decrypt_key(param_2,param_3 << 3,param_1 + 0x1b8);
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    puVar2 = &aesni_ocb_decrypt;
  }
  else {
    puVar2 = &aesni_ocb_encrypt;
  }
  uVar1 = CRYPTO_ocb128_init(param_1 + 0x2b0,param_1 + 0xc0,param_1 + 0x1b8,&aesni_encrypt,
                             &aesni_decrypt,puVar2);
  if ((int)uVar1 != 0) {
    *(byte *)(param_1 + 0x364) = *(byte *)(param_1 + 0x364) | 1;
    uVar1 = 1;
  }
  return uVar1;
}



undefined1 * ossl_prov_cipher_hw_aes_ocb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_ocb;
  if ((DAT_00101007 & 2) == 0) {
    puVar1 = aes_generic_ocb;
  }
  return puVar1;
}



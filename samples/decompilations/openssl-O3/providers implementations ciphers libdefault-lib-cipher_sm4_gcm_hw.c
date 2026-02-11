
bool hw_gcm_cipher_update(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    if (*(long *)(param_1 + 0x2b8) != 0) {
      iVar1 = CRYPTO_gcm128_decrypt_ctr32();
      return iVar1 == 0;
    }
    iVar1 = CRYPTO_gcm128_decrypt(param_1 + 0xf8,param_2,param_4,param_3);
    return iVar1 == 0;
  }
  if (*(long *)(param_1 + 0x2b8) != 0) {
    iVar1 = CRYPTO_gcm128_encrypt_ctr32();
    return iVar1 == 0;
  }
  iVar1 = CRYPTO_gcm128_encrypt(param_1 + 0xf8,param_2,param_4,param_3);
  return iVar1 == 0;
}



undefined8 sm4_gcm_initkey(long param_1,undefined8 param_2)

{
  ossl_sm4_set_key(param_2,param_1 + 0x2c0);
  CRYPTO_gcm128_init(param_1 + 0xf8,param_1 + 0x2c0,&ossl_sm4_encrypt);
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 4;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  return 1;
}



undefined1 * ossl_prov_sm4_hw_gcm(void)

{
  return sm4_gcm;
}



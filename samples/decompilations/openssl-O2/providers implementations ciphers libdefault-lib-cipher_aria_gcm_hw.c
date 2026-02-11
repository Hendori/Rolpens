
undefined8 aria_gcm_initkey(long param_1,undefined8 param_2,int param_3)

{
  ossl_aria_set_encrypt_key(param_2,param_3 * 8,param_1 + 0x2c0);
  CRYPTO_gcm128_init(param_1 + 0xf8,param_1 + 0x2c0,&ossl_aria_encrypt);
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 4;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  return 1;
}



undefined1 * ossl_prov_aria_hw_gcm(void)

{
  return aria_gcm;
}




undefined8 ccm_aria_initkey(byte *param_1,undefined8 param_2,int param_3)

{
  ossl_aria_set_encrypt_key(param_2,param_3 * 8,param_1 + 0x98);
  CRYPTO_ccm128_init(param_1 + 0x50,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),
                     param_1 + 0x98,&ossl_aria_encrypt);
  *param_1 = *param_1 | 2;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  return 1;
}



undefined1 * ossl_prov_aria_hw_ccm(void)

{
  return ccm_aria;
}




undefined8 cipher_hw_rc4_cipher(long param_1,uchar *param_2,uchar *param_3,size_t param_4)

{
  RC4((RC4_KEY *)(param_1 + 0xc0),param_4,param_3,param_2);
  return 1;
}



undefined8 cipher_hw_rc4_initkey(long param_1,uchar *param_2,int param_3)

{
  RC4_set_key((RC4_KEY *)(param_1 + 0xc0),param_3,param_2);
  return 1;
}



undefined1 * ossl_prov_cipher_hw_rc4(void)

{
  return rc4_hw;
}



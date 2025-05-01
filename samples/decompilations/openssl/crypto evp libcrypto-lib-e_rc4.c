
undefined8 rc4_cipher(undefined8 param_1,uchar *param_2,uchar *param_3,size_t param_4)

{
  RC4_KEY *key;
  
  key = (RC4_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  RC4(key,param_4,param_3,param_2);
  return 1;
}



bool rc4_init_key(undefined8 param_1,uchar *param_2)

{
  int len;
  RC4_KEY *key;
  
  len = EVP_CIPHER_CTX_get_key_length();
  if (0 < len) {
    key = (RC4_KEY *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    RC4_set_key(key,len,param_2);
  }
  return 0 < len;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_rc4(void)

{
  return (EVP_CIPHER *)r4_cipher;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_rc4_40(void)

{
  return (EVP_CIPHER *)r4_40_cipher;
}



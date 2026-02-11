
undefined8 null_init_key(void)

{
  return 1;
}



undefined8 null_cipher(undefined8 param_1,void *param_2,void *param_3,size_t param_4)

{
  if (param_3 != param_2) {
    memcpy(param_2,param_3,param_4);
    return 1;
  }
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_enc_null(void)

{
  return (EVP_CIPHER *)n_cipher;
}



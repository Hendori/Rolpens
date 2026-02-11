
int EVP_PKEY_decrypt_old(uchar *dec_key,uchar *enc_key,int enc_key_len,EVP_PKEY *private_key)

{
  int iVar1;
  RSA *rsa;
  
  iVar1 = EVP_PKEY_get_id(private_key);
  if (iVar1 == 6) {
    rsa = (RSA *)evp_pkey_get0_RSA_int(private_key);
    if (rsa != (RSA *)0x0) {
      iVar1 = RSA_private_decrypt(enc_key_len,enc_key,dec_key,rsa,1);
      return iVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/evp/p_dec.c",0x1c,"EVP_PKEY_decrypt_old");
    ERR_set_error(6,0x6a,0);
  }
  return -1;
}




int EVP_PKEY_encrypt_old(uchar *enc_key,uchar *key,int key_len,EVP_PKEY *pub_key)

{
  int iVar1;
  RSA *rsa;
  
  iVar1 = EVP_PKEY_get_id(pub_key);
  if (iVar1 == 6) {
    rsa = (RSA *)evp_pkey_get0_RSA_int(pub_key);
    if (rsa != (RSA *)0x0) {
      iVar1 = RSA_public_encrypt(key_len,key,enc_key,rsa,1);
      return iVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/evp/p_enc.c",0x1c,"EVP_PKEY_encrypt_old");
    ERR_set_error(6,0x6a,0);
  }
  return 0;
}



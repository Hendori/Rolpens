
void SEED_cbc_encrypt(uchar *in,uchar *out,size_t len,SEED_KEY_SCHEDULE *ks,uchar *ivec,int enc)

{
  if (enc != 0) {
    CRYPTO_cbc128_encrypt();
    return;
  }
  CRYPTO_cbc128_decrypt();
  return;
}




void AES_cfb128_encrypt(uchar *in,uchar *out,size_t length,AES_KEY *key,uchar *ivec,int *num,int enc
                       )

{
  CRYPTO_cfb128_encrypt();
  return;
}



void AES_cfb1_encrypt(uchar *in,uchar *out,size_t length,AES_KEY *key,uchar *ivec,int *num,int enc)

{
  CRYPTO_cfb128_1_encrypt();
  return;
}



void AES_cfb8_encrypt(uchar *in,uchar *out,size_t length,AES_KEY *key,uchar *ivec,int *num,int enc)

{
  CRYPTO_cfb128_8_encrypt();
  return;
}



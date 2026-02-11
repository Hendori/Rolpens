
void Camellia_ctr128_encrypt
               (uchar *in,uchar *out,size_t length,CAMELLIA_KEY *key,uchar *ivec,uchar *ecount_buf,
               uint *num)

{
  CRYPTO_ctr128_encrypt();
  return;
}



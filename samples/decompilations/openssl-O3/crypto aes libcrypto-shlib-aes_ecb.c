
void AES_ecb_encrypt(uchar *in,uchar *out,AES_KEY *key,int enc)

{
  if (enc != 1) {
    AES_decrypt(in,out,key);
    return;
  }
  AES_encrypt(in,out,key);
  return;
}



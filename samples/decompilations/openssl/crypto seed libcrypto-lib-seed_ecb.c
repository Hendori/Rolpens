
void SEED_ecb_encrypt(uchar *in,uchar *out,SEED_KEY_SCHEDULE *ks,int enc)

{
  if (enc != 0) {
    SEED_encrypt(in,out,ks);
    return;
  }
  SEED_decrypt(in,out,ks);
  return;
}



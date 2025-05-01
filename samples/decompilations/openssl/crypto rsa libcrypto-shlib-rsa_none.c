
int RSA_padding_add_none(uchar *to,int tlen,uchar *f,int fl)

{
  if (tlen < fl) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_none.c",0x18,"RSA_padding_add_none");
    ERR_set_error(4,0x6e,0);
  }
  else {
    if (tlen <= fl) {
      memcpy(to,f,(ulong)(uint)fl);
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_none.c",0x1d,"RSA_padding_add_none");
    ERR_set_error(4,0x7a,0);
  }
  return 0;
}



int RSA_padding_check_none(uchar *to,int tlen,uchar *f,int fl,int rsa_len)

{
  void *pvVar1;
  
  if (tlen < fl) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_none.c",0x2a,"RSA_padding_check_none");
    ERR_set_error(4,0x6d,0);
    tlen = -1;
  }
  else {
    pvVar1 = memset(to,0,(long)(tlen - fl));
    memcpy((void *)((long)pvVar1 + ((long)tlen - (long)fl)),f,(long)fl);
  }
  return tlen;
}




int RSA_print(BIO *bp,RSA *r,int offset)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  iVar1 = 0;
  pkey = EVP_PKEY_new();
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_set1_RSA(pkey,r);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_print_private(bp,pkey,offset,(ASN1_PCTX *)0x0);
    }
    EVP_PKEY_free(pkey);
  }
  return iVar1;
}



int RSA_print_fp(FILE *fp,RSA *r,int offset)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = RSA_print(bp,r,offset);
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/rsa/rsa_prn.c",0x1c,"RSA_print_fp");
  ERR_set_error(4,0x80007,0);
  return 0;
}



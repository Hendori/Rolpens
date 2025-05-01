
int DSA_print(BIO *bp,DSA *x,int off)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  iVar1 = 0;
  pkey = EVP_PKEY_new();
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_set1_DSA(pkey,x);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_print_private(bp,pkey,off,(ASN1_PCTX *)0x0);
    }
    EVP_PKEY_free(pkey);
  }
  return iVar1;
}



int DSA_print_fp(FILE *bp,DSA *x,int off)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp_00;
  
  type = BIO_s_file();
  bp_00 = BIO_new(type);
  if (bp_00 != (BIO *)0x0) {
    BIO_ctrl(bp_00,0x6a,0,bp);
    iVar1 = DSA_print(bp_00,x,off);
    BIO_free(bp_00);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/dsa/dsa_prn.c",0x1c,"DSA_print_fp");
  ERR_set_error(10,0x80007,0);
  return 0;
}



int DSAparams_print(BIO *bp,DSA *x)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  iVar1 = 0;
  pkey = EVP_PKEY_new();
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_set1_DSA(pkey,x);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_print_params(bp,pkey,4,(ASN1_PCTX *)0x0);
    }
    EVP_PKEY_free(pkey);
  }
  return iVar1;
}



int DSAparams_print_fp(FILE *fp,DSA *x)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = DSAparams_print(bp,x);
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/dsa/dsa_prn.c",0x2b,"DSAparams_print_fp");
  ERR_set_error(10,0x80007,0);
  return 0;
}



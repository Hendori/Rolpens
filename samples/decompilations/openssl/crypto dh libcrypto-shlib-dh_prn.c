
int DHparams_print_fp(FILE *fp,DH *x)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = DHparams_print(bp,x);
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/dh/dh_prn.c",0x1c,"DHparams_print_fp");
  ERR_set_error(5,0x80007,0);
  return 0;
}



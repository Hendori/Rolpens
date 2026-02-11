
undefined8 FuzzerInitialize(void)

{
  OPENSSL_init_crypto(2,0);
  ERR_clear_error();
  CRYPTO_free_ex_index(0,0xffffffff);
  return 1;
}



undefined8 FuzzerTestOneInput(void *param_1,long param_2)

{
  int iVar1;
  BIO_METHOD *pBVar2;
  BIO *b;
  CMS_ContentInfo *cms;
  BIO *bp;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  pBVar2 = BIO_s_mem();
  b = BIO_new(pBVar2);
  iVar1 = BIO_write(b,param_1,(int)param_2);
  if (iVar1 == param_2) {
    cms = d2i_CMS_bio(b,(CMS_ContentInfo **)0x0);
    if (cms != (CMS_ContentInfo *)0x0) {
      pBVar2 = BIO_s_null();
      bp = BIO_new(pBVar2);
      i2d_CMS_bio(bp,cms);
      BIO_free(bp);
      CMS_ContentInfo_free(cms);
    }
    BIO_free(b);
    ERR_clear_error();
    return 0;
  }
  uVar3 = OPENSSL_die("assertion failed: (size_t)BIO_write(in, buf, len) == len","fuzz/cms.c",0x25);
  return uVar3;
}



void FuzzerCleanup(void)

{
  return;
}



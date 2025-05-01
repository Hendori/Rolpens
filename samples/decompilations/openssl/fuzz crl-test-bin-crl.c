
undefined8 FuzzerInitialize(void)

{
  OPENSSL_init_crypto(2,0);
  ERR_clear_error();
  CRYPTO_free_ex_index(0,0xffffffff);
  return 1;
}



undefined8 FuzzerTestOneInput(uchar *param_1,long param_2)

{
  X509_CRL *x;
  BIO_METHOD *type;
  BIO *bp;
  long in_FS_OFFSET;
  uchar *local_30;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (uchar *)0x0;
  local_30 = param_1;
  x = d2i_X509_CRL((X509_CRL **)0x0,&local_30,param_2);
  if (x != (X509_CRL *)0x0) {
    type = BIO_s_null();
    bp = BIO_new(type);
    X509_CRL_print(bp,x);
    BIO_free(bp);
    i2d_X509_CRL(x,&local_28);
    CRYPTO_free(local_28);
    X509_CRL_free(x);
  }
  ERR_clear_error();
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FuzzerCleanup(void)

{
  return;
}




bool FuzzerInitialize(void)

{
  BIO_METHOD *type;
  bool bVar1;
  
  type = BIO_s_null();
  bio_out = BIO_new(type);
  bVar1 = bio_out != (BIO *)0x0;
  if (bVar1) {
    OPENSSL_init_crypto(2,0);
    ERR_clear_error();
    CRYPTO_free_ex_index(0,0xffffffff);
  }
  return bVar1;
}



undefined8 FuzzerTestOneInput(uchar *param_1,long param_2)

{
  ASN1_parse_dump(bio_out,param_1,param_2,0,0);
  ERR_clear_error();
  return 0;
}



void FuzzerCleanup(void)

{
  BIO_free(bio_out);
  return;
}



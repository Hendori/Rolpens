
int init(EVP_PKEY_CTX *ctx)

{
  return 1;
}



undefined8 update(void)

{
  return 1;
}



undefined8 final(void)

{
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * EVP_md_null(void)

{
  return (EVP_MD *)null_md;
}



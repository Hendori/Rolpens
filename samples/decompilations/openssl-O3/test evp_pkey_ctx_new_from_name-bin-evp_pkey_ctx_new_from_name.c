
undefined8 main(void)

{
  EVP_PKEY_CTX *ctx;
  
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,0x100000,0);
  EVP_PKEY_CTX_free(ctx);
  return 0;
}



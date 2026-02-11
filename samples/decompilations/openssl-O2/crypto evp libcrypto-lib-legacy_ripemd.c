
void ripe_final(undefined8 param_1,uchar *param_2)

{
  RIPEMD160_CTX *c;
  
  c = (RIPEMD160_CTX *)EVP_MD_CTX_get0_md_data();
  RIPEMD160_Final(param_2,c);
  return;
}



void ripe_update(undefined8 param_1,void *param_2,size_t param_3)

{
  RIPEMD160_CTX *c;
  
  c = (RIPEMD160_CTX *)EVP_MD_CTX_get0_md_data();
  RIPEMD160_Update(c,param_2,param_3);
  return;
}



void ripe_init(void)

{
  RIPEMD160_CTX *c;
  
  c = (RIPEMD160_CTX *)EVP_MD_CTX_get0_md_data();
  RIPEMD160_Init(c);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * EVP_ripemd160(void)

{
  return (EVP_MD *)ripemd160_md;
}




void wp_final(undefined8 param_1,uchar *param_2)

{
  WHIRLPOOL_CTX *c;
  
  c = (WHIRLPOOL_CTX *)EVP_MD_CTX_get0_md_data();
  WHIRLPOOL_Final(param_2,c);
  return;
}



void wp_update(undefined8 param_1,void *param_2,size_t param_3)

{
  WHIRLPOOL_CTX *c;
  
  c = (WHIRLPOOL_CTX *)EVP_MD_CTX_get0_md_data();
  WHIRLPOOL_Update(c,param_2,param_3);
  return;
}



void wp_init(void)

{
  WHIRLPOOL_CTX *c;
  
  c = (WHIRLPOOL_CTX *)EVP_MD_CTX_get0_md_data();
  WHIRLPOOL_Init(c);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * EVP_whirlpool(void)

{
  return (EVP_MD *)whirlpool_md;
}



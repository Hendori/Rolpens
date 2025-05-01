
void md4_final(undefined8 param_1,uchar *param_2)

{
  MD4_CTX *c;
  
  c = (MD4_CTX *)EVP_MD_CTX_get0_md_data();
  MD4_Final(param_2,c);
  return;
}



void md4_update(undefined8 param_1,void *param_2,size_t param_3)

{
  MD4_CTX *c;
  
  c = (MD4_CTX *)EVP_MD_CTX_get0_md_data();
  MD4_Update(c,param_2,param_3);
  return;
}



void md4_init(void)

{
  MD4_CTX *c;
  
  c = (MD4_CTX *)EVP_MD_CTX_get0_md_data();
  MD4_Init(c);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * EVP_md4(void)

{
  return (EVP_MD *)md4_md;
}



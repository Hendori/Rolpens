
void md5_final(undefined8 param_1,uchar *param_2)

{
  MD5_CTX *c;
  
  c = (MD5_CTX *)EVP_MD_CTX_get0_md_data();
  MD5_Final(param_2,c);
  return;
}



void md5_update(undefined8 param_1,void *param_2,size_t param_3)

{
  MD5_CTX *c;
  
  c = (MD5_CTX *)EVP_MD_CTX_get0_md_data();
  MD5_Update(c,param_2,param_3);
  return;
}



void md5_init(void)

{
  MD5_CTX *c;
  
  c = (MD5_CTX *)EVP_MD_CTX_get0_md_data();
  MD5_Init(c);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * EVP_md5(void)

{
  return (EVP_MD *)md5_md;
}



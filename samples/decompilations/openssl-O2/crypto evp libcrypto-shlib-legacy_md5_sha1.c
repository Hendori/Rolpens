
void md5_sha1_int_ctrl(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_md5_sha1_ctrl(uVar1,param_2,param_3,param_4);
  return;
}



void md5_sha1_int_final(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_md5_sha1_final(param_2,uVar1);
  return;
}



void md5_sha1_int_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_md5_sha1_update(uVar1,param_2,param_3);
  return;
}



void md5_sha1_int_init(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_md5_sha1_init(uVar1);
  return;
}



undefined1 * EVP_md5_sha1(void)

{
  return md5_sha1_md;
}



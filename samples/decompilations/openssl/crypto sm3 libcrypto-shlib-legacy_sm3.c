
void sm3_int_final(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_sm3_final(param_2,uVar1);
  return;
}



void sm3_int_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_sm3_update(uVar1,param_2,param_3);
  return;
}



void sm3_int_init(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_sm3_init(uVar1);
  return;
}



undefined1 * EVP_sm3(void)

{
  return sm3_md;
}



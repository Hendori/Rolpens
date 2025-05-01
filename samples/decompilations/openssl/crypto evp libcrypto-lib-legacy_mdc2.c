
void mdc2_final(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  MDC2_Final(param_2,uVar1);
  return;
}



void mdc2_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  MDC2_Update(uVar1,param_2,param_3);
  return;
}



void mdc2_init(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  MDC2_Init(uVar1);
  return;
}



undefined1 * EVP_mdc2(void)

{
  return mdc2_md;
}




void tdes_ede3_ecb_get_params(undefined8 param_1)

{
  ossl_tdes_get_params(param_1,1,0x10,0xc0,0x40,0);
  return;
}



void tdes_ede3_cbc_get_params(undefined8 param_1)

{
  ossl_tdes_get_params(param_1,2,0x10,0xc0,0x40,0x40);
  return;
}



void tdes_ede3_ecb_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede3_ecb();
  ossl_tdes_newctx(param_1,1,0xc0,0x40,0,0x10,uVar1);
  return;
}



void tdes_ede3_cbc_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede3_cbc();
  ossl_tdes_newctx(param_1,2,0xc0,0x40,0x40,0x10,uVar1);
  return;
}



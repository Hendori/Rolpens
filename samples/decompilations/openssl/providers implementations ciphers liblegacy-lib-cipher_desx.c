
void tdes_desx_cbc_get_params(undefined8 param_1)

{
  ossl_tdes_get_params(param_1,2,0x10,0xc0,0x40,0x40);
  return;
}



void tdes_desx_cbc_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_desx_cbc();
  ossl_tdes_newctx(param_1,2,0xc0,0x40,0x40,0x10,uVar1);
  return;
}



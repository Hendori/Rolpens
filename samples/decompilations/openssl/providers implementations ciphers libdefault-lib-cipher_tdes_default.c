
void tdes_ede3_ofb_get_params(undefined8 param_1)

{
  ossl_tdes_get_params(param_1,4,0x10,0xc0,8,0x40);
  return;
}



void tdes_ede3_cfb_get_params(undefined8 param_1)

{
  ossl_tdes_get_params(param_1,3,0x10,0xc0,8,0x40);
  return;
}



void tdes_ede2_ecb_get_params(undefined8 param_1)

{
  ossl_tdes_get_params(param_1,1,0x10,0x80,0x40,0);
  return;
}



void tdes_ede2_cbc_get_params(undefined8 param_1)

{
  ossl_tdes_get_params(param_1,2,0x10,0x80,0x40,0x40);
  return;
}



void tdes_ede2_ofb_get_params(undefined8 param_1)

{
  ossl_tdes_get_params(param_1,4,0x10,0x80,8,0x40);
  return;
}



void tdes_ede2_cfb_get_params(undefined8 param_1)

{
  ossl_tdes_get_params(param_1,3,0x10,0x80,8,0x40);
  return;
}



void tdes_ede3_ofb_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede3_ofb();
  ossl_tdes_newctx(param_1,4,0xc0,8,0x40,0x10,uVar1);
  return;
}



void tdes_ede3_cfb_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede3_cfb();
  ossl_tdes_newctx(param_1,3,0xc0,8,0x40,0x10,uVar1);
  return;
}



void tdes_ede3_cfb1_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede3_cfb1();
  ossl_tdes_newctx(param_1,3,0xc0,8,0x40,0x10,uVar1);
  return;
}



void tdes_ede3_cfb8_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede3_cfb8();
  ossl_tdes_newctx(param_1,3,0xc0,8,0x40,0x10,uVar1);
  return;
}



void tdes_ede2_ecb_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede2_ecb();
  ossl_tdes_newctx(param_1,1,0x80,0x40,0,0x10,uVar1);
  return;
}



void tdes_ede2_cbc_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede2_cbc();
  ossl_tdes_newctx(param_1,2,0x80,0x40,0x40,0x10,uVar1);
  return;
}



void tdes_ede2_ofb_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede2_ofb();
  ossl_tdes_newctx(param_1,4,0x80,8,0x40,0x10,uVar1);
  return;
}



void tdes_ede2_cfb_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede2_cfb();
  ossl_tdes_newctx(param_1,3,0x80,8,0x40,0x10,uVar1);
  return;
}



void tdes_ede3_cfb8_get_params(undefined8 param_1)

{
  ossl_tdes_get_params(param_1,3,0x10,0xc0,8,0x40);
  return;
}



void tdes_ede3_cfb1_get_params(undefined8 param_1)

{
  ossl_tdes_get_params(param_1,3,0x10,0xc0,8,0x40);
  return;
}



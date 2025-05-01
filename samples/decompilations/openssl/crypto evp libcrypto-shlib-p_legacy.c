
int EVP_PKEY_set1_RSA(EVP_PKEY *pkey,rsa_st *key)

{
  int iVar1;
  
  iVar1 = RSA_up_ref(key);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_assign(pkey,6,key);
    if (iVar1 == 0) {
      RSA_free(key);
      return 0;
    }
  }
  return iVar1;
}



undefined8 evp_pkey_get0_RSA_int(int *param_1)

{
  undefined8 uVar1;
  
  if ((*param_1 != 6) && (*param_1 != 0x390)) {
    ERR_new();
    ERR_set_debug("crypto/evp/p_legacy.c",0x2b,"evp_pkey_get0_RSA_int");
    ERR_set_error(6,0x7f,0);
    return 0;
  }
  uVar1 = evp_pkey_get_legacy();
  return uVar1;
}



void EVP_PKEY_get0_RSA(void)

{
  evp_pkey_get0_RSA_int();
  return;
}



rsa_st * EVP_PKEY_get1_RSA(EVP_PKEY *pkey)

{
  int iVar1;
  RSA *r;
  
  r = (RSA *)evp_pkey_get0_RSA_int();
  if (r != (RSA *)0x0) {
    iVar1 = RSA_up_ref(r);
    if (iVar1 != 0) {
      return r;
    }
  }
  return (rsa_st *)0x0;
}



int EVP_PKEY_set1_EC_KEY(EVP_PKEY *pkey,ec_key_st *key)

{
  int iVar1;
  int iVar2;
  
  iVar1 = EC_KEY_up_ref(key);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = EVP_PKEY_assign(pkey,0x198,key);
    iVar2 = 1;
    if (iVar1 == 0) {
      EC_KEY_free(key);
      iVar2 = 0;
    }
  }
  return iVar2;
}



undefined8 evp_pkey_get0_EC_KEY_int(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id();
  if (iVar1 == 0x198) {
    uVar2 = evp_pkey_get_legacy(param_1);
    return uVar2;
  }
  ERR_new();
  ERR_set_debug("crypto/evp/p_legacy.c",0x4f,"evp_pkey_get0_EC_KEY_int");
  ERR_set_error(6,0x8e,0);
  return 0;
}



void EVP_PKEY_get0_EC_KEY(void)

{
  evp_pkey_get0_EC_KEY_int();
  return;
}



ec_key_st * EVP_PKEY_get1_EC_KEY(EVP_PKEY *pkey)

{
  int iVar1;
  EC_KEY *key;
  
  key = (EC_KEY *)evp_pkey_get0_EC_KEY_int();
  if (key != (EC_KEY *)0x0) {
    iVar1 = EC_KEY_up_ref(key);
    if (iVar1 != 0) {
      return key;
    }
  }
  return (ec_key_st *)0x0;
}




bool drbg_status(void)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = RAND_get0_primary(0);
  bVar3 = false;
  if (lVar2 != 0) {
    iVar1 = EVP_RAND_get_state();
    bVar3 = iVar1 == 1;
  }
  return bVar3;
}



undefined8 drbg_add(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = RAND_get0_primary(0);
  if ((lVar1 != 0) && (0 < param_2)) {
    uVar2 = EVP_RAND_reseed(lVar1,0,0,0,param_1,(long)param_2);
    return uVar2;
  }
  return 0;
}



undefined8 drbg_bytes(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = RAND_get0_public(0);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = EVP_RAND_generate(lVar1,param_1,(long)param_2,0,0,0,0);
  }
  return uVar2;
}



undefined8 drbg_seed(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = RAND_get0_primary(0);
  if ((lVar1 != 0) && (0 < param_2)) {
    uVar2 = EVP_RAND_reseed(lVar1,0,0,0,param_1,(long)param_2);
    return uVar2;
  }
  return 0;
}



undefined1 * RAND_OpenSSL(void)

{
  return ossl_rand_meth;
}



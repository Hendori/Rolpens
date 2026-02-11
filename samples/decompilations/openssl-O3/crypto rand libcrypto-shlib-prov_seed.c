
long ossl_rand_get_entropy
               (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = ossl_rand_pool_new(param_3,1,param_4,param_5);
  if (lVar1 != 0) {
    lVar2 = ossl_pool_acquire_entropy(lVar1);
    if (lVar2 != 0) {
      lVar2 = ossl_rand_pool_length(lVar1);
      uVar3 = ossl_rand_pool_detach(lVar1);
      *param_2 = uVar3;
    }
    ossl_rand_pool_free(lVar1);
    return lVar2;
  }
  ERR_new();
  ERR_set_debug("crypto/rand/prov_seed.c",0x1c,"ossl_rand_get_entropy");
  ERR_set_error(0x24,0x80024,0);
  return 0;
}



void ossl_rand_get_user_entropy
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  long lVar2;
  
  lVar2 = ossl_rand_get0_seed_noncreating();
  if (lVar2 != 0) {
    iVar1 = evp_rand_can_seed(lVar2);
    if (iVar1 != 0) {
      evp_rand_get_seed(lVar2,param_2,param_3,param_4,param_5,0,0,0);
      return;
    }
  }
  ossl_rand_get_entropy(param_1,param_2,param_3,param_4,param_5);
  return;
}



void ossl_rand_cleanup_entropy(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  CRYPTO_secure_clear_free(param_2,param_3,"crypto/rand/prov_seed.c",0x3c);
  return;
}



void ossl_rand_cleanup_user_entropy(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = ossl_rand_get0_seed_noncreating();
  if (lVar2 != 0) {
    iVar1 = evp_rand_can_seed(lVar2);
    if (iVar1 != 0) {
      evp_rand_clear_seed(lVar2,param_2,param_3);
      return;
    }
  }
  CRYPTO_secure_clear_free(param_2,param_3,"crypto/rand/prov_seed.c",0x47);
  return;
}



undefined8
ossl_rand_get_nonce(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = ossl_rand_pool_new(0,0);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/rand/prov_seed.c",0x54,"ossl_rand_get_nonce");
    ERR_set_error(0x24,0x80024,0);
    return 0;
  }
  iVar1 = ossl_pool_add_nonce_data(lVar2);
  if (iVar1 == 0) {
LAB_00100240:
    uVar3 = 0;
  }
  else {
    if (param_5 != 0) {
      iVar1 = ossl_rand_pool_add(lVar2,param_5,param_6,0);
      if (iVar1 == 0) goto LAB_00100240;
    }
    uVar3 = ossl_rand_pool_length(lVar2);
    uVar4 = ossl_rand_pool_detach(lVar2);
    *param_2 = uVar4;
  }
  ossl_rand_pool_free(lVar2);
  return uVar3;
}



undefined1  [16]
ossl_rand_get_user_nonce
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  void *ptr;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  lVar2 = ossl_rand_get0_seed_noncreating();
  if (lVar2 == 0) {
    auVar5 = ossl_rand_get_nonce(param_1,param_2,param_3,param_4,param_5,param_6);
    return auVar5;
  }
  ptr = CRYPTO_malloc((int)param_3,"crypto/rand/prov_seed.c",0x6f);
  uVar3 = extraout_RDX;
  if (ptr != (void *)0x0) {
    iVar1 = EVP_RAND_generate(lVar2,ptr,param_3,0,0,param_5);
    if (iVar1 != 0) {
      *param_2 = ptr;
      auVar4._8_8_ = param_6;
      auVar4._0_8_ = param_3;
      return auVar4;
    }
    CRYPTO_free(ptr);
    uVar3 = extraout_RDX_00;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar3;
  return auVar5 << 0x40;
}



void ossl_rand_cleanup_nonce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  CRYPTO_clear_free(param_2,param_3,"crypto/rand/prov_seed.c",0x7d);
  return;
}



void ossl_rand_cleanup_user_nonce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  CRYPTO_clear_free(param_2,param_3,"crypto/rand/prov_seed.c",0x83);
  return;
}



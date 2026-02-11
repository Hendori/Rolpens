
undefined8 seed_src_instantiate(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 1;
  return 1;
}



undefined8 seed_src_uninstantiate(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return 1;
}



undefined1 * seed_src_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_3;
}



undefined8 seed_src_verify_zeroization(void)

{
  return 1;
}



void seed_src_unlock(void)

{
  return;
}



void seed_clear_seed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  CRYPTO_secure_clear_free(param_2,param_3,"providers/implementations/rands/seed_src.c",0xd4);
  return;
}



undefined8
seed_get_seed(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = ossl_rand_pool_new(param_3,1,param_4,param_5);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/rands/seed_src.c",0xbf,"seed_get_seed");
    ERR_set_error(0x39,0x80024,0);
    return 0;
  }
  lVar3 = ossl_pool_acquire_entropy(lVar2);
  if (lVar3 != 0) {
    iVar1 = ossl_rand_pool_adin_mix_in(lVar2,param_7,param_8);
    if (iVar1 != 0) {
      uVar4 = ossl_rand_pool_length(lVar2);
      uVar5 = ossl_rand_pool_detach(lVar2);
      *param_2 = uVar5;
      goto LAB_001000f9;
    }
  }
  ERR_new();
  uVar4 = 0;
  ERR_set_debug("providers/implementations/rands/seed_src.c",0xcb,"seed_get_seed");
  ERR_set_error(0x39,0xba,0);
LAB_001000f9:
  ossl_rand_pool_free(lVar2);
  return uVar4;
}



bool seed_src_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_PARAM_locate(param_2,"state");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,*(undefined4 *)(param_1 + 8)), iVar1 == 0))
  {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"strength");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,0x400), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"max_request");
  if (lVar2 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_size_t(lVar2,0x80);
  return iVar1 != 0;
}



bool seed_src_generate(long param_1,void *param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  size_t __n;
  void *__src;
  bool bVar4;
  
  if (*(int *)(param_1 + 8) == 1) {
    lVar2 = ossl_rand_pool_new(param_4,1,param_3,param_3);
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/rands/seed_src.c",0x6b,"seed_src_generate");
      ERR_set_error(0x39,0x80024,0);
      bVar4 = false;
    }
    else {
      lVar3 = ossl_pool_acquire_entropy(lVar2);
      if (lVar3 != 0) {
        iVar1 = ossl_rand_pool_adin_mix_in(lVar2,param_6,param_7);
        if (iVar1 == 0) {
          ossl_rand_pool_free(lVar2);
          return false;
        }
        __n = ossl_rand_pool_length();
        __src = (void *)ossl_rand_pool_buffer(lVar2);
        memcpy(param_2,__src,__n);
      }
      ossl_rand_pool_free(lVar2);
      bVar4 = lVar3 != 0;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/rands/seed_src.c",99,"seed_src_generate");
    ERR_set_error(0x39,(*(int *)(param_1 + 8) != 2) + 0xc0,0);
    bVar4 = false;
  }
  return bVar4;
}



void seed_src_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined8 * seed_src_new(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)CRYPTO_zalloc(0x10,"providers/implementations/rands/seed_src.c",0x37);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      *(undefined4 *)(puVar1 + 1) = 0;
    }
    return puVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/rands/seed_src.c",0x33,"seed_src_new");
  ERR_set_error(0x39,0xe5,0);
  return (undefined8 *)0x0;
}



int seed_src_reseed(long param_1)

{
  if (*(int *)(param_1 + 8) == 1) {
    return *(int *)(param_1 + 8);
  }
  ERR_new();
  ERR_set_debug("providers/implementations/rands/seed_src.c",0x88,"seed_src_reseed");
  ERR_set_error(0x39,(*(int *)(param_1 + 8) != 2) + 0xc0,0);
  return 0;
}



undefined8 seed_src_lock(void)

{
  return 1;
}



undefined8 seed_src_enable_locking(void)

{
  return 1;
}



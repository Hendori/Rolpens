
undefined8 fuzz_rand_instantiate(undefined4 *param_1)

{
  *param_1 = 1;
  return 1;
}



undefined8 fuzz_rand_uninstantiate(undefined4 *param_1)

{
  *param_1 = 0;
  return 1;
}



undefined8 fuzz_rand_generate(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  
  if (param_3 != 0) {
    lVar1 = 1;
    do {
      *(char *)(param_2 + -1 + lVar1) = (char)lVar1;
      bVar2 = lVar1 != param_3;
      lVar1 = lVar1 + 1;
    } while (bVar2);
  }
  return 1;
}



undefined8 fuzz_rand_enable_locking(void)

{
  return 1;
}



undefined1 * fuzz_rand_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_0;
}



undefined1 * fuzz_rand_query(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  
  *param_3 = 0;
  puVar1 = fuzz_rand_rand;
  if (param_2 != 5) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined8
fuzz_rand_provider_init(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  
  lVar1 = OSSL_LIB_CTX_new();
  *param_4 = lVar1;
  if (lVar1 != 0) {
    *param_3 = fuzz_rand_method;
    return 1;
  }
  return 0;
}



bool fuzz_rand_get_ctx_params(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_PARAM_locate(param_2,"state");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,*param_1), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"strength");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,500), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"max_request");
  if (lVar2 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_size_t(lVar2,0x7fffffff);
  return iVar1 != 0;
}



void fuzz_rand_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void fuzz_rand_newctx(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_malloc(4,"fuzz/fuzz_rand.c",0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



void FuzzerSetRand(void)

{
  int iVar1;
  
  iVar1 = OSSL_PROVIDER_add_builtin(0,"fuzz-rand",fuzz_rand_provider_init);
  if (iVar1 != 0) {
    iVar1 = RAND_set_DRBG_type(0,&_LC5,0,0,0);
    if (iVar1 != 0) {
      r_prov = OSSL_PROVIDER_try_load(0,"fuzz-rand",1);
      if (r_prov != 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



void FuzzerClearRand(void)

{
  OSSL_PROVIDER_unload(r_prov);
  return;
}



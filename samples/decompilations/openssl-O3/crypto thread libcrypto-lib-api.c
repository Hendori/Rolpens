
undefined8 OSSL_get_thread_support_flags(void)

{
  return 3;
}



undefined8 OSSL_get_max_threads(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)ossl_lib_ctx_get_data(param_1,0x13);
  if (puVar1 != (undefined8 *)0x0) {
    ossl_crypto_mutex_lock(puVar1[2]);
    uVar2 = *puVar1;
    ossl_crypto_mutex_unlock(puVar1[2]);
  }
  return uVar2;
}



bool OSSL_set_max_threads(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_data(param_1,0x13);
  if (puVar1 != (undefined8 *)0x0) {
    ossl_crypto_mutex_lock(puVar1[2]);
    *puVar1 = param_2;
    ossl_crypto_mutex_unlock(puVar1[2]);
  }
  return puVar1 != (undefined8 *)0x0;
}



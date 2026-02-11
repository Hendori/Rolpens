
long ossl_get_avail_threads(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = 0;
  plVar1 = (long *)ossl_lib_ctx_get_data(param_1,0x13);
  if (plVar1 != (long *)0x0) {
    ossl_crypto_mutex_lock(plVar1[2]);
    lVar2 = *plVar1 - plVar1[1];
    ossl_crypto_mutex_unlock(plVar1[2]);
  }
  return lVar2;
}



long ossl_crypto_thread_start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)ossl_lib_ctx_get_data(param_1,0x13);
  if (plVar1 != (long *)0x0) {
    ossl_crypto_mutex_lock(plVar1[2]);
    if (*plVar1 != 0) {
      lVar2 = plVar1[1];
      if (*plVar1 == lVar2) {
        do {
          ossl_crypto_condvar_wait(plVar1[3],plVar1[2]);
          lVar2 = plVar1[1];
        } while (*plVar1 == lVar2);
      }
      plVar1[1] = lVar2 + 1;
      ossl_crypto_mutex_unlock(plVar1[2]);
      lVar2 = ossl_crypto_thread_native_start(param_2,param_3,1);
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x50) = param_1;
        return lVar2;
      }
      ossl_crypto_mutex_lock(plVar1[2]);
      plVar1[1] = plVar1[1] + -1;
      ossl_crypto_mutex_unlock(plVar1[2]);
      return 0;
    }
    ossl_crypto_mutex_unlock(plVar1[2]);
  }
  return 0;
}



undefined8 ossl_crypto_thread_join(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = ossl_lib_ctx_get_data(*(undefined8 *)(param_1 + 0x50),0x13);
  if (lVar2 != 0) {
    iVar1 = ossl_crypto_thread_native_join(param_1,param_2);
    if (iVar1 != 0) {
      ossl_crypto_mutex_lock(*(undefined8 *)(lVar2 + 0x10));
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + -1;
      ossl_crypto_condvar_signal(*(undefined8 *)(lVar2 + 0x18));
      ossl_crypto_mutex_unlock(*(undefined8 *)(lVar2 + 0x10));
      return 1;
    }
  }
  return 0;
}



void ossl_crypto_thread_clean(void)

{
  ossl_crypto_thread_native_clean();
  return;
}



void ossl_threads_ctx_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    ossl_crypto_mutex_free((long)param_1 + 0x10);
    ossl_crypto_condvar_free((long)param_1 + 0x18);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



long ossl_threads_ctx_new(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = CRYPTO_zalloc(0x20,"crypto/thread/internal.c",0x81);
  if (lVar1 != 0) {
    uVar2 = ossl_crypto_mutex_new();
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    lVar3 = ossl_crypto_condvar_new();
    *(long *)(lVar1 + 0x18) = lVar3;
    if ((*(long *)(lVar1 + 0x10) != 0) && (lVar3 != 0)) {
      return lVar1;
    }
    ossl_threads_ctx_free(lVar1);
  }
  return 0;
}



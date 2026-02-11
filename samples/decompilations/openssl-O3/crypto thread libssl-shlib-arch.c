
void * ossl_crypto_thread_native_start(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  void *ptr;
  long lVar2;
  
  if ((param_1 != 0) &&
     (ptr = (void *)CRYPTO_zalloc(0x58,"crypto/thread/arch.c",0x15), ptr != (void *)0x0)) {
    lVar2 = ossl_crypto_mutex_new();
    *(long *)((long)ptr + 0x28) = lVar2;
    if (lVar2 != 0) {
      lVar2 = ossl_crypto_mutex_new();
      *(long *)((long)ptr + 0x30) = lVar2;
      if (lVar2 != 0) {
        lVar2 = ossl_crypto_condvar_new();
        *(long *)((long)ptr + 0x38) = lVar2;
        if (lVar2 != 0) {
          *(undefined8 *)((long)ptr + 8) = param_2;
          *(long *)((long)ptr + 0x10) = param_1;
          *(undefined4 *)((long)ptr + 0x48) = param_3;
          iVar1 = ossl_crypto_thread_native_spawn(ptr);
          if (iVar1 == 1) {
            return ptr;
          }
        }
      }
    }
    ossl_crypto_condvar_free((long)ptr + 0x38);
    ossl_crypto_mutex_free((long)ptr + 0x30);
    ossl_crypto_mutex_free((long)ptr + 0x28);
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



undefined8 ossl_crypto_thread_native_join(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0xc));
  uVar1 = *param_1;
  while ((uVar1 & 5) == 0) {
    ossl_crypto_condvar_wait(*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_1 + 0xc));
    uVar1 = *param_1;
  }
  do {
    if ((uVar1 & 4) != 0) {
LAB_00100127:
      *param_1 = uVar1 & 0xfffbffff | 4;
      ossl_crypto_condvar_signal(*(undefined8 *)(param_1 + 0xe));
      ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0xc));
      if (param_2 != (uint *)0x0) {
        *param_2 = param_1[6];
      }
      return 1;
    }
    if ((uVar1 & 2) == 0) {
      *param_1 = uVar1 | 2;
      ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0xc));
      iVar2 = ossl_crypto_thread_native_perform_join(param_1,param_2);
      if (iVar2 == 0) {
        ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0xc));
        *param_1 = *param_1 & 0xfffffffd | 0x40000;
        ossl_crypto_condvar_signal(*(undefined8 *)(param_1 + 0xe));
        ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0xc));
        return 0;
      }
      ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0xc));
      uVar1 = *param_1;
      goto LAB_00100127;
    }
    ossl_crypto_condvar_wait(*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_1 + 0xc));
    uVar1 = *param_1;
  } while( true );
}



undefined8 ossl_crypto_thread_native_clean(byte *param_1)

{
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0x30));
  if ((*param_1 & 5) != 0) {
    ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0x30));
    ossl_crypto_mutex_free(param_1 + 0x28);
    ossl_crypto_mutex_free(param_1 + 0x30);
    ossl_crypto_condvar_free(param_1 + 0x38);
    CRYPTO_free(*(void **)(param_1 + 0x20));
    CRYPTO_free(param_1);
    return 1;
  }
  ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0x30));
  return 0;
}



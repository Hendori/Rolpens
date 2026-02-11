
undefined8 ossl_crypto_thread_native_spawn(void *param_1)

{
  int iVar1;
  pthread_t *__newthread;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_attr_t pStack_68;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __newthread = (pthread_t *)CRYPTO_zalloc(8,"crypto/thread/arch/thread_posix.c",0x29);
  if (__newthread != (pthread_t *)0x0) {
    pthread_attr_init(&pStack_68);
    if (*(int *)((long)param_1 + 0x48) == 0) {
      pthread_attr_setdetachstate(&pStack_68,1);
    }
    iVar1 = pthread_create(__newthread,&pStack_68,thread_start_thunk,param_1);
    pthread_attr_destroy(&pStack_68);
    if (iVar1 == 0) {
      *(pthread_t **)((long)param_1 + 0x20) = __newthread;
      uVar2 = 1;
      goto LAB_00100085;
    }
  }
  *(undefined8 *)((long)param_1 + 0x20) = 0;
  CRYPTO_free(__newthread);
  uVar2 = 0;
LAB_00100085:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_crypto_thread_native_perform_join(long param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) && (*(pthread_t **)(param_1 + 0x20) != (pthread_t *)0x0)) {
    iVar1 = pthread_join(**(pthread_t **)(param_1 + 0x20),&local_18);
    if (iVar1 == 0) {
      bVar2 = local_18 == (void *)0x0;
      goto LAB_0010012a;
    }
  }
  bVar2 = false;
LAB_0010012a:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_crypto_thread_native_exit(void)

{
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}



bool ossl_crypto_thread_native_is_self(long param_1)

{
  pthread_t pVar1;
  
  pVar1 = pthread_self();
  return **(pthread_t **)(param_1 + 0x20) == pVar1;
}



pthread_mutex_t * ossl_crypto_mutex_new(void)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)CRYPTO_zalloc(0x28,"crypto/thread/arch/thread_posix.c",100);
  if (__mutex != (pthread_mutex_t *)0x0) {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      return __mutex;
    }
    CRYPTO_free(__mutex);
  }
  return (pthread_mutex_t *)0x0;
}



bool ossl_crypto_mutex_try_lock(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_trylock(param_1);
  return iVar1 != 0x10;
}



void ossl_crypto_mutex_lock(pthread_mutex_t *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_mutex_t *__mutex;
  
  iVar1 = pthread_mutex_lock(param_1);
  if (iVar1 == 0) {
    return;
  }
  pcVar2 = "assertion failed: rc == 0";
  OPENSSL_die("assertion failed: rc == 0","crypto/thread/arch/thread_posix.c",0x80);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)pcVar2);
  if (iVar1 == 0) {
    return;
  }
  pcVar2 = "assertion failed: rc == 0";
  OPENSSL_die("assertion failed: rc == 0","crypto/thread/arch/thread_posix.c",0x8a);
  if (pcVar2 != (char *)0x0) {
    __mutex = *(pthread_mutex_t **)pcVar2;
    if (__mutex != (pthread_mutex_t *)0x0) {
      pthread_mutex_destroy(__mutex);
      __mutex = *(pthread_mutex_t **)pcVar2;
    }
    CRYPTO_free(__mutex);
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    return;
  }
  return;
}



void ossl_crypto_mutex_unlock(pthread_mutex_t *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_mutex_t *__mutex;
  
  iVar1 = pthread_mutex_unlock(param_1);
  if (iVar1 == 0) {
    return;
  }
  pcVar2 = "assertion failed: rc == 0";
  OPENSSL_die("assertion failed: rc == 0","crypto/thread/arch/thread_posix.c",0x8a);
  if (pcVar2 != (char *)0x0) {
    __mutex = *(pthread_mutex_t **)pcVar2;
    if (__mutex != (pthread_mutex_t *)0x0) {
      pthread_mutex_destroy(__mutex);
      __mutex = *(pthread_mutex_t **)pcVar2;
    }
    CRYPTO_free(__mutex);
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    return;
  }
  return;
}



void ossl_crypto_mutex_free(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  
  if (param_1 != (undefined8 *)0x0) {
    __mutex = (pthread_mutex_t *)*param_1;
    if (__mutex != (pthread_mutex_t *)0x0) {
      pthread_mutex_destroy(__mutex);
      __mutex = (pthread_mutex_t *)*param_1;
    }
    CRYPTO_free(__mutex);
    *param_1 = 0;
    return;
  }
  return;
}



pthread_cond_t * ossl_crypto_condvar_new(void)

{
  int iVar1;
  pthread_cond_t *__cond;
  
  __cond = (pthread_cond_t *)CRYPTO_zalloc(0x30,"crypto/thread/arch/thread_posix.c",0x9f);
  if (__cond != (pthread_cond_t *)0x0) {
    iVar1 = pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
    if (iVar1 == 0) {
      return __cond;
    }
    CRYPTO_free(__cond);
  }
  return (pthread_cond_t *)0x0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ossl_crypto_condvar_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_cond_wait(__cond,__mutex);
  return iVar1;
}



void ossl_crypto_condvar_wait_timeout
               (pthread_cond_t *param_1,pthread_mutex_t *param_2,ulong param_3)

{
  long in_FS_OFFSET;
  timespec local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0xffffffffffffffff) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_cond_wait(param_1,param_2);
      return;
    }
  }
  else {
    local_28.tv_sec = param_3 / 1000000000;
    local_28.tv_nsec = param_3 % 1000000000;
    pthread_cond_timedwait(param_1,param_2,&local_28);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ossl_crypto_condvar_broadcast(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = pthread_cond_broadcast(__cond);
  return iVar1;
}



undefined8 thread_start_thunk(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 2));
  ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0xc));
  *param_1 = *param_1 | 1;
  param_1[6] = uVar1;
  ossl_crypto_condvar_broadcast(*(pthread_cond_t **)(param_1 + 0xe));
  ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0xc));
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ossl_crypto_condvar_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = pthread_cond_signal(__cond);
  return iVar1;
}



void ossl_crypto_condvar_free(undefined8 *param_1)

{
  pthread_cond_t *__cond;
  
  if (param_1 != (undefined8 *)0x0) {
    __cond = (pthread_cond_t *)*param_1;
    if (__cond != (pthread_cond_t *)0x0) {
      pthread_cond_destroy(__cond);
      __cond = (pthread_cond_t *)*param_1;
    }
    CRYPTO_free(__cond);
    *param_1 = 0;
    return;
  }
  return;
}



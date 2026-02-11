
void ossl_rcu_write_lock(long param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x30));
  return;
}



void ossl_rcu_write_unlock(long param_1)

{
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x30));
  return;
}



void ossl_synchronize_rcu(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  undefined8 *puVar1;
  int iVar2;
  undefined8 *ptr;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  pthread_cond_t *local_48;
  
  __mutex = (pthread_mutex_t *)(param_1 + 0xb);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 6));
  ptr = (undefined8 *)*param_1;
  *param_1 = 0;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 6));
  pthread_mutex_lock(__mutex);
  uVar5 = *(uint *)((long)param_1 + 0x1c);
  iVar4 = *(int *)((long)param_1 + 0x2c);
  if (uVar5 - iVar4 < 2) {
    do {
      pthread_cond_wait((pthread_cond_t *)(param_1 + 0x10),__mutex);
      uVar5 = *(uint *)((long)param_1 + 0x1c);
      iVar4 = *(int *)((long)param_1 + 0x2c);
    } while (uVar5 - iVar4 < 2);
  }
  local_48 = (pthread_cond_t *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 3);
  *(int *)((long)param_1 + 0x2c) = iVar4 + 1;
  lVar6 = (ulong)*(uint *)(param_1 + 5) * 8;
  uVar5 = (*(uint *)(param_1 + 5) + 1) % uVar5;
  *(int *)(param_1 + 3) = iVar2 + 1;
  *(uint *)(param_1 + 5) = uVar5;
  *(uint *)(param_1 + 4) = uVar5;
  LOCK();
  puVar1 = (undefined8 *)(param_1[2] + lVar6);
  *puVar1 = *puVar1;
  UNLOCK();
  pthread_cond_signal(local_48);
  __mutex_00 = (pthread_mutex_t *)(param_1 + 0x16);
  pthread_mutex_unlock(__mutex);
  lVar3 = param_1[2];
  pthread_mutex_lock(__mutex_00);
  iVar4 = *(int *)((long)param_1 + 0x24);
  while (iVar2 != iVar4) {
    pthread_cond_wait((pthread_cond_t *)(param_1 + 0x1b),__mutex_00);
    iVar4 = *(int *)((long)param_1 + 0x24);
  }
  do {
  } while (*(long *)(lVar6 + lVar3) != 0);
  *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
  pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x1b));
  pthread_mutex_unlock(__mutex_00);
  pthread_mutex_lock(__mutex);
  *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + -1;
  pthread_cond_signal(local_48);
  pthread_mutex_unlock(__mutex);
  while (ptr != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)ptr[2];
    (*(code *)*ptr)(ptr[1]);
    CRYPTO_free(ptr);
    ptr = puVar1;
  }
  return;
}



bool ossl_rcu_call(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x18,"crypto/threads_pthread.c",0x1fa);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_2;
    lVar1 = *param_1;
    *param_1 = (long)puVar2;
    puVar2[1] = param_3;
    puVar2[2] = lVar1;
  }
  return puVar2 != (undefined8 *)0x0;
}



undefined8 ossl_rcu_uptr_deref(undefined8 *param_1)

{
  return *param_1;
}



void ossl_rcu_assign_uptr(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



void * ossl_rcu_lock_new(int param_1,undefined8 param_2)

{
  long lVar1;
  void *ptr;
  
  if (param_1 < 2) {
    param_1 = 2;
  }
  lVar1 = ossl_lib_ctx_get_concrete(param_2);
  if ((lVar1 != 0) &&
     (ptr = (void *)CRYPTO_zalloc(0x108,"crypto/threads_pthread.c",0x220), ptr != (void *)0x0)) {
    *(long *)((long)ptr + 8) = lVar1;
    pthread_mutex_init((pthread_mutex_t *)((long)ptr + 0x30),(pthread_mutexattr_t *)0x0);
    pthread_mutex_init((pthread_mutex_t *)((long)ptr + 0xb0),(pthread_mutexattr_t *)0x0);
    pthread_mutex_init((pthread_mutex_t *)((long)ptr + 0x58),(pthread_mutexattr_t *)0x0);
    pthread_cond_init((pthread_cond_t *)((long)ptr + 0xd8),(pthread_condattr_t *)0x0);
    pthread_cond_init((pthread_cond_t *)((long)ptr + 0x80),(pthread_condattr_t *)0x0);
    lVar1 = CRYPTO_zalloc((long)param_1 << 3,"crypto/threads_pthread.c",0x1b2);
    *(int *)((long)ptr + 0x1c) = param_1;
    *(long *)((long)ptr + 0x10) = lVar1;
    if (lVar1 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



void ossl_rcu_lock_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    ossl_synchronize_rcu();
    CRYPTO_free(*(void **)((long)param_1 + 0x10));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



pthread_rwlock_t * CRYPTO_THREAD_lock_new(void)

{
  int iVar1;
  pthread_rwlock_t *__rwlock;
  
  __rwlock = (pthread_rwlock_t *)CRYPTO_zalloc(0x38,"crypto/threads_pthread.c",0x248);
  if (__rwlock != (pthread_rwlock_t *)0x0) {
    iVar1 = pthread_rwlock_init(__rwlock,(pthread_rwlockattr_t *)0x0);
    if (iVar1 == 0) {
      return __rwlock;
    }
    CRYPTO_free(__rwlock);
  }
  return (pthread_rwlock_t *)0x0;
}



bool CRYPTO_THREAD_read_lock(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_rdlock(param_1);
  return iVar1 == 0;
}



bool CRYPTO_THREAD_write_lock(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_wrlock(param_1);
  return iVar1 == 0;
}



bool CRYPTO_THREAD_unlock(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_unlock(param_1);
  return iVar1 == 0;
}



void CRYPTO_THREAD_lock_free(pthread_rwlock_t *param_1)

{
  if (param_1 != (pthread_rwlock_t *)0x0) {
    pthread_rwlock_destroy(param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



bool CRYPTO_THREAD_run_once(pthread_once_t *param_1,__init_routine *param_2)

{
  int iVar1;
  
  iVar1 = pthread_once(param_1,param_2);
  return iVar1 == 0;
}



bool CRYPTO_THREAD_init_local(pthread_key_t *param_1,__destr_function *param_2)

{
  int iVar1;
  
  iVar1 = pthread_key_create(param_1,param_2);
  return iVar1 == 0;
}



void CRYPTO_THREAD_get_local(pthread_key_t *param_1)

{
  pthread_getspecific(*param_1);
  return;
}



long * ossl_rcu_read_unlock(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  char *__pointer;
  char *pcVar7;
  
  uVar3 = ossl_lib_ctx_get_rcukey(*(undefined8 *)(param_1 + 8));
  plVar4 = (long *)CRYPTO_THREAD_get_local(uVar3);
  iVar6 = 0;
  plVar5 = plVar4 + 2;
  while (*plVar5 != param_1) {
    iVar6 = iVar6 + 1;
    plVar5 = plVar5 + 3;
    if (iVar6 == 10) {
      return plVar4;
    }
  }
  plVar1 = plVar4 + (long)iVar6 * 3;
  plVar5 = plVar1 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  if ((int)*plVar5 != 0) {
    return plVar4;
  }
  plVar5 = (long *)*plVar1;
  LOCK();
  lVar2 = *plVar5;
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    __pointer = "crypto/threads_pthread.c";
    pcVar7 = "assertion failed: ret != UINT64_MAX";
    OPENSSL_die("assertion failed: ret != UINT64_MAX","crypto/threads_pthread.c",0x169);
    iVar6 = pthread_setspecific(*(pthread_key_t *)pcVar7,__pointer);
    return (long *)(ulong)(iVar6 == 0);
  }
  *plVar1 = 0;
  plVar1[2] = 0;
  return plVar5;
}



bool CRYPTO_THREAD_set_local(pthread_key_t *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = pthread_setspecific(*param_1,param_2);
  return iVar1 == 0;
}



void ossl_rcu_read_lock(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  void *ptr;
  int iVar6;
  int iVar7;
  
  uVar2 = ossl_lib_ctx_get_rcukey(*(undefined8 *)(param_1 + 8));
  plVar3 = (long *)CRYPTO_THREAD_get_local(uVar2);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)CRYPTO_zalloc(0xf0,"crypto/threads_pthread.c",0x13b);
    if (plVar3 == (long *)0x0) {
      OPENSSL_die("assertion failed: data != NULL","crypto/threads_pthread.c",0x13c);
      uVar2 = ossl_lib_ctx_get_rcukey();
      ptr = (void *)CRYPTO_THREAD_get_local(uVar2);
      CRYPTO_free(ptr);
      CRYPTO_THREAD_set_local(uVar2,0);
      return;
    }
    CRYPTO_THREAD_set_local(uVar2,plVar3);
    ossl_init_thread_start(0,*(undefined8 *)(param_1 + 8),ossl_rcu_free_local_data);
  }
  iVar7 = -1;
  iVar6 = 0;
  plVar4 = plVar3;
  while( true ) {
    if ((*plVar4 == 0) && (iVar7 == -1)) {
      iVar7 = iVar6;
    }
    if (plVar4[2] == param_1) break;
    iVar6 = iVar6 + 1;
    plVar4 = plVar4 + 3;
    if (iVar6 == 10) {
      while( true ) {
        uVar1 = *(uint *)(param_1 + 0x20);
        uVar5 = (ulong)uVar1;
        LOCK();
        plVar4 = (long *)(*(long *)(param_1 + 0x10) + uVar5 * 8);
        *plVar4 = *plVar4 + 1;
        UNLOCK();
        if (uVar1 == *(uint *)(param_1 + 0x20)) break;
        LOCK();
        plVar4 = (long *)(*(long *)(param_1 + 0x10) + uVar5 * 8);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
      }
      plVar3 = plVar3 + (long)iVar7 * 3;
      *plVar3 = uVar5 * 8 + *(long *)(param_1 + 0x10);
      *(undefined4 *)(plVar3 + 1) = 1;
      plVar3[2] = param_1;
      return;
    }
  }
  *(int *)(plVar3 + (long)iVar6 * 3 + 1) = (int)plVar3[(long)iVar6 * 3 + 1] + 1;
  return;
}



void ossl_rcu_free_local_data(void)

{
  undefined8 uVar1;
  void *ptr;
  
  uVar1 = ossl_lib_ctx_get_rcukey();
  ptr = (void *)CRYPTO_THREAD_get_local(uVar1);
  CRYPTO_free(ptr);
  CRYPTO_THREAD_set_local(uVar1,0);
  return;
}



bool CRYPTO_THREAD_cleanup_local(pthread_key_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_key_delete(*param_1);
  return iVar1 == 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t CRYPTO_THREAD_get_current_id(void)

{
  pthread_t pVar1;
  
  pVar1 = pthread_self();
  return pVar1;
}



bool CRYPTO_THREAD_compare_id(long param_1,long param_2)

{
  return param_1 == param_2;
}



undefined8 CRYPTO_atomic_add(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  *param_3 = iVar1 + param_2;
  return 1;
}



undefined8 CRYPTO_atomic_add64(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  
  LOCK();
  lVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  *param_3 = lVar1 + param_2;
  return 1;
}



undefined8 CRYPTO_atomic_and(ulong *param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  do {
    uVar3 = uVar1 & param_2;
    LOCK();
    uVar2 = *param_1;
    bVar4 = uVar1 == uVar2;
    if (bVar4) {
      *param_1 = uVar3;
      uVar2 = uVar1;
    }
    UNLOCK();
    uVar1 = uVar2;
  } while (!bVar4);
  *param_3 = uVar3;
  return 1;
}



undefined8 CRYPTO_atomic_or(ulong *param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  do {
    uVar3 = uVar1 | param_2;
    LOCK();
    uVar2 = *param_1;
    bVar4 = uVar1 == uVar2;
    if (bVar4) {
      *param_1 = uVar3;
      uVar2 = uVar1;
    }
    UNLOCK();
    uVar1 = uVar2;
  } while (!bVar4);
  *param_3 = uVar3;
  return 1;
}



undefined8 CRYPTO_atomic_load(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return 1;
}



undefined8 CRYPTO_atomic_store(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return 1;
}



undefined8 CRYPTO_atomic_load_int(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return 1;
}



undefined8 openssl_init_fork_handlers(void)

{
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t openssl_get_fork_id(void)

{
  __pid_t _Var1;
  
  _Var1 = getpid();
  return _Var1;
}



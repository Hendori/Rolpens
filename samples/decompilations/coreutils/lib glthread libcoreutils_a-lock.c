
/* WARNING: Unknown calling convention */

int glthread_rwlock_init_for_glibc(pthread_rwlock_t *lock)

{
  int iVar1;
  long in_FS_OFFSET;
  pthread_rwlockattr_t attributes;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_rwlockattr_init((pthread_rwlockattr_t *)&attributes);
  if (iVar1 == 0) {
    iVar1 = pthread_rwlockattr_setkind_np((pthread_rwlockattr_t *)&attributes,2);
    if (iVar1 == 0) {
      iVar1 = pthread_rwlock_init((pthread_rwlock_t *)lock,(pthread_rwlockattr_t *)&attributes);
    }
    pthread_rwlockattr_destroy((pthread_rwlockattr_t *)&attributes);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int glthread_recursive_lock_init_multithreaded(gl_recursive_lock_t *lock)

{
  int iVar1;
  long in_FS_OFFSET;
  pthread_mutexattr_t attributes;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_mutexattr_init((pthread_mutexattr_t *)&attributes);
  if (iVar1 == 0) {
    iVar1 = pthread_mutexattr_settype((pthread_mutexattr_t *)&attributes,1);
    if (iVar1 == 0) {
      iVar1 = pthread_mutex_init((pthread_mutex_t *)lock,(pthread_mutexattr_t *)&attributes);
      if (iVar1 == 0) {
        iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&attributes);
      }
      else {
        pthread_mutexattr_destroy((pthread_mutexattr_t *)&attributes);
      }
    }
    else {
      pthread_mutexattr_destroy((pthread_mutexattr_t *)&attributes);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



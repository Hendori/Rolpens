
int glthread_rwlock_init_for_glibc(pthread_rwlock_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  pthread_rwlockattr_t pStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_rwlockattr_init(&pStack_28);
  if (iVar1 == 0) {
    iVar1 = pthread_rwlockattr_setkind_np(&pStack_28,2);
    if (iVar1 == 0) {
      iVar1 = pthread_rwlock_init(param_1,&pStack_28);
    }
    pthread_rwlockattr_destroy(&pStack_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int glthread_recursive_lock_init_multithreaded(pthread_mutex_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  pthread_mutexattr_t local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_mutexattr_init(&local_24);
  if (iVar1 == 0) {
    iVar1 = pthread_mutexattr_settype(&local_24,1);
    if (iVar1 == 0) {
      iVar1 = pthread_mutex_init(param_1,&local_24);
      if (iVar1 == 0) {
        iVar1 = pthread_mutexattr_destroy(&local_24);
      }
      else {
        pthread_mutexattr_destroy(&local_24);
      }
    }
    else {
      pthread_mutexattr_destroy(&local_24);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



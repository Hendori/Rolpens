
int rpl_pthread_rwlockattr_init(pthread_rwlockattr_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlockattr_init(param_1);
  if (iVar1 == 0) {
    iVar1 = pthread_rwlockattr_setkind_np(param_1,2);
    if (iVar1 != 0) {
      pthread_rwlockattr_destroy(param_1);
    }
  }
  return iVar1;
}



int rpl_pthread_rwlock_init(pthread_rwlock_t *param_1,pthread_rwlockattr_t *param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  pthread_rwlockattr_t pStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (pthread_rwlockattr_t *)0x0) {
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
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    iVar1 = pthread_rwlock_init(param_1,param_2);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



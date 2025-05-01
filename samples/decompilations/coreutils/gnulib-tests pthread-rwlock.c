
/* WARNING: Unknown calling convention */

int rpl_pthread_rwlockattr_init(pthread_rwlockattr_t *attr)

{
  int iVar1;
  
  iVar1 = pthread_rwlockattr_init((pthread_rwlockattr_t *)attr);
  if (iVar1 == 0) {
    iVar1 = pthread_rwlockattr_setkind_np((pthread_rwlockattr_t *)attr,2);
    if (iVar1 != 0) {
      pthread_rwlockattr_destroy((pthread_rwlockattr_t *)attr);
    }
  }
  return iVar1;
}



/* WARNING: Unknown calling convention */

int rpl_pthread_rwlock_init(pthread_rwlock_t *lock,pthread_rwlockattr_t *attr)

{
  int iVar1;
  long in_FS_OFFSET;
  pthread_rwlockattr_t replacement_attr;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (attr == (pthread_rwlockattr_t *)0x0) {
    iVar1 = pthread_rwlockattr_init((pthread_rwlockattr_t *)&replacement_attr);
    if (iVar1 == 0) {
      iVar1 = pthread_rwlockattr_setkind_np((pthread_rwlockattr_t *)&replacement_attr,2);
      if (iVar1 == 0) {
        iVar1 = pthread_rwlock_init((pthread_rwlock_t *)lock,
                                    (pthread_rwlockattr_t *)&replacement_attr);
      }
      pthread_rwlockattr_destroy((pthread_rwlockattr_t *)&replacement_attr);
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar1;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    iVar1 = pthread_rwlock_init((pthread_rwlock_t *)lock,(pthread_rwlockattr_t *)attr);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



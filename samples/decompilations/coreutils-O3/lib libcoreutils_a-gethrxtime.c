
long gethrxtime(void)

{
  int iVar1;
  long in_FS_OFFSET;
  timespec local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = clock_gettime(1,&local_28);
  if (iVar1 != 0) {
    gettime(&local_28);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_28.tv_sec * 1000000000 + local_28.tv_nsec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



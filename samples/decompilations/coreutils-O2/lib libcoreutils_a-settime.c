
int settime(timespec *param_1)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  timeval local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = clock_settime(0,param_1);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if (*piVar2 != 1) {
      local_38.tv_sec = param_1->tv_sec;
      local_38.tv_usec = param_1->tv_nsec / 1000;
      iVar1 = settimeofday(&local_38,(timezone *)0x0);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



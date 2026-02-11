
int rpl_nanosleep(long *param_1,timespec *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long in_FS_OFFSET;
  timespec local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)param_1[1] < 1000000000) {
    local_38.tv_nsec = param_1[1];
    lVar3 = *param_1;
    while (0x1fa400 < lVar3) {
      local_38.tv_sec = 0x1fa400;
      lVar3 = lVar3 + -0x1fa400;
      iVar1 = nanosleep(&local_38,param_2);
      if (iVar1 != 0) {
        if (param_2 != (timespec *)0x0) {
          param_2->tv_sec = param_2->tv_sec + lVar3;
        }
        goto LAB_0010009f;
      }
      local_38.tv_nsec = 0;
    }
    local_38.tv_sec = lVar3;
    iVar1 = nanosleep(&local_38,param_2);
  }
  else {
    piVar2 = __errno_location();
    *piVar2 = 0x16;
    iVar1 = -1;
  }
LAB_0010009f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



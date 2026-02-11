
void gettime(timespec *param_1)

{
  clock_gettime(0,param_1);
  return;
}



__time_t current_timespec(void)

{
  long in_FS_OFFSET;
  timespec local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  clock_gettime(0,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_28.tv_sec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



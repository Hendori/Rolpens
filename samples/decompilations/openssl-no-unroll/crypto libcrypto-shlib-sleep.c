
void OSSL_sleep(ulong param_1)

{
  long in_FS_OFFSET;
  timespec local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28.tv_sec = param_1 / 1000;
  local_28.tv_nsec = (param_1 % 1000) * 1000000;
  nanosleep(&local_28,(timespec *)0x0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



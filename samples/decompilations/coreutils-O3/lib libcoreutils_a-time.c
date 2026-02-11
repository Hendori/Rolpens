
void rpl_time(__time_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1 != (__time_t *)0x0) {
    *param_1 = local_28.tv_sec;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rpl_time_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Unknown calling convention */

time_t rpl_time(time_t *tp)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  timeval tv;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = gettimeofday((timeval *)&tv,(__timezone_ptr_t)0x0);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (tp != (time_t *)0x0) {
    *tp = tv.tv_sec;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return tv.tv_sec;
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



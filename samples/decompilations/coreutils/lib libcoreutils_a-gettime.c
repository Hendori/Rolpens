
/* WARNING: Unknown calling convention */

void gettime(timespec *ts)

{
  clock_gettime(0,(timespec *)ts);
  return;
}



/* WARNING: Unknown calling convention */

timespec current_timespec(void)

{
  long lVar1;
  timespec tVar2;
  long in_FS_OFFSET;
  timespec ts;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  clock_gettime(0,(timespec *)&ts);
  tVar2.tv_nsec = ts.tv_nsec;
  tVar2.tv_sec = ts.tv_sec;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return tVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



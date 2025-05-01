
/* WARNING: Unknown calling convention */

xtime_t gethrxtime(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  timespec ts;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = clock_gettime(1,(timespec *)&ts);
  if (iVar2 != 0) {
    gettime(&ts);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ts.tv_sec * 1000000000 + ts.tv_nsec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


